//now make the source file
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include "TChain.h"
#include "TChainElement.h"
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "Math/LorentzVector.h"
#include "TMath.h"
#include "TStopwatch.h"
#include <algorithm>
#include <set>
#include "TCanvas.h"
#include "TRegexp.h"

using namespace std;

#ifndef __CINT__
#include "CMS2_Class_caloIso.h"
CMS2 cms2;
#include "../Tools/selections.C"
#endif

static double evt_scale1fb;

static int hypos_total_n[4];
static double hypos_total_weight[4];
// static double evt_scale1fb;

enum Sample {WW, WZ, ZZ, Wjets, DYee, DYmm, DYtt, ttbar, tW}; // signal samples
enum Hypothesis {MM, EM, EE, ALL}; // hypothesis types (em and me counted as same) and all

// this is Jake's magic to sort jets by Pt
Bool_t comparePt(ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > lv1, 
                 ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > lv2) {
   return lv1.pt() > lv2.pt();
}

// save histograms to outfile
void saveHist(const char* filename, const char* pat="*")
{
   TList* list = gDirectory->GetList() ;
   TIterator* iter = list->MakeIterator();

   //TRegexp re(pat,kTRUE) ;

   TRegexp re(pat, 1) ;

   TFile outf(filename,"RECREATE") ;
   while(TObject *obj=iter->Next()) {
      if (TString(obj->GetName()).Index(re)>=0) {
         obj->Write() ;
         cout << "." ;
         cout.flush() ;
      }
   }
   cout << endl ;
   outf.Close() ;

   delete iter ;
}

struct DorkyEventIdentifier {
     // this is a workaround for not having unique event id's in MC
     unsigned long int run, event;
     float trks_d0;
     float hyp_lt_pt, hyp_lt_eta, hyp_lt_phi;
     bool operator < (const DorkyEventIdentifier &) const;
     bool operator == (const DorkyEventIdentifier &) const;
};

bool DorkyEventIdentifier::operator < (const DorkyEventIdentifier &other) const
{
     if (run != other.run)
	  return run < other.run;
     if (event != other.event)
	  return event < other.event;
     // the floating point numbers are not easy, because we're
     // comapring ones that are truncated (because they were written
     // to file and read back in) with ones that are not truncated.
     if (fabs(trks_d0 - other.trks_d0) > 1e-6 * trks_d0)
	  return trks_d0 < other.trks_d0;
     if (fabs(hyp_lt_pt - other.hyp_lt_pt) > 1e-6 * hyp_lt_pt)
	  return hyp_lt_pt < other.hyp_lt_pt;
     if (fabs(hyp_lt_eta - other.hyp_lt_eta) > 1e-6 * hyp_lt_eta)
	  return hyp_lt_eta < other.hyp_lt_eta;
     if (fabs(hyp_lt_phi - other.hyp_lt_phi) > 1e-6 * hyp_lt_phi)
	  return hyp_lt_phi < other.hyp_lt_phi;
     // if the records are exactly the same, then r1 is not less than
     // r2.  Duh!
     return false;
}

bool DorkyEventIdentifier::operator == (const DorkyEventIdentifier &other) const
{
     if (run != other.run)
	  return false;
     if (event != other.event)
	  return false;
     // the floating point numbers are not easy, because we're
     // comapring ones that are truncated (because they were written
     // to file and read back in) with ones that are not truncated.
     if (fabs(trks_d0 - other.trks_d0) > 1e-6 * trks_d0)
	  return false;
     if (fabs(hyp_lt_pt - other.hyp_lt_pt) > 1e-6 * hyp_lt_pt)
	  return false;
     if (fabs(hyp_lt_eta - other.hyp_lt_eta) > 1e-6 * hyp_lt_eta)
	  return false;
     if (fabs(hyp_lt_phi - other.hyp_lt_phi) > 1e-6 * hyp_lt_phi)
	  return false;
     return true;
}

static std::set<DorkyEventIdentifier> already_seen;
bool is_duplicate (const DorkyEventIdentifier &id)
{
     std::pair<std::set<DorkyEventIdentifier>::const_iterator, bool> ret = 
	  already_seen.insert(id);
     return !ret.second;
}

// filter events by process
bool filterByProcess( enum Sample sample ) {
  switch (sample) {
  case WW: case WZ: case ZZ: 
    return true;
  case Wjets:
    return cms2.evt_CSA07Process() < 11;
  case DYee: 
    return (cms2.evt_CSA07Process() > 10 && cms2.evt_CSA07Process() < 22 && isDYee() );
  case DYmm:
    return (cms2.evt_CSA07Process() > 10 && cms2.evt_CSA07Process() < 22 && isDYmm() );
  case DYtt:
    return (cms2.evt_CSA07Process() > 10 && cms2.evt_CSA07Process() < 22 && isDYtt() );
  case ttbar:
    return (cms2.evt_CSA07Process() > 21 && cms2.evt_CSA07Process() < 27);
  }
}

// filter candidates by hypothesis
Hypothesis filterByHypothesis( int candidate ) {
  switch (candidate) {
  case 0:
    return MM;
  case 1: case 2:
    return EM;
  case 3:
    return EE;
  }
}

//  Book histograms...
//  Naming Convention:
//  Prefix comes from the sample and it is passed to the scanning function
//  Suffix is "ee" "em" "em" "all" which depends on the final state
//  For example: histogram named tt_hnJet_ee would be the Njet distribution
//  for the ee final state in the ttbar sample.

// MAKE SURE TO CAL SUMW2 FOR EACH 1D HISTOGRAM BEFORE FILLING!!!!!!

TH1F* hnJet[4];       // Njet distributions
TH1F* helePt[4];      // electron Pt
TH1F* hmuPt[4];       // muon Pt
TH1F* hmuPtFromSilicon[4];    // muon Pt (from tracker)
TH1F* hminLepPt[4];   // minimum lepton Pt
TH1F* hmaxLepPt[4];   // maximum lepton Pt
TH1F* helePhi[4];     // electron phi
TH1F* hmuPhi[4];      // muon phi
TH1F* hdphiLep[4];    // delta phi between leptons
TH1F* heleEta[4];     // electron eta
TH1F* hmuEta[4];      // muon eta
TH1F* hdilMass[4];    // dilepton mass
TH1F* hdilMassTightWindow[4]; // dilepton mass, but zooming around Z
TH1F* hdilPt[4];       // dilepton Pt
TH1F* hmet[4];       // MET
TH1F* hmetPhi[4];       // MET phi
TH2F* hmetVsDilepPt[4];  // MET vs dilepton Pt

TH2F* hmetOverPtVsDphi[4]; // MET/Lepton Pt vs DeltaPhi between MET and Lepton Pt
TH2F* hdphillvsmll[4]; // delta phi between leptons vs dilepton mass
TH1F* hptJet1[4];   // Pt of 1st jet
TH1F* hptJet2[4];   // Pt of 2nd jet
TH1F* hptJet3[4];   // Pt of 3rd jet
TH1F* hptJet4[4];   // Pt of 4th jet
TH1F* hetaJet1[4];   // eta of 1st jet
TH1F* hetaJet2[4];   // eta of 2nd jet
TH1F* hetaJet3[4];   // eta of 3rd jet
TH1F* hetaJet4[4];   // eta of 4th jet
TH1F* numTightLep[4]; // number of tight leptons per event.
TH1F* heleSumPt[4];   // sumPt for electron isolation
TH1F* hmuSumPt[4];   // sumPt for muon isolation
TH1F* hmuSumIso[4];  // sum of trk pt, em et, had et in cone of 0.3  
TH1F* heleRelIso[4]; //  Iso variable defined as pt/(pt+sum) for electron
TH1F* hmuRelIso[4]; //  Iso variable defined as pt/(pt+sum) for muons
TH1F *hRelIso[4]; // Iso variable defined as pt/(pt+sum) for both lepton types
TH1F *hcaloIso[4]; // Iso variable defined as pt/(pt+sum) for both lepton types
TH1F *hRelIso_withCalo[4]; // Iso variable defined as pt/(pt+sum) for both lepton types

// Unfortunately, our ntuple has no info for electron isolation other than candidate electrons.
// When counting electrons, we thus can not apply an isolation criteria at this point !!!
// For muons we only count good isolated muons.
TH1F* hnJetLepVeto[4]; //njet distribution after requiring numTightLep < 3.

void hypo (int i_hyp, double kFactor) 
{
     // Cut on lepton Pt
     if (cms2.hyp_lt_p4()[i_hyp].pt() < 20.0) return;
     if (cms2.hyp_ll_p4()[i_hyp].pt() < 20.0) return;
     
     // Require opposite sign
     if ( cms2.hyp_lt_id()[i_hyp] * cms2.hyp_ll_id()[i_hyp] > 0 ) return;
//      if ( cms2.hyp_lt_id()[i_hyp] != -11) return;
     
     // Z mass veto using hyp_leptons for ee and mumu final states
     if (cms2.hyp_type()[i_hyp] == 0 || cms2.hyp_type()[i_hyp] == 3) {
	  if (inZmassWindow(cms2.hyp_p4()[i_hyp].mass())) return;
     }
     
     // special handling for DY --- moved to event loop
#if 0
     bool processEvent=true;
     if (specDY == 0) {
	  if ( !isDYee() ) processEvent = false;
     } else if (specDY == 1) {
	  if ( !isDYmm() ) processEvent = false;
     } else if (specDY == 2) {
	  if ( !isDYtt() ) processEvent = false;
     }
     if (!processEvent) return;
#endif
     
     // Dima's MET requirement
     if (!pass2Met(i_hyp)) return;
     
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13 && !goodMuonWithoutIsolation(cms2.hyp_lt_index()[i_hyp]) ) return;
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13 && !goodMuonWithoutIsolation(cms2.hyp_ll_index()[i_hyp]) ) return;
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11 && !goodElectronWithoutIsolation(cms2.hyp_lt_index()[i_hyp]) ) return;
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11 && !goodElectronWithoutIsolation(cms2.hyp_ll_index()[i_hyp]) ) return;

     // Muon quality cuts, including isolation
     int isolated_leptons = 0;
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13 && goodMuonIsolated(cms2.hyp_lt_index()[i_hyp]) ) 
	  ++isolated_leptons;
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13 && goodMuonIsolated(cms2.hyp_ll_index()[i_hyp]) ) 
	  ++isolated_leptons;
     
     // Electron quality cuts, including isolation
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11 && goodElectronIsolated(cms2.hyp_lt_index()[i_hyp]) ) 
	  ++isolated_leptons;
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11 && goodElectronIsolated(cms2.hyp_ll_index()[i_hyp]) ) 
	  ++isolated_leptons;
     if (isolated_leptons < 1)
	  return;

     if (cms2.hyp_njets()[i_hyp] != 0)
	  return;
     // Muon quality cuts, excluding isolation
     // if (abs(cms2.hyp_lt_id()[i_hyp]) == 13 && !goodMuonWithoutIsolation(cms2.hyp_lt_index()[i_hyp]) ) return;
     // if (abs(cms2.hyp_ll_id()[i_hyp]) == 13 && !goodMuonWithoutIsolation(cms2.hyp_ll_index()[i_hyp]) ) return;
     
     // Electron quality cuts, excluding isolation
     //  if (abs(cms2.hyp_lt_id()[i_hyp]) == 11 && !goodElectronWithoutIsolation(cms2.hyp_lt_index()[i_hyp]) ) return;
     //  if (abs(cms2.hyp_ll_id()[i_hyp]) == 11 && !goodElectronWithoutIsolation(cms2.hyp_ll_index()[i_hyp]) ) return;

     // Z veto using additional leptons in the event
     if (additionalZveto()) return;

     //count the number of tight leptons:
     // This is an FKW variable which I turned off since I do not understand it 
     // and also uses simpleIdPlus, so it should be fixed up before being turned back on.
     //    int inumTightLep = numTightLeptons();
     int inumTightLep = 0;    

     // The event weight including the kFactor (scaled to 1 fb-1)
     float weight = evt_scale1fb * kFactor;

     // For top group political reasons, we rescale to 10 pb-1
     //  weight = weight/100.

     // If we made it to here, we passed all cuts and we are ready to fill
     int myType = 99;
     if (cms2.hyp_type()[i_hyp] == 3) myType = 0;  // ee
     if (cms2.hyp_type()[i_hyp] == 0) myType = 1;  // mm
     if (cms2.hyp_type()[i_hyp] == 1 || cms2.hyp_type()[i_hyp] == 2) myType=2; // em
     if (myType == 99) {
	  std::cout << "YUK:  unknown dilepton type = " << cms2.hyp_type()[i_hyp] << std::endl;
	  return;
     }
     
     hypos_total_n[myType]++;
     hypos_total_n[3]++;
     hypos_total_weight[myType] += weight;
     hypos_total_weight[3] += weight;

     // jet count
     hnJet[myType]->Fill(cms2.hyp_njets()[i_hyp], weight);
     hnJet[3]->Fill(cms2.hyp_njets()[i_hyp], weight);
     if( inumTightLep < 3) {
	  hnJetLepVeto[myType]->Fill(cms2.hyp_njets()[i_hyp], weight);
	  hnJetLepVeto[3]->Fill(cms2.hyp_njets()[i_hyp], weight);
     }
     numTightLep[myType]->Fill(inumTightLep,weight);
     numTightLep[3]->Fill(inumTightLep,weight);
    
     // lepton Pt
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) helePt[myType]->Fill(cms2.hyp_lt_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) helePt[myType]->Fill(cms2.hyp_ll_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuPt[myType]->Fill(cms2.hyp_lt_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuPt[myType]->Fill(cms2.hyp_ll_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuPtFromSilicon[myType]->Fill(cms2.mus_trk_p4().at(cms2.hyp_lt_index()[i_hyp]).pt(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuPtFromSilicon[myType]->Fill(cms2.mus_trk_p4().at(cms2.hyp_ll_index()[i_hyp]).pt(), weight);
     hminLepPt[myType]->Fill(min(cms2.hyp_ll_p4()[i_hyp].pt(), cms2.hyp_lt_p4()[i_hyp].pt()), weight);
     hmaxLepPt[myType]->Fill(max(cms2.hyp_ll_p4()[i_hyp].pt(), cms2.hyp_lt_p4()[i_hyp].pt()), weight );
    
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) helePt[3]->Fill(cms2.hyp_lt_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) helePt[3]->Fill(cms2.hyp_ll_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuPt[3]->Fill(cms2.hyp_lt_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuPt[3]->Fill(cms2.hyp_ll_p4()[i_hyp].pt(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuPtFromSilicon[3]->Fill(cms2.mus_trk_p4().at(cms2.hyp_lt_index()[i_hyp]).pt(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuPtFromSilicon[3]->Fill(cms2.mus_trk_p4().at(cms2.hyp_ll_index()[i_hyp]).pt(), weight);
     hminLepPt[3]->Fill(min(cms2.hyp_ll_p4()[i_hyp].pt(), cms2.hyp_lt_p4()[i_hyp].pt()), weight);
     hmaxLepPt[3]->Fill(max(cms2.hyp_ll_p4()[i_hyp].pt(), cms2.hyp_lt_p4()[i_hyp].pt()), weight );
    
     // lepton Phi
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) helePhi[myType]->Fill(cms2.hyp_lt_p4()[i_hyp].phi(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) helePhi[myType]->Fill(cms2.hyp_ll_p4()[i_hyp].phi(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuPhi[myType]->Fill(cms2.hyp_lt_p4()[i_hyp].phi(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuPhi[myType]->Fill(cms2.hyp_ll_p4()[i_hyp].phi(), weight);
    
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) helePhi[3]->Fill(cms2.hyp_lt_p4()[i_hyp].phi(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) helePhi[3]->Fill(cms2.hyp_ll_p4()[i_hyp].phi(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuPhi[3]->Fill(cms2.hyp_lt_p4()[i_hyp].phi(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuPhi[3]->Fill(cms2.hyp_ll_p4()[i_hyp].phi(), weight);
    
     // dilepton mass
     hdilMass[myType]->Fill(cms2.hyp_p4()[i_hyp].mass(), weight);
     hdilMassTightWindow[myType]->Fill(cms2.hyp_p4()[i_hyp].mass(), weight);
     hdilMass[3]->Fill(cms2.hyp_p4()[i_hyp].mass(), weight);
     hdilMassTightWindow[3]->Fill(cms2.hyp_p4()[i_hyp].mass(), weight);
    
     // delta phi btw leptons
     double dphi = fabs(cms2.hyp_lt_p4()[i_hyp].phi() - cms2.hyp_ll_p4()[i_hyp].phi());
     if (dphi > TMath::Pi()) dphi = TMath::TwoPi() - dphi;
     hdphiLep[myType]->Fill(dphi, weight);
     hdphiLep[3]->Fill(dphi, weight);
    
     // dphill vs mll, i.e. the 2d correlation between the previous two variables
     hdphillvsmll[myType]->Fill(cms2.hyp_p4()[i_hyp].mass(), dphi, weight);
     hdphillvsmll[3]->Fill(cms2.hyp_p4()[i_hyp].mass(), dphi, weight);
    
     // lepton Eta
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) heleEta[myType]->Fill(cms2.hyp_lt_p4()[i_hyp].eta(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) heleEta[myType]->Fill(cms2.hyp_ll_p4()[i_hyp].eta(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuEta[myType]->Fill(cms2.hyp_lt_p4()[i_hyp].eta(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuEta[myType]->Fill(cms2.hyp_ll_p4()[i_hyp].eta(), weight);
    
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) heleEta[3]->Fill(cms2.hyp_lt_p4()[i_hyp].eta(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) heleEta[3]->Fill(cms2.hyp_ll_p4()[i_hyp].eta(), weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuEta[3]->Fill(cms2.hyp_lt_p4()[i_hyp].eta(), weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuEta[3]->Fill(cms2.hyp_ll_p4()[i_hyp].eta(), weight);


     // electron trk isolation 
     double temp_lt_iso = cms2.hyp_lt_iso()[i_hyp];  // so that min works
     double temp_ll_iso = cms2.hyp_ll_iso()[i_hyp];  // so that min works
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) heleSumPt[myType]->Fill(min(temp_lt_iso,24.99),weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) heleSumPt[3]->Fill(min(temp_lt_iso,24.99),weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) heleSumPt[myType]->Fill(min(temp_ll_iso,24.99),weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) heleSumPt[3]->Fill(min(temp_ll_iso,24.99),weight);

     // muon trk isolation
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuSumPt[myType]->Fill(min(temp_lt_iso,24.99),weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuSumPt[3]->Fill(min(temp_lt_iso,24.99),weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuSumPt[myType]->Fill(min(temp_ll_iso,24.99),weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuSumPt[3]->Fill(min(temp_ll_iso,24.99),weight);

     // muon trk+calo isolation
     double combIso_lt = -1.;
     double combIso_ll = -1.;
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13)
	  combIso_lt = cms2.mus_iso03_sumPt().at(cms2.hyp_lt_index()[i_hyp])+cms2.mus_iso03_emEt().at(cms2.hyp_lt_index()[i_hyp])+cms2.mus_iso03_hadEt().at(cms2.hyp_lt_index()[i_hyp]);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13)
	  combIso_ll = cms2.mus_iso03_sumPt().at(cms2.hyp_ll_index()[i_hyp])+cms2.mus_iso03_emEt().at(cms2.hyp_ll_index()[i_hyp])+cms2.mus_iso03_hadEt().at(cms2.hyp_ll_index()[i_hyp]);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuSumIso[myType]->Fill(min(combIso_lt,24.99),weight);
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) hmuSumIso[3]->Fill(min(combIso_lt,24.99),weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuSumIso[myType]->Fill(min(combIso_ll,24.99),weight);
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) hmuSumIso[3]->Fill(min(combIso_ll,24.99),weight);
    

     // relative isolation... both flavors
     double rit = -1, ril = -1;

     // Relative isolation... muons
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 13) {
	  double thisSum =  cms2.mus_iso03_sumPt().at(cms2.hyp_lt_index()[i_hyp]) +  
	       cms2.mus_iso03_emEt().at(cms2.hyp_lt_index()[i_hyp])  +
	       cms2.mus_iso03_hadEt().at(cms2.hyp_lt_index()[i_hyp]);
	  double thisPt  = cms2.mus_p4().at(cms2.hyp_lt_index()[i_hyp]).pt();
	  double temp    = thisPt / (thisPt+thisSum);
	  rit = temp;
	  hmuRelIso[myType]->Fill(temp, weight);
	  hmuRelIso[3]->Fill(temp, weight);
     }
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 13) {
	  double thisSum =  cms2.mus_iso03_sumPt().at(cms2.hyp_ll_index()[i_hyp]) +  
	       cms2.mus_iso03_emEt().at(cms2.hyp_ll_index()[i_hyp])  +
	       cms2.mus_iso03_hadEt().at(cms2.hyp_ll_index()[i_hyp]);
	  double thisPt  = cms2.mus_p4().at(cms2.hyp_ll_index()[i_hyp]).pt();
	  double temp    = thisPt / (thisPt+thisSum);
	  ril = temp;
	  hmuRelIso[myType]->Fill(temp, weight);
	  hmuRelIso[3]->Fill(temp, weight);
     }


     // Relative isolation... electrons
     double erit = -1, eril = -1;
     if (abs(cms2.hyp_lt_id()[i_hyp]) == 11) {
	  double thisSum =  cms2.hyp_lt_iso()[i_hyp];
	  double thisPt  = cms2.hyp_lt_p4()[i_hyp].pt();
	  double temp    = thisPt / (thisPt+thisSum);
	  int idx = cms2.hyp_lt_index()[i_hyp];
	  double caloIso = cms2.els_ecalJuraIso()[idx] + 
	       cms2.els_hcalConeIso()[idx];
	  rit = temp;
	  erit = temp;
 	  heleRelIso[myType]->Fill(temp, weight);
 	  heleRelIso[3]->Fill(temp, weight);
	  hRelIso_withCalo[myType]->Fill(thisPt / (thisPt + thisSum + caloIso), weight);
	  hRelIso_withCalo[3]->Fill(thisPt / (thisPt + thisSum + caloIso), weight);
	  hcaloIso[myType]->Fill(caloIso, weight);
	  hcaloIso[3]->Fill(caloIso, weight);     
     }
     if (abs(cms2.hyp_ll_id()[i_hyp]) == 11) {
	  double thisSum =  cms2.hyp_ll_iso()[i_hyp];
	  double thisPt  = cms2.hyp_ll_p4()[i_hyp].pt();
	  double temp    = thisPt / (thisPt+thisSum);
	  int idx = cms2.hyp_ll_index()[i_hyp];
	  double caloIso = cms2.els_ecalJuraIso()[idx] + 
	       cms2.els_hcalConeIso()[idx];
	  ril = temp;
	  eril = temp;
 	  heleRelIso[myType]->Fill(temp, weight);
 	  heleRelIso[3]->Fill(temp, weight);
	  hRelIso_withCalo[myType]->Fill(thisPt / (thisPt + thisSum + caloIso), weight);
	  hRelIso_withCalo[3]->Fill(thisPt / (thisPt + thisSum + caloIso), weight);
	  hcaloIso[myType]->Fill(caloIso, weight);
	  hcaloIso[3]->Fill(caloIso, weight);     
     }
#if 0
     double worst_ele_iso = -1;
     if (erit == -1)
	  worst_ele_iso = eril;
     else if (eril == -1)
	  worst_ele_iso = erit;
     else worst_ele_iso = std::min(erit, eril);
     heleRelIso[myType]->Fill(worst_ele_iso, weight);
     heleRelIso[3]->Fill(worst_ele_iso, weight);
#endif
#if 1
     double worst_iso = std::min(ril, rit);
     hRelIso[myType]->Fill(worst_iso, weight);
     hRelIso[3]->Fill(worst_iso, weight);
#else
     hRelIso[myType]->Fill(ril, weight);
     hRelIso[3]->Fill(ril, weight);
     hRelIso[myType]->Fill(rit, weight);
     hRelIso[3]->Fill(rit, weight);
#endif
     // dilepton pt
     hdilPt[myType]->Fill(cms2.hyp_p4()[i_hyp].pt(), weight);
     hdilPt[3]->Fill(cms2.hyp_p4()[i_hyp].pt(), weight);
    
     // Met and Met phi
     hmet[myType]->Fill(cms2.hyp_met()[i_hyp], weight);      
     hmetPhi[myType]->Fill(cms2.hyp_metPhi()[i_hyp], weight);      
     hmet[3]->Fill(cms2.hyp_met()[i_hyp], weight);      
     hmetPhi[3]->Fill(cms2.hyp_metPhi()[i_hyp], weight);      
    
     // Met vs dilepton Pt
     hmetVsDilepPt[myType]->Fill(cms2.hyp_met()[i_hyp], cms2.hyp_p4()[i_hyp].pt(), weight);
     hmetVsDilepPt[3]->Fill(cms2.hyp_met()[i_hyp], cms2.hyp_p4()[i_hyp].pt(), weight);
    
     // Met over dilepton Pt vs deltaphi btw the two
     double dphi2 = fabs(cms2.hyp_p4()[i_hyp].phi() - cms2.hyp_metPhi()[i_hyp]);
     if (dphi2 > TMath::Pi()) dphi2 = TMath::TwoPi() - dphi2;
     hmetOverPtVsDphi[myType]->Fill(cms2.hyp_met()[i_hyp]/cms2.hyp_p4()[i_hyp].pt(), dphi2, weight);
     hmetOverPtVsDphi[3]->Fill(cms2.hyp_met()[i_hyp]/cms2.hyp_p4()[i_hyp].pt(), dphi2, weight);
    
     // Make a vector of sorted jets, fill jet histograms
     if (cms2.hyp_njets()[i_hyp] > 0) {
	  vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<double> > > my_hyp_jets_p4(cms2.hyp_jets_p4()[i_hyp]);
	  sort(my_hyp_jets_p4.begin(), my_hyp_jets_p4.end(), comparePt);   // sort them by Pt
	  hptJet1[myType]->Fill(my_hyp_jets_p4[0].Pt(), weight);
	  hptJet1[3]->Fill(my_hyp_jets_p4[0].Pt(), weight);
	  hetaJet1[myType]->Fill(my_hyp_jets_p4[0].Eta(), weight);
	  hetaJet1[3]->Fill(my_hyp_jets_p4[0].Eta(), weight);
	  if (cms2.hyp_njets()[i_hyp] > 1) {
	       hptJet2[myType]->Fill(my_hyp_jets_p4[1].Pt(), weight);
	       hptJet2[3]->Fill(my_hyp_jets_p4[1].Pt(), weight);
	       hetaJet2[myType]->Fill(my_hyp_jets_p4[1].Eta(), weight);
	       hetaJet2[3]->Fill(my_hyp_jets_p4[1].Eta(), weight);
	  }
	  if (cms2.hyp_njets()[i_hyp] > 2) {
	       hptJet3[myType]->Fill(my_hyp_jets_p4[2].Pt(), weight);
	       hptJet3[3]->Fill(my_hyp_jets_p4[2].Pt(), weight);
	       hetaJet3[myType]->Fill(my_hyp_jets_p4[2].Eta(), weight);
	       hetaJet3[3]->Fill(my_hyp_jets_p4[2].Eta(), weight);
	  }
	  if (cms2.hyp_njets()[i_hyp] > 3) {
	       hptJet4[myType]->Fill(my_hyp_jets_p4[3].Pt(), weight);
	       hptJet4[3]->Fill(my_hyp_jets_p4[3].Pt(), weight);
	       hetaJet4[myType]->Fill(my_hyp_jets_p4[3].Eta(), weight);
	       hetaJet4[3]->Fill(my_hyp_jets_p4[3].Eta(), weight);
	  }
     }
}

int ScanChain( TChain* chain, enum Sample sample ) {

  unsigned int nEventsChain = chain->GetEntries();  // number of entries in chain --> number of events from all files
  unsigned int nEventsTotal = 0;

  const unsigned int numHypTypes = 4;  // number of hypotheses: MM, EM, EE, ALL

 // declare and create array of histograms
  const char sample_names[][1024] = { "ww", "wz", "zz", "wjets", "dyee", "dymm", "dytt", "ttbar", "tw" };
  const char *prefix = sample_names[sample];

  // DY samples are supposed to get an additional k-factor of 1.2
  double kFactor = 1;
  switch (sample) {
  case DYee: case DYmm: case DYtt:
       kFactor = 1.12;
       break;
  case ttbar:
       kFactor = 1.85;
       break;
  default:
       break;
  }

//   switch (sample) {
//   case WW:
//        evt_scale1fb = 0.1538;
//        break;
//   default:
//        break;
//   }
  char *suffix[3];
  suffix[0] = "ee";
  suffix[1] = "mm";
  suffix[2] = "em";
  suffix[3] = "all";
  
  // The statement below should work but does not work due to bug in root when TH2 are also used
  // Rene Brun promised a fix.
  //TH1::SetDefaultSumw2(kTRUE); // do errors properly based on weights
  
  for (int i=0; i<4; i++) {
    hnJet[i] = new TH1F(Form("%s_hnJet_%s",prefix,suffix[i]),Form("%s_nJet_%s",prefix,suffix[i]),
			5,0.,5.);	
    hnJetLepVeto[i] = new TH1F(Form("%s_hnJetLepVeto_%s",prefix,suffix[i]),Form("%s_nJetLepVeto_%s",prefix,suffix[i]),
			       5,0.,5.);	
    numTightLep[i] = new TH1F(Form("%s_numTightLep_%s",prefix,suffix[i]),Form("%s_numTightLep_%s",prefix,suffix[i]),
			      10,0.,10.);	
    helePt[i] = new TH1F(Form("%s_helePt_%s",prefix,suffix[i]),Form("%s_elePt_%s",prefix,suffix[i]),
			       150,0.,150.);
    hmuPt[i]  = new TH1F(Form("%s_hmuPt_%s",prefix,suffix[i]),Form("%s_muPt_%s",prefix,suffix[i]),
			 150,0.,150.);
    hmuPtFromSilicon[i]  = new TH1F(Form("%s_hmuPtFromSilicon_%s",prefix,suffix[i]),
                                    Form("%s_muPtFromSilicon_%s",prefix,suffix[i]),150,0.,150.);
    hminLepPt[i]  = new TH1F(Form("%s_hminLepPt_%s",prefix,suffix[i]),
			     Form("%s_minLepPt_%s",prefix,suffix[i]),150,0.,150.);
    hmaxLepPt[i]  = new TH1F(Form("%s_hmaxLepPt_%s",prefix,suffix[i]),
			     Form("%s_maxLepPt_%s",prefix,suffix[i]),150,0.,150.);
    helePhi[i] = new TH1F(Form("%s_helePhi_%s",prefix,suffix[i]),Form("%s_elePhi_%s",prefix,suffix[i]),
			  50,-1*TMath::Pi(), TMath::Pi());
    hmuPhi[i]  = new TH1F(Form("%s_hmuPhi_%s",prefix,suffix[i]),Form("%s_muPhi_%s",prefix,suffix[i]),
			  50,-1*TMath::Pi(), TMath::Pi());
    hdphiLep[i]  = new TH1F(Form("%s_hdphiLep_%s",prefix,suffix[i]),Form("%s_dphiLep_%s",prefix,suffix[i]),
			    50,0., TMath::Pi());
    heleEta[i] = new TH1F(Form("%s_heleEta_%s",prefix,suffix[i]),Form("%s_eleEta_%s",prefix,suffix[i]),
			  60, -3., 3.);
    hmuEta[i]  = new TH1F(Form("%s_hmuEta_%s",prefix,suffix[i]),Form("%s_muEta_%s",prefix,suffix[i]),
			  60, -3., 3.);
    hdilMass[i] = new TH1F(Form("%s_hdilMass_%s",prefix,suffix[i]),Form("%s_dilMass_%s",prefix,suffix[i]),
			   100, 0., 300.);
    hdilMassTightWindow[i] = new TH1F(Form("%s_hdilMassTightWindow_%s",prefix,suffix[i]),
				      Form("%s_dilMassTightWindow_%s",prefix,suffix[i]),
				      120, 60., 120.);
    hdilPt[i] = new TH1F(Form("%s_hdilPt_%s",prefix,suffix[i]),Form("%s_dilPt_%s",prefix,suffix[i]),
			 100, 0., 300.);
    hmet[i] = new TH1F(Form("%s_hmet_%s",prefix,suffix[i]),Form("%s_met_%s",prefix,suffix[i]),100,0.,200.);
    hmetPhi[i] = new TH1F(Form("%s_hmetPhi_%s",prefix,suffix[i]),Form("%s_metPhi_%s",prefix,suffix[i]),
			  50,-1*TMath::Pi(), TMath::Pi());
    hmetVsDilepPt[i] = new TH2F(Form("%s_hmetVsDilepPt_%s",prefix,suffix[i]),
				Form("%s_metVsDilepPt_%s",prefix,suffix[i]),
				100,0.,200.,100,0.,200.);
    hmetOverPtVsDphi[i] = new TH2F(Form("%s_hmetOverPtVsDphi_%s",prefix,suffix[i]),
				   Form("%s_metOverPtVsDphi_%s",prefix,suffix[i]),
				   100,0.,3.,50,0., TMath::Pi());
    hdphillvsmll[i] = new TH2F(Form("%s_dphillvsmll_%s",prefix,suffix[i]),
			       Form("%s_dphillvsmll_%s",prefix,suffix[i]),
			       100,10.,210.,50,0., TMath::Pi());
    hptJet1[i] = new TH1F(Form("%s_hptJet1_%s",prefix,suffix[i]),Form("%s_ptJet1_%s",prefix,suffix[i]),
			  100, 0., 300.);
    hptJet2[i] = new TH1F(Form("%s_hptJet2_%s",prefix,suffix[i]),Form("%s_ptJet2_%s",prefix,suffix[i]),
			  100, 0., 300.);
    hptJet3[i] = new TH1F(Form("%s_hptJet3_%s",prefix,suffix[i]),Form("%s_ptJet3_%s",prefix,suffix[i]),
			  100, 0., 300.);
    hptJet4[i] = new TH1F(Form("%s_hptJet4_%s",prefix,suffix[i]),Form("%s_ptJet4_%s",prefix,suffix[i]),
			  100, 0., 300.);
    
    hetaJet1[i] = new TH1F(Form("%s_hetaJet1_%s",prefix,suffix[i]),Form("%s_etaJet1_%s",prefix,suffix[i]),
			   50, -4., 4.);
    hetaJet2[i] = new TH1F(Form("%s_hetaJet2_%s",prefix,suffix[i]),Form("%s_etaJet2_%s",prefix,suffix[i]),
			   50, -4., 4.);
    hetaJet3[i] = new TH1F(Form("%s_hetaJet3_%s",prefix,suffix[i]),Form("%s_etaJet3_%s",prefix,suffix[i]),
			   50, -4., 4.);
    hetaJet4[i] = new TH1F(Form("%s_hetaJet4_%s",prefix,suffix[i]),Form("%s_etaJet4_%s",prefix,suffix[i]),
			   50, -4., 4.);
    
    heleSumPt[i] = new TH1F(Form("%s_heleSumPt_%s",prefix,suffix[i]),Form("%s_heleSumPt_%s",prefix,suffix[i]),
			    100, 0., 25.);
    hmuSumPt[i] = new TH1F(Form("%s_hmuSumPt_%s",prefix,suffix[i]),Form("%s_hmuSumPt_%s",prefix,suffix[i]),
			    100, 0., 25.);
    hmuSumIso[i] = new TH1F(Form("%s_hmuIsoSum_%s",prefix,suffix[i]),Form("%s_hmuIsoSum_%s",prefix,suffix[i]),
			    100, 0., 25.);
    heleRelIso[i] = new TH1F(Form("%s_heleRelIso_%s",prefix,suffix[i]),Form("%s_heleRelIso_%s",prefix,suffix[i]),
			     101, 0., 1.01);
    hmuRelIso[i] = new TH1F(Form("%s_hmuRelIso_%s",prefix,suffix[i]),Form("%s_hmuRelIso_%s",prefix,suffix[i]),
			     101, 0., 1.01);
    hRelIso[i] = new TH1F(Form("%s_hRelIso_%s",prefix,suffix[i]),Form("%s_hRelIso_%s",prefix,suffix[i]),
			     101, 0., 1.01);
    hcaloIso[i] = new TH1F(Form("%s_hcaloIso_%s",prefix,suffix[i]),Form("%s_hcaloIso_%s",prefix,suffix[i]),
			     100, 0., 50);
    hRelIso_withCalo[i] = new TH1F(Form("%s_hRelIso_withCalo_%s",prefix,suffix[i]),
				   Form("%s_hRelIso_withCalo_%s",prefix,suffix[i]),
			     101, 0., 1.01);

    hnJet[i]->Sumw2();
    hnJetLepVeto[i]->Sumw2();
    numTightLep[i]->Sumw2();
    helePt[i]->Sumw2();
    hmuPt[i]->Sumw2();
    hmuPtFromSilicon[i]->Sumw2();
    hminLepPt[i]->Sumw2();
    hmaxLepPt[i]->Sumw2();
    helePhi[i]->Sumw2();
    hmuPhi[i]->Sumw2();
    hdphiLep[i]->Sumw2();
    heleEta[i]->Sumw2();
    hmuEta[i]->Sumw2();
    hdilMass[i]->Sumw2();
    hdilMassTightWindow[i]->Sumw2();
    hdilPt[i]->Sumw2();
    hmet[i]->Sumw2();
    hmetPhi[i]->Sumw2();
    hptJet1[i]->Sumw2();
    hptJet2[i]->Sumw2();
    hptJet3[i]->Sumw2();
    hptJet4[i]->Sumw2();
    hetaJet1[i]->Sumw2();
    hetaJet2[i]->Sumw2();
    hetaJet3[i]->Sumw2();
    hetaJet4[i]->Sumw2();
    heleSumPt[i]->Sumw2();
    hmuSumPt[i]->Sumw2();
    hmuSumIso[i]->Sumw2();
    heleRelIso[i]->Sumw2(); 
    hmuRelIso[i]->Sumw2(); 
    hRelIso[i]->Sumw2(); 
  }

  memset(hypos_total_n, 0, sizeof(hypos_total_n));
  memset(hypos_total_weight, 0, sizeof(hypos_total_weight));

  // clear list of duplicates
  already_seen.clear();
  int duplicates_total_n = 0;
  double duplicates_total_weight = 0;

  int i_permille_old = 0;
  // file loop
  TObjArray *listOfFiles = chain->GetListOfFiles();
  TIter fileIter(listOfFiles);
  while (TChainElement *currentFile = (TChainElement*)fileIter.Next()) {
       // need to call TFile::Open(), since the file is not
       // necessarily a plain TFile (TNetFile, TDcacheFile, etc)
//        printf("current file: %s (%s), %s\n", currentFile->GetName(), 
// 	      currentFile->GetTitle(), currentFile->IsA()->GetName());
       TFile *f = TFile::Open(currentFile->GetTitle()); 
       TTree *tree = (TTree*)f->Get("Events");

       TRegexp re_WW("WW_signal", false);
       TRegexp re_musoup("muon_soup", false);
       TRegexp re_elsoup("electron_soup", false);

       bool is_musoup = false;
       bool is_elsoup = false;
       
       printf("current title: %s\n", currentFile->GetTitle());
       Ssiz_t len;
       re_WW.Index(currentFile->GetTitle(), &len, 0);
       if (len != 0) {
	    printf("This file is part of WW\n");
	    evt_scale1fb = 1000 * 114.3 / 744261.0;
       }
       re_musoup.Index(currentFile->GetTitle(), &len, 0);
       if (len != 0) {
	    printf("This file is part of musoup\n");
	    is_musoup = true;
       }
       re_elsoup.Index(currentFile->GetTitle(), &len, 0);
       if (len != 0) {
	    printf("This file is part of elsoup\n");
	    is_elsoup = true;
       }

       cms2.Init(tree);  // set branch addresses for TTree tree

       TStopwatch t;
       //Event Loop
       unsigned int nEvents = tree->GetEntries();
//   nEvents = std::min(nEvents, 1000u);
       for( unsigned int event = 0; event < nEvents; ++event) {
	    cms2.GetEntry(event);  // get entries for Event number event from branches of TTree tree
	    ++nEventsTotal;

	    // soups have event-by-event weight; take care of this now
	    // (since there was no post-processing step on these ntuples)
	    if (is_musoup)
		 evt_scale1fb = cms2.evt_CSA07Weight() * 725295.0 / 715296.0;
	    if (is_elsoup)
		 evt_scale1fb = cms2.evt_CSA07Weight() * 639013.0 / 629013.0;

	    if (cms2.trks_d0().size() == 0)
		 continue;
	    DorkyEventIdentifier id = { cms2.evt_run(), cms2.evt_event(), cms2.trks_d0()[0], 
					cms2.hyp_lt_p4()[0].pt(), cms2.hyp_lt_p4()[0].eta(), cms2.hyp_lt_p4()[0].phi() };
	    if (is_duplicate(id)) {
		 duplicates_total_n++;
		 duplicates_total_weight += evt_scale1fb;
		 continue;
	    }
	    // Progress feedback to the user
//       if ( (nEventsTotal)%1000 == 0 ) std::cout << "Processing event: " << nEventsTotal << std::endl;
	    int i_permille = (int)floor(1000 * nEventsTotal / float(nEventsChain));
	    if (i_permille != i_permille_old) {
		 // xterm magic from L. Vacavant and A. Cerri
		 printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
			"\033[0m\033[32m <---\033[0m\015", i_permille/10.);
		 fflush(stdout);
		 i_permille_old = i_permille;
	    }
	    
	    // filter by process
	    if ( !filterByProcess(sample) ) continue;
	    
	    // loop over hypothesis candidates
	    unsigned int nHyps = cms2.hyp_type().size();
	    for( unsigned int i_hyp = 0; i_hyp < nHyps; ++i_hyp ) {
		 hypo(i_hyp, kFactor);
	    }
       }
       t.Stop();
       printf("Real time: %u events / %f s = %e event/s\n", nEvents, 
	      t.RealTime(), nEvents / t.RealTime());
       printf("CPU time: %u events / %f s = %e event/s\n", nEvents, 
	      t.CpuTime(), nEvents / t.CpuTime());
       delete f;
  }
  if ( nEventsChain != nEventsTotal ) {
       printf("ERROR: number of events from files (%d) is not equal to total number"
	      " of events (%d)\n", nEventsChain, nEventsTotal);
  }

  printf("Total candidate count (ee em mm all): %d %d %d %d.  Total weight %f %f %f %f\n",   
	 hypos_total_n[0], hypos_total_n[1], hypos_total_n[2], hypos_total_n[3], 
	 hypos_total_weight[0], hypos_total_weight[1], hypos_total_weight[2], hypos_total_weight[3]);
  printf("Total duplicate count: %d.  Total weight %f\n",   
	 duplicates_total_n, duplicates_total_weight);
  
  return 0;
}
