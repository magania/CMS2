#include <TFile.h>
#include "MuonMVAEstimator.h"
#include <cmath>
#include <vector>

using namespace std;

#include "../CORE/CMS2.h"
#include "../CORE/trackSelections.h"

//
// dz of muon track : copied from muonSelections.cc
//
double dzPVmu(const LorentzVector& vtx, const LorentzVector& p4, const LorentzVector& pv){
    return (vtx.z()-pv.z()) - ((vtx.x()-pv.x())*p4.x()+(vtx.y()-pv.y())*p4.y())/p4.pt() * p4.z()/p4.pt();
}

//
// Definition of particle types (PFType)
//
enum ParticleType {
	kX=0,     // undefined
	kh,       // charged hadron
	ke,       // electron 
	kmu,      // muon 
	kgamma,   // photon
	kh0,      // neutral hadron
	kh_HF,        // HF tower identified as a hadron
	kegamma_HF    // HF tower identified as an EM particle
};

//
// This function converts pdgId to PFType
//
int translatePdgIdToType(int pdgid)
{
	switch ( std::abs(pdgid) )
	{
		case 211: return kh;
		case 11: return ke;
		case 13: return kmu;
		case 22: return kgamma;
		case 130: return kh0;
		case 1: return kh_HF;
		case 2: return kegamma_HF;
		case 0: return kX;
		default: return kX;
	}
}



//--------------------------------------------------------------------------------------------------
MuonMVAEstimator::MuonMVAEstimator() :
  fMethodname("BDTG method"),
  fisInitialized(kFALSE),
  fPrintMVADebug(kFALSE),
  fMVAType(kIsoRings),
  fUseBinnedVersion(kTRUE),
  fNMVABins(0)
{
  // Constructor.  
  fTMVAReader = std::vector<TMVA::Reader*>(0);
}

//--------------------------------------------------------------------------------------------------
MuonMVAEstimator::~MuonMVAEstimator(){
  for (unsigned int i=0;i<fTMVAReader.size(); ++i) {
    if (fTMVAReader[i]) delete fTMVAReader[i];
  }
}

//--------------------------------------------------------------------------------------------------
void MuonMVAEstimator::initialize( std::string methodName,
				   std::string weightsfile,
				   MuonMVAEstimator::MVAType type){
  
  std::vector<std::string> tempWeightFileVector;
  tempWeightFileVector.push_back(weightsfile);
  initialize(methodName,type,kFALSE,tempWeightFileVector);
}


//--------------------------------------------------------------------------------------------------
void MuonMVAEstimator::initialize( std::string methodName,
				   MuonMVAEstimator::MVAType type,
				   Bool_t useBinnedVersion,
				   std::vector<std::string> weightsfiles
  ) {
  
  //clean up first
  for (unsigned int i=0;i<fTMVAReader.size(); ++i) {
    if (fTMVAReader[i]) delete fTMVAReader[i];
  }
  fTMVAReader.clear();

  //initialize
  fisInitialized = kTRUE;
  fMVAType = type;
  fMethodname = methodName;
  fUseBinnedVersion = useBinnedVersion;

  //Define expected number of bins
  unsigned int ExpectedNBins = 0;
  if (!fUseBinnedVersion) {
    ExpectedNBins = 1;
  } else if (type == kIDIsoRingsCombined) {
    ExpectedNBins = 5;
  } else if (type == kIsoRings)  {
    ExpectedNBins = 6;
  } else if (type == kIsoDeltaR) {
    ExpectedNBins = 4;
  } else if (type == kID) {
    ExpectedNBins = 6;
  }
  fNMVABins = ExpectedNBins;
  
  //Check number of weight files given
  if (fNMVABins != weightsfiles.size() ) {
    std::cout << "Error: Expected Number of bins = " << fNMVABins << " does not equal to weightsfiles.size() = " 
              << weightsfiles.size() << std::endl;
    assert(fNMVABins == weightsfiles.size());
  }


  //Loop over all bins
  for (unsigned int i=0;i<fNMVABins; ++i) {
  
    TMVA::Reader *tmpTMVAReader = new TMVA::Reader( "!Color:!Silent:Error" );  
    tmpTMVAReader->SetVerbose(kTRUE);

    if (type == kIDIsoRingsCombined) {
      // Pure tracking variables
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p0To0p1",         &fMVAVar_ChargedIso_DR0p0To0p1        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p1To0p2",         &fMVAVar_ChargedIso_DR0p1To0p2        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p2To0p3",         &fMVAVar_ChargedIso_DR0p2To0p3        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p3To0p4",         &fMVAVar_ChargedIso_DR0p3To0p4        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p4To0p5",         &fMVAVar_ChargedIso_DR0p4To0p5        );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p0To0p1",           &fMVAVar_GammaIso_DR0p0To0p1          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p1To0p2",           &fMVAVar_GammaIso_DR0p1To0p2          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p2To0p3",           &fMVAVar_GammaIso_DR0p2To0p3          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p3To0p4",           &fMVAVar_GammaIso_DR0p3To0p4          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p4To0p5",           &fMVAVar_GammaIso_DR0p4To0p5          );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p0To0p1",   &fMVAVar_NeutralHadronIso_DR0p0To0p1  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p1To0p2",   &fMVAVar_NeutralHadronIso_DR0p1To0p2  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p2To0p3",   &fMVAVar_NeutralHadronIso_DR0p2To0p3  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p3To0p4",   &fMVAVar_NeutralHadronIso_DR0p3To0p4  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p4To0p5",   &fMVAVar_NeutralHadronIso_DR0p4To0p5  );
      tmpTMVAReader->AddVariable( "TkNchi2",                       &fMVAVar_MuTkNchi2               );
      if (i != 4) {
        tmpTMVAReader->AddVariable( "GlobalNchi2",                 &fMVAVar_MuGlobalNchi2           );
        tmpTMVAReader->AddVariable( "NValidHits",                  &fMVAVar_MuNValidHits            );
      }
      tmpTMVAReader->AddVariable( "NTrackerHits",                  &fMVAVar_MuNTrackerHits          );
      tmpTMVAReader->AddVariable( "NPixelHits",                    &fMVAVar_MuNPixelHits            );
      tmpTMVAReader->AddVariable( "NMatches",                      &fMVAVar_MuNMatches              );
      tmpTMVAReader->AddVariable( "TrkKink",                       &fMVAVar_MuTrkKink               );      
      tmpTMVAReader->AddVariable( "SegmentCompatibility",          &fMVAVar_MuSegmentCompatibility  );      
      tmpTMVAReader->AddVariable( "CaloCompatibility",             &fMVAVar_MuCaloCompatibility     );      
      tmpTMVAReader->AddVariable( "HadEnergy",                     &fMVAVar_MuHadEnergy       );      
      tmpTMVAReader->AddVariable( "EmEnergy",                      &fMVAVar_MuEmEnergy        );      
      tmpTMVAReader->AddVariable( "HadS9Energy",                   &fMVAVar_MuHadS9Energy     );      
      tmpTMVAReader->AddVariable( "EmS9Energy",                    &fMVAVar_MuEmS9Energy      );      
      tmpTMVAReader->AddSpectator("eta",                           &fMVAVar_MuEta);
      tmpTMVAReader->AddSpectator("pt",                            &fMVAVar_MuPt);
      tmpTMVAReader->AddSpectator("typeBits",                      &fMVAVar_MuTypeBits);
    }
  
    if (type == kIsoRings) {
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p0To0p1",         &fMVAVar_ChargedIso_DR0p0To0p1        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p1To0p2",         &fMVAVar_ChargedIso_DR0p1To0p2        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p2To0p3",         &fMVAVar_ChargedIso_DR0p2To0p3        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p3To0p4",         &fMVAVar_ChargedIso_DR0p3To0p4        );
      tmpTMVAReader->AddVariable( "ChargedIso_DR0p4To0p5",         &fMVAVar_ChargedIso_DR0p4To0p5        );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p0To0p1",           &fMVAVar_GammaIso_DR0p0To0p1          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p1To0p2",           &fMVAVar_GammaIso_DR0p1To0p2          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p2To0p3",           &fMVAVar_GammaIso_DR0p2To0p3          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p3To0p4",           &fMVAVar_GammaIso_DR0p3To0p4          );
      tmpTMVAReader->AddVariable( "GammaIso_DR0p4To0p5",           &fMVAVar_GammaIso_DR0p4To0p5          );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p0To0p1",   &fMVAVar_NeutralHadronIso_DR0p0To0p1  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p1To0p2",   &fMVAVar_NeutralHadronIso_DR0p1To0p2  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p2To0p3",   &fMVAVar_NeutralHadronIso_DR0p2To0p3  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p3To0p4",   &fMVAVar_NeutralHadronIso_DR0p3To0p4  );
      tmpTMVAReader->AddVariable( "NeutralHadronIso_DR0p4To0p5",   &fMVAVar_NeutralHadronIso_DR0p4To0p5  );

    }
    
    if (type == kIsoDeltaR) {
      tmpTMVAReader->AddVariable("PFCharged",                     &fMVAVar_MuRelIsoPFCharged       );
      tmpTMVAReader->AddVariable("PFNeutral",                     &fMVAVar_MuRelIsoPFNeutral       );
      tmpTMVAReader->AddVariable("PFPhotons",                     &fMVAVar_MuRelIsoPFPhotons       );
      tmpTMVAReader->AddVariable("SumDeltaR",                     &fMVAVar_MuDeltaRSum             );
      tmpTMVAReader->AddVariable("DeltaRMean",                    &fMVAVar_MuDeltaRMean            );
      tmpTMVAReader->AddVariable("Density",                       &fMVAVar_MuDensity               );
    }
    if (type == kID) {
      tmpTMVAReader->AddVariable( "TkNchi2",                      &fMVAVar_MuTkNchi2               );
      if (i != 4) {
        tmpTMVAReader->AddVariable( "GlobalNchi2",                &fMVAVar_MuGlobalNchi2           );
        tmpTMVAReader->AddVariable( "NValidHits",                 &fMVAVar_MuNValidHits            );
      }
      tmpTMVAReader->AddVariable( "NTrackerHits",                 &fMVAVar_MuNTrackerHits          );
      tmpTMVAReader->AddVariable( "NPixelHits",                   &fMVAVar_MuNPixelHits            );
      if (i != 5) tmpTMVAReader->AddVariable( "NMatches",         &fMVAVar_MuNMatches              );
      tmpTMVAReader->AddVariable( "TrkKink",                      &fMVAVar_MuTrkKink               );      
      tmpTMVAReader->AddVariable( "SegmentCompatibility",         &fMVAVar_MuSegmentCompatibility  );      
      tmpTMVAReader->AddVariable( "CaloCompatibility",            &fMVAVar_MuCaloCompatibility     );      
      tmpTMVAReader->AddVariable( "HadEnergy",                    &fMVAVar_MuHadEnergy             );      
      tmpTMVAReader->AddVariable( "EmEnergy",                     &fMVAVar_MuEmEnergy              );      
      tmpTMVAReader->AddVariable( "HadS9Energy",                  &fMVAVar_MuHadS9Energy           );      
      tmpTMVAReader->AddVariable( "EmS9Energy",                   &fMVAVar_MuEmS9Energy            );      
    }
		
    tmpTMVAReader->BookMVA(fMethodname , weightsfiles[i]);
    std::cout << "MVABin " << i << " : MethodName = " << fMethodname 
              << " , type == " << type << " , "
              << "Load weights file : " << weightsfiles[i] 
              << std::endl;
    fTMVAReader.push_back(tmpTMVAReader);
  }
  std::cout << "Muon ID MVA Completed\n";
}


//--------------------------------------------------------------------------------------------------
unsigned int MuonMVAEstimator::GetMVABin( double eta, double pt, Bool_t isGlobal, Bool_t isTrackerMuon) const {
  
  //Default is to return the first bin
  unsigned int bin = 0;

  if (fMVAType == MuonMVAEstimator::kIsoRings) {
    if (isGlobal && isTrackerMuon) {
      if (pt < 10 && fabs(eta) < 1.479)   bin = 0;
      if (pt < 10 && fabs(eta) >= 1.479)  bin = 1;
      if (pt >= 10 && fabs(eta) < 1.479)  bin = 2;
      if (pt >= 10 && fabs(eta) >= 1.479) bin = 3;
    }
    else if (isTrackerMuon)               bin = 4;
    else if (isGlobal) 	                  bin = 5;
			
  }
		
  if (fMVAType == MuonMVAEstimator::kID) {
    if (isGlobal && isTrackerMuon) {
      if (pt < 10 && fabs(eta) < 1.479)   bin = 0;
      if (pt < 10 && fabs(eta) >= 1.479)  bin = 1;
      if (pt >= 10 && fabs(eta) < 1.479)  bin = 2;
      if (pt >= 10 && fabs(eta) >= 1.479) bin = 3;
    }
    else if (isTrackerMuon) 	          bin = 4;
    else if (isGlobal) 	                  bin = 5;
			
  }

  if (fMVAType == MuonMVAEstimator::kIDIsoRingsCombined ) {
    bin = 0;
    if (isGlobal && isTrackerMuon) {
      if (pt < 10 && fabs(eta) < 1.479)   bin = 0;
      if (pt < 10 && fabs(eta) >= 1.479)  bin = 1;
      if (pt >= 10 && fabs(eta) < 1.479)  bin = 2;
      if (pt >= 10 && fabs(eta) >= 1.479) bin = 3;        
    } 
    else if (!isGlobal && isTrackerMuon) {
      bin = 4;
    }
    else {
      cout << "Warning: Muon is not a tracker muon. Such muons are not supported. \n";
      bin = 0;
    }
  }
  if (fMVAType == MuonMVAEstimator::kIsoDeltaR){
    if (pt <  20 && fabs(eta) <  1.479) bin = 0;
    if (pt <  20 && fabs(eta) >= 1.479) bin = 1;
    if (pt >= 20 && fabs(eta) <  1.479) bin = 2;
    if (pt >= 20 && fabs(eta) >= 1.479) bin = 3;
  }
  return bin;
}

void MuonMVAEstimator::bindVariables() {

	// this binding is needed for variables that sometime diverge. 

	return;
}


Double_t MuonMVAEstimator::mvaValue_Iso(	Double_t Pt,
											Double_t Eta,
											Bool_t isGlobalMuon,
											Bool_t isTrackerMuon,
											Double_t Rho,
											MuonEffectiveArea::MuonEffectiveAreaTarget EATarget,
											Double_t ChargedIso_DR0p0To0p1,
											Double_t ChargedIso_DR0p1To0p2,
											Double_t ChargedIso_DR0p2To0p3,
											Double_t ChargedIso_DR0p3To0p4,
											Double_t ChargedIso_DR0p4To0p5,
											Double_t GammaIso_DR0p0To0p1,
											Double_t GammaIso_DR0p1To0p2,
											Double_t GammaIso_DR0p2To0p3,
											Double_t GammaIso_DR0p3To0p4,
											Double_t GammaIso_DR0p4To0p5,
											Double_t NeutralHadronIso_DR0p0To0p1,
											Double_t NeutralHadronIso_DR0p1To0p2,
											Double_t NeutralHadronIso_DR0p2To0p3,
											Double_t NeutralHadronIso_DR0p3To0p4,
											Double_t NeutralHadronIso_DR0p4To0p5,
											Bool_t printDebug) {

			if (!fisInitialized) { 
				std::cout << "Error: MuonMVAEstimator not properly initialized.\n"; 
				return -9999;
			}

			fMVAVar_ChargedIso_DR0p0To0p1   = TMath::Min((ChargedIso_DR0p0To0p1)/Pt, 2.5);
			fMVAVar_ChargedIso_DR0p1To0p2   = TMath::Min((ChargedIso_DR0p1To0p2)/Pt, 2.5);
			fMVAVar_ChargedIso_DR0p2To0p3 = TMath::Min((ChargedIso_DR0p2To0p3)/Pt, 2.5);
			fMVAVar_ChargedIso_DR0p3To0p4 = TMath::Min((ChargedIso_DR0p3To0p4)/Pt, 2.5);
			fMVAVar_ChargedIso_DR0p4To0p5 = TMath::Min((ChargedIso_DR0p4To0p5)/Pt, 2.5); 
			fMVAVar_GammaIso_DR0p0To0p1 = TMath::Max(TMath::Min((GammaIso_DR0p0To0p1 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuGammaIsoDR0p0To0p1, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_GammaIso_DR0p1To0p2 = TMath::Max(TMath::Min((GammaIso_DR0p1To0p2 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuGammaIsoDR0p1To0p2, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_GammaIso_DR0p2To0p3 = TMath::Max(TMath::Min((GammaIso_DR0p2To0p3 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuGammaIsoDR0p2To0p3, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_GammaIso_DR0p3To0p4 = TMath::Max(TMath::Min((GammaIso_DR0p3To0p4 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuGammaIsoDR0p3To0p4, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_GammaIso_DR0p4To0p5 = TMath::Max(TMath::Min((GammaIso_DR0p4To0p5 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuGammaIsoDR0p4To0p5, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_NeutralHadronIso_DR0p0To0p1 = TMath::Max(TMath::Min((NeutralHadronIso_DR0p0To0p1 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuNeutralHadronIsoDR0p0To0p1, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_NeutralHadronIso_DR0p1To0p2 = TMath::Max(TMath::Min((NeutralHadronIso_DR0p1To0p2 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuNeutralHadronIsoDR0p1To0p2, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_NeutralHadronIso_DR0p2To0p3 = TMath::Max(TMath::Min((NeutralHadronIso_DR0p2To0p3 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuNeutralHadronIsoDR0p2To0p3, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_NeutralHadronIso_DR0p3To0p4 = TMath::Max(TMath::Min((NeutralHadronIso_DR0p3To0p4 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuNeutralHadronIsoDR0p3To0p4, Eta, EATarget))/Pt, 2.5), 0.0);
			fMVAVar_NeutralHadronIso_DR0p4To0p5 = TMath::Max(TMath::Min((NeutralHadronIso_DR0p4To0p5 - Rho*MuonEffectiveArea::GetMuonEffectiveArea(MuonEffectiveArea::kMuNeutralHadronIsoDR0p4To0p5, Eta, EATarget))/Pt, 2.5), 0.0);

			// evaluate
			Double_t mva = fTMVAReader[GetMVABin(Eta,Pt,isGlobalMuon,isTrackerMuon)]->EvaluateMVA(fMethodname);

			if(printDebug) {
				cout 	<< " *** Inside the class fMethodname " << fMethodname << " fMVAType " << fMVAType << endl;
				cout  	<< "ChargedIso ( 0.0 | 0.1 | 0.2 | 0.3 | 0.4 | 0.5 ): " 
						<< fMVAVar_ChargedIso_DR0p0To0p1  << " "
					   	<< fMVAVar_ChargedIso_DR0p1To0p2  << " "
						<< fMVAVar_ChargedIso_DR0p2To0p3 << " "
					   	<< fMVAVar_ChargedIso_DR0p3To0p4 << " "
						<< fMVAVar_ChargedIso_DR0p4To0p5 << endl;
				cout  	<< "PF Gamma Iso ( 0.0 | 0.1 | 0.2 | 0.3 | 0.4 | 0.5 ): " 
						<< fMVAVar_GammaIso_DR0p0To0p1 << " "
					   	<< fMVAVar_GammaIso_DR0p1To0p2 << " "
						<< fMVAVar_GammaIso_DR0p2To0p3 << " "
					 	<< fMVAVar_GammaIso_DR0p3To0p4 << " "
					  	<< fMVAVar_GammaIso_DR0p4To0p5 << endl;
				cout  	<< "PF Neutral Hadron Iso ( 0.0 | 0.1 | 0.2 | 0.3 | 0.4 | 0.5 ): " 
						<< fMVAVar_NeutralHadronIso_DR0p0To0p1 << " "
					   	<< fMVAVar_NeutralHadronIso_DR0p1To0p2 << " "
						<< fMVAVar_NeutralHadronIso_DR0p2To0p3 << " "
						<< fMVAVar_NeutralHadronIso_DR0p3To0p4 << " "
					    << fMVAVar_NeutralHadronIso_DR0p4To0p5 << " "
					   	<< endl;
				cout 	<< " ### MVA " << mva << endl;
			}

			return mva;

}

Double_t MuonMVAEstimator::mvaValueIso( Int_t mu, Double_t rho, MuonEffectiveArea::MuonEffectiveAreaTarget EATarget, 
										std::vector<Int_t> IdentifiedEle, std::vector<Int_t> IdentifiedMu, Bool_t printDebug ) {
			
	if (!fisInitialized) { 
		std::cout << "Error: MuonMVAEstimator not properly initialized.\n"; 
		return -9999;
	}

	Double_t mvavalue = -9999.;
	if( cms2.mus_trkidx()[mu]<0 && cms2.mus_sta_d0()[mu]<0) return -9999;

/*
	double rho = 0;
	if (!(isnan(float(Rho)) || isinf(float(Rho)))) rho = Rho;
*/

	// vertex selection
	Int_t ivtx = 0;

	Double_t Pt				= 	cms2.mus_trkidx()[mu]>=0 ? cms2.mus_trk_p4()[mu].pt() : cms2.mus_sta_p4()[mu].pt() ;
	Double_t Eta			=	cms2.mus_trkidx()[mu]>=0 ? cms2.mus_trk_p4()[mu].eta() : cms2.mus_sta_p4()[mu].eta() ;
	Bool_t isGlobalMuon		=	(cms2.mus_type().at(mu)) & (1<<1); 
	Bool_t isTrackerMuon	=	(cms2.mus_type().at(mu)) & (1<<2);
	Double_t Rho			= 	rho;
	//MuonEffectiveArea::MuonEffectiveAreaTarget EATarget	= EATarget;
	
	Double_t ChargedIso_DR0p0To0p1  	= 0;
	Double_t ChargedIso_DR0p1To0p2  	= 0;
	Double_t ChargedIso_DR0p2To0p3  	= 0;
	Double_t ChargedIso_DR0p3To0p4  	= 0;
	Double_t ChargedIso_DR0p4To0p5  	= 0;
	Double_t GammaIso_DR0p0To0p1  		= 0;
	Double_t GammaIso_DR0p1To0p2  		= 0;
	Double_t GammaIso_DR0p2To0p3  		= 0;
	Double_t GammaIso_DR0p3To0p4  		= 0;
	Double_t GammaIso_DR0p4To0p5  		= 0;
	Double_t NeutralHadronIso_DR0p0To0p1  = 0;
	Double_t NeutralHadronIso_DR0p1To0p2  = 0;
	Double_t NeutralHadronIso_DR0p2To0p3  = 0;
	Double_t NeutralHadronIso_DR0p3To0p4  = 0;
	Double_t NeutralHadronIso_DR0p4To0p5  = 0;


	// Calcluate energy deposit in rings
	for(unsigned int ipf = 0; ipf < cms2.pfcands_p4().size(); ++ipf) {


		// exclude muon itself
		if ( cms2.pfcands_trkidx()[ipf]>=0 && cms2.mus_trkidx()[mu]>=0 && 
			 cms2.pfcands_trkidx()[ipf] == cms2.mus_trkidx()[mu] )  continue;

		//************************************************************
		// New Isolation Calculations
		//************************************************************
		double dr = sqrt( pow( cms2.pfcands_p4()[ipf].eta() - cms2.mus_trk_p4()[mu].eta(), 2) 
				+ pow(acos(cos(cms2.pfcands_p4()[ipf].phi() - cms2.mus_trk_p4()[mu].phi() )), 2) );
		
		if (dr < 1.0) {
			Bool_t IsLeptonFootprint = kFALSE;
			
			//************************************************************
			// Lepton Footprint Removal
			//************************************************************ 
			
			for (unsigned int iele=0; iele<IdentifiedEle.size(); iele++) {
			
				int ele = IdentifiedEle[iele]; 
				// if pf candidate matches an electron passing ID cuts, then veto it 
				// pfcands_pfelsidx : index of PFElectron 
				// pfels_elsidx : index of els matching PFElectron
				if( abs(cms2.pfcands_particleId()[ipf])==11   				&&
				    cms2.pfcands_pfelsidx()[ipf]>=0          				&&
					cms2.pfels_elsidx().at(cms2.pfcands_pfelsidx()[ipf])>=0 && 
					ele == cms2.pfels_elsidx().at(cms2.pfcands_pfelsidx()[ipf]) ) IsLeptonFootprint = true;
				if( abs(cms2.pfcands_particleId()[ipf])==11   				&&
				    cms2.pfcands_pfelsidx()[ipf]>=0          				&&
					cms2.pfels_elsidx().at(cms2.pfcands_pfelsidx()[ipf])>=0 &&
					cms2.els_trkidx()[ele] == cms2.pfcands_trkidx()[ipf] ) IsLeptonFootprint = true;
			
				//if pf candidate lies in veto regions of electron passing ID cuts, then veto it
				double tmpDR = sqrt( pow(cms2.pfcands_p4()[ipf].eta() - cms2.els_p4()[ele].eta(),2) 
									 + pow(acos(cos(cms2.pfcands_p4()[ipf].phi() - cms2.els_p4()[ele].phi())),2));
				if(	cms2.pfcands_trkidx()[ipf]>=0  && fabs(cms2.els_etaSC()[ele]) >= 1.479 
					&& tmpDR < 0.015) IsLeptonFootprint = kTRUE;
				if( translatePdgIdToType(cms2.pfcands_particleId()[ipf]) == kgamma && fabs(cms2.els_etaSC()[ele]) >= 1.479 
					&& tmpDR < 0.08) IsLeptonFootprint = kTRUE;
			}
			
			for (unsigned int imu=0; imu<IdentifiedMu.size(); imu++) {

				unsigned int idenmu = IdentifiedMu[imu]; 
				//if pf candidate matches an muon passing ID cuts, then veto it
				if ( cms2.pfcands_trkidx()[ipf]>=0 && cms2.mus_trkidx()[idenmu]>=0 && 
					 cms2.pfcands_trkidx()[ipf] == cms2.mus_trkidx()[idenmu] )  IsLeptonFootprint = true;


				//if pf candidate lies in veto regions of muon passing ID cuts, then veto it
				double tmpDR = sqrt( pow(cms2.pfcands_p4()[ipf].eta() - cms2.mus_p4()[idenmu].eta(),2) 
									 + pow(acos(cos(cms2.pfcands_p4()[ipf].phi() - cms2.mus_p4()[idenmu].phi())),2));
				if(cms2.pfcands_trkidx()[ipf]>=0 && tmpDR < 0.01) IsLeptonFootprint = kTRUE;
			}

			if( !IsLeptonFootprint ) {

				if( cms2.pfcands_trkidx()[ipf]>=0) { //Charged

					// dZ cut
					if ( (fabs( trks_dz_pv( cms2.pfcands_trkidx()[ipf], ivtx ).first 
									- dzPVmu(cms2.mus_vertex_p4()[mu], cms2.mus_trk_p4()[mu], cms2.vtxs_position()[ivtx]) ) > 0.2) ) continue;

					// Veto any PFmuon, or PFEle 
					if ( 	translatePdgIdToType(cms2.pfcands_particleId()[ipf]) == ke 
							|| translatePdgIdToType(cms2.pfcands_particleId()[ipf]) == kmu ) continue;

					// Footprint Veto	
					if (fabs(Eta) > 1.479 && dr < 0.01) continue;

					if (dr < 0.1) ChargedIso_DR0p0To0p1 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.1 && dr < 0.2) ChargedIso_DR0p1To0p2 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.2 && dr < 0.3) ChargedIso_DR0p2To0p3 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.3 && dr < 0.4) ChargedIso_DR0p3To0p4 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.4 && dr < 0.5) ChargedIso_DR0p4To0p5 += cms2.pfcands_p4()[ipf].pt();
				}    
				else if (	translatePdgIdToType(cms2.pfcands_particleId()[ipf]) == kgamma ) { //Gamma
					if (dr < 0.1) GammaIso_DR0p0To0p1 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.1 && dr < 0.2) GammaIso_DR0p1To0p2 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.2 && dr < 0.3) GammaIso_DR0p2To0p3 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.3 && dr < 0.4) GammaIso_DR0p3To0p4 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.4 && dr < 0.5) GammaIso_DR0p4To0p5 += cms2.pfcands_p4()[ipf].pt();
				}
				else { //NeutralHadron
					if (dr < 0.1) NeutralHadronIso_DR0p0To0p1 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.1 && dr < 0.2) NeutralHadronIso_DR0p1To0p2 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.2 && dr < 0.3) NeutralHadronIso_DR0p2To0p3 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.3 && dr < 0.4) NeutralHadronIso_DR0p3To0p4 += cms2.pfcands_p4()[ipf].pt();
					if (dr >= 0.4 && dr < 0.5) NeutralHadronIso_DR0p4To0p5 += cms2.pfcands_p4()[ipf].pt();
				}
			} // IsLeptonFootprint
		} // dR < 1.0
	} // loop over PF candidates


	// Get the mva value
	mvavalue 	=	MuonMVAEstimator::mvaValue_Iso(	 
									 Pt,
									 Eta,
									 isGlobalMuon,
									 isTrackerMuon,
									 Rho,
									 EATarget,
									 ChargedIso_DR0p0To0p1,
									 ChargedIso_DR0p1To0p2,
									 ChargedIso_DR0p2To0p3,
									 ChargedIso_DR0p3To0p4,
									 ChargedIso_DR0p4To0p5,
									 GammaIso_DR0p0To0p1,
									 GammaIso_DR0p1To0p2,
									 GammaIso_DR0p2To0p3,
									 GammaIso_DR0p3To0p4,
									 GammaIso_DR0p4To0p5,
									 NeutralHadronIso_DR0p0To0p1,
									 NeutralHadronIso_DR0p1To0p2,
									 NeutralHadronIso_DR0p2To0p3,
									 NeutralHadronIso_DR0p3To0p4,
									 NeutralHadronIso_DR0p4To0p5,
									 printDebug);

	return mvavalue; 
	
}


