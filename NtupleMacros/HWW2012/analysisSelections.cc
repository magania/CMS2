#include "analysisSelections.h"

#include "Math/LorentzVector.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include "TDatabasePDG.h"
#include "Math/VectorUtil.h"
#include "TROOT.h"

using namespace std;

#ifndef __CINT__
#include "CORE/CMS2.h"
#include "CORE/electronSelections.h"
#include "CORE/muonSelections.h"
#include "CORE/jetSelections.h"
#include "CORE/metSelections.h"
#endif

//
// Electron ID
//

bool goodElectronTMVA(ElectronIDMVA *mva, unsigned int i) {
    //cout << "mva.MVAValue=" << mva->MVAValue(i, 0) << endl;
    float pt = cms2.els_p4().at(i).pt();
    float etaSC = cms2.els_etaSC().at(i);
    //preselection
    if (fabs(etaSC)<1.479) {
        if (cms2.els_sigmaIEtaIEta().at(i)>0.01 || 
                fabs(cms2.els_dEtaIn().at(i))>0.007 ||
                fabs(cms2.els_dPhiIn().at(i))>0.15 ||
                cms2.els_hOverE().at(i)>0.12 ||
                cms2.els_tkIso().at(i)/pt>0.2 ||
                TMath::Max(cms2.els_ecalIso().at(i) - 1.0, 0.0)/pt>0.20 ||
                cms2.els_hcalIso().at(i)/pt>0.20 ) return 0;
    } else {
        if (cms2.els_sigmaIEtaIEta().at(i)>0.03 || 
                fabs(cms2.els_dEtaIn().at(i))>0.009 ||
                fabs(cms2.els_dPhiIn().at(i))>0.10 ||
                cms2.els_hOverE().at(i)>0.10 ||
                cms2.els_tkIso().at(i)/pt>0.2 ||
                TMath::Max(cms2.els_ecalIso().at(i) - 1.0, 0.0)/pt>0.20 ||
                cms2.els_hcalIso().at(i)/pt>0.20 ) return 0;
    }
    //selection
    if (pt<20){
        if (fabs(etaSC)<1. && mva->MVAValue(i, 0)>0.139) return 1;
        else if (fabs(etaSC)>=1. && fabs(etaSC)<1.479 && mva->MVAValue(i, 0)>0.525) return 1;
        else if (fabs(etaSC)>=1.479 && fabs(etaSC)<2.5 && mva->MVAValue(i, 0)>0.543) return 1;
    } else {
        if (fabs(etaSC)<1. && mva->MVAValue(i, 0)>0.947) return 1;
        else if (fabs(etaSC)>=1. && fabs(etaSC)<1.479 && mva->MVAValue(i, 0)>0.950) return 1;
        else if (fabs(etaSC)>=1.479 && fabs(etaSC)<2.5 && mva->MVAValue(i, 0)>0.884) return 1;
    }
    return 0;
}

bool goodElectronWithoutIsolation(unsigned int i,  bool useLHeleId, bool useMVAeleId, ElectronIDMVA *mva){
    return ww_elBase(i) && ww_elId(i, useLHeleId, useMVAeleId, mva) && ww_eld0PV(i) && ww_eldZPV(i);
}

bool goodElectronIsolated(unsigned int i,  bool useLHeleId, bool useMVAeleId, ElectronIDMVA *mva, bool lockToCoreSelectors){
    bool ptcut = cms2.els_p4().at(i).pt() >= 10.0;
    bool core = ptcut && pass_electronSelection( i, electronSelection_smurfV6);
    bool internal = ww_elBase(i) && ww_elId(i, useLHeleId, useMVAeleId, mva) && ww_eld0PV(i) && ww_eldZPV(i) && ww_elIso(i);
    assert(!lockToCoreSelectors || core==internal);
    return internal;
}

bool fakableElectron(unsigned int i, EleFOTypes type){
    if ( cms2.els_p4().at(i).pt() < 10.0 ) return false;
    switch (type){
        case EleFOV1: return pass_electronSelection( i, electronSelectionFO_el_smurf_v1);
        case EleFOV2: return pass_electronSelection( i, electronSelectionFO_el_smurf_v2);
        case EleFOV3: return pass_electronSelection( i, electronSelectionFO_el_smurf_v3);
        case EleFOV4: return pass_electronSelection( i, electronSelectionFO_el_smurf_v4);
    }
    return false;
}

//
// Muon ID
//

bool goodMuonWithoutIsolation(unsigned int i){
    return ww_muBase(i) && ww_mud0PV(i) && ww_mudZPV(i) && ww_muId(i);
}

bool goodMuonIsolated(unsigned int i, bool lockToCoreSelectors){
    bool ptcut = cms2.mus_p4().at(i).pt() >= 10.0;
    bool core = ptcut && muonId(i, NominalSmurfV6);
    bool internal = ww_muBase(i) && ww_mud0PV(i) && ww_mudZPV(i) && ww_muId(i) && ww_muIso(i); 
    assert(!lockToCoreSelectors || core==internal);
    return internal;
}

bool fakableMuon(unsigned int i, MuFOTypes type){
    if ( cms2.mus_p4().at(i).pt() < 10.0 ) return false;
    switch (type){
        case MuFOV1: return muonId(i, muonSelectionFO_mu_smurf_10);
        case MuFOV2: return muonId(i, muonSelectionFO_mu_smurf_04);
    }
    return false;
}

//
// Electron Id
//

bool ww_elBase(unsigned int index){
    if (cms2.els_p4().at(index).pt() < 10.0) return false;
    if (fabs(cms2.els_p4().at(index).eta()) > 2.5) return false;
    return true;
}
bool ww_elId(unsigned int index, bool useLHeleId, bool useMVAeleId, ElectronIDMVA *mva) {
    // if( fabs(cms2.els_conv_dist().at(index)) < 0.02 &&
    //     fabs(cms2.els_conv_dcot().at(index)) < 0.02) return false;
    // if (! (electronId_VBTF(index, VBTF_35X_80) & (1<<ELEID_ID)) ) return false;
    // if (! (electronId_VBTF(index, VBTF_35X_70) & (1<<ELEID_ID)) ) return false;
    // if (! (electronId_CIC(index, 4, CIC_SUPERTIGHT) & (1<<ELEID_ID)) ) return false;

    if (useLHeleId) {
        if (cms2.els_p4().at(index).pt()>20 && (passLikelihoodId_v2(index,cms2.els_lh().at(index),0) & (1<<ELEID_ID))!=(1<<ELEID_ID) ) return false; 
        if (cms2.els_p4().at(index).pt()<20 && (passLikelihoodId_v2(index,cms2.els_lh().at(index),0) & (1<<ELEID_ID))!=(1<<ELEID_ID) ) return false;
    }
    if (useMVAeleId){
        if (!goodElectronTMVA(mva, index)) return false;
    } else {
        if (!pass_electronSelection(index, electronSelection_smurfV3_id, false, false) ) return false;
    }

    // MIT conversion
    if ( isFromConversionMIT(index) ) return false;

    // conversion rejection - hit based
    if ( cms2.els_exp_innerlayers().at(index) > 0 ) return false;
    // MIT conversion
    // if (! pass_electronSelection(index, (1ll<<ELENOTCONV_MIT), false, false) ) return false;
    // if ( cms2.els_exp_innerlayers39X().at(index) > 0 ) return false;
    //  int ctfIndex = cms2.els_trkidx().at(index);
    // if ( ctfIndex >=0 && 
    //     cms2.els_charge().at(index)!=cms2.trks_charge().at(ctfIndex) ) return false;
    // if ( !electronId_smurf_v2(index) ) return false;

    return true;
}

bool ww_eld0(unsigned int index){
    return fabs(cms2.els_d0corr()[index]) < 0.02;
}


double dzPV(const LorentzVector& vtx, const LorentzVector& p4, const LorentzVector& pv){
    return (vtx.z()-pv.z()) - ((vtx.x()-pv.x())*p4.x()+(vtx.y()-pv.y())*p4.y())/p4.pt() * p4.z()/p4.pt();
}

bool ww_eld0PV(unsigned int index){
    int vtxIndex = primaryVertex();
    if (vtxIndex<0) return false;
    double dxyPV = cms2.els_d0()[index]-
        cms2.vtxs_position()[vtxIndex].x()*sin(cms2.els_trk_p4()[index].phi())+
        cms2.vtxs_position()[vtxIndex].y()*cos(cms2.els_trk_p4()[index].phi());
    return fabs(dxyPV) < 0.02;
}

bool ww_eldZPV(unsigned int index){
    int vtxIndex = primaryVertex();
    if (vtxIndex<0) return false;
    // double dzPV = cms2.els_z0corr()[index]-cms2.vtxs_position()[iMax].z();
    double dzpv = dzPV(cms2.els_vertex_p4()[index], cms2.els_trk_p4()[index], cms2.vtxs_position()[vtxIndex]);
    return fabs(dzpv)<0.1;
}

double ww_elIsoVal(unsigned int index){
    float sum = cms2.els_tkIso().at(index);
    if ( fabs(cms2.els_etaSC()[index]) < 1.479 )
        // if ( fabs(cms2.els_p4().at(index).eta()) < 1.479)
        sum += max(0., (cms2.els_ecalIso().at(index) -1.));
    else 
        sum += cms2.els_ecalIso().at(index);
    sum += cms2.els_hcalIso().at(index);
    double pt = cms2.els_p4().at(index).pt();
    return sum/pt;
}

bool ww_elIso(unsigned int index){
    return pass_electronSelection(index, electronSelection_smurfV5_iso);
    //return ww_elIsoVal(index)<0.1;
}

//
// Muon Id
//

bool ww_muBase(unsigned int index){
    if (cms2.mus_p4().at(index).pt() < 10.0) return false;
    if (fabs(cms2.mus_p4().at(index).eta()) > 2.4) return false;
    if (cms2.mus_type().at(index) == 8) return false; // not STA
    return true;
}
bool ww_mud0(unsigned int index){
    return fabs(cms2.mus_d0corr()[index]) < 0.02;
}
double ww_mud0ValuePV(unsigned int index){
    int vtxIndex = primaryVertex();
    if (vtxIndex<0) return 9999;
    double dxyPV = cms2.mus_d0()[index]-
        cms2.vtxs_position()[vtxIndex].x()*sin(cms2.mus_trk_p4()[index].phi())+
        cms2.vtxs_position()[vtxIndex].y()*cos(cms2.mus_trk_p4()[index].phi());
    return fabs(dxyPV);
}

bool ww_mud0PV(unsigned int index){
    if ( cms2.mus_p4().at(index).pt() < 20. ) return ww_mud0ValuePV(index) < 0.01;
    return ww_mud0ValuePV(index) < 0.02;
}
bool ww_mudZPV(unsigned int index, float cut){
    int vtxIndex = primaryVertex();
    if (vtxIndex<0) return false;
    // double dzpv = cms2.mus_z0corr()[index]-cms2.vtxs_position()[iMax].z();
    double dzpv = dzPV(cms2.mus_vertex_p4()[index], cms2.mus_trk_p4()[index], cms2.vtxs_position()[vtxIndex]);
    return fabs(dzpv)<cut;
}
bool ww_muId(unsigned int index){ 
    //muonIdMVA->MVAValue(index, 0);
    if (((cms2.mus_type().at(index)) & (1<<2)) == 0)    return false; // tracker muon
    if (cms2.mus_validHits().at(index) < 11)            return false; // # of tracker hits
    // if (cms2.trks_nlayers().at(cms2.mus_trkidx().at(index))<=8) return false;
    if (cms2.mus_ptErr().at(index)/cms2.mus_p4().at(index).pt()>0.1) return false;
    if (cms2.trks_valid_pixelhits().at(cms2.mus_trkidx().at(index))==0) return false;
    if (cms2.mus_trkKink().at(index) > 20.) return false; //kink finder//newcuts
    // if (!isPFMuon(index))return false;
    // global muon
    bool goodMuonGlobalMuon = false;
    if (((cms2.mus_type().at(index)) & (1<<1)) == (1<<1)){
        goodMuonGlobalMuon = true;
        if (cms2.mus_gfit_chi2().at(index)/cms2.mus_gfit_ndof().at(index) >= 10) goodMuonGlobalMuon = false; //glb fit chisq
        if (cms2.mus_gfit_validSTAHits().at(index)==0 ) goodMuonGlobalMuon = false;
        if (cms2.mus_nmatches().at(index)<2) goodMuonGlobalMuon = false;
    }
    return goodMuonGlobalMuon || 
        cms2.mus_pid_TMLastStationTight().at(index) == 1; // TM id
}

double ww_muIsoVal(unsigned int index){
    double sum =  cms2.mus_iso03_sumPt().at(index) +
        cms2.mus_iso03_emEt().at(index)  +
        cms2.mus_iso03_hadEt().at(index);
    double pt  = cms2.mus_p4().at(index).pt();
    return sum/pt;
}
bool ww_muIso(unsigned int index){
    if (cms2.mus_p4().at(index).pt()>20) {
        if (TMath::Abs(cms2.mus_p4()[index].eta())<1.479) 
            return muonIsoValuePF(index,0,0.3) < 0.13;
        else 
            return muonIsoValuePF(index,0,0.3) < 0.09;
    } else {
        if (TMath::Abs(cms2.mus_p4()[index].eta())<1.479) 
            return muonIsoValuePF(index,0,0.3) < 0.06;
        else 
            return muonIsoValuePF(index,0,0.3) < 0.05;
    }
    //   if ( cms2.mus_p4().at(index).pt() < 20. )
    //     return ww_muIsoVal(index)<0.1;
    //   return ww_muIsoVal(index)<0.15;
}
unsigned int numberOfSoftMuons(int i_hyp, bool nonisolated,
        const std::vector<JetPair>& vetojets)
{
    unsigned int nMuons = 0;
    for (int imu=0; imu < int(cms2.mus_charge().size()); ++imu) {
        // quality cuts
        if (  ((cms2.mus_goodmask()[imu]) & (1<<19)) == 0 ) continue; // TMLastStationAngTight
        if ( cms2.mus_p4()[imu].pt() < 3 ) continue;
        if ( ww_mud0ValuePV(imu) > 0.2) continue;
        if ( ! ww_mudZPV(imu,0.2) ) continue;//newcuts, was 0.1
        if ( cms2.mus_validHits()[imu] < 11) continue;
        if ( TMath::Abs(cms2.hyp_lt_id()[i_hyp]) == 13 && cms2.hyp_lt_index()[i_hyp] == imu ) continue;
        if ( TMath::Abs(cms2.hyp_ll_id()[i_hyp]) == 13 && cms2.hyp_ll_index()[i_hyp] == imu ) continue;
        if ( nonisolated && ww_muIsoVal(imu)<0.1 && cms2.mus_p4()[imu].pt()>20 ) continue;
        bool skip = false;
        for ( std::vector<JetPair>::const_iterator ijet = vetojets.begin();
                ijet != vetojets.end(); ++ijet )
            if ( TMath::Abs(ROOT::Math::VectorUtil::DeltaR(ijet->first,cms2.mus_p4()[imu])) < 0.3 ) skip=true;
        if ( skip ) continue;
        ++nMuons;
    }
    return nMuons;
}

std::vector<LeptonPair> getExtraLeptons(int i_hyp, double minPt,  bool useLHeleId, bool useMVAeleId, ElectronIDMVA *mva){
    std::vector<LeptonPair> leptons;
    for (int i=0; i < int(cms2.mus_charge().size()); ++i) {
        if ( cms2.mus_p4()[i].pt() < minPt ) continue;
        if ( TMath::Abs(cms2.hyp_lt_id()[i_hyp]) == 13 && cms2.hyp_lt_index()[i_hyp] == i ) continue;
        if ( TMath::Abs(cms2.hyp_ll_id()[i_hyp]) == 13 && cms2.hyp_ll_index()[i_hyp] == i ) continue;
        if ( ! (ww_mud0PV(i) && ww_muId(i) && ww_muIso(i)&&
                    fabs(cms2.mus_p4().at(i).eta()) <2.4) ) continue;
        leptons.push_back(LeptonPair(true,i));
    }
    for (int i=0; i < int(cms2.els_charge().size()); ++i) {
        if ( cms2.els_p4()[i].pt() < minPt ) continue;
        if ( TMath::Abs(ROOT::Math::VectorUtil::DeltaR(cms2.hyp_lt_p4()[i_hyp],cms2.els_p4().at(i)) <0.1) ) continue;
        if ( TMath::Abs(ROOT::Math::VectorUtil::DeltaR(cms2.hyp_ll_p4()[i_hyp],cms2.els_p4().at(i)) <0.1) ) continue;
        if ( !(ww_elId(i, useLHeleId, useMVAeleId, mva) && ww_eld0PV(i) && ww_elIso(i) &&
                    fabs(cms2.els_p4().at(i).eta()) < 2.5) ) continue;
        leptons.push_back(LeptonPair(false,i));
    }
    return leptons;
}

unsigned int numberOfExtraLeptons(int i_hyp, double minPt, bool useLHeleId, bool useMVAeleId, ElectronIDMVA *mva){
    return getExtraLeptons(i_hyp, minPt, useLHeleId, useMVAeleId, mva).size();
}


//
// Triger
//

bool passedTriggerRegExp(TPMERegexp trigName)
{

    for (unsigned int tidx = 0; tidx < cms2.hlt_trigNames().size(); tidx++) {
        if (trigName.Match(cms2.hlt_trigNames().at(tidx)) != 0) {
            return true;
        }
    }

    return false;

}

bool passedTrigger(TString trigName, unsigned int minRun, unsigned int maxRun) 
{
  if ( cms2.evt_run() < minRun || cms2.evt_run() > maxRun ) return false;
  if ( find(cms2.hlt_trigNames().begin(), cms2.hlt_trigNames().end(), trigName)
       == cms2.hlt_trigNames().end() ) return false;
  return cms2.passHLTTrigger(trigName);
}

bool passedTriggerRequirements() {
    // return true; // no trigger requirements
    // return cms2.filter_ele10mu10IsoId_passed();
    if ( passedTrigger("HLT_Mu17_Ele8_CaloIdL_v1") || 
            passedTrigger("HLT_Mu17_Ele8_CaloIdL_v2") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdL_v3") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdL_v4") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdL_v5") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdL_v6") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdL_v8") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v1") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v3") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v4") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v7") ||
            passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v8") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdL_v1") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdL_v2") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdL_v3") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdL_v4") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdL_v5") || 
            passedTrigger("HLT_Mu8_Ele17_CaloIdL_v6") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v1") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v3") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v4") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v7") ||
            passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v8")
       ) return true;
    if ( passedTrigger("HLT_DoubleMu7_v1") ||
            passedTrigger("HLT_DoubleMu7_v2") ||
            passedTrigger("HLT_Mu13_Mu8_v2") ||
            passedTrigger("HLT_Mu13_Mu8_v3") ||
            passedTrigger("HLT_Mu13_Mu8_v4") ||
            passedTrigger("HLT_Mu13_Mu8_v6") ||
            passedTrigger("HLT_Mu13_Mu8_v7") ||
            passedTrigger("HLT_Mu17_Mu8_v2") ||
            passedTrigger("HLT_Mu17_Mu8_v3") ||
            passedTrigger("HLT_Mu17_Mu8_v4") ||
            passedTrigger("HLT_Mu17_Mu8_v6") ||
            passedTrigger("HLT_Mu17_Mu8_v7") ||
            passedTrigger("HLT_Mu17_Mu8_v10") ||
            passedTrigger("HLT_Mu17_Mu8_v11") ||
            passedTrigger("HLT_Mu17_TkMu8_v3") ||
            passedTrigger("HLT_Mu17_TkMu8_v4") ) return true;
    if ( passedTrigger("HLT_Mu15_v2") ||
            passedTrigger("HLT_Mu24_v1") ||
            passedTrigger("HLT_Mu24_v2") ||
            passedTrigger("HLT_Mu30_v1") ||
            passedTrigger("HLT_Mu30_v2") ||
            passedTrigger("HLT_Mu30_v3") ||
            passedTrigger("HLT_Mu30_v4") ||
            passedTrigger("HLT_Mu30_v5") ||
            passedTrigger("HLT_Mu30_v7") ||
            passedTrigger("HLT_IsoMu17_v5") ||
            passedTrigger("HLT_IsoMu17_v6") ||
            passedTrigger("HLT_IsoMu17_v8") ||
            passedTrigger("HLT_IsoMu17_v9") ||
            passedTrigger("HLT_IsoMu17_v10") ||
            passedTrigger("HLT_IsoMu17_v11") ||
            passedTrigger("HLT_IsoMu17_eta2p1_v1") ||
            passedTrigger("HLT_IsoMu20_eta2p1_v1") ||
            passedTrigger("HLT_IsoMu24_v1") ||
            passedTrigger("HLT_IsoMu24_v2") ||
            passedTrigger("HLT_IsoMu24_v4") ||
            passedTrigger("HLT_IsoMu24_v5") ||
            passedTrigger("HLT_IsoMu24_v6") ||
            passedTrigger("HLT_IsoMu24_v7") ||
            passedTrigger("HLT_IsoMu24_v8") ||
            passedTrigger("HLT_IsoMu24_eta2p1_v3") ||
            passedTrigger("HLT_IsoMu24_eta2p1_v6") ||
            passedTrigger("HLT_IsoMu24_eta2p1_v7") ||
            passedTrigger("HLT_IsoMu30_eta2p1_v3") ||
            passedTrigger("HLT_IsoMu30_eta2p1_v6") ||
            passedTrigger("HLT_IsoMu30_eta2p1_v7") ) return true;
    if ( passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v1") ||
            passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v2") ||
            passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v3") ||
            passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v4") ||
            passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v5") ||
            passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v6") ||
            passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v5") ||
            passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v6") ||
            passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v7") ||
            passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v8") ||
            passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v9") ||
            passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v10") ) return true;
    if ( passedTrigger("HLT_Ele27_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v1") ||
            passedTrigger("HLT_Ele27_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v2") ||
            passedTrigger("HLT_Ele27_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v3") ||
            passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v1") ||
            passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v2") ||
            passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v3") ||
            passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v4") ||
            passedTrigger("HLT_Ele42_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v1") ||
            passedTrigger("HLT_Ele52_CaloIdVT_TrkIdT_v1") ||
            passedTrigger("HLT_Ele52_CaloIdVT_TrkIdT_v2") ||
            passedTrigger("HLT_Ele52_CaloIdVT_TrkIdT_v3") ||
            passedTrigger("HLT_Ele65_CaloIdVT_TrkIdT_v3") ||
            passedTrigger("HLT_Ele65_CaloIdVT_TrkIdT_v4") ||
            passedTrigger("HLT_Ele80_CaloIdVT_TrkIdT_v2") ||
            passedTrigger("HLT_Ele80_CaloIdVT_TrkIdT_v3") ) return true;

    return false;
}

bool passedTriggerRequirementsWithRuns() {
  // return true; // no trigger requirements
  // return cms2.filter_ele10mu10IsoId_passed();
  if ( passedTrigger("HLT_Mu17_Ele8_CaloIdL_v1",1,175972) || 
       passedTrigger("HLT_Mu17_Ele8_CaloIdL_v2",1,175972) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdL_v3",1,175972) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdL_v4",1,175972) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdL_v5",1,175972) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdL_v6",1,175972) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdL_v8",1,175972) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v1",175973,999999) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v3",175973,999999) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v4",175973,999999) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v7",175973,999999) ||
       passedTrigger("HLT_Mu17_Ele8_CaloIdT_CaloIsoVL_v8",175973,999999) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdL_v1",1,167913) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdL_v2",1,167913) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdL_v3",1,167913) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdL_v4",1,167913) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdL_v5",1,167913) || 
       passedTrigger("HLT_Mu8_Ele17_CaloIdL_v6",1,167913) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v1",167914,999999) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v3",167914,999999) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v4",167914,999999) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v7",167914,999999) ||
       passedTrigger("HLT_Mu8_Ele17_CaloIdT_CaloIsoVL_v8",167914,999999) 
      ) return true;
  if ( passedTrigger("HLT_DoubleMu7_v1",1,164237) ||
       passedTrigger("HLT_DoubleMu7_v2",1,164237) ||
       passedTrigger("HLT_Mu13_Mu8_v2",165085,178419) ||
       passedTrigger("HLT_Mu13_Mu8_v3",165085,178419) ||
       passedTrigger("HLT_Mu13_Mu8_v4",165085,178419) ||
       passedTrigger("HLT_Mu13_Mu8_v6",165085,178419) ||
       passedTrigger("HLT_Mu13_Mu8_v7",165085,178419) ||
       passedTrigger("HLT_Mu17_Mu8_v2",178420,999999) ||
       passedTrigger("HLT_Mu17_Mu8_v3",178420,999999) ||
       passedTrigger("HLT_Mu17_Mu8_v4",178420,999999) ||
       passedTrigger("HLT_Mu17_Mu8_v6",178420,999999) ||
       passedTrigger("HLT_Mu17_Mu8_v7",178420,999999) ||
       passedTrigger("HLT_Mu17_Mu8_v10",178420,999999) ||
       passedTrigger("HLT_Mu17_Mu8_v11",178420,999999) ||
       passedTrigger("HLT_Mu17_TkMu8_v3") ||
       passedTrigger("HLT_Mu17_TkMu8_v4") ) return true;
  if ( passedTrigger("HLT_Mu15_v2",1,163261) ||
       passedTrigger("HLT_Mu24_v1",163262,164237) ||
       passedTrigger("HLT_Mu24_v2",163262,164237) ||
       passedTrigger("HLT_Mu30_v1",165085,173235) ||
       passedTrigger("HLT_Mu30_v2",165085,173235) ||
       passedTrigger("HLT_Mu30_v3",165085,173235) ||
       passedTrigger("HLT_Mu30_v4",165085,173235) ||
       passedTrigger("HLT_Mu30_v5",165085,173235) ||
       passedTrigger("HLT_Mu30_v7",165085,173235) ||
       passedTrigger("HLT_Mu40_v5",173236,175972) ||
       passedTrigger("HLT_Mu40_eta2p1_v1",175973,999999) ||
       passedTrigger("HLT_Mu40_eta2p1_v4",175973,999999) ||
       passedTrigger("HLT_Mu40_eta2p1_v5",175973,999999) ||
       passedTrigger("HLT_IsoMu17_v5",163262,167043) ||
       passedTrigger("HLT_IsoMu17_v6",163262,167043) ||
       passedTrigger("HLT_IsoMu17_v8",163262,167043) ||
       passedTrigger("HLT_IsoMu17_v9",163262,167043) ||
       passedTrigger("HLT_IsoMu17_v10",163262,167043) ||
       passedTrigger("HLT_IsoMu17_v11",163262,167043) ||
       passedTrigger("HLT_IsoMu17_eta2p1_v1",167044,167913) ||
       passedTrigger("HLT_IsoMu20_v8",170053,175910) ||
       passedTrigger("HLT_IsoMu24_v1",175911,175921) ||
       passedTrigger("HLT_IsoMu24_v2",175911,175921) ||
       passedTrigger("HLT_IsoMu24_v4",175911,175921) ||
       passedTrigger("HLT_IsoMu24_v5",175911,175921) ||
       passedTrigger("HLT_IsoMu24_v6",175911,175921) ||
       passedTrigger("HLT_IsoMu24_v7",175911,175921) ||
       passedTrigger("HLT_IsoMu24_v8",175911,175921) ||
       passedTrigger("HLT_IsoMu24_eta2p1_v3",175922,176544) ||
       passedTrigger("HLT_IsoMu24_eta2p1_v6",175922,176544) ||
       passedTrigger("HLT_IsoMu24_eta2p1_v7",175922,176544) ||
       passedTrigger("HLT_IsoMu30_eta2p1_v3",176545,999999) ||
       passedTrigger("HLT_IsoMu30_eta2p1_v6",176545,999999) ||
       passedTrigger("HLT_IsoMu30_eta2p1_v7",176545,999999) ) return true;
  if ( passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v1",1,170052) ||
       passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v2",1,170052) ||
       passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v3",1,170052) ||
       passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v4",1,170052) ||
       passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v5",1,170052) ||
       passedTrigger("HLT_Ele17_CaloIdL_CaloIsoVL_Ele8_CaloIdL_CaloIsoVL_v6",1,170052) ||
       passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v5",170053,999999) ||
       passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v6",170053,999999) ||
       passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v7",170053,999999) ||
       passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v8",170053,999999) ||
       passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v9",170053,999999) ||
       passedTrigger("HLT_Ele17_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_Ele8_CaloIdT_CaloIsoVL_TrkIdVL_TrkIsoVL_v10",170053,999999) ) return true;
  if ( passedTrigger("HLT_Ele27_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v1",1,164237) ||
       passedTrigger("HLT_Ele27_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v2",1,164237) ||
       passedTrigger("HLT_Ele27_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v3",1,164237) ||
       passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v1",165085,166967) ||
       passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v2",165085,166967) ||
       passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v3",165085,166967) ||
       passedTrigger("HLT_Ele32_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_v4",165085,166967) ||
       passedTrigger("HLT_Ele52_CaloIdVT_TrkIdT_v1",166968,170901) ||
       passedTrigger("HLT_Ele52_CaloIdVT_TrkIdT_v2",166968,170901) ||
       passedTrigger("HLT_Ele52_CaloIdVT_TrkIdT_v3",166968,170901) ||
       passedTrigger("HLT_Ele65_CaloIdVT_TrkIdT_v3",170902,178419) ||
       passedTrigger("HLT_Ele65_CaloIdVT_TrkIdT_v4",170902,178419) ||
       passedTrigger("HLT_Ele80_CaloIdVT_TrkIdT_v2",178420,999999) ||
       passedTrigger("HLT_Ele80_CaloIdVT_TrkIdT_v3",178420,999999) ) return true;
  return false;

}

//
// MET
//

bool passedMetRequirements(unsigned int i_hyp){
    // if ( cms2.hyp_p4().at(i_hyp).mass()>130 ) return true;
    HypothesisType type = getHypothesisTypeNew(i_hyp);
    // std::vector<LorentzVector> jets = getDefaultJets(i_hyp);
    metStruct trkMET = trackerMET(i_hyp,0.1); //,&jets);
    double pMet = std::min(projectedMet(i_hyp, metValue(), metPhiValue()),
            projectedMet(i_hyp, trkMET.met, trkMET.metphi));
    // if ( type == EM && cms2.hyp_p4().at(i_hyp).mass()>90 ) return true;
    if ( pMet < 20 ) return false;
    if (type == EE || type == MM) {
        double threshold = 37+nGoodVertex()/2.0;
        // double dmass = fabs(cms2.hyp_p4()[i_hyp].mass()-91);
        // if ( metValue() < 45 ) return false;
        if ( pMet < threshold ) return false;
    }
    return true;
}

double nearestDeltaPhi(double Phi, int i_hyp)
{
    double tightDPhi = fabs(cms2.hyp_lt_p4()[i_hyp].Phi() - Phi);
    tightDPhi = std::min(2*TMath::Pi() - tightDPhi, tightDPhi);
    double looseDPhi = fabs(cms2.hyp_ll_p4()[i_hyp].Phi() - Phi);
    looseDPhi = std::min(2*TMath::Pi() - looseDPhi, looseDPhi);
    return TMath::Min(tightDPhi, looseDPhi);
}

double projectedMet(unsigned int i_hyp, double met, double phi)
{
    double DeltaPhi = nearestDeltaPhi(phi,i_hyp);
    if (DeltaPhi < TMath::Pi()/2) return met*TMath::Sin(DeltaPhi);
    return met;
}

//
// Vertex selections
//

bool isGoodVertex(size_t ivtx) {
    if (cms2.vtxs_isFake()[ivtx]) return false;
    if (cms2.vtxs_ndof()[ivtx] < 4.) return false;
    if (cms2.vtxs_position()[ivtx].Rho() > 2.0) return false;
    if (fabs(cms2.vtxs_position()[ivtx].Z()) > 24.0) return false;
    return true;
}

unsigned int nGoodVertex() {
    unsigned int nVtx = 0;
    for ( unsigned int i = 0; i < cms2.vtxs_sumpt().size(); ++i ){
        // if (cms2.vtxs_isFake()[i]) continue;
        if (!isGoodVertex(i)) continue;
        nVtx++;
    }
    return nVtx;
}

int primaryVertex(){
    //  double sumPtMax = -1;
    //   int iMax = -1;
    //   for ( unsigned int i = 0; i < cms2.vtxs_sumpt().size(); ++i ){
    //     // if (cms2.vtxs_isFake()[i]) continue;
    //     if (!isGoodVertex(i)) continue;
    //     if ( cms2.vtxs_sumpt().at(i) > sumPtMax ){
    //       iMax = i;
    //       sumPtMax = cms2.vtxs_sumpt().at(i);
    //     }
    //   }
    //   if (iMax<0) return false;
    return 0;
}

//
// other cuts
//

bool inZmassWindow(float mass, double delta){
    // return ( mass > 76. && mass < 106. );
    return fabs(mass - 91.1876) < delta;
}

//
// event top tagging
//

bool toptag(WWJetType type, int i_hyp, double minPt,
        std::vector<JetPair> ignoreJets)
{
    //std::vector<LorentzVector> jets;
    const double vetoCone    = 0.3;

    switch ( type ){
        case pfJet:
            for ( unsigned int i=0; i < cms2.pfjets_p4().size(); ++i) {
                if ( cms2.pfjets_p4()[i].pt() < minPt ) continue;
                bool ignoreJet = false;
                for ( std::vector<JetPair>::const_iterator ijet = ignoreJets.begin();
                        ijet != ignoreJets.end(); ++ijet )
                    if ( TMath::Abs(ROOT::Math::VectorUtil::DeltaR(ijet->first,cms2.pfjets_p4()[i])) < vetoCone ) ignoreJet=true;
                if ( ignoreJet ) continue;
                if ( TMath::Abs(ROOT::Math::VectorUtil::DeltaR(cms2.hyp_lt_p4()[i_hyp],cms2.pfjets_p4()[i])) < vetoCone ||
                        TMath::Abs(ROOT::Math::VectorUtil::DeltaR(cms2.hyp_ll_p4()[i_hyp],cms2.pfjets_p4()[i])) < vetoCone ) continue;
                if ( !defaultBTag(type,i) ) continue;
                // dZ cut
                if (fabs(jetDz(i,0))>2) continue;
                return true;
            }
            break;
        case CaloJet:
            for ( unsigned int i=0; i < cms2.jets_p4().size(); ++i) {
                if ( cms2.jets_p4()[i].pt() < minPt ) continue;
                bool ignoreJet = false;
                for ( std::vector<JetPair>::const_iterator ijet = ignoreJets.begin();
                        ijet != ignoreJets.end(); ++ijet )
                    if ( TMath::Abs(ROOT::Math::VectorUtil::DeltaR(ijet->first,cms2.jets_p4()[i])) < vetoCone ) ignoreJet=true;
                if ( ignoreJet ) continue;
                if ( TMath::Abs(ROOT::Math::VectorUtil::DeltaR(cms2.hyp_lt_p4()[i_hyp],cms2.jets_p4()[i])) < vetoCone ||
                        TMath::Abs(ROOT::Math::VectorUtil::DeltaR(cms2.hyp_ll_p4()[i_hyp],cms2.jets_p4()[i])) < vetoCone ) continue;
                //     if ( defaultBTag(type,i) && ignoreJets.size()==1 ){
                //       cout << "b-tagged jet pt: " << cms2.jets_p4()[i].pt() << " \teta: " << cms2.jets_p4()[i].eta() <<
                //         " \tphi: " << cms2.jets_p4()[i].phi() << endl;
                //     }
                if ( defaultBTag(type,i) ) return true;
            }
            break;
        default:
            std::cout << "ERROR: not supported jet type is requested: " << type << " FixIt!" << std::endl;
    }
    return false;
}

