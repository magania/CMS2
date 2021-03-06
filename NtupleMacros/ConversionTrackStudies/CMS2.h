// -*- C++ -*-
#ifndef CMS2_H
#define CMS2_H
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include <vector> 

using namespace std; 
class CMS2 {
private: 
protected: 
	unsigned int index;
	TString evt_CMS2tag_;
	TBranch *evt_CMS2tag_branch;
	bool evt_CMS2tag_isLoaded;
	TString evt_dataset_;
	TBranch *evt_dataset_branch;
	bool evt_dataset_isLoaded;
	vector<TString> hlt_trigNames_;
	TBranch *hlt_trigNames_branch;
	bool hlt_trigNames_isLoaded;
	vector<TString> l1_trigNames_;
	TBranch *l1_trigNames_branch;
	bool l1_trigNames_isLoaded;
	vector<double> jets_closestElectron_DR_;
	TBranch *jets_closestElectron_DR_branch;
	bool jets_closestElectron_DR_isLoaded;
	vector<double> jets_closestMuon_DR_;
	TBranch *jets_closestMuon_DR_branch;
	bool jets_closestMuon_DR_isLoaded;
	float evt_bs_Xwidth_;
	TBranch *evt_bs_Xwidth_branch;
	bool evt_bs_Xwidth_isLoaded;
	float evt_bs_XwidthErr_;
	TBranch *evt_bs_XwidthErr_branch;
	bool evt_bs_XwidthErr_isLoaded;
	float evt_bs_Ywidth_;
	TBranch *evt_bs_Ywidth_branch;
	bool evt_bs_Ywidth_isLoaded;
	float evt_bs_YwidthErr_;
	TBranch *evt_bs_YwidthErr_branch;
	bool evt_bs_YwidthErr_isLoaded;
	float evt_bs_dxdz_;
	TBranch *evt_bs_dxdz_branch;
	bool evt_bs_dxdz_isLoaded;
	float evt_bs_dxdzErr_;
	TBranch *evt_bs_dxdzErr_branch;
	bool evt_bs_dxdzErr_isLoaded;
	float evt_bs_dydz_;
	TBranch *evt_bs_dydz_branch;
	bool evt_bs_dydz_isLoaded;
	float evt_bs_dydzErr_;
	TBranch *evt_bs_dydzErr_branch;
	bool evt_bs_dydzErr_isLoaded;
	float evt_bs_sigmaZ_;
	TBranch *evt_bs_sigmaZ_branch;
	bool evt_bs_sigmaZ_isLoaded;
	float evt_bs_sigmaZErr_;
	TBranch *evt_bs_sigmaZErr_branch;
	bool evt_bs_sigmaZErr_isLoaded;
	float evt_bs_xErr_;
	TBranch *evt_bs_xErr_branch;
	bool evt_bs_xErr_isLoaded;
	float evt_bs_yErr_;
	TBranch *evt_bs_yErr_branch;
	bool evt_bs_yErr_isLoaded;
	float evt_bs_zErr_;
	TBranch *evt_bs_zErr_branch;
	bool evt_bs_zErr_isLoaded;
	float evt_bField_;
	TBranch *evt_bField_branch;
	bool evt_bField_isLoaded;
	float hcalnoise_eventChargeFraction_;
	TBranch *hcalnoise_eventChargeFraction_branch;
	bool hcalnoise_eventChargeFraction_isLoaded;
	float hcalnoise_eventEMEnergy_;
	TBranch *hcalnoise_eventEMEnergy_branch;
	bool hcalnoise_eventEMEnergy_isLoaded;
	float hcalnoise_eventEMFraction_;
	TBranch *hcalnoise_eventEMFraction_branch;
	bool hcalnoise_eventEMFraction_isLoaded;
	float hcalnoise_eventHadEnergy_;
	TBranch *hcalnoise_eventHadEnergy_branch;
	bool hcalnoise_eventHadEnergy_isLoaded;
	float hcalnoise_eventTrackEnergy_;
	TBranch *hcalnoise_eventTrackEnergy_branch;
	bool hcalnoise_eventTrackEnergy_isLoaded;
	float hcalnoise_max10GeVHitTime_;
	TBranch *hcalnoise_max10GeVHitTime_branch;
	bool hcalnoise_max10GeVHitTime_isLoaded;
	float hcalnoise_max25GeVHitTime_;
	TBranch *hcalnoise_max25GeVHitTime_branch;
	bool hcalnoise_max25GeVHitTime_isLoaded;
	float hcalnoise_min10GeVHitTime_;
	TBranch *hcalnoise_min10GeVHitTime_branch;
	bool hcalnoise_min10GeVHitTime_isLoaded;
	float hcalnoise_min25GeVHitTime_;
	TBranch *hcalnoise_min25GeVHitTime_branch;
	bool hcalnoise_min25GeVHitTime_isLoaded;
	float hcalnoise_minE10TS_;
	TBranch *hcalnoise_minE10TS_branch;
	bool hcalnoise_minE10TS_isLoaded;
	float hcalnoise_minE2Over10TS_;
	TBranch *hcalnoise_minE2Over10TS_branch;
	bool hcalnoise_minE2Over10TS_isLoaded;
	float hcalnoise_minE2TS_;
	TBranch *hcalnoise_minE2TS_branch;
	bool hcalnoise_minE2TS_isLoaded;
	float hcalnoise_minHPDEMF_;
	TBranch *hcalnoise_minHPDEMF_branch;
	bool hcalnoise_minHPDEMF_isLoaded;
	float hcalnoise_minRBXEMF_;
	TBranch *hcalnoise_minRBXEMF_branch;
	bool hcalnoise_minRBXEMF_isLoaded;
	float hcalnoise_rms10GeVHitTime_;
	TBranch *hcalnoise_rms10GeVHitTime_branch;
	bool hcalnoise_rms10GeVHitTime_isLoaded;
	float hcalnoise_rms25GeVHitTime_;
	TBranch *hcalnoise_rms25GeVHitTime_branch;
	bool hcalnoise_rms25GeVHitTime_isLoaded;
	float l1_met_etTot_;
	TBranch *l1_met_etTot_branch;
	bool l1_met_etTot_isLoaded;
	float l1_met_met_;
	TBranch *l1_met_met_branch;
	bool l1_met_met_isLoaded;
	float l1_mht_htTot_;
	TBranch *l1_mht_htTot_branch;
	bool l1_mht_htTot_isLoaded;
	float l1_mht_mht_;
	TBranch *l1_mht_mht_branch;
	bool l1_mht_mht_isLoaded;
	float evt_ecalendcapm_met_;
	TBranch *evt_ecalendcapm_met_branch;
	bool evt_ecalendcapm_met_isLoaded;
	float evt_ecalendcapm_metPhi_;
	TBranch *evt_ecalendcapm_metPhi_branch;
	bool evt_ecalendcapm_metPhi_isLoaded;
	float evt_ecalendcapp_met_;
	TBranch *evt_ecalendcapp_met_branch;
	bool evt_ecalendcapp_met_isLoaded;
	float evt_ecalendcapp_metPhi_;
	TBranch *evt_ecalendcapp_metPhi_branch;
	bool evt_ecalendcapp_metPhi_isLoaded;
	float evt_ecalmet_;
	TBranch *evt_ecalmet_branch;
	bool evt_ecalmet_isLoaded;
	float evt_ecalmetPhi_;
	TBranch *evt_ecalmetPhi_branch;
	bool evt_ecalmetPhi_isLoaded;
	float evt_endcapm_met_;
	TBranch *evt_endcapm_met_branch;
	bool evt_endcapm_met_isLoaded;
	float evt_endcapm_metPhi_;
	TBranch *evt_endcapm_metPhi_branch;
	bool evt_endcapm_metPhi_isLoaded;
	float evt_endcapp_met_;
	TBranch *evt_endcapp_met_branch;
	bool evt_endcapp_met_isLoaded;
	float evt_endcapp_metPhi_;
	TBranch *evt_endcapp_metPhi_branch;
	bool evt_endcapp_metPhi_isLoaded;
	float evt_hcalendcapm_met_;
	TBranch *evt_hcalendcapm_met_branch;
	bool evt_hcalendcapm_met_isLoaded;
	float evt_hcalendcapm_metPhi_;
	TBranch *evt_hcalendcapm_metPhi_branch;
	bool evt_hcalendcapm_metPhi_isLoaded;
	float evt_hcalendcapp_met_;
	TBranch *evt_hcalendcapp_met_branch;
	bool evt_hcalendcapp_met_isLoaded;
	float evt_hcalendcapp_metPhi_;
	TBranch *evt_hcalendcapp_metPhi_branch;
	bool evt_hcalendcapp_metPhi_isLoaded;
	float evt_hcalmet_;
	TBranch *evt_hcalmet_branch;
	bool evt_hcalmet_isLoaded;
	float evt_hcalmetPhi_;
	TBranch *evt_hcalmetPhi_branch;
	bool evt_hcalmetPhi_isLoaded;
	float evt_met_;
	TBranch *evt_met_branch;
	bool evt_met_isLoaded;
	float evt_metHO_;
	TBranch *evt_metHO_branch;
	bool evt_metHO_isLoaded;
	float evt_metHOPhi_;
	TBranch *evt_metHOPhi_branch;
	bool evt_metHOPhi_isLoaded;
	float evt_metHOSig_;
	TBranch *evt_metHOSig_branch;
	bool evt_metHOSig_isLoaded;
	float evt_metMuonCorr_;
	TBranch *evt_metMuonCorr_branch;
	bool evt_metMuonCorr_isLoaded;
	float evt_metMuonCorrPhi_;
	TBranch *evt_metMuonCorrPhi_branch;
	bool evt_metMuonCorrPhi_isLoaded;
	float evt_metMuonCorrSig_;
	TBranch *evt_metMuonCorrSig_branch;
	bool evt_metMuonCorrSig_isLoaded;
	float evt_metMuonJESCorr_;
	TBranch *evt_metMuonJESCorr_branch;
	bool evt_metMuonJESCorr_isLoaded;
	float evt_metMuonJESCorrPhi_;
	TBranch *evt_metMuonJESCorrPhi_branch;
	bool evt_metMuonJESCorrPhi_isLoaded;
	float evt_metMuonJESCorrSig_;
	TBranch *evt_metMuonJESCorrSig_branch;
	bool evt_metMuonJESCorrSig_isLoaded;
	float evt_metNoHF_;
	TBranch *evt_metNoHF_branch;
	bool evt_metNoHF_isLoaded;
	float evt_metNoHFHO_;
	TBranch *evt_metNoHFHO_branch;
	bool evt_metNoHFHO_isLoaded;
	float evt_metNoHFHOPhi_;
	TBranch *evt_metNoHFHOPhi_branch;
	bool evt_metNoHFHOPhi_isLoaded;
	float evt_metNoHFHOSig_;
	TBranch *evt_metNoHFHOSig_branch;
	bool evt_metNoHFHOSig_isLoaded;
	float evt_metNoHFPhi_;
	TBranch *evt_metNoHFPhi_branch;
	bool evt_metNoHFPhi_isLoaded;
	float evt_metNoHFSig_;
	TBranch *evt_metNoHFSig_branch;
	bool evt_metNoHFSig_isLoaded;
	float evt_metOpt_;
	TBranch *evt_metOpt_branch;
	bool evt_metOpt_isLoaded;
	float evt_metOptHO_;
	TBranch *evt_metOptHO_branch;
	bool evt_metOptHO_isLoaded;
	float evt_metOptHOPhi_;
	TBranch *evt_metOptHOPhi_branch;
	bool evt_metOptHOPhi_isLoaded;
	float evt_metOptHOSig_;
	TBranch *evt_metOptHOSig_branch;
	bool evt_metOptHOSig_isLoaded;
	float evt_metOptNoHF_;
	TBranch *evt_metOptNoHF_branch;
	bool evt_metOptNoHF_isLoaded;
	float evt_metOptNoHFHO_;
	TBranch *evt_metOptNoHFHO_branch;
	bool evt_metOptNoHFHO_isLoaded;
	float evt_metOptNoHFHOPhi_;
	TBranch *evt_metOptNoHFHOPhi_branch;
	bool evt_metOptNoHFHOPhi_isLoaded;
	float evt_metOptNoHFHOSig_;
	TBranch *evt_metOptNoHFHOSig_branch;
	bool evt_metOptNoHFHOSig_isLoaded;
	float evt_metOptNoHFPhi_;
	TBranch *evt_metOptNoHFPhi_branch;
	bool evt_metOptNoHFPhi_isLoaded;
	float evt_metOptNoHFSig_;
	TBranch *evt_metOptNoHFSig_branch;
	bool evt_metOptNoHFSig_isLoaded;
	float evt_metOptPhi_;
	TBranch *evt_metOptPhi_branch;
	bool evt_metOptPhi_isLoaded;
	float evt_metOptSig_;
	TBranch *evt_metOptSig_branch;
	bool evt_metOptSig_isLoaded;
	float evt_metPhi_;
	TBranch *evt_metPhi_branch;
	bool evt_metPhi_isLoaded;
	float evt_metSig_;
	TBranch *evt_metSig_branch;
	bool evt_metSig_isLoaded;
	float evt_sumet_;
	TBranch *evt_sumet_branch;
	bool evt_sumet_isLoaded;
	float evt_sumetHO_;
	TBranch *evt_sumetHO_branch;
	bool evt_sumetHO_isLoaded;
	float evt_sumetMuonCorr_;
	TBranch *evt_sumetMuonCorr_branch;
	bool evt_sumetMuonCorr_isLoaded;
	float evt_sumetNoHF_;
	TBranch *evt_sumetNoHF_branch;
	bool evt_sumetNoHF_isLoaded;
	float evt_sumetNoHFHO_;
	TBranch *evt_sumetNoHFHO_branch;
	bool evt_sumetNoHFHO_isLoaded;
	float evt_sumetOpt_;
	TBranch *evt_sumetOpt_branch;
	bool evt_sumetOpt_isLoaded;
	float evt_sumetOptHO_;
	TBranch *evt_sumetOptHO_branch;
	bool evt_sumetOptHO_isLoaded;
	float evt_sumetOptNoHF_;
	TBranch *evt_sumetOptNoHF_branch;
	bool evt_sumetOptNoHF_isLoaded;
	float evt_sumetOptNoHFHO_;
	TBranch *evt_sumetOptNoHFHO_branch;
	bool evt_sumetOptNoHFHO_isLoaded;
	float evt_pfmet_;
	TBranch *evt_pfmet_branch;
	bool evt_pfmet_isLoaded;
	float evt_pfmetPhi_;
	TBranch *evt_pfmetPhi_branch;
	bool evt_pfmetPhi_isLoaded;
	float evt_pfmetSig_;
	TBranch *evt_pfmetSig_branch;
	bool evt_pfmetSig_isLoaded;
	float evt_pfsumet_;
	TBranch *evt_pfsumet_branch;
	bool evt_pfsumet_isLoaded;
	float evt_tcmet_;
	TBranch *evt_tcmet_branch;
	bool evt_tcmet_isLoaded;
	float evt_tcmetPhi_;
	TBranch *evt_tcmetPhi_branch;
	bool evt_tcmetPhi_isLoaded;
	float evt_tcmetSig_;
	TBranch *evt_tcmetSig_branch;
	bool evt_tcmetSig_isLoaded;
	float evt_tcsumet_;
	TBranch *evt_tcsumet_branch;
	bool evt_tcsumet_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  evt_bsp4_;
	TBranch *evt_bsp4_branch;
	bool evt_bsp4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  l1_met_p4_;
	TBranch *l1_met_p4_branch;
	bool l1_met_p4_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  l1_mht_p4_;
	TBranch *l1_mht_p4_branch;
	bool l1_mht_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_inner_position_;
	TBranch *els_inner_position_branch;
	bool els_inner_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_outer_position_;
	TBranch *els_outer_position_branch;
	bool els_outer_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4_;
	TBranch *els_p4_branch;
	bool els_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4In_;
	TBranch *els_p4In_branch;
	bool els_p4In_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4Out_;
	TBranch *els_p4Out_branch;
	bool els_p4Out_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_trk_p4_;
	TBranch *els_trk_p4_branch;
	bool els_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_vertex_p4_;
	TBranch *els_vertex_p4_branch;
	bool els_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jets_p4_;
	TBranch *jets_p4_branch;
	bool jets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jets_vertex_p4_;
	TBranch *jets_vertex_p4_branch;
	bool jets_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > jpts_p4_;
	TBranch *jpts_p4_branch;
	bool jpts_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_emiso_p4_;
	TBranch *l1_emiso_p4_branch;
	bool l1_emiso_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_emnoiso_p4_;
	TBranch *l1_emnoiso_p4_branch;
	bool l1_emnoiso_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_jetsc_p4_;
	TBranch *l1_jetsc_p4_branch;
	bool l1_jetsc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_jetsf_p4_;
	TBranch *l1_jetsf_p4_branch;
	bool l1_jetsf_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_jetst_p4_;
	TBranch *l1_jetst_p4_branch;
	bool l1_jetst_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > l1_mus_p4_;
	TBranch *l1_mus_p4_branch;
	bool l1_mus_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fitdefault_p4_;
	TBranch *mus_fitdefault_p4_branch;
	bool mus_fitdefault_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fitfirsthit_p4_;
	TBranch *mus_fitfirsthit_p4_branch;
	bool mus_fitfirsthit_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fitpicky_p4_;
	TBranch *mus_fitpicky_p4_branch;
	bool mus_fitpicky_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_fittev_p4_;
	TBranch *mus_fittev_p4_branch;
	bool mus_fittev_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_outerPos_p4_;
	TBranch *mus_gfit_outerPos_p4_branch;
	bool mus_gfit_outerPos_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_p4_;
	TBranch *mus_gfit_p4_branch;
	bool mus_gfit_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_vertex_p4_;
	TBranch *mus_gfit_vertex_p4_branch;
	bool mus_gfit_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_p4_;
	TBranch *mus_p4_branch;
	bool mus_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_sta_p4_;
	TBranch *mus_sta_p4_branch;
	bool mus_sta_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_sta_vertex_p4_;
	TBranch *mus_sta_vertex_p4_branch;
	bool mus_sta_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_trk_p4_;
	TBranch *mus_trk_p4_branch;
	bool mus_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_vertex_p4_;
	TBranch *mus_vertex_p4_branch;
	bool mus_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_p4_;
	TBranch *pfjets_p4_branch;
	bool pfjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > photons_p4_;
	TBranch *photons_p4_branch;
	bool photons_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > ran_trksecalp4_;
	TBranch *ran_trksecalp4_branch;
	bool ran_trksecalp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > ran_trksp4_;
	TBranch *ran_trksp4_branch;
	bool ran_trksp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scs_p4_;
	TBranch *scs_p4_branch;
	bool scs_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scs_pos_p4_;
	TBranch *scs_pos_p4_branch;
	bool scs_pos_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scs_vtx_p4_;
	TBranch *scs_vtx_p4_branch;
	bool scs_vtx_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scjets_p4_;
	TBranch *scjets_p4_branch;
	bool scjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > scjets_vertex_p4_;
	TBranch *scjets_vertex_p4_branch;
	bool scjets_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_inner_position_;
	TBranch *trks_inner_position_branch;
	bool trks_inner_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_outer_p4_;
	TBranch *trks_outer_p4_branch;
	bool trks_outer_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_outer_position_;
	TBranch *trks_outer_position_branch;
	bool trks_outer_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_trk_p4_;
	TBranch *trks_trk_p4_branch;
	bool trks_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trks_vertex_p4_;
	TBranch *trks_vertex_p4_branch;
	bool trks_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > trkjets_p4_;
	TBranch *trkjets_p4_branch;
	bool trkjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > vtxs_position_;
	TBranch *vtxs_position_branch;
	bool vtxs_position_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > hlt_trigObjs_p4_;
	TBranch *hlt_trigObjs_p4_branch;
	bool hlt_trigObjs_p4_isLoaded;
	vector<float> evt_covMatrix_;
	TBranch *evt_covMatrix_branch;
	bool evt_covMatrix_isLoaded;
	vector<float> twrs_ecalTime_;
	TBranch *twrs_ecalTime_branch;
	bool twrs_ecalTime_isLoaded;
	vector<float> twrs_emEnergy_;
	TBranch *twrs_emEnergy_branch;
	bool twrs_emEnergy_isLoaded;
	vector<float> twrs_emEt_;
	TBranch *twrs_emEt_branch;
	bool twrs_emEt_isLoaded;
	vector<float> twrs_emEtcorr_;
	TBranch *twrs_emEtcorr_branch;
	bool twrs_emEtcorr_isLoaded;
	vector<float> twrs_eta_;
	TBranch *twrs_eta_branch;
	bool twrs_eta_isLoaded;
	vector<float> twrs_etcorr_;
	TBranch *twrs_etcorr_branch;
	bool twrs_etcorr_isLoaded;
	vector<float> twrs_hadEnergy_;
	TBranch *twrs_hadEnergy_branch;
	bool twrs_hadEnergy_isLoaded;
	vector<float> twrs_hadEt_;
	TBranch *twrs_hadEt_branch;
	bool twrs_hadEt_isLoaded;
	vector<float> twrs_hadEtcorr_;
	TBranch *twrs_hadEtcorr_branch;
	bool twrs_hadEtcorr_isLoaded;
	vector<float> twrs_hcalTime_;
	TBranch *twrs_hcalTime_branch;
	bool twrs_hcalTime_isLoaded;
	vector<float> twrs_outerEnergy_;
	TBranch *twrs_outerEnergy_branch;
	bool twrs_outerEnergy_isLoaded;
	vector<float> twrs_outerEt_;
	TBranch *twrs_outerEt_branch;
	bool twrs_outerEt_isLoaded;
	vector<float> twrs_outerEtcorr_;
	TBranch *twrs_outerEtcorr_branch;
	bool twrs_outerEtcorr_isLoaded;
	vector<float> twrs_pcorr_;
	TBranch *twrs_pcorr_branch;
	bool twrs_pcorr_isLoaded;
	vector<float> twrs_phi_;
	TBranch *twrs_phi_branch;
	bool twrs_phi_isLoaded;
	vector<float> els_ecalJuraIso_;
	TBranch *els_ecalJuraIso_branch;
	bool els_ecalJuraIso_isLoaded;
	vector<float> els_ecalJuraTowerIso_;
	TBranch *els_ecalJuraTowerIso_branch;
	bool els_ecalJuraTowerIso_isLoaded;
	vector<float> els_hcalConeIso_;
	TBranch *els_hcalConeIso_branch;
	bool els_hcalConeIso_isLoaded;
	vector<float> els_tkJuraIso_;
	TBranch *els_tkJuraIso_branch;
	bool els_tkJuraIso_isLoaded;
	vector<float> els_jetdr_;
	TBranch *els_jetdr_branch;
	bool els_jetdr_isLoaded;
	vector<float> els_musdr_;
	TBranch *els_musdr_branch;
	bool els_musdr_isLoaded;
	vector<float> els_hcalDepth1OverEcal_;
	TBranch *els_hcalDepth1OverEcal_branch;
	bool els_hcalDepth1OverEcal_isLoaded;
	vector<float> els_hcalDepth1TowerSumEt_;
	TBranch *els_hcalDepth1TowerSumEt_branch;
	bool els_hcalDepth1TowerSumEt_isLoaded;
	vector<float> els_hcalDepth1TowerSumEt04_;
	TBranch *els_hcalDepth1TowerSumEt04_branch;
	bool els_hcalDepth1TowerSumEt04_isLoaded;
	vector<float> els_hcalDepth2OverEcal_;
	TBranch *els_hcalDepth2OverEcal_branch;
	bool els_hcalDepth2OverEcal_isLoaded;
	vector<float> els_hcalDepth2TowerSumEt_;
	TBranch *els_hcalDepth2TowerSumEt_branch;
	bool els_hcalDepth2TowerSumEt_isLoaded;
	vector<float> els_hcalDepth2TowerSumEt04_;
	TBranch *els_hcalDepth2TowerSumEt04_branch;
	bool els_hcalDepth2TowerSumEt04_isLoaded;
	vector<float> els_chi2_;
	TBranch *els_chi2_branch;
	bool els_chi2_isLoaded;
	vector<float> els_conv_dcot_;
	TBranch *els_conv_dcot_branch;
	bool els_conv_dcot_isLoaded;
	vector<float> els_conv_dist_;
	TBranch *els_conv_dist_branch;
	bool els_conv_dist_isLoaded;
	vector<float> els_d0_;
	TBranch *els_d0_branch;
	bool els_d0_isLoaded;
	vector<float> els_d0Err_;
	TBranch *els_d0Err_branch;
	bool els_d0Err_isLoaded;
	vector<float> els_d0corr_;
	TBranch *els_d0corr_branch;
	bool els_d0corr_isLoaded;
	vector<float> els_dEtaIn_;
	TBranch *els_dEtaIn_branch;
	bool els_dEtaIn_isLoaded;
	vector<float> els_dEtaOut_;
	TBranch *els_dEtaOut_branch;
	bool els_dEtaOut_isLoaded;
	vector<float> els_dPhiIn_;
	TBranch *els_dPhiIn_branch;
	bool els_dPhiIn_isLoaded;
	vector<float> els_dPhiInPhiOut_;
	TBranch *els_dPhiInPhiOut_branch;
	bool els_dPhiInPhiOut_isLoaded;
	vector<float> els_dPhiOut_;
	TBranch *els_dPhiOut_branch;
	bool els_dPhiOut_isLoaded;
	vector<float> els_deltaEtaEleClusterTrackAtCalo_;
	TBranch *els_deltaEtaEleClusterTrackAtCalo_branch;
	bool els_deltaEtaEleClusterTrackAtCalo_isLoaded;
	vector<float> els_deltaPhiEleClusterTrackAtCalo_;
	TBranch *els_deltaPhiEleClusterTrackAtCalo_branch;
	bool els_deltaPhiEleClusterTrackAtCalo_isLoaded;
	vector<float> els_e1x5_;
	TBranch *els_e1x5_branch;
	bool els_e1x5_isLoaded;
	vector<float> els_e2x5Max_;
	TBranch *els_e2x5Max_branch;
	bool els_e2x5Max_isLoaded;
	vector<float> els_e3x3_;
	TBranch *els_e3x3_branch;
	bool els_e3x3_isLoaded;
	vector<float> els_e5x5_;
	TBranch *els_e5x5_branch;
	bool els_e5x5_isLoaded;
	vector<float> els_eMax_;
	TBranch *els_eMax_branch;
	bool els_eMax_isLoaded;
	vector<float> els_eOverPIn_;
	TBranch *els_eOverPIn_branch;
	bool els_eOverPIn_isLoaded;
	vector<float> els_eOverPOut_;
	TBranch *els_eOverPOut_branch;
	bool els_eOverPOut_isLoaded;
	vector<float> els_eSC_;
	TBranch *els_eSC_branch;
	bool els_eSC_isLoaded;
	vector<float> els_eSCPresh_;
	TBranch *els_eSCPresh_branch;
	bool els_eSCPresh_isLoaded;
	vector<float> els_eSCRaw_;
	TBranch *els_eSCRaw_branch;
	bool els_eSCRaw_isLoaded;
	vector<float> els_eSeed_;
	TBranch *els_eSeed_branch;
	bool els_eSeed_isLoaded;
	vector<float> els_eSeedOverPIn_;
	TBranch *els_eSeedOverPIn_branch;
	bool els_eSeedOverPIn_isLoaded;
	vector<float> els_eSeedOverPOut_;
	TBranch *els_eSeedOverPOut_branch;
	bool els_eSeedOverPOut_isLoaded;
	vector<float> els_ecalEnergy_;
	TBranch *els_ecalEnergy_branch;
	bool els_ecalEnergy_isLoaded;
	vector<float> els_ecalEnergyError_;
	TBranch *els_ecalEnergyError_branch;
	bool els_ecalEnergyError_isLoaded;
	vector<float> els_ecalIso_;
	TBranch *els_ecalIso_branch;
	bool els_ecalIso_isLoaded;
	vector<float> els_ecalIso04_;
	TBranch *els_ecalIso04_branch;
	bool els_ecalIso04_isLoaded;
	vector<float> els_egamma_looseId_;
	TBranch *els_egamma_looseId_branch;
	bool els_egamma_looseId_isLoaded;
	vector<float> els_egamma_robustHighEnergy_;
	TBranch *els_egamma_robustHighEnergy_branch;
	bool els_egamma_robustHighEnergy_isLoaded;
	vector<float> els_egamma_robustLooseId_;
	TBranch *els_egamma_robustLooseId_branch;
	bool els_egamma_robustLooseId_isLoaded;
	vector<float> els_egamma_robustTightId_;
	TBranch *els_egamma_robustTightId_branch;
	bool els_egamma_robustTightId_isLoaded;
	vector<float> els_egamma_tightId_;
	TBranch *els_egamma_tightId_branch;
	bool els_egamma_tightId_isLoaded;
	vector<float> els_electronMomentumError_;
	TBranch *els_electronMomentumError_branch;
	bool els_electronMomentumError_isLoaded;
	vector<float> els_etaErr_;
	TBranch *els_etaErr_branch;
	bool els_etaErr_isLoaded;
	vector<float> els_etaSC_;
	TBranch *els_etaSC_branch;
	bool els_etaSC_isLoaded;
	vector<float> els_fbrem_;
	TBranch *els_fbrem_branch;
	bool els_fbrem_isLoaded;
	vector<float> els_hOverE_;
	TBranch *els_hOverE_branch;
	bool els_hOverE_isLoaded;
	vector<float> els_hcalIso_;
	TBranch *els_hcalIso_branch;
	bool els_hcalIso_isLoaded;
	vector<float> els_hcalIso04_;
	TBranch *els_hcalIso04_branch;
	bool els_hcalIso04_isLoaded;
	vector<float> els_layer1_charge_;
	TBranch *els_layer1_charge_branch;
	bool els_layer1_charge_isLoaded;
	vector<float> els_ndof_;
	TBranch *els_ndof_branch;
	bool els_ndof_isLoaded;
	vector<float> els_phiErr_;
	TBranch *els_phiErr_branch;
	bool els_phiErr_isLoaded;
	vector<float> els_phiSC_;
	TBranch *els_phiSC_branch;
	bool els_phiSC_isLoaded;
	vector<float> els_ptErr_;
	TBranch *els_ptErr_branch;
	bool els_ptErr_isLoaded;
	vector<float> els_sigmaEtaEta_;
	TBranch *els_sigmaEtaEta_branch;
	bool els_sigmaEtaEta_isLoaded;
	vector<float> els_sigmaIEtaIEta_;
	TBranch *els_sigmaIEtaIEta_branch;
	bool els_sigmaIEtaIEta_isLoaded;
	vector<float> els_sigmaIPhiIPhi_;
	TBranch *els_sigmaIPhiIPhi_branch;
	bool els_sigmaIPhiIPhi_isLoaded;
	vector<float> els_sigmaPhiPhi_;
	TBranch *els_sigmaPhiPhi_branch;
	bool els_sigmaPhiPhi_isLoaded;
	vector<float> els_tkIso_;
	TBranch *els_tkIso_branch;
	bool els_tkIso_isLoaded;
	vector<float> els_tkIso04_;
	TBranch *els_tkIso04_branch;
	bool els_tkIso04_isLoaded;
	vector<float> els_trackMomentumError_;
	TBranch *els_trackMomentumError_branch;
	bool els_trackMomentumError_isLoaded;
	vector<float> els_trkdr_;
	TBranch *els_trkdr_branch;
	bool els_trkdr_isLoaded;
	vector<float> els_trkshFrac_;
	TBranch *els_trkshFrac_branch;
	bool els_trkshFrac_isLoaded;
	vector<float> els_z0_;
	TBranch *els_z0_branch;
	bool els_z0_isLoaded;
	vector<float> els_z0Err_;
	TBranch *els_z0Err_branch;
	bool els_z0Err_isLoaded;
	vector<float> els_z0corr_;
	TBranch *els_z0corr_branch;
	bool els_z0corr_isLoaded;
	vector<float> jets_cor_;
	TBranch *jets_cor_branch;
	bool jets_cor_isLoaded;
	vector<float> jets_emFrac_;
	TBranch *jets_emFrac_branch;
	bool jets_emFrac_isLoaded;
	vector<float> jets_fHPD_;
	TBranch *jets_fHPD_branch;
	bool jets_fHPD_isLoaded;
	vector<float> jets_fRBX_;
	TBranch *jets_fRBX_branch;
	bool jets_fRBX_isLoaded;
	vector<float> jets_fSubDetector1_;
	TBranch *jets_fSubDetector1_branch;
	bool jets_fSubDetector1_isLoaded;
	vector<float> jets_fSubDetector2_;
	TBranch *jets_fSubDetector2_branch;
	bool jets_fSubDetector2_isLoaded;
	vector<float> jets_fSubDetector3_;
	TBranch *jets_fSubDetector3_branch;
	bool jets_fSubDetector3_isLoaded;
	vector<float> jets_fSubDetector4_;
	TBranch *jets_fSubDetector4_branch;
	bool jets_fSubDetector4_isLoaded;
	vector<float> jets_n90Hits_;
	TBranch *jets_n90Hits_branch;
	bool jets_n90Hits_isLoaded;
	vector<float> jets_nECALTowers_;
	TBranch *jets_nECALTowers_branch;
	bool jets_nECALTowers_isLoaded;
	vector<float> jets_nHCALTowers_;
	TBranch *jets_nHCALTowers_branch;
	bool jets_nHCALTowers_isLoaded;
	vector<float> jets_restrictedEMF_;
	TBranch *jets_restrictedEMF_branch;
	bool jets_restrictedEMF_isLoaded;
	vector<float> jpts_emFrac_;
	TBranch *jpts_emFrac_branch;
	bool jpts_emFrac_isLoaded;
	vector<float> evt_ecalmet_etaslice_;
	TBranch *evt_ecalmet_etaslice_branch;
	bool evt_ecalmet_etaslice_isLoaded;
	vector<float> evt_ecalmet_etaslicePhi_;
	TBranch *evt_ecalmet_etaslicePhi_branch;
	bool evt_ecalmet_etaslicePhi_isLoaded;
	vector<float> evt_hcalmet_etaslice_;
	TBranch *evt_hcalmet_etaslice_branch;
	bool evt_hcalmet_etaslice_isLoaded;
	vector<float> evt_hcalmet_etaslicePhi_;
	TBranch *evt_hcalmet_etaslicePhi_branch;
	bool evt_hcalmet_etaslicePhi_isLoaded;
	vector<float> evt_towermet_etaslice_;
	TBranch *evt_towermet_etaslice_branch;
	bool evt_towermet_etaslice_isLoaded;
	vector<float> evt_towermet_etaslicePhi_;
	TBranch *evt_towermet_etaslicePhi_branch;
	bool evt_towermet_etaslicePhi_isLoaded;
	vector<float> mus_met_deltax_;
	TBranch *mus_met_deltax_branch;
	bool mus_met_deltax_isLoaded;
	vector<float> mus_met_deltay_;
	TBranch *mus_met_deltay_branch;
	bool mus_met_deltay_isLoaded;
	vector<float> mus_eledr_;
	TBranch *mus_eledr_branch;
	bool mus_eledr_isLoaded;
	vector<float> mus_jetdr_;
	TBranch *mus_jetdr_branch;
	bool mus_jetdr_isLoaded;
	vector<float> mus_caloCompatibility_;
	TBranch *mus_caloCompatibility_branch;
	bool mus_caloCompatibility_isLoaded;
	vector<float> mus_chi2_;
	TBranch *mus_chi2_branch;
	bool mus_chi2_isLoaded;
	vector<float> mus_d0_;
	TBranch *mus_d0_branch;
	bool mus_d0_isLoaded;
	vector<float> mus_d0Err_;
	TBranch *mus_d0Err_branch;
	bool mus_d0Err_isLoaded;
	vector<float> mus_d0corr_;
	TBranch *mus_d0corr_branch;
	bool mus_d0corr_isLoaded;
	vector<float> mus_e_em_;
	TBranch *mus_e_em_branch;
	bool mus_e_em_isLoaded;
	vector<float> mus_e_emS9_;
	TBranch *mus_e_emS9_branch;
	bool mus_e_emS9_isLoaded;
	vector<float> mus_e_had_;
	TBranch *mus_e_had_branch;
	bool mus_e_had_isLoaded;
	vector<float> mus_e_hadS9_;
	TBranch *mus_e_hadS9_branch;
	bool mus_e_hadS9_isLoaded;
	vector<float> mus_e_ho_;
	TBranch *mus_e_ho_branch;
	bool mus_e_ho_isLoaded;
	vector<float> mus_e_hoS9_;
	TBranch *mus_e_hoS9_branch;
	bool mus_e_hoS9_isLoaded;
	vector<float> mus_etaErr_;
	TBranch *mus_etaErr_branch;
	bool mus_etaErr_isLoaded;
	vector<float> mus_gfit_chi2_;
	TBranch *mus_gfit_chi2_branch;
	bool mus_gfit_chi2_isLoaded;
	vector<float> mus_gfit_d0_;
	TBranch *mus_gfit_d0_branch;
	bool mus_gfit_d0_isLoaded;
	vector<float> mus_gfit_d0Err_;
	TBranch *mus_gfit_d0Err_branch;
	bool mus_gfit_d0Err_isLoaded;
	vector<float> mus_gfit_d0corr_;
	TBranch *mus_gfit_d0corr_branch;
	bool mus_gfit_d0corr_isLoaded;
	vector<float> mus_gfit_ndof_;
	TBranch *mus_gfit_ndof_branch;
	bool mus_gfit_ndof_isLoaded;
	vector<float> mus_gfit_qoverp_;
	TBranch *mus_gfit_qoverp_branch;
	bool mus_gfit_qoverp_isLoaded;
	vector<float> mus_gfit_qoverpError_;
	TBranch *mus_gfit_qoverpError_branch;
	bool mus_gfit_qoverpError_isLoaded;
	vector<float> mus_gfit_z0_;
	TBranch *mus_gfit_z0_branch;
	bool mus_gfit_z0_isLoaded;
	vector<float> mus_gfit_z0Err_;
	TBranch *mus_gfit_z0Err_branch;
	bool mus_gfit_z0Err_isLoaded;
	vector<float> mus_gfit_z0corr_;
	TBranch *mus_gfit_z0corr_branch;
	bool mus_gfit_z0corr_isLoaded;
	vector<float> mus_iso03_emEt_;
	TBranch *mus_iso03_emEt_branch;
	bool mus_iso03_emEt_isLoaded;
	vector<float> mus_iso03_hadEt_;
	TBranch *mus_iso03_hadEt_branch;
	bool mus_iso03_hadEt_isLoaded;
	vector<float> mus_iso03_hoEt_;
	TBranch *mus_iso03_hoEt_branch;
	bool mus_iso03_hoEt_isLoaded;
	vector<float> mus_iso03_sumPt_;
	TBranch *mus_iso03_sumPt_branch;
	bool mus_iso03_sumPt_isLoaded;
	vector<float> mus_iso05_emEt_;
	TBranch *mus_iso05_emEt_branch;
	bool mus_iso05_emEt_isLoaded;
	vector<float> mus_iso05_hadEt_;
	TBranch *mus_iso05_hadEt_branch;
	bool mus_iso05_hadEt_isLoaded;
	vector<float> mus_iso05_hoEt_;
	TBranch *mus_iso05_hoEt_branch;
	bool mus_iso05_hoEt_isLoaded;
	vector<float> mus_iso05_sumPt_;
	TBranch *mus_iso05_sumPt_branch;
	bool mus_iso05_sumPt_isLoaded;
	vector<float> mus_iso_ecalvetoDep_;
	TBranch *mus_iso_ecalvetoDep_branch;
	bool mus_iso_ecalvetoDep_isLoaded;
	vector<float> mus_iso_hcalvetoDep_;
	TBranch *mus_iso_hcalvetoDep_branch;
	bool mus_iso_hcalvetoDep_isLoaded;
	vector<float> mus_iso_hovetoDep_;
	TBranch *mus_iso_hovetoDep_branch;
	bool mus_iso_hovetoDep_isLoaded;
	vector<float> mus_iso_trckvetoDep_;
	TBranch *mus_iso_trckvetoDep_branch;
	bool mus_iso_trckvetoDep_isLoaded;
	vector<float> mus_ndof_;
	TBranch *mus_ndof_branch;
	bool mus_ndof_isLoaded;
	vector<float> mus_phiErr_;
	TBranch *mus_phiErr_branch;
	bool mus_phiErr_isLoaded;
	vector<float> mus_ptErr_;
	TBranch *mus_ptErr_branch;
	bool mus_ptErr_isLoaded;
	vector<float> mus_qoverp_;
	TBranch *mus_qoverp_branch;
	bool mus_qoverp_isLoaded;
	vector<float> mus_qoverpError_;
	TBranch *mus_qoverpError_branch;
	bool mus_qoverpError_isLoaded;
	vector<float> mus_sta_chi2_;
	TBranch *mus_sta_chi2_branch;
	bool mus_sta_chi2_isLoaded;
	vector<float> mus_sta_d0_;
	TBranch *mus_sta_d0_branch;
	bool mus_sta_d0_isLoaded;
	vector<float> mus_sta_d0Err_;
	TBranch *mus_sta_d0Err_branch;
	bool mus_sta_d0Err_isLoaded;
	vector<float> mus_sta_d0corr_;
	TBranch *mus_sta_d0corr_branch;
	bool mus_sta_d0corr_isLoaded;
	vector<float> mus_sta_ndof_;
	TBranch *mus_sta_ndof_branch;
	bool mus_sta_ndof_isLoaded;
	vector<float> mus_sta_qoverp_;
	TBranch *mus_sta_qoverp_branch;
	bool mus_sta_qoverp_isLoaded;
	vector<float> mus_sta_qoverpError_;
	TBranch *mus_sta_qoverpError_branch;
	bool mus_sta_qoverpError_isLoaded;
	vector<float> mus_sta_z0_;
	TBranch *mus_sta_z0_branch;
	bool mus_sta_z0_isLoaded;
	vector<float> mus_sta_z0Err_;
	TBranch *mus_sta_z0Err_branch;
	bool mus_sta_z0Err_isLoaded;
	vector<float> mus_sta_z0corr_;
	TBranch *mus_sta_z0corr_branch;
	bool mus_sta_z0corr_isLoaded;
	vector<float> mus_timeAtIpInOut_;
	TBranch *mus_timeAtIpInOut_branch;
	bool mus_timeAtIpInOut_isLoaded;
	vector<float> mus_timeAtIpInOutErr_;
	TBranch *mus_timeAtIpInOutErr_branch;
	bool mus_timeAtIpInOutErr_isLoaded;
	vector<float> mus_timeAtIpOutIn_;
	TBranch *mus_timeAtIpOutIn_branch;
	bool mus_timeAtIpOutIn_isLoaded;
	vector<float> mus_timeAtIpOutInErr_;
	TBranch *mus_timeAtIpOutInErr_branch;
	bool mus_timeAtIpOutInErr_isLoaded;
	vector<float> mus_vertexphi_;
	TBranch *mus_vertexphi_branch;
	bool mus_vertexphi_isLoaded;
	vector<float> mus_z0_;
	TBranch *mus_z0_branch;
	bool mus_z0_isLoaded;
	vector<float> mus_z0Err_;
	TBranch *mus_z0Err_branch;
	bool mus_z0Err_isLoaded;
	vector<float> mus_z0corr_;
	TBranch *mus_z0corr_branch;
	bool mus_z0corr_isLoaded;
	vector<float> pfjets_chargedEmE_;
	TBranch *pfjets_chargedEmE_branch;
	bool pfjets_chargedEmE_isLoaded;
	vector<float> pfjets_chargedHadronE_;
	TBranch *pfjets_chargedHadronE_branch;
	bool pfjets_chargedHadronE_isLoaded;
	vector<float> pfjets_cor_;
	TBranch *pfjets_cor_branch;
	bool pfjets_cor_isLoaded;
	vector<float> pfjets_neutralEmE_;
	TBranch *pfjets_neutralEmE_branch;
	bool pfjets_neutralEmE_isLoaded;
	vector<float> pfjets_neutralHadronE_;
	TBranch *pfjets_neutralHadronE_branch;
	bool pfjets_neutralHadronE_isLoaded;
	vector<float> photons_e1x5_;
	TBranch *photons_e1x5_branch;
	bool photons_e1x5_isLoaded;
	vector<float> photons_e2x5Max_;
	TBranch *photons_e2x5Max_branch;
	bool photons_e2x5Max_isLoaded;
	vector<float> photons_e3x3_;
	TBranch *photons_e3x3_branch;
	bool photons_e3x3_isLoaded;
	vector<float> photons_e5x5_;
	TBranch *photons_e5x5_branch;
	bool photons_e5x5_isLoaded;
	vector<float> photons_eMax_;
	TBranch *photons_eMax_branch;
	bool photons_eMax_isLoaded;
	vector<float> photons_eSC_;
	TBranch *photons_eSC_branch;
	bool photons_eSC_isLoaded;
	vector<float> photons_eSCPresh_;
	TBranch *photons_eSCPresh_branch;
	bool photons_eSCPresh_isLoaded;
	vector<float> photons_eSCRaw_;
	TBranch *photons_eSCRaw_branch;
	bool photons_eSCRaw_isLoaded;
	vector<float> photons_eSeed_;
	TBranch *photons_eSeed_branch;
	bool photons_eSeed_isLoaded;
	vector<float> photons_ecalIso_;
	TBranch *photons_ecalIso_branch;
	bool photons_ecalIso_isLoaded;
	vector<float> photons_hOverE_;
	TBranch *photons_hOverE_branch;
	bool photons_hOverE_isLoaded;
	vector<float> photons_hcalIso_;
	TBranch *photons_hcalIso_branch;
	bool photons_hcalIso_isLoaded;
	vector<float> photons_sigmaEtaEta_;
	TBranch *photons_sigmaEtaEta_branch;
	bool photons_sigmaEtaEta_isLoaded;
	vector<float> photons_sigmaIEtaIEta_;
	TBranch *photons_sigmaIEtaIEta_branch;
	bool photons_sigmaIEtaIEta_isLoaded;
	vector<float> photons_sigmaIPhiIPhi_;
	TBranch *photons_sigmaIPhiIPhi_branch;
	bool photons_sigmaIPhiIPhi_isLoaded;
	vector<float> photons_sigmaPhiPhi_;
	TBranch *photons_sigmaPhiPhi_branch;
	bool photons_sigmaPhiPhi_isLoaded;
	vector<float> photons_tkIsoHollow_;
	TBranch *photons_tkIsoHollow_branch;
	bool photons_tkIsoHollow_isLoaded;
	vector<float> photons_tkIsoSolid_;
	TBranch *photons_tkIsoSolid_branch;
	bool photons_tkIsoSolid_isLoaded;
	vector<float> ran_dRClosestTower_;
	TBranch *ran_dRClosestTower_branch;
	bool ran_dRClosestTower_isLoaded;
	vector<float> ran_dRClosestTowerEmEt_;
	TBranch *ran_dRClosestTowerEmEt_branch;
	bool ran_dRClosestTowerEmEt_isLoaded;
	vector<float> ran_ecalIso03_egamma_;
	TBranch *ran_ecalIso03_egamma_branch;
	bool ran_ecalIso03_egamma_isLoaded;
	vector<float> ran_ecalIso03_mu_;
	TBranch *ran_ecalIso03_mu_branch;
	bool ran_ecalIso03_mu_isLoaded;
	vector<float> ran_hcalD1Iso03_egamma_;
	TBranch *ran_hcalD1Iso03_egamma_branch;
	bool ran_hcalD1Iso03_egamma_isLoaded;
	vector<float> ran_hcalD2Iso03_egamma_;
	TBranch *ran_hcalD2Iso03_egamma_branch;
	bool ran_hcalD2Iso03_egamma_isLoaded;
	vector<float> ran_hcalIso03_egamma_;
	TBranch *ran_hcalIso03_egamma_branch;
	bool ran_hcalIso03_egamma_isLoaded;
	vector<float> ran_hcalIso03_mu_;
	TBranch *ran_hcalIso03_mu_branch;
	bool ran_hcalIso03_mu_isLoaded;
	vector<float> ran_hoIso03_mu_;
	TBranch *ran_hoIso03_mu_branch;
	bool ran_hoIso03_mu_isLoaded;
	vector<float> ran_towerEmEt_;
	TBranch *ran_towerEmEt_branch;
	bool ran_towerEmEt_isLoaded;
	vector<float> ran_towerHadEt_;
	TBranch *ran_towerHadEt_branch;
	bool ran_towerHadEt_isLoaded;
	vector<float> ran_trkIso03_egamma_;
	TBranch *ran_trkIso03_egamma_branch;
	bool ran_trkIso03_egamma_isLoaded;
	vector<float> ran_trkIso03_mu_;
	TBranch *ran_trkIso03_mu_branch;
	bool ran_trkIso03_mu_isLoaded;
	vector<float> scs_clustersSize_;
	TBranch *scs_clustersSize_branch;
	bool scs_clustersSize_isLoaded;
	vector<float> scs_crystalsSize_;
	TBranch *scs_crystalsSize_branch;
	bool scs_crystalsSize_isLoaded;
	vector<float> scs_e1x3_;
	TBranch *scs_e1x3_branch;
	bool scs_e1x3_isLoaded;
	vector<float> scs_e1x5_;
	TBranch *scs_e1x5_branch;
	bool scs_e1x5_isLoaded;
	vector<float> scs_e2nd_;
	TBranch *scs_e2nd_branch;
	bool scs_e2nd_isLoaded;
	vector<float> scs_e2x2_;
	TBranch *scs_e2x2_branch;
	bool scs_e2x2_isLoaded;
	vector<float> scs_e2x5Max_;
	TBranch *scs_e2x5Max_branch;
	bool scs_e2x5Max_isLoaded;
	vector<float> scs_e3x1_;
	TBranch *scs_e3x1_branch;
	bool scs_e3x1_isLoaded;
	vector<float> scs_e3x2_;
	TBranch *scs_e3x2_branch;
	bool scs_e3x2_isLoaded;
	vector<float> scs_e3x3_;
	TBranch *scs_e3x3_branch;
	bool scs_e3x3_isLoaded;
	vector<float> scs_e4x4_;
	TBranch *scs_e4x4_branch;
	bool scs_e4x4_isLoaded;
	vector<float> scs_e5x5_;
	TBranch *scs_e5x5_branch;
	bool scs_e5x5_isLoaded;
	vector<float> scs_eMax_;
	TBranch *scs_eMax_branch;
	bool scs_eMax_isLoaded;
	vector<float> scs_eSeed_;
	TBranch *scs_eSeed_branch;
	bool scs_eSeed_isLoaded;
	vector<float> scs_energy_;
	TBranch *scs_energy_branch;
	bool scs_energy_isLoaded;
	vector<float> scs_eta_;
	TBranch *scs_eta_branch;
	bool scs_eta_isLoaded;
	vector<float> scs_hoe_;
	TBranch *scs_hoe_branch;
	bool scs_hoe_isLoaded;
	vector<float> scs_phi_;
	TBranch *scs_phi_branch;
	bool scs_phi_isLoaded;
	vector<float> scs_preshowerEnergy_;
	TBranch *scs_preshowerEnergy_branch;
	bool scs_preshowerEnergy_isLoaded;
	vector<float> scs_rawEnergy_;
	TBranch *scs_rawEnergy_branch;
	bool scs_rawEnergy_isLoaded;
	vector<float> scs_sigmaEtaEta_;
	TBranch *scs_sigmaEtaEta_branch;
	bool scs_sigmaEtaEta_isLoaded;
	vector<float> scs_sigmaEtaPhi_;
	TBranch *scs_sigmaEtaPhi_branch;
	bool scs_sigmaEtaPhi_isLoaded;
	vector<float> scs_sigmaIEtaIEta_;
	TBranch *scs_sigmaIEtaIEta_branch;
	bool scs_sigmaIEtaIEta_isLoaded;
	vector<float> scs_sigmaIEtaIPhi_;
	TBranch *scs_sigmaIEtaIPhi_branch;
	bool scs_sigmaIEtaIPhi_isLoaded;
	vector<float> scs_sigmaIPhiIPhi_;
	TBranch *scs_sigmaIPhiIPhi_branch;
	bool scs_sigmaIPhiIPhi_isLoaded;
	vector<float> scs_sigmaPhiPhi_;
	TBranch *scs_sigmaPhiPhi_branch;
	bool scs_sigmaPhiPhi_isLoaded;
	vector<float> scjets_cor_;
	TBranch *scjets_cor_branch;
	bool scjets_cor_isLoaded;
	vector<float> scjets_emFrac_;
	TBranch *scjets_emFrac_branch;
	bool scjets_emFrac_isLoaded;
	vector<float> scjets_fHPD_;
	TBranch *scjets_fHPD_branch;
	bool scjets_fHPD_isLoaded;
	vector<float> scjets_fRBX_;
	TBranch *scjets_fRBX_branch;
	bool scjets_fRBX_isLoaded;
	vector<float> scjets_fSubDetector1_;
	TBranch *scjets_fSubDetector1_branch;
	bool scjets_fSubDetector1_isLoaded;
	vector<float> scjets_fSubDetector2_;
	TBranch *scjets_fSubDetector2_branch;
	bool scjets_fSubDetector2_isLoaded;
	vector<float> scjets_fSubDetector3_;
	TBranch *scjets_fSubDetector3_branch;
	bool scjets_fSubDetector3_isLoaded;
	vector<float> scjets_fSubDetector4_;
	TBranch *scjets_fSubDetector4_branch;
	bool scjets_fSubDetector4_isLoaded;
	vector<float> scjets_n90Hits_;
	TBranch *scjets_n90Hits_branch;
	bool scjets_n90Hits_isLoaded;
	vector<float> scjets_nECALTowers_;
	TBranch *scjets_nECALTowers_branch;
	bool scjets_nECALTowers_isLoaded;
	vector<float> scjets_nHCALTowers_;
	TBranch *scjets_nHCALTowers_branch;
	bool scjets_nHCALTowers_isLoaded;
	vector<float> scjets_restrictedEMF_;
	TBranch *scjets_restrictedEMF_branch;
	bool scjets_restrictedEMF_isLoaded;
	vector<float> mus_tcmet_deltax_;
	TBranch *mus_tcmet_deltax_branch;
	bool mus_tcmet_deltax_isLoaded;
	vector<float> mus_tcmet_deltay_;
	TBranch *mus_tcmet_deltay_branch;
	bool mus_tcmet_deltay_isLoaded;
	vector<float> trks_chi2_;
	TBranch *trks_chi2_branch;
	bool trks_chi2_isLoaded;
	vector<float> trks_d0_;
	TBranch *trks_d0_branch;
	bool trks_d0_isLoaded;
	vector<float> trks_d0Err_;
	TBranch *trks_d0Err_branch;
	bool trks_d0Err_isLoaded;
	vector<float> trks_d0corr_;
	TBranch *trks_d0corr_branch;
	bool trks_d0corr_isLoaded;
	vector<float> trks_d0corrPhi_;
	TBranch *trks_d0corrPhi_branch;
	bool trks_d0corrPhi_isLoaded;
	vector<float> trks_etaErr_;
	TBranch *trks_etaErr_branch;
	bool trks_etaErr_isLoaded;
	vector<float> trks_layer1_charge_;
	TBranch *trks_layer1_charge_branch;
	bool trks_layer1_charge_isLoaded;
	vector<float> trks_ndof_;
	TBranch *trks_ndof_branch;
	bool trks_ndof_isLoaded;
	vector<float> trks_phiErr_;
	TBranch *trks_phiErr_branch;
	bool trks_phiErr_isLoaded;
	vector<float> trks_ptErr_;
	TBranch *trks_ptErr_branch;
	bool trks_ptErr_isLoaded;
	vector<float> trks_z0_;
	TBranch *trks_z0_branch;
	bool trks_z0_isLoaded;
	vector<float> trks_z0Err_;
	TBranch *trks_z0Err_branch;
	bool trks_z0Err_isLoaded;
	vector<float> trks_z0corr_;
	TBranch *trks_z0corr_branch;
	bool trks_z0corr_isLoaded;
	vector<float> vtxs_chi2_;
	TBranch *vtxs_chi2_branch;
	bool vtxs_chi2_isLoaded;
	vector<float> vtxs_ndof_;
	TBranch *vtxs_ndof_branch;
	bool vtxs_ndof_isLoaded;
	vector<float> vtxs_xError_;
	TBranch *vtxs_xError_branch;
	bool vtxs_xError_isLoaded;
	vector<float> vtxs_yError_;
	TBranch *vtxs_yError_branch;
	bool vtxs_yError_isLoaded;
	vector<float> vtxs_zError_;
	TBranch *vtxs_zError_branch;
	bool vtxs_zError_isLoaded;
	vector<vector<float> > vtxs_covMatrix_;
	TBranch *vtxs_covMatrix_branch;
	bool vtxs_covMatrix_isLoaded;
	int evt_cscLooseHaloId_;
	TBranch *evt_cscLooseHaloId_branch;
	bool evt_cscLooseHaloId_isLoaded;
	int evt_cscTightHaloId_;
	TBranch *evt_cscTightHaloId_branch;
	bool evt_cscTightHaloId_isLoaded;
	int evt_ecalLooseHaloId_;
	TBranch *evt_ecalLooseHaloId_branch;
	bool evt_ecalLooseHaloId_isLoaded;
	int evt_ecalTightHaloId_;
	TBranch *evt_ecalTightHaloId_branch;
	bool evt_ecalTightHaloId_isLoaded;
	int evt_extremeTightHaloId_;
	TBranch *evt_extremeTightHaloId_branch;
	bool evt_extremeTightHaloId_isLoaded;
	int evt_globalLooseHaloId_;
	TBranch *evt_globalLooseHaloId_branch;
	bool evt_globalLooseHaloId_isLoaded;
	int evt_globalTightHaloId_;
	TBranch *evt_globalTightHaloId_branch;
	bool evt_globalTightHaloId_isLoaded;
	int evt_hcalLooseHaloId_;
	TBranch *evt_hcalLooseHaloId_branch;
	bool evt_hcalLooseHaloId_isLoaded;
	int evt_hcalTightHaloId_;
	TBranch *evt_hcalTightHaloId_branch;
	bool evt_hcalTightHaloId_isLoaded;
	int evt_looseHaloId_;
	TBranch *evt_looseHaloId_branch;
	bool evt_looseHaloId_isLoaded;
	int evt_tightHaloId_;
	TBranch *evt_tightHaloId_branch;
	bool evt_tightHaloId_isLoaded;
	int evt_bsType_;
	TBranch *evt_bsType_branch;
	bool evt_bsType_isLoaded;
	int evt_bunchCrossing_;
	TBranch *evt_bunchCrossing_branch;
	bool evt_bunchCrossing_isLoaded;
	int evt_experimentType_;
	TBranch *evt_experimentType_branch;
	bool evt_experimentType_isLoaded;
	int evt_orbitNumber_;
	TBranch *evt_orbitNumber_branch;
	bool evt_orbitNumber_isLoaded;
	int evt_storeNumber_;
	TBranch *evt_storeNumber_branch;
	bool evt_storeNumber_isLoaded;
	int hcalnoise_maxHPDHits_;
	TBranch *hcalnoise_maxHPDHits_branch;
	bool hcalnoise_maxHPDHits_isLoaded;
	int hcalnoise_maxRBXHits_;
	TBranch *hcalnoise_maxRBXHits_branch;
	bool hcalnoise_maxRBXHits_isLoaded;
	int hcalnoise_maxZeros_;
	TBranch *hcalnoise_maxZeros_branch;
	bool hcalnoise_maxZeros_isLoaded;
	int hcalnoise_noiseFilterStatus_;
	TBranch *hcalnoise_noiseFilterStatus_branch;
	bool hcalnoise_noiseFilterStatus_isLoaded;
	int hcalnoise_noiseType_;
	TBranch *hcalnoise_noiseType_branch;
	bool hcalnoise_noiseType_isLoaded;
	int hcalnoise_num10GeVHits_;
	TBranch *hcalnoise_num10GeVHits_branch;
	bool hcalnoise_num10GeVHits_isLoaded;
	int hcalnoise_num25GeVHits_;
	TBranch *hcalnoise_num25GeVHits_branch;
	bool hcalnoise_num25GeVHits_isLoaded;
	int hcalnoise_numProblematicRBXs_;
	TBranch *hcalnoise_numProblematicRBXs_branch;
	bool hcalnoise_numProblematicRBXs_isLoaded;
	int hcalnoise_passHighLevelNoiseFilter_;
	TBranch *hcalnoise_passHighLevelNoiseFilter_branch;
	bool hcalnoise_passHighLevelNoiseFilter_isLoaded;
	int hcalnoise_passLooseNoiseFilter_;
	TBranch *hcalnoise_passLooseNoiseFilter_branch;
	bool hcalnoise_passLooseNoiseFilter_isLoaded;
	int hcalnoise_passTightNoiseFilter_;
	TBranch *hcalnoise_passTightNoiseFilter_branch;
	bool hcalnoise_passTightNoiseFilter_isLoaded;
	int l1_nemiso_;
	TBranch *l1_nemiso_branch;
	bool l1_nemiso_isLoaded;
	int l1_nemnoiso_;
	TBranch *l1_nemnoiso_branch;
	bool l1_nemnoiso_isLoaded;
	int l1_njetsc_;
	TBranch *l1_njetsc_branch;
	bool l1_njetsc_isLoaded;
	int l1_njetsf_;
	TBranch *l1_njetsf_branch;
	bool l1_njetsf_isLoaded;
	int l1_njetst_;
	TBranch *l1_njetst_branch;
	bool l1_njetst_isLoaded;
	int l1_nmus_;
	TBranch *l1_nmus_branch;
	bool l1_nmus_isLoaded;
	vector<int> evt_ecaliPhiSuspects_;
	TBranch *evt_ecaliPhiSuspects_branch;
	bool evt_ecaliPhiSuspects_isLoaded;
	vector<int> evt_globaliPhiSuspects_;
	TBranch *evt_globaliPhiSuspects_branch;
	bool evt_globaliPhiSuspects_isLoaded;
	vector<int> evt_hcaliPhiSuspects_;
	TBranch *evt_hcaliPhiSuspects_branch;
	bool evt_hcaliPhiSuspects_isLoaded;
	vector<int> els_closestJet_;
	TBranch *els_closestJet_branch;
	bool els_closestJet_isLoaded;
	vector<int> els_closestMuon_;
	TBranch *els_closestMuon_branch;
	bool els_closestMuon_isLoaded;
	vector<int> els_category_;
	TBranch *els_category_branch;
	bool els_category_isLoaded;
	vector<int> els_charge_;
	TBranch *els_charge_branch;
	bool els_charge_isLoaded;
	vector<int> els_class_;
	TBranch *els_class_branch;
	bool els_class_isLoaded;
	vector<int> els_conv_tkidx_;
	TBranch *els_conv_tkidx_branch;
	bool els_conv_tkidx_isLoaded;
	vector<int> els_exp_innerlayers_;
	TBranch *els_exp_innerlayers_branch;
	bool els_exp_innerlayers_isLoaded;
	vector<int> els_exp_outerlayers_;
	TBranch *els_exp_outerlayers_branch;
	bool els_exp_outerlayers_isLoaded;
	vector<int> els_fiduciality_;
	TBranch *els_fiduciality_branch;
	bool els_fiduciality_isLoaded;
	vector<int> els_layer1_det_;
	TBranch *els_layer1_det_branch;
	bool els_layer1_det_isLoaded;
	vector<int> els_layer1_layer_;
	TBranch *els_layer1_layer_branch;
	bool els_layer1_layer_isLoaded;
	vector<int> els_layer1_sizerphi_;
	TBranch *els_layer1_sizerphi_branch;
	bool els_layer1_sizerphi_isLoaded;
	vector<int> els_layer1_sizerz_;
	TBranch *els_layer1_sizerz_branch;
	bool els_layer1_sizerz_isLoaded;
	vector<int> els_lostHits_;
	TBranch *els_lostHits_branch;
	bool els_lostHits_isLoaded;
	vector<int> els_lost_pixelhits_;
	TBranch *els_lost_pixelhits_branch;
	bool els_lost_pixelhits_isLoaded;
	vector<int> els_nSeed_;
	TBranch *els_nSeed_branch;
	bool els_nSeed_isLoaded;
	vector<int> els_sccharge_;
	TBranch *els_sccharge_branch;
	bool els_sccharge_isLoaded;
	vector<int> els_trk_charge_;
	TBranch *els_trk_charge_branch;
	bool els_trk_charge_isLoaded;
	vector<int> els_trkidx_;
	TBranch *els_trkidx_branch;
	bool els_trkidx_isLoaded;
	vector<int> els_type_;
	TBranch *els_type_branch;
	bool els_type_isLoaded;
	vector<int> els_validHits_;
	TBranch *els_validHits_branch;
	bool els_validHits_isLoaded;
	vector<int> els_valid_pixelhits_;
	TBranch *els_valid_pixelhits_branch;
	bool els_valid_pixelhits_isLoaded;
	vector<int> jets_closestElectron_;
	TBranch *jets_closestElectron_branch;
	bool jets_closestElectron_isLoaded;
	vector<int> jets_closestMuon_;
	TBranch *jets_closestMuon_branch;
	bool jets_closestMuon_isLoaded;
	vector<int> l1_emiso_ieta_;
	TBranch *l1_emiso_ieta_branch;
	bool l1_emiso_ieta_isLoaded;
	vector<int> l1_emiso_iphi_;
	TBranch *l1_emiso_iphi_branch;
	bool l1_emiso_iphi_isLoaded;
	vector<int> l1_emiso_rawId_;
	TBranch *l1_emiso_rawId_branch;
	bool l1_emiso_rawId_isLoaded;
	vector<int> l1_emiso_type_;
	TBranch *l1_emiso_type_branch;
	bool l1_emiso_type_isLoaded;
	vector<int> l1_emnoiso_ieta_;
	TBranch *l1_emnoiso_ieta_branch;
	bool l1_emnoiso_ieta_isLoaded;
	vector<int> l1_emnoiso_iphi_;
	TBranch *l1_emnoiso_iphi_branch;
	bool l1_emnoiso_iphi_isLoaded;
	vector<int> l1_emnoiso_rawId_;
	TBranch *l1_emnoiso_rawId_branch;
	bool l1_emnoiso_rawId_isLoaded;
	vector<int> l1_emnoiso_type_;
	TBranch *l1_emnoiso_type_branch;
	bool l1_emnoiso_type_isLoaded;
	vector<int> l1_jetsc_ieta_;
	TBranch *l1_jetsc_ieta_branch;
	bool l1_jetsc_ieta_isLoaded;
	vector<int> l1_jetsc_iphi_;
	TBranch *l1_jetsc_iphi_branch;
	bool l1_jetsc_iphi_isLoaded;
	vector<int> l1_jetsc_rawId_;
	TBranch *l1_jetsc_rawId_branch;
	bool l1_jetsc_rawId_isLoaded;
	vector<int> l1_jetsc_type_;
	TBranch *l1_jetsc_type_branch;
	bool l1_jetsc_type_isLoaded;
	vector<int> l1_jetsf_ieta_;
	TBranch *l1_jetsf_ieta_branch;
	bool l1_jetsf_ieta_isLoaded;
	vector<int> l1_jetsf_iphi_;
	TBranch *l1_jetsf_iphi_branch;
	bool l1_jetsf_iphi_isLoaded;
	vector<int> l1_jetsf_rawId_;
	TBranch *l1_jetsf_rawId_branch;
	bool l1_jetsf_rawId_isLoaded;
	vector<int> l1_jetsf_type_;
	TBranch *l1_jetsf_type_branch;
	bool l1_jetsf_type_isLoaded;
	vector<int> l1_jetst_ieta_;
	TBranch *l1_jetst_ieta_branch;
	bool l1_jetst_ieta_isLoaded;
	vector<int> l1_jetst_iphi_;
	TBranch *l1_jetst_iphi_branch;
	bool l1_jetst_iphi_isLoaded;
	vector<int> l1_jetst_rawId_;
	TBranch *l1_jetst_rawId_branch;
	bool l1_jetst_rawId_isLoaded;
	vector<int> l1_jetst_type_;
	TBranch *l1_jetst_type_branch;
	bool l1_jetst_type_isLoaded;
	vector<int> l1_mus_flags_;
	TBranch *l1_mus_flags_branch;
	bool l1_mus_flags_isLoaded;
	vector<int> l1_mus_q_;
	TBranch *l1_mus_q_branch;
	bool l1_mus_q_isLoaded;
	vector<int> l1_mus_qual_;
	TBranch *l1_mus_qual_branch;
	bool l1_mus_qual_isLoaded;
	vector<int> l1_mus_qualFlags_;
	TBranch *l1_mus_qualFlags_branch;
	bool l1_mus_qualFlags_isLoaded;
	vector<int> mus_met_flag_;
	TBranch *mus_met_flag_branch;
	bool mus_met_flag_isLoaded;
	vector<int> mus_closestEle_;
	TBranch *mus_closestEle_branch;
	bool mus_closestEle_isLoaded;
	vector<int> mus_closestJet_;
	TBranch *mus_closestJet_branch;
	bool mus_closestJet_isLoaded;
	vector<int> mus_charge_;
	TBranch *mus_charge_branch;
	bool mus_charge_isLoaded;
	vector<int> mus_gfit_validHits_;
	TBranch *mus_gfit_validHits_branch;
	bool mus_gfit_validHits_isLoaded;
	vector<int> mus_gfit_validSTAHits_;
	TBranch *mus_gfit_validSTAHits_branch;
	bool mus_gfit_validSTAHits_isLoaded;
	vector<int> mus_gfit_validSiHits_;
	TBranch *mus_gfit_validSiHits_branch;
	bool mus_gfit_validSiHits_isLoaded;
	vector<int> mus_goodmask_;
	TBranch *mus_goodmask_branch;
	bool mus_goodmask_isLoaded;
	vector<int> mus_iso03_ntrk_;
	TBranch *mus_iso03_ntrk_branch;
	bool mus_iso03_ntrk_isLoaded;
	vector<int> mus_iso05_ntrk_;
	TBranch *mus_iso05_ntrk_branch;
	bool mus_iso05_ntrk_isLoaded;
	vector<int> mus_lostHits_;
	TBranch *mus_lostHits_branch;
	bool mus_lostHits_isLoaded;
	vector<int> mus_nmatches_;
	TBranch *mus_nmatches_branch;
	bool mus_nmatches_isLoaded;
	vector<int> mus_pid_TM2DCompatibilityLoose_;
	TBranch *mus_pid_TM2DCompatibilityLoose_branch;
	bool mus_pid_TM2DCompatibilityLoose_isLoaded;
	vector<int> mus_pid_TM2DCompatibilityTight_;
	TBranch *mus_pid_TM2DCompatibilityTight_branch;
	bool mus_pid_TM2DCompatibilityTight_isLoaded;
	vector<int> mus_pid_TMLastStationLoose_;
	TBranch *mus_pid_TMLastStationLoose_branch;
	bool mus_pid_TMLastStationLoose_isLoaded;
	vector<int> mus_pid_TMLastStationTight_;
	TBranch *mus_pid_TMLastStationTight_branch;
	bool mus_pid_TMLastStationTight_isLoaded;
	vector<int> mus_sta_validHits_;
	TBranch *mus_sta_validHits_branch;
	bool mus_sta_validHits_isLoaded;
	vector<int> mus_timeDirection_;
	TBranch *mus_timeDirection_branch;
	bool mus_timeDirection_isLoaded;
	vector<int> mus_timeNumStationsUsed_;
	TBranch *mus_timeNumStationsUsed_branch;
	bool mus_timeNumStationsUsed_isLoaded;
	vector<int> mus_trk_charge_;
	TBranch *mus_trk_charge_branch;
	bool mus_trk_charge_isLoaded;
	vector<int> mus_trkidx_;
	TBranch *mus_trkidx_branch;
	bool mus_trkidx_isLoaded;
	vector<int> mus_type_;
	TBranch *mus_type_branch;
	bool mus_type_isLoaded;
	vector<int> mus_validHits_;
	TBranch *mus_validHits_branch;
	bool mus_validHits_isLoaded;
	vector<int> pfjets_chargedMultiplicity_;
	TBranch *pfjets_chargedMultiplicity_branch;
	bool pfjets_chargedMultiplicity_isLoaded;
	vector<int> pfjets_muonMultiplicity_;
	TBranch *pfjets_muonMultiplicity_branch;
	bool pfjets_muonMultiplicity_isLoaded;
	vector<int> pfjets_neutralMultiplicity_;
	TBranch *pfjets_neutralMultiplicity_branch;
	bool pfjets_neutralMultiplicity_isLoaded;
	vector<int> photons_fiduciality_;
	TBranch *photons_fiduciality_branch;
	bool photons_fiduciality_isLoaded;
	vector<int> pxl_ndigis_pxb_;
	TBranch *pxl_ndigis_pxb_branch;
	bool pxl_ndigis_pxb_isLoaded;
	vector<int> pxl_ndigis_pxf_;
	TBranch *pxl_ndigis_pxf_branch;
	bool pxl_ndigis_pxf_isLoaded;
	vector<int> ran_srFlag_;
	TBranch *ran_srFlag_branch;
	bool ran_srFlag_isLoaded;
	vector<int> scs_elsidx_;
	TBranch *scs_elsidx_branch;
	bool scs_elsidx_isLoaded;
	vector<int> scs_severitySeed_;
	TBranch *scs_severitySeed_branch;
	bool scs_severitySeed_isLoaded;
	vector<int> mus_tcmet_flag_;
	TBranch *mus_tcmet_flag_branch;
	bool mus_tcmet_flag_isLoaded;
	vector<int> trks_algo_;
	TBranch *trks_algo_branch;
	bool trks_algo_isLoaded;
	vector<int> trks_charge_;
	TBranch *trks_charge_branch;
	bool trks_charge_isLoaded;
	vector<int> trks_exp_innerlayers_;
	TBranch *trks_exp_innerlayers_branch;
	bool trks_exp_innerlayers_isLoaded;
	vector<int> trks_exp_outerlayers_;
	TBranch *trks_exp_outerlayers_branch;
	bool trks_exp_outerlayers_isLoaded;
	vector<int> trks_layer1_det_;
	TBranch *trks_layer1_det_branch;
	bool trks_layer1_det_isLoaded;
	vector<int> trks_layer1_layer_;
	TBranch *trks_layer1_layer_branch;
	bool trks_layer1_layer_isLoaded;
	vector<int> trks_layer1_sizerphi_;
	TBranch *trks_layer1_sizerphi_branch;
	bool trks_layer1_sizerphi_isLoaded;
	vector<int> trks_layer1_sizerz_;
	TBranch *trks_layer1_sizerz_branch;
	bool trks_layer1_sizerz_isLoaded;
	vector<int> trks_lostHits_;
	TBranch *trks_lostHits_branch;
	bool trks_lostHits_isLoaded;
	vector<int> trks_lost_pixelhits_;
	TBranch *trks_lost_pixelhits_branch;
	bool trks_lost_pixelhits_isLoaded;
	vector<int> trks_nlayers_;
	TBranch *trks_nlayers_branch;
	bool trks_nlayers_isLoaded;
	vector<int> trks_nlayers3D_;
	TBranch *trks_nlayers3D_branch;
	bool trks_nlayers3D_isLoaded;
	vector<int> trks_nlayersLost_;
	TBranch *trks_nlayersLost_branch;
	bool trks_nlayersLost_isLoaded;
	vector<int> trks_qualityMask_;
	TBranch *trks_qualityMask_branch;
	bool trks_qualityMask_isLoaded;
	vector<int> trks_validHits_;
	TBranch *trks_validHits_branch;
	bool trks_validHits_isLoaded;
	vector<int> trks_valid_pixelhits_;
	TBranch *trks_valid_pixelhits_branch;
	bool trks_valid_pixelhits_isLoaded;
	vector<int> trks_elsidx_;
	TBranch *trks_elsidx_branch;
	bool trks_elsidx_isLoaded;
	vector<int> trk_musidx_;
	TBranch *trk_musidx_branch;
	bool trk_musidx_isLoaded;
	vector<int> vtxs_isFake_;
	TBranch *vtxs_isFake_branch;
	bool vtxs_isFake_isLoaded;
	vector<int> vtxs_isValid_;
	TBranch *vtxs_isValid_branch;
	bool vtxs_isValid_isLoaded;
	vector<int> vtxs_tracksSize_;
	TBranch *vtxs_tracksSize_branch;
	bool vtxs_tracksSize_isLoaded;
	vector<vector<int> > hlt_trigObjs_id_;
	TBranch *hlt_trigObjs_id_branch;
	bool hlt_trigObjs_id_isLoaded;
	unsigned int evt_ntwrs_;
	TBranch *evt_ntwrs_branch;
	bool evt_ntwrs_isLoaded;
	unsigned int evt_nels_;
	TBranch *evt_nels_branch;
	bool evt_nels_isLoaded;
	unsigned int evt_event_;
	TBranch *evt_event_branch;
	bool evt_event_isLoaded;
	unsigned int evt_lumiBlock_;
	TBranch *evt_lumiBlock_branch;
	bool evt_lumiBlock_isLoaded;
	unsigned int evt_run_;
	TBranch *evt_run_branch;
	bool evt_run_isLoaded;
	unsigned int hlt_bits1_;
	TBranch *hlt_bits1_branch;
	bool hlt_bits1_isLoaded;
	unsigned int hlt_bits2_;
	TBranch *hlt_bits2_branch;
	bool hlt_bits2_isLoaded;
	unsigned int hlt_bits3_;
	TBranch *hlt_bits3_branch;
	bool hlt_bits3_isLoaded;
	unsigned int hlt_bits4_;
	TBranch *hlt_bits4_branch;
	bool hlt_bits4_isLoaded;
	unsigned int hlt_bits5_;
	TBranch *hlt_bits5_branch;
	bool hlt_bits5_isLoaded;
	unsigned int hlt_bits6_;
	TBranch *hlt_bits6_branch;
	bool hlt_bits6_isLoaded;
	unsigned int hlt_bits7_;
	TBranch *hlt_bits7_branch;
	bool hlt_bits7_isLoaded;
	unsigned int hlt_bits8_;
	TBranch *hlt_bits8_branch;
	bool hlt_bits8_isLoaded;
	unsigned int evt_njets_;
	TBranch *evt_njets_branch;
	bool evt_njets_isLoaded;
	unsigned int evt_njpts_;
	TBranch *evt_njpts_branch;
	bool evt_njpts_isLoaded;
	unsigned int l1_bits1_;
	TBranch *l1_bits1_branch;
	bool l1_bits1_isLoaded;
	unsigned int l1_bits2_;
	TBranch *l1_bits2_branch;
	bool l1_bits2_isLoaded;
	unsigned int l1_bits3_;
	TBranch *l1_bits3_branch;
	bool l1_bits3_isLoaded;
	unsigned int l1_bits4_;
	TBranch *l1_bits4_branch;
	bool l1_bits4_isLoaded;
	unsigned int l1_techbits1_;
	TBranch *l1_techbits1_branch;
	bool l1_techbits1_isLoaded;
	unsigned int l1_techbits2_;
	TBranch *l1_techbits2_branch;
	bool l1_techbits2_isLoaded;
	unsigned int evt_nphotons_;
	TBranch *evt_nphotons_branch;
	bool evt_nphotons_isLoaded;
	unsigned int evt_nscs_;
	TBranch *evt_nscs_branch;
	bool evt_nscs_isLoaded;
	unsigned int evt_nscjets_;
	TBranch *evt_nscjets_branch;
	bool evt_nscjets_isLoaded;
	unsigned int evt_ntrkjets_;
	TBranch *evt_ntrkjets_branch;
	bool evt_ntrkjets_isLoaded;
	unsigned int evt_nvtxs_;
	TBranch *evt_nvtxs_branch;
	bool evt_nvtxs_isLoaded;
	vector<unsigned int> twrs_numBadEcalCells_;
	TBranch *twrs_numBadEcalCells_branch;
	bool twrs_numBadEcalCells_isLoaded;
	vector<unsigned int> twrs_numBadHcalCells_;
	TBranch *twrs_numBadHcalCells_branch;
	bool twrs_numBadHcalCells_isLoaded;
	vector<unsigned int> twrs_numProblematicEcalCells_;
	TBranch *twrs_numProblematicEcalCells_branch;
	bool twrs_numProblematicEcalCells_isLoaded;
	vector<unsigned int> twrs_numProblematicHcalCells_;
	TBranch *twrs_numProblematicHcalCells_branch;
	bool twrs_numProblematicHcalCells_isLoaded;
	vector<unsigned int> twrs_numRecoveredEcalCells_;
	TBranch *twrs_numRecoveredEcalCells_branch;
	bool twrs_numRecoveredEcalCells_isLoaded;
	vector<unsigned int> twrs_numRecoveredHcalCells_;
	TBranch *twrs_numRecoveredHcalCells_branch;
	bool twrs_numRecoveredHcalCells_isLoaded;
	float	evt_scale1fb_;
	TBranch *evt_scale1fb_branch;
	bool evt_scale1fb_isLoaded;
	float	evt_xsec_excl_;
	TBranch *evt_xsec_excl_branch;
	bool evt_xsec_excl_isLoaded;
	float	evt_xsec_incl_;
	TBranch *evt_xsec_incl_branch;
	bool evt_xsec_incl_isLoaded;
	float	evt_kfactor_;
	TBranch *evt_kfactor_branch;
	bool evt_kfactor_isLoaded;
	int	evt_nEvts_;
	TBranch *evt_nEvts_branch;
	bool evt_nEvts_isLoaded;
	float	evt_filt_eff_;
	TBranch *evt_filt_eff_branch;
	bool evt_filt_eff_isLoaded;
public: 
int ScanChain(class TChain* chain, int nEvents=-1, std::string skimFilePrefix="");
void Init(TTree *tree) {
	evt_bsp4_branch = 0;
	if (tree->GetAlias("evt_bsp4") != 0) {
		evt_bsp4_branch = tree->GetBranch(tree->GetAlias("evt_bsp4"));
		evt_bsp4_branch->SetAddress(&evt_bsp4_);
	}
	if(evt_bsp4_branch == 0 ) {
	//cout << "Branch evt_bsp4 does not exist." << endl;
	}
	l1_met_p4_branch = 0;
	if (tree->GetAlias("l1_met_p4") != 0) {
		l1_met_p4_branch = tree->GetBranch(tree->GetAlias("l1_met_p4"));
		l1_met_p4_branch->SetAddress(&l1_met_p4_);
	}
	if(l1_met_p4_branch == 0 ) {
	//cout << "Branch l1_met_p4 does not exist." << endl;
	}
	l1_mht_p4_branch = 0;
	if (tree->GetAlias("l1_mht_p4") != 0) {
		l1_mht_p4_branch = tree->GetBranch(tree->GetAlias("l1_mht_p4"));
		l1_mht_p4_branch->SetAddress(&l1_mht_p4_);
	}
	if(l1_mht_p4_branch == 0 ) {
	//cout << "Branch l1_mht_p4 does not exist." << endl;
	}
	els_inner_position_branch = 0;
	if (tree->GetAlias("els_inner_position") != 0) {
		els_inner_position_branch = tree->GetBranch(tree->GetAlias("els_inner_position"));
		els_inner_position_branch->SetAddress(&els_inner_position_);
	}
	if(els_inner_position_branch == 0 ) {
	//cout << "Branch els_inner_position does not exist." << endl;
	}
	els_outer_position_branch = 0;
	if (tree->GetAlias("els_outer_position") != 0) {
		els_outer_position_branch = tree->GetBranch(tree->GetAlias("els_outer_position"));
		els_outer_position_branch->SetAddress(&els_outer_position_);
	}
	if(els_outer_position_branch == 0 ) {
	//cout << "Branch els_outer_position does not exist." << endl;
	}
	els_p4_branch = 0;
	if (tree->GetAlias("els_p4") != 0) {
		els_p4_branch = tree->GetBranch(tree->GetAlias("els_p4"));
		els_p4_branch->SetAddress(&els_p4_);
	}
	if(els_p4_branch == 0 ) {
	//cout << "Branch els_p4 does not exist." << endl;
	}
	els_p4In_branch = 0;
	if (tree->GetAlias("els_p4In") != 0) {
		els_p4In_branch = tree->GetBranch(tree->GetAlias("els_p4In"));
		els_p4In_branch->SetAddress(&els_p4In_);
	}
	if(els_p4In_branch == 0 ) {
	//cout << "Branch els_p4In does not exist." << endl;
	}
	els_p4Out_branch = 0;
	if (tree->GetAlias("els_p4Out") != 0) {
		els_p4Out_branch = tree->GetBranch(tree->GetAlias("els_p4Out"));
		els_p4Out_branch->SetAddress(&els_p4Out_);
	}
	if(els_p4Out_branch == 0 ) {
	//cout << "Branch els_p4Out does not exist." << endl;
	}
	els_trk_p4_branch = 0;
	if (tree->GetAlias("els_trk_p4") != 0) {
		els_trk_p4_branch = tree->GetBranch(tree->GetAlias("els_trk_p4"));
		els_trk_p4_branch->SetAddress(&els_trk_p4_);
	}
	if(els_trk_p4_branch == 0 ) {
	//cout << "Branch els_trk_p4 does not exist." << endl;
	}
	els_vertex_p4_branch = 0;
	if (tree->GetAlias("els_vertex_p4") != 0) {
		els_vertex_p4_branch = tree->GetBranch(tree->GetAlias("els_vertex_p4"));
		els_vertex_p4_branch->SetAddress(&els_vertex_p4_);
	}
	if(els_vertex_p4_branch == 0 ) {
	//cout << "Branch els_vertex_p4 does not exist." << endl;
	}
	jets_p4_branch = 0;
	if (tree->GetAlias("jets_p4") != 0) {
		jets_p4_branch = tree->GetBranch(tree->GetAlias("jets_p4"));
		jets_p4_branch->SetAddress(&jets_p4_);
	}
	if(jets_p4_branch == 0 ) {
	//cout << "Branch jets_p4 does not exist." << endl;
	}
	jets_vertex_p4_branch = 0;
	if (tree->GetAlias("jets_vertex_p4") != 0) {
		jets_vertex_p4_branch = tree->GetBranch(tree->GetAlias("jets_vertex_p4"));
		jets_vertex_p4_branch->SetAddress(&jets_vertex_p4_);
	}
	if(jets_vertex_p4_branch == 0 ) {
	//cout << "Branch jets_vertex_p4 does not exist." << endl;
	}
	jpts_p4_branch = 0;
	if (tree->GetAlias("jpts_p4") != 0) {
		jpts_p4_branch = tree->GetBranch(tree->GetAlias("jpts_p4"));
		jpts_p4_branch->SetAddress(&jpts_p4_);
	}
	if(jpts_p4_branch == 0 ) {
	//cout << "Branch jpts_p4 does not exist." << endl;
	}
	l1_emiso_p4_branch = 0;
	if (tree->GetAlias("l1_emiso_p4") != 0) {
		l1_emiso_p4_branch = tree->GetBranch(tree->GetAlias("l1_emiso_p4"));
		l1_emiso_p4_branch->SetAddress(&l1_emiso_p4_);
	}
	if(l1_emiso_p4_branch == 0 ) {
	//cout << "Branch l1_emiso_p4 does not exist." << endl;
	}
	l1_emnoiso_p4_branch = 0;
	if (tree->GetAlias("l1_emnoiso_p4") != 0) {
		l1_emnoiso_p4_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_p4"));
		l1_emnoiso_p4_branch->SetAddress(&l1_emnoiso_p4_);
	}
	if(l1_emnoiso_p4_branch == 0 ) {
	//cout << "Branch l1_emnoiso_p4 does not exist." << endl;
	}
	l1_jetsc_p4_branch = 0;
	if (tree->GetAlias("l1_jetsc_p4") != 0) {
		l1_jetsc_p4_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_p4"));
		l1_jetsc_p4_branch->SetAddress(&l1_jetsc_p4_);
	}
	if(l1_jetsc_p4_branch == 0 ) {
	//cout << "Branch l1_jetsc_p4 does not exist." << endl;
	}
	l1_jetsf_p4_branch = 0;
	if (tree->GetAlias("l1_jetsf_p4") != 0) {
		l1_jetsf_p4_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_p4"));
		l1_jetsf_p4_branch->SetAddress(&l1_jetsf_p4_);
	}
	if(l1_jetsf_p4_branch == 0 ) {
	//cout << "Branch l1_jetsf_p4 does not exist." << endl;
	}
	l1_jetst_p4_branch = 0;
	if (tree->GetAlias("l1_jetst_p4") != 0) {
		l1_jetst_p4_branch = tree->GetBranch(tree->GetAlias("l1_jetst_p4"));
		l1_jetst_p4_branch->SetAddress(&l1_jetst_p4_);
	}
	if(l1_jetst_p4_branch == 0 ) {
	//cout << "Branch l1_jetst_p4 does not exist." << endl;
	}
	l1_mus_p4_branch = 0;
	if (tree->GetAlias("l1_mus_p4") != 0) {
		l1_mus_p4_branch = tree->GetBranch(tree->GetAlias("l1_mus_p4"));
		l1_mus_p4_branch->SetAddress(&l1_mus_p4_);
	}
	if(l1_mus_p4_branch == 0 ) {
	//cout << "Branch l1_mus_p4 does not exist." << endl;
	}
	mus_fitdefault_p4_branch = 0;
	if (tree->GetAlias("mus_fitdefault_p4") != 0) {
		mus_fitdefault_p4_branch = tree->GetBranch(tree->GetAlias("mus_fitdefault_p4"));
		mus_fitdefault_p4_branch->SetAddress(&mus_fitdefault_p4_);
	}
	if(mus_fitdefault_p4_branch == 0 ) {
	//cout << "Branch mus_fitdefault_p4 does not exist." << endl;
	}
	mus_fitfirsthit_p4_branch = 0;
	if (tree->GetAlias("mus_fitfirsthit_p4") != 0) {
		mus_fitfirsthit_p4_branch = tree->GetBranch(tree->GetAlias("mus_fitfirsthit_p4"));
		mus_fitfirsthit_p4_branch->SetAddress(&mus_fitfirsthit_p4_);
	}
	if(mus_fitfirsthit_p4_branch == 0 ) {
	//cout << "Branch mus_fitfirsthit_p4 does not exist." << endl;
	}
	mus_fitpicky_p4_branch = 0;
	if (tree->GetAlias("mus_fitpicky_p4") != 0) {
		mus_fitpicky_p4_branch = tree->GetBranch(tree->GetAlias("mus_fitpicky_p4"));
		mus_fitpicky_p4_branch->SetAddress(&mus_fitpicky_p4_);
	}
	if(mus_fitpicky_p4_branch == 0 ) {
	//cout << "Branch mus_fitpicky_p4 does not exist." << endl;
	}
	mus_fittev_p4_branch = 0;
	if (tree->GetAlias("mus_fittev_p4") != 0) {
		mus_fittev_p4_branch = tree->GetBranch(tree->GetAlias("mus_fittev_p4"));
		mus_fittev_p4_branch->SetAddress(&mus_fittev_p4_);
	}
	if(mus_fittev_p4_branch == 0 ) {
	//cout << "Branch mus_fittev_p4 does not exist." << endl;
	}
	mus_gfit_outerPos_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_outerPos_p4") != 0) {
		mus_gfit_outerPos_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_outerPos_p4"));
		mus_gfit_outerPos_p4_branch->SetAddress(&mus_gfit_outerPos_p4_);
	}
	if(mus_gfit_outerPos_p4_branch == 0 ) {
	//cout << "Branch mus_gfit_outerPos_p4 does not exist." << endl;
	}
	mus_gfit_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_p4") != 0) {
		mus_gfit_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_p4"));
		mus_gfit_p4_branch->SetAddress(&mus_gfit_p4_);
	}
	if(mus_gfit_p4_branch == 0 ) {
	//cout << "Branch mus_gfit_p4 does not exist." << endl;
	}
	mus_gfit_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_vertex_p4") != 0) {
		mus_gfit_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_vertex_p4"));
		mus_gfit_vertex_p4_branch->SetAddress(&mus_gfit_vertex_p4_);
	}
	if(mus_gfit_vertex_p4_branch == 0 ) {
	//cout << "Branch mus_gfit_vertex_p4 does not exist." << endl;
	}
	mus_p4_branch = 0;
	if (tree->GetAlias("mus_p4") != 0) {
		mus_p4_branch = tree->GetBranch(tree->GetAlias("mus_p4"));
		mus_p4_branch->SetAddress(&mus_p4_);
	}
	if(mus_p4_branch == 0 ) {
	//cout << "Branch mus_p4 does not exist." << endl;
	}
	mus_sta_p4_branch = 0;
	if (tree->GetAlias("mus_sta_p4") != 0) {
		mus_sta_p4_branch = tree->GetBranch(tree->GetAlias("mus_sta_p4"));
		mus_sta_p4_branch->SetAddress(&mus_sta_p4_);
	}
	if(mus_sta_p4_branch == 0 ) {
	//cout << "Branch mus_sta_p4 does not exist." << endl;
	}
	mus_sta_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_sta_vertex_p4") != 0) {
		mus_sta_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_sta_vertex_p4"));
		mus_sta_vertex_p4_branch->SetAddress(&mus_sta_vertex_p4_);
	}
	if(mus_sta_vertex_p4_branch == 0 ) {
	//cout << "Branch mus_sta_vertex_p4 does not exist." << endl;
	}
	mus_trk_p4_branch = 0;
	if (tree->GetAlias("mus_trk_p4") != 0) {
		mus_trk_p4_branch = tree->GetBranch(tree->GetAlias("mus_trk_p4"));
		mus_trk_p4_branch->SetAddress(&mus_trk_p4_);
	}
	if(mus_trk_p4_branch == 0 ) {
	//cout << "Branch mus_trk_p4 does not exist." << endl;
	}
	mus_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_vertex_p4") != 0) {
		mus_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_vertex_p4"));
		mus_vertex_p4_branch->SetAddress(&mus_vertex_p4_);
	}
	if(mus_vertex_p4_branch == 0 ) {
	//cout << "Branch mus_vertex_p4 does not exist." << endl;
	}
	pfjets_p4_branch = 0;
	if (tree->GetAlias("pfjets_p4") != 0) {
		pfjets_p4_branch = tree->GetBranch(tree->GetAlias("pfjets_p4"));
		pfjets_p4_branch->SetAddress(&pfjets_p4_);
	}
	if(pfjets_p4_branch == 0 ) {
	//cout << "Branch pfjets_p4 does not exist." << endl;
	}
	photons_p4_branch = 0;
	if (tree->GetAlias("photons_p4") != 0) {
		photons_p4_branch = tree->GetBranch(tree->GetAlias("photons_p4"));
		photons_p4_branch->SetAddress(&photons_p4_);
	}
	if(photons_p4_branch == 0 ) {
	//cout << "Branch photons_p4 does not exist." << endl;
	}
	ran_trksecalp4_branch = 0;
	if (tree->GetAlias("ran_trksecalp4") != 0) {
		ran_trksecalp4_branch = tree->GetBranch(tree->GetAlias("ran_trksecalp4"));
		ran_trksecalp4_branch->SetAddress(&ran_trksecalp4_);
	}
	if(ran_trksecalp4_branch == 0 ) {
	//cout << "Branch ran_trksecalp4 does not exist." << endl;
	}
	ran_trksp4_branch = 0;
	if (tree->GetAlias("ran_trksp4") != 0) {
		ran_trksp4_branch = tree->GetBranch(tree->GetAlias("ran_trksp4"));
		ran_trksp4_branch->SetAddress(&ran_trksp4_);
	}
	if(ran_trksp4_branch == 0 ) {
	//cout << "Branch ran_trksp4 does not exist." << endl;
	}
	scs_p4_branch = 0;
	if (tree->GetAlias("scs_p4") != 0) {
		scs_p4_branch = tree->GetBranch(tree->GetAlias("scs_p4"));
		scs_p4_branch->SetAddress(&scs_p4_);
	}
	if(scs_p4_branch == 0 ) {
	//cout << "Branch scs_p4 does not exist." << endl;
	}
	scs_pos_p4_branch = 0;
	if (tree->GetAlias("scs_pos_p4") != 0) {
		scs_pos_p4_branch = tree->GetBranch(tree->GetAlias("scs_pos_p4"));
		scs_pos_p4_branch->SetAddress(&scs_pos_p4_);
	}
	if(scs_pos_p4_branch == 0 ) {
	//cout << "Branch scs_pos_p4 does not exist." << endl;
	}
	scs_vtx_p4_branch = 0;
	if (tree->GetAlias("scs_vtx_p4") != 0) {
		scs_vtx_p4_branch = tree->GetBranch(tree->GetAlias("scs_vtx_p4"));
		scs_vtx_p4_branch->SetAddress(&scs_vtx_p4_);
	}
	if(scs_vtx_p4_branch == 0 ) {
	//cout << "Branch scs_vtx_p4 does not exist." << endl;
	}
	scjets_p4_branch = 0;
	if (tree->GetAlias("scjets_p4") != 0) {
		scjets_p4_branch = tree->GetBranch(tree->GetAlias("scjets_p4"));
		scjets_p4_branch->SetAddress(&scjets_p4_);
	}
	if(scjets_p4_branch == 0 ) {
	//cout << "Branch scjets_p4 does not exist." << endl;
	}
	scjets_vertex_p4_branch = 0;
	if (tree->GetAlias("scjets_vertex_p4") != 0) {
		scjets_vertex_p4_branch = tree->GetBranch(tree->GetAlias("scjets_vertex_p4"));
		scjets_vertex_p4_branch->SetAddress(&scjets_vertex_p4_);
	}
	if(scjets_vertex_p4_branch == 0 ) {
	//cout << "Branch scjets_vertex_p4 does not exist." << endl;
	}
	trks_inner_position_branch = 0;
	if (tree->GetAlias("trks_inner_position") != 0) {
		trks_inner_position_branch = tree->GetBranch(tree->GetAlias("trks_inner_position"));
		trks_inner_position_branch->SetAddress(&trks_inner_position_);
	}
	if(trks_inner_position_branch == 0 ) {
	//cout << "Branch trks_inner_position does not exist." << endl;
	}
	trks_outer_p4_branch = 0;
	if (tree->GetAlias("trks_outer_p4") != 0) {
		trks_outer_p4_branch = tree->GetBranch(tree->GetAlias("trks_outer_p4"));
		trks_outer_p4_branch->SetAddress(&trks_outer_p4_);
	}
	if(trks_outer_p4_branch == 0 ) {
	//cout << "Branch trks_outer_p4 does not exist." << endl;
	}
	trks_outer_position_branch = 0;
	if (tree->GetAlias("trks_outer_position") != 0) {
		trks_outer_position_branch = tree->GetBranch(tree->GetAlias("trks_outer_position"));
		trks_outer_position_branch->SetAddress(&trks_outer_position_);
	}
	if(trks_outer_position_branch == 0 ) {
	//cout << "Branch trks_outer_position does not exist." << endl;
	}
	trks_trk_p4_branch = 0;
	if (tree->GetAlias("trks_trk_p4") != 0) {
		trks_trk_p4_branch = tree->GetBranch(tree->GetAlias("trks_trk_p4"));
		trks_trk_p4_branch->SetAddress(&trks_trk_p4_);
	}
	if(trks_trk_p4_branch == 0 ) {
	//cout << "Branch trks_trk_p4 does not exist." << endl;
	}
	trks_vertex_p4_branch = 0;
	if (tree->GetAlias("trks_vertex_p4") != 0) {
		trks_vertex_p4_branch = tree->GetBranch(tree->GetAlias("trks_vertex_p4"));
		trks_vertex_p4_branch->SetAddress(&trks_vertex_p4_);
	}
	if(trks_vertex_p4_branch == 0 ) {
	//cout << "Branch trks_vertex_p4 does not exist." << endl;
	}
	trkjets_p4_branch = 0;
	if (tree->GetAlias("trkjets_p4") != 0) {
		trkjets_p4_branch = tree->GetBranch(tree->GetAlias("trkjets_p4"));
		trkjets_p4_branch->SetAddress(&trkjets_p4_);
	}
	if(trkjets_p4_branch == 0 ) {
	//cout << "Branch trkjets_p4 does not exist." << endl;
	}
	vtxs_position_branch = 0;
	if (tree->GetAlias("vtxs_position") != 0) {
		vtxs_position_branch = tree->GetBranch(tree->GetAlias("vtxs_position"));
		vtxs_position_branch->SetAddress(&vtxs_position_);
	}
	if(vtxs_position_branch == 0 ) {
	//cout << "Branch vtxs_position does not exist." << endl;
	}
  tree->SetMakeClass(1);
	evt_CMS2tag_branch = 0;
	if (tree->GetAlias("evt_CMS2tag") != 0) {
		evt_CMS2tag_branch = tree->GetBranch(tree->GetAlias("evt_CMS2tag"));
		evt_CMS2tag_branch->SetAddress(&evt_CMS2tag_);
	}
	if(evt_CMS2tag_branch == 0 ) {
	//cout << "Branch evt_CMS2tag does not exist." << endl;
	}
	evt_dataset_branch = 0;
	if (tree->GetAlias("evt_dataset") != 0) {
		evt_dataset_branch = tree->GetBranch(tree->GetAlias("evt_dataset"));
		evt_dataset_branch->SetAddress(&evt_dataset_);
	}
	if(evt_dataset_branch == 0 ) {
	//cout << "Branch evt_dataset does not exist." << endl;
	}
	hlt_trigNames_branch = 0;
	if (tree->GetAlias("hlt_trigNames") != 0) {
		hlt_trigNames_branch = tree->GetBranch(tree->GetAlias("hlt_trigNames"));
		hlt_trigNames_branch->SetAddress(&hlt_trigNames_);
	}
	if(hlt_trigNames_branch == 0 ) {
	//cout << "Branch hlt_trigNames does not exist." << endl;
	}
	l1_trigNames_branch = 0;
	if (tree->GetAlias("l1_trigNames") != 0) {
		l1_trigNames_branch = tree->GetBranch(tree->GetAlias("l1_trigNames"));
		l1_trigNames_branch->SetAddress(&l1_trigNames_);
	}
	if(l1_trigNames_branch == 0 ) {
	//cout << "Branch l1_trigNames does not exist." << endl;
	}
	jets_closestElectron_DR_branch = 0;
	if (tree->GetAlias("jets_closestElectron_DR") != 0) {
		jets_closestElectron_DR_branch = tree->GetBranch(tree->GetAlias("jets_closestElectron_DR"));
		jets_closestElectron_DR_branch->SetAddress(&jets_closestElectron_DR_);
	}
	if(jets_closestElectron_DR_branch == 0 ) {
	//cout << "Branch jets_closestElectron_DR does not exist." << endl;
	}
	jets_closestMuon_DR_branch = 0;
	if (tree->GetAlias("jets_closestMuon_DR") != 0) {
		jets_closestMuon_DR_branch = tree->GetBranch(tree->GetAlias("jets_closestMuon_DR"));
		jets_closestMuon_DR_branch->SetAddress(&jets_closestMuon_DR_);
	}
	if(jets_closestMuon_DR_branch == 0 ) {
	//cout << "Branch jets_closestMuon_DR does not exist." << endl;
	}
	evt_bs_Xwidth_branch = 0;
	if (tree->GetAlias("evt_bs_Xwidth") != 0) {
		evt_bs_Xwidth_branch = tree->GetBranch(tree->GetAlias("evt_bs_Xwidth"));
		evt_bs_Xwidth_branch->SetAddress(&evt_bs_Xwidth_);
	}
	if(evt_bs_Xwidth_branch == 0 ) {
	//cout << "Branch evt_bs_Xwidth does not exist." << endl;
	}
	evt_bs_XwidthErr_branch = 0;
	if (tree->GetAlias("evt_bs_XwidthErr") != 0) {
		evt_bs_XwidthErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_XwidthErr"));
		evt_bs_XwidthErr_branch->SetAddress(&evt_bs_XwidthErr_);
	}
	if(evt_bs_XwidthErr_branch == 0 ) {
	//cout << "Branch evt_bs_XwidthErr does not exist." << endl;
	}
	evt_bs_Ywidth_branch = 0;
	if (tree->GetAlias("evt_bs_Ywidth") != 0) {
		evt_bs_Ywidth_branch = tree->GetBranch(tree->GetAlias("evt_bs_Ywidth"));
		evt_bs_Ywidth_branch->SetAddress(&evt_bs_Ywidth_);
	}
	if(evt_bs_Ywidth_branch == 0 ) {
	//cout << "Branch evt_bs_Ywidth does not exist." << endl;
	}
	evt_bs_YwidthErr_branch = 0;
	if (tree->GetAlias("evt_bs_YwidthErr") != 0) {
		evt_bs_YwidthErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_YwidthErr"));
		evt_bs_YwidthErr_branch->SetAddress(&evt_bs_YwidthErr_);
	}
	if(evt_bs_YwidthErr_branch == 0 ) {
	//cout << "Branch evt_bs_YwidthErr does not exist." << endl;
	}
	evt_bs_dxdz_branch = 0;
	if (tree->GetAlias("evt_bs_dxdz") != 0) {
		evt_bs_dxdz_branch = tree->GetBranch(tree->GetAlias("evt_bs_dxdz"));
		evt_bs_dxdz_branch->SetAddress(&evt_bs_dxdz_);
	}
	if(evt_bs_dxdz_branch == 0 ) {
	//cout << "Branch evt_bs_dxdz does not exist." << endl;
	}
	evt_bs_dxdzErr_branch = 0;
	if (tree->GetAlias("evt_bs_dxdzErr") != 0) {
		evt_bs_dxdzErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_dxdzErr"));
		evt_bs_dxdzErr_branch->SetAddress(&evt_bs_dxdzErr_);
	}
	if(evt_bs_dxdzErr_branch == 0 ) {
	//cout << "Branch evt_bs_dxdzErr does not exist." << endl;
	}
	evt_bs_dydz_branch = 0;
	if (tree->GetAlias("evt_bs_dydz") != 0) {
		evt_bs_dydz_branch = tree->GetBranch(tree->GetAlias("evt_bs_dydz"));
		evt_bs_dydz_branch->SetAddress(&evt_bs_dydz_);
	}
	if(evt_bs_dydz_branch == 0 ) {
	//cout << "Branch evt_bs_dydz does not exist." << endl;
	}
	evt_bs_dydzErr_branch = 0;
	if (tree->GetAlias("evt_bs_dydzErr") != 0) {
		evt_bs_dydzErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_dydzErr"));
		evt_bs_dydzErr_branch->SetAddress(&evt_bs_dydzErr_);
	}
	if(evt_bs_dydzErr_branch == 0 ) {
	//cout << "Branch evt_bs_dydzErr does not exist." << endl;
	}
	evt_bs_sigmaZ_branch = 0;
	if (tree->GetAlias("evt_bs_sigmaZ") != 0) {
		evt_bs_sigmaZ_branch = tree->GetBranch(tree->GetAlias("evt_bs_sigmaZ"));
		evt_bs_sigmaZ_branch->SetAddress(&evt_bs_sigmaZ_);
	}
	if(evt_bs_sigmaZ_branch == 0 ) {
	//cout << "Branch evt_bs_sigmaZ does not exist." << endl;
	}
	evt_bs_sigmaZErr_branch = 0;
	if (tree->GetAlias("evt_bs_sigmaZErr") != 0) {
		evt_bs_sigmaZErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_sigmaZErr"));
		evt_bs_sigmaZErr_branch->SetAddress(&evt_bs_sigmaZErr_);
	}
	if(evt_bs_sigmaZErr_branch == 0 ) {
	//cout << "Branch evt_bs_sigmaZErr does not exist." << endl;
	}
	evt_bs_xErr_branch = 0;
	if (tree->GetAlias("evt_bs_xErr") != 0) {
		evt_bs_xErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_xErr"));
		evt_bs_xErr_branch->SetAddress(&evt_bs_xErr_);
	}
	if(evt_bs_xErr_branch == 0 ) {
	//cout << "Branch evt_bs_xErr does not exist." << endl;
	}
	evt_bs_yErr_branch = 0;
	if (tree->GetAlias("evt_bs_yErr") != 0) {
		evt_bs_yErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_yErr"));
		evt_bs_yErr_branch->SetAddress(&evt_bs_yErr_);
	}
	if(evt_bs_yErr_branch == 0 ) {
	//cout << "Branch evt_bs_yErr does not exist." << endl;
	}
	evt_bs_zErr_branch = 0;
	if (tree->GetAlias("evt_bs_zErr") != 0) {
		evt_bs_zErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_zErr"));
		evt_bs_zErr_branch->SetAddress(&evt_bs_zErr_);
	}
	if(evt_bs_zErr_branch == 0 ) {
	//cout << "Branch evt_bs_zErr does not exist." << endl;
	}
	evt_bField_branch = 0;
	if (tree->GetAlias("evt_bField") != 0) {
		evt_bField_branch = tree->GetBranch(tree->GetAlias("evt_bField"));
		evt_bField_branch->SetAddress(&evt_bField_);
	}
	if(evt_bField_branch == 0 ) {
	//cout << "Branch evt_bField does not exist." << endl;
	}
	hcalnoise_eventChargeFraction_branch = 0;
	if (tree->GetAlias("hcalnoise_eventChargeFraction") != 0) {
		hcalnoise_eventChargeFraction_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventChargeFraction"));
		hcalnoise_eventChargeFraction_branch->SetAddress(&hcalnoise_eventChargeFraction_);
	}
	if(hcalnoise_eventChargeFraction_branch == 0 ) {
	//cout << "Branch hcalnoise_eventChargeFraction does not exist." << endl;
	}
	hcalnoise_eventEMEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventEMEnergy") != 0) {
		hcalnoise_eventEMEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventEMEnergy"));
		hcalnoise_eventEMEnergy_branch->SetAddress(&hcalnoise_eventEMEnergy_);
	}
	if(hcalnoise_eventEMEnergy_branch == 0 ) {
	//cout << "Branch hcalnoise_eventEMEnergy does not exist." << endl;
	}
	hcalnoise_eventEMFraction_branch = 0;
	if (tree->GetAlias("hcalnoise_eventEMFraction") != 0) {
		hcalnoise_eventEMFraction_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventEMFraction"));
		hcalnoise_eventEMFraction_branch->SetAddress(&hcalnoise_eventEMFraction_);
	}
	if(hcalnoise_eventEMFraction_branch == 0 ) {
	//cout << "Branch hcalnoise_eventEMFraction does not exist." << endl;
	}
	hcalnoise_eventHadEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventHadEnergy") != 0) {
		hcalnoise_eventHadEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventHadEnergy"));
		hcalnoise_eventHadEnergy_branch->SetAddress(&hcalnoise_eventHadEnergy_);
	}
	if(hcalnoise_eventHadEnergy_branch == 0 ) {
	//cout << "Branch hcalnoise_eventHadEnergy does not exist." << endl;
	}
	hcalnoise_eventTrackEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventTrackEnergy") != 0) {
		hcalnoise_eventTrackEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventTrackEnergy"));
		hcalnoise_eventTrackEnergy_branch->SetAddress(&hcalnoise_eventTrackEnergy_);
	}
	if(hcalnoise_eventTrackEnergy_branch == 0 ) {
	//cout << "Branch hcalnoise_eventTrackEnergy does not exist." << endl;
	}
	hcalnoise_max10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_max10GeVHitTime") != 0) {
		hcalnoise_max10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_max10GeVHitTime"));
		hcalnoise_max10GeVHitTime_branch->SetAddress(&hcalnoise_max10GeVHitTime_);
	}
	if(hcalnoise_max10GeVHitTime_branch == 0 ) {
	//cout << "Branch hcalnoise_max10GeVHitTime does not exist." << endl;
	}
	hcalnoise_max25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_max25GeVHitTime") != 0) {
		hcalnoise_max25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_max25GeVHitTime"));
		hcalnoise_max25GeVHitTime_branch->SetAddress(&hcalnoise_max25GeVHitTime_);
	}
	if(hcalnoise_max25GeVHitTime_branch == 0 ) {
	//cout << "Branch hcalnoise_max25GeVHitTime does not exist." << endl;
	}
	hcalnoise_min10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_min10GeVHitTime") != 0) {
		hcalnoise_min10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_min10GeVHitTime"));
		hcalnoise_min10GeVHitTime_branch->SetAddress(&hcalnoise_min10GeVHitTime_);
	}
	if(hcalnoise_min10GeVHitTime_branch == 0 ) {
	//cout << "Branch hcalnoise_min10GeVHitTime does not exist." << endl;
	}
	hcalnoise_min25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_min25GeVHitTime") != 0) {
		hcalnoise_min25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_min25GeVHitTime"));
		hcalnoise_min25GeVHitTime_branch->SetAddress(&hcalnoise_min25GeVHitTime_);
	}
	if(hcalnoise_min25GeVHitTime_branch == 0 ) {
	//cout << "Branch hcalnoise_min25GeVHitTime does not exist." << endl;
	}
	hcalnoise_minE10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE10TS") != 0) {
		hcalnoise_minE10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE10TS"));
		hcalnoise_minE10TS_branch->SetAddress(&hcalnoise_minE10TS_);
	}
	if(hcalnoise_minE10TS_branch == 0 ) {
	//cout << "Branch hcalnoise_minE10TS does not exist." << endl;
	}
	hcalnoise_minE2Over10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE2Over10TS") != 0) {
		hcalnoise_minE2Over10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE2Over10TS"));
		hcalnoise_minE2Over10TS_branch->SetAddress(&hcalnoise_minE2Over10TS_);
	}
	if(hcalnoise_minE2Over10TS_branch == 0 ) {
	//cout << "Branch hcalnoise_minE2Over10TS does not exist." << endl;
	}
	hcalnoise_minE2TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE2TS") != 0) {
		hcalnoise_minE2TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE2TS"));
		hcalnoise_minE2TS_branch->SetAddress(&hcalnoise_minE2TS_);
	}
	if(hcalnoise_minE2TS_branch == 0 ) {
	//cout << "Branch hcalnoise_minE2TS does not exist." << endl;
	}
	hcalnoise_minHPDEMF_branch = 0;
	if (tree->GetAlias("hcalnoise_minHPDEMF") != 0) {
		hcalnoise_minHPDEMF_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minHPDEMF"));
		hcalnoise_minHPDEMF_branch->SetAddress(&hcalnoise_minHPDEMF_);
	}
	if(hcalnoise_minHPDEMF_branch == 0 ) {
	//cout << "Branch hcalnoise_minHPDEMF does not exist." << endl;
	}
	hcalnoise_minRBXEMF_branch = 0;
	if (tree->GetAlias("hcalnoise_minRBXEMF") != 0) {
		hcalnoise_minRBXEMF_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minRBXEMF"));
		hcalnoise_minRBXEMF_branch->SetAddress(&hcalnoise_minRBXEMF_);
	}
	if(hcalnoise_minRBXEMF_branch == 0 ) {
	//cout << "Branch hcalnoise_minRBXEMF does not exist." << endl;
	}
	hcalnoise_rms10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_rms10GeVHitTime") != 0) {
		hcalnoise_rms10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_rms10GeVHitTime"));
		hcalnoise_rms10GeVHitTime_branch->SetAddress(&hcalnoise_rms10GeVHitTime_);
	}
	if(hcalnoise_rms10GeVHitTime_branch == 0 ) {
	//cout << "Branch hcalnoise_rms10GeVHitTime does not exist." << endl;
	}
	hcalnoise_rms25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_rms25GeVHitTime") != 0) {
		hcalnoise_rms25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_rms25GeVHitTime"));
		hcalnoise_rms25GeVHitTime_branch->SetAddress(&hcalnoise_rms25GeVHitTime_);
	}
	if(hcalnoise_rms25GeVHitTime_branch == 0 ) {
	//cout << "Branch hcalnoise_rms25GeVHitTime does not exist." << endl;
	}
	l1_met_etTot_branch = 0;
	if (tree->GetAlias("l1_met_etTot") != 0) {
		l1_met_etTot_branch = tree->GetBranch(tree->GetAlias("l1_met_etTot"));
		l1_met_etTot_branch->SetAddress(&l1_met_etTot_);
	}
	if(l1_met_etTot_branch == 0 ) {
	//cout << "Branch l1_met_etTot does not exist." << endl;
	}
	l1_met_met_branch = 0;
	if (tree->GetAlias("l1_met_met") != 0) {
		l1_met_met_branch = tree->GetBranch(tree->GetAlias("l1_met_met"));
		l1_met_met_branch->SetAddress(&l1_met_met_);
	}
	if(l1_met_met_branch == 0 ) {
	//cout << "Branch l1_met_met does not exist." << endl;
	}
	l1_mht_htTot_branch = 0;
	if (tree->GetAlias("l1_mht_htTot") != 0) {
		l1_mht_htTot_branch = tree->GetBranch(tree->GetAlias("l1_mht_htTot"));
		l1_mht_htTot_branch->SetAddress(&l1_mht_htTot_);
	}
	if(l1_mht_htTot_branch == 0 ) {
	//cout << "Branch l1_mht_htTot does not exist." << endl;
	}
	l1_mht_mht_branch = 0;
	if (tree->GetAlias("l1_mht_mht") != 0) {
		l1_mht_mht_branch = tree->GetBranch(tree->GetAlias("l1_mht_mht"));
		l1_mht_mht_branch->SetAddress(&l1_mht_mht_);
	}
	if(l1_mht_mht_branch == 0 ) {
	//cout << "Branch l1_mht_mht does not exist." << endl;
	}
	evt_ecalendcapm_met_branch = 0;
	if (tree->GetAlias("evt_ecalendcapm_met") != 0) {
		evt_ecalendcapm_met_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapm_met"));
		evt_ecalendcapm_met_branch->SetAddress(&evt_ecalendcapm_met_);
	}
	if(evt_ecalendcapm_met_branch == 0 ) {
	//cout << "Branch evt_ecalendcapm_met does not exist." << endl;
	}
	evt_ecalendcapm_metPhi_branch = 0;
	if (tree->GetAlias("evt_ecalendcapm_metPhi") != 0) {
		evt_ecalendcapm_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapm_metPhi"));
		evt_ecalendcapm_metPhi_branch->SetAddress(&evt_ecalendcapm_metPhi_);
	}
	if(evt_ecalendcapm_metPhi_branch == 0 ) {
	//cout << "Branch evt_ecalendcapm_metPhi does not exist." << endl;
	}
	evt_ecalendcapp_met_branch = 0;
	if (tree->GetAlias("evt_ecalendcapp_met") != 0) {
		evt_ecalendcapp_met_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapp_met"));
		evt_ecalendcapp_met_branch->SetAddress(&evt_ecalendcapp_met_);
	}
	if(evt_ecalendcapp_met_branch == 0 ) {
	//cout << "Branch evt_ecalendcapp_met does not exist." << endl;
	}
	evt_ecalendcapp_metPhi_branch = 0;
	if (tree->GetAlias("evt_ecalendcapp_metPhi") != 0) {
		evt_ecalendcapp_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalendcapp_metPhi"));
		evt_ecalendcapp_metPhi_branch->SetAddress(&evt_ecalendcapp_metPhi_);
	}
	if(evt_ecalendcapp_metPhi_branch == 0 ) {
	//cout << "Branch evt_ecalendcapp_metPhi does not exist." << endl;
	}
	evt_ecalmet_branch = 0;
	if (tree->GetAlias("evt_ecalmet") != 0) {
		evt_ecalmet_branch = tree->GetBranch(tree->GetAlias("evt_ecalmet"));
		evt_ecalmet_branch->SetAddress(&evt_ecalmet_);
	}
	if(evt_ecalmet_branch == 0 ) {
	//cout << "Branch evt_ecalmet does not exist." << endl;
	}
	evt_ecalmetPhi_branch = 0;
	if (tree->GetAlias("evt_ecalmetPhi") != 0) {
		evt_ecalmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalmetPhi"));
		evt_ecalmetPhi_branch->SetAddress(&evt_ecalmetPhi_);
	}
	if(evt_ecalmetPhi_branch == 0 ) {
	//cout << "Branch evt_ecalmetPhi does not exist." << endl;
	}
	evt_endcapm_met_branch = 0;
	if (tree->GetAlias("evt_endcapm_met") != 0) {
		evt_endcapm_met_branch = tree->GetBranch(tree->GetAlias("evt_endcapm_met"));
		evt_endcapm_met_branch->SetAddress(&evt_endcapm_met_);
	}
	if(evt_endcapm_met_branch == 0 ) {
	//cout << "Branch evt_endcapm_met does not exist." << endl;
	}
	evt_endcapm_metPhi_branch = 0;
	if (tree->GetAlias("evt_endcapm_metPhi") != 0) {
		evt_endcapm_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_endcapm_metPhi"));
		evt_endcapm_metPhi_branch->SetAddress(&evt_endcapm_metPhi_);
	}
	if(evt_endcapm_metPhi_branch == 0 ) {
	//cout << "Branch evt_endcapm_metPhi does not exist." << endl;
	}
	evt_endcapp_met_branch = 0;
	if (tree->GetAlias("evt_endcapp_met") != 0) {
		evt_endcapp_met_branch = tree->GetBranch(tree->GetAlias("evt_endcapp_met"));
		evt_endcapp_met_branch->SetAddress(&evt_endcapp_met_);
	}
	if(evt_endcapp_met_branch == 0 ) {
	//cout << "Branch evt_endcapp_met does not exist." << endl;
	}
	evt_endcapp_metPhi_branch = 0;
	if (tree->GetAlias("evt_endcapp_metPhi") != 0) {
		evt_endcapp_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_endcapp_metPhi"));
		evt_endcapp_metPhi_branch->SetAddress(&evt_endcapp_metPhi_);
	}
	if(evt_endcapp_metPhi_branch == 0 ) {
	//cout << "Branch evt_endcapp_metPhi does not exist." << endl;
	}
	evt_hcalendcapm_met_branch = 0;
	if (tree->GetAlias("evt_hcalendcapm_met") != 0) {
		evt_hcalendcapm_met_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapm_met"));
		evt_hcalendcapm_met_branch->SetAddress(&evt_hcalendcapm_met_);
	}
	if(evt_hcalendcapm_met_branch == 0 ) {
	//cout << "Branch evt_hcalendcapm_met does not exist." << endl;
	}
	evt_hcalendcapm_metPhi_branch = 0;
	if (tree->GetAlias("evt_hcalendcapm_metPhi") != 0) {
		evt_hcalendcapm_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapm_metPhi"));
		evt_hcalendcapm_metPhi_branch->SetAddress(&evt_hcalendcapm_metPhi_);
	}
	if(evt_hcalendcapm_metPhi_branch == 0 ) {
	//cout << "Branch evt_hcalendcapm_metPhi does not exist." << endl;
	}
	evt_hcalendcapp_met_branch = 0;
	if (tree->GetAlias("evt_hcalendcapp_met") != 0) {
		evt_hcalendcapp_met_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapp_met"));
		evt_hcalendcapp_met_branch->SetAddress(&evt_hcalendcapp_met_);
	}
	if(evt_hcalendcapp_met_branch == 0 ) {
	//cout << "Branch evt_hcalendcapp_met does not exist." << endl;
	}
	evt_hcalendcapp_metPhi_branch = 0;
	if (tree->GetAlias("evt_hcalendcapp_metPhi") != 0) {
		evt_hcalendcapp_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalendcapp_metPhi"));
		evt_hcalendcapp_metPhi_branch->SetAddress(&evt_hcalendcapp_metPhi_);
	}
	if(evt_hcalendcapp_metPhi_branch == 0 ) {
	//cout << "Branch evt_hcalendcapp_metPhi does not exist." << endl;
	}
	evt_hcalmet_branch = 0;
	if (tree->GetAlias("evt_hcalmet") != 0) {
		evt_hcalmet_branch = tree->GetBranch(tree->GetAlias("evt_hcalmet"));
		evt_hcalmet_branch->SetAddress(&evt_hcalmet_);
	}
	if(evt_hcalmet_branch == 0 ) {
	//cout << "Branch evt_hcalmet does not exist." << endl;
	}
	evt_hcalmetPhi_branch = 0;
	if (tree->GetAlias("evt_hcalmetPhi") != 0) {
		evt_hcalmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalmetPhi"));
		evt_hcalmetPhi_branch->SetAddress(&evt_hcalmetPhi_);
	}
	if(evt_hcalmetPhi_branch == 0 ) {
	//cout << "Branch evt_hcalmetPhi does not exist." << endl;
	}
	evt_met_branch = 0;
	if (tree->GetAlias("evt_met") != 0) {
		evt_met_branch = tree->GetBranch(tree->GetAlias("evt_met"));
		evt_met_branch->SetAddress(&evt_met_);
	}
	if(evt_met_branch == 0 ) {
	//cout << "Branch evt_met does not exist." << endl;
	}
	evt_metHO_branch = 0;
	if (tree->GetAlias("evt_metHO") != 0) {
		evt_metHO_branch = tree->GetBranch(tree->GetAlias("evt_metHO"));
		evt_metHO_branch->SetAddress(&evt_metHO_);
	}
	if(evt_metHO_branch == 0 ) {
	//cout << "Branch evt_metHO does not exist." << endl;
	}
	evt_metHOPhi_branch = 0;
	if (tree->GetAlias("evt_metHOPhi") != 0) {
		evt_metHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metHOPhi"));
		evt_metHOPhi_branch->SetAddress(&evt_metHOPhi_);
	}
	if(evt_metHOPhi_branch == 0 ) {
	//cout << "Branch evt_metHOPhi does not exist." << endl;
	}
	evt_metHOSig_branch = 0;
	if (tree->GetAlias("evt_metHOSig") != 0) {
		evt_metHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metHOSig"));
		evt_metHOSig_branch->SetAddress(&evt_metHOSig_);
	}
	if(evt_metHOSig_branch == 0 ) {
	//cout << "Branch evt_metHOSig does not exist." << endl;
	}
	evt_metMuonCorr_branch = 0;
	if (tree->GetAlias("evt_metMuonCorr") != 0) {
		evt_metMuonCorr_branch = tree->GetBranch(tree->GetAlias("evt_metMuonCorr"));
		evt_metMuonCorr_branch->SetAddress(&evt_metMuonCorr_);
	}
	if(evt_metMuonCorr_branch == 0 ) {
	//cout << "Branch evt_metMuonCorr does not exist." << endl;
	}
	evt_metMuonCorrPhi_branch = 0;
	if (tree->GetAlias("evt_metMuonCorrPhi") != 0) {
		evt_metMuonCorrPhi_branch = tree->GetBranch(tree->GetAlias("evt_metMuonCorrPhi"));
		evt_metMuonCorrPhi_branch->SetAddress(&evt_metMuonCorrPhi_);
	}
	if(evt_metMuonCorrPhi_branch == 0 ) {
	//cout << "Branch evt_metMuonCorrPhi does not exist." << endl;
	}
	evt_metMuonCorrSig_branch = 0;
	if (tree->GetAlias("evt_metMuonCorrSig") != 0) {
		evt_metMuonCorrSig_branch = tree->GetBranch(tree->GetAlias("evt_metMuonCorrSig"));
		evt_metMuonCorrSig_branch->SetAddress(&evt_metMuonCorrSig_);
	}
	if(evt_metMuonCorrSig_branch == 0 ) {
	//cout << "Branch evt_metMuonCorrSig does not exist." << endl;
	}
	evt_metMuonJESCorr_branch = 0;
	if (tree->GetAlias("evt_metMuonJESCorr") != 0) {
		evt_metMuonJESCorr_branch = tree->GetBranch(tree->GetAlias("evt_metMuonJESCorr"));
		evt_metMuonJESCorr_branch->SetAddress(&evt_metMuonJESCorr_);
	}
	if(evt_metMuonJESCorr_branch == 0 ) {
	//cout << "Branch evt_metMuonJESCorr does not exist." << endl;
	}
	evt_metMuonJESCorrPhi_branch = 0;
	if (tree->GetAlias("evt_metMuonJESCorrPhi") != 0) {
		evt_metMuonJESCorrPhi_branch = tree->GetBranch(tree->GetAlias("evt_metMuonJESCorrPhi"));
		evt_metMuonJESCorrPhi_branch->SetAddress(&evt_metMuonJESCorrPhi_);
	}
	if(evt_metMuonJESCorrPhi_branch == 0 ) {
	//cout << "Branch evt_metMuonJESCorrPhi does not exist." << endl;
	}
	evt_metMuonJESCorrSig_branch = 0;
	if (tree->GetAlias("evt_metMuonJESCorrSig") != 0) {
		evt_metMuonJESCorrSig_branch = tree->GetBranch(tree->GetAlias("evt_metMuonJESCorrSig"));
		evt_metMuonJESCorrSig_branch->SetAddress(&evt_metMuonJESCorrSig_);
	}
	if(evt_metMuonJESCorrSig_branch == 0 ) {
	//cout << "Branch evt_metMuonJESCorrSig does not exist." << endl;
	}
	evt_metNoHF_branch = 0;
	if (tree->GetAlias("evt_metNoHF") != 0) {
		evt_metNoHF_branch = tree->GetBranch(tree->GetAlias("evt_metNoHF"));
		evt_metNoHF_branch->SetAddress(&evt_metNoHF_);
	}
	if(evt_metNoHF_branch == 0 ) {
	//cout << "Branch evt_metNoHF does not exist." << endl;
	}
	evt_metNoHFHO_branch = 0;
	if (tree->GetAlias("evt_metNoHFHO") != 0) {
		evt_metNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFHO"));
		evt_metNoHFHO_branch->SetAddress(&evt_metNoHFHO_);
	}
	if(evt_metNoHFHO_branch == 0 ) {
	//cout << "Branch evt_metNoHFHO does not exist." << endl;
	}
	evt_metNoHFHOPhi_branch = 0;
	if (tree->GetAlias("evt_metNoHFHOPhi") != 0) {
		evt_metNoHFHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFHOPhi"));
		evt_metNoHFHOPhi_branch->SetAddress(&evt_metNoHFHOPhi_);
	}
	if(evt_metNoHFHOPhi_branch == 0 ) {
	//cout << "Branch evt_metNoHFHOPhi does not exist." << endl;
	}
	evt_metNoHFHOSig_branch = 0;
	if (tree->GetAlias("evt_metNoHFHOSig") != 0) {
		evt_metNoHFHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFHOSig"));
		evt_metNoHFHOSig_branch->SetAddress(&evt_metNoHFHOSig_);
	}
	if(evt_metNoHFHOSig_branch == 0 ) {
	//cout << "Branch evt_metNoHFHOSig does not exist." << endl;
	}
	evt_metNoHFPhi_branch = 0;
	if (tree->GetAlias("evt_metNoHFPhi") != 0) {
		evt_metNoHFPhi_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFPhi"));
		evt_metNoHFPhi_branch->SetAddress(&evt_metNoHFPhi_);
	}
	if(evt_metNoHFPhi_branch == 0 ) {
	//cout << "Branch evt_metNoHFPhi does not exist." << endl;
	}
	evt_metNoHFSig_branch = 0;
	if (tree->GetAlias("evt_metNoHFSig") != 0) {
		evt_metNoHFSig_branch = tree->GetBranch(tree->GetAlias("evt_metNoHFSig"));
		evt_metNoHFSig_branch->SetAddress(&evt_metNoHFSig_);
	}
	if(evt_metNoHFSig_branch == 0 ) {
	//cout << "Branch evt_metNoHFSig does not exist." << endl;
	}
	evt_metOpt_branch = 0;
	if (tree->GetAlias("evt_metOpt") != 0) {
		evt_metOpt_branch = tree->GetBranch(tree->GetAlias("evt_metOpt"));
		evt_metOpt_branch->SetAddress(&evt_metOpt_);
	}
	if(evt_metOpt_branch == 0 ) {
	//cout << "Branch evt_metOpt does not exist." << endl;
	}
	evt_metOptHO_branch = 0;
	if (tree->GetAlias("evt_metOptHO") != 0) {
		evt_metOptHO_branch = tree->GetBranch(tree->GetAlias("evt_metOptHO"));
		evt_metOptHO_branch->SetAddress(&evt_metOptHO_);
	}
	if(evt_metOptHO_branch == 0 ) {
	//cout << "Branch evt_metOptHO does not exist." << endl;
	}
	evt_metOptHOPhi_branch = 0;
	if (tree->GetAlias("evt_metOptHOPhi") != 0) {
		evt_metOptHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptHOPhi"));
		evt_metOptHOPhi_branch->SetAddress(&evt_metOptHOPhi_);
	}
	if(evt_metOptHOPhi_branch == 0 ) {
	//cout << "Branch evt_metOptHOPhi does not exist." << endl;
	}
	evt_metOptHOSig_branch = 0;
	if (tree->GetAlias("evt_metOptHOSig") != 0) {
		evt_metOptHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptHOSig"));
		evt_metOptHOSig_branch->SetAddress(&evt_metOptHOSig_);
	}
	if(evt_metOptHOSig_branch == 0 ) {
	//cout << "Branch evt_metOptHOSig does not exist." << endl;
	}
	evt_metOptNoHF_branch = 0;
	if (tree->GetAlias("evt_metOptNoHF") != 0) {
		evt_metOptNoHF_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHF"));
		evt_metOptNoHF_branch->SetAddress(&evt_metOptNoHF_);
	}
	if(evt_metOptNoHF_branch == 0 ) {
	//cout << "Branch evt_metOptNoHF does not exist." << endl;
	}
	evt_metOptNoHFHO_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFHO") != 0) {
		evt_metOptNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFHO"));
		evt_metOptNoHFHO_branch->SetAddress(&evt_metOptNoHFHO_);
	}
	if(evt_metOptNoHFHO_branch == 0 ) {
	//cout << "Branch evt_metOptNoHFHO does not exist." << endl;
	}
	evt_metOptNoHFHOPhi_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFHOPhi") != 0) {
		evt_metOptNoHFHOPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFHOPhi"));
		evt_metOptNoHFHOPhi_branch->SetAddress(&evt_metOptNoHFHOPhi_);
	}
	if(evt_metOptNoHFHOPhi_branch == 0 ) {
	//cout << "Branch evt_metOptNoHFHOPhi does not exist." << endl;
	}
	evt_metOptNoHFHOSig_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFHOSig") != 0) {
		evt_metOptNoHFHOSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFHOSig"));
		evt_metOptNoHFHOSig_branch->SetAddress(&evt_metOptNoHFHOSig_);
	}
	if(evt_metOptNoHFHOSig_branch == 0 ) {
	//cout << "Branch evt_metOptNoHFHOSig does not exist." << endl;
	}
	evt_metOptNoHFPhi_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFPhi") != 0) {
		evt_metOptNoHFPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFPhi"));
		evt_metOptNoHFPhi_branch->SetAddress(&evt_metOptNoHFPhi_);
	}
	if(evt_metOptNoHFPhi_branch == 0 ) {
	//cout << "Branch evt_metOptNoHFPhi does not exist." << endl;
	}
	evt_metOptNoHFSig_branch = 0;
	if (tree->GetAlias("evt_metOptNoHFSig") != 0) {
		evt_metOptNoHFSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptNoHFSig"));
		evt_metOptNoHFSig_branch->SetAddress(&evt_metOptNoHFSig_);
	}
	if(evt_metOptNoHFSig_branch == 0 ) {
	//cout << "Branch evt_metOptNoHFSig does not exist." << endl;
	}
	evt_metOptPhi_branch = 0;
	if (tree->GetAlias("evt_metOptPhi") != 0) {
		evt_metOptPhi_branch = tree->GetBranch(tree->GetAlias("evt_metOptPhi"));
		evt_metOptPhi_branch->SetAddress(&evt_metOptPhi_);
	}
	if(evt_metOptPhi_branch == 0 ) {
	//cout << "Branch evt_metOptPhi does not exist." << endl;
	}
	evt_metOptSig_branch = 0;
	if (tree->GetAlias("evt_metOptSig") != 0) {
		evt_metOptSig_branch = tree->GetBranch(tree->GetAlias("evt_metOptSig"));
		evt_metOptSig_branch->SetAddress(&evt_metOptSig_);
	}
	if(evt_metOptSig_branch == 0 ) {
	//cout << "Branch evt_metOptSig does not exist." << endl;
	}
	evt_metPhi_branch = 0;
	if (tree->GetAlias("evt_metPhi") != 0) {
		evt_metPhi_branch = tree->GetBranch(tree->GetAlias("evt_metPhi"));
		evt_metPhi_branch->SetAddress(&evt_metPhi_);
	}
	if(evt_metPhi_branch == 0 ) {
	//cout << "Branch evt_metPhi does not exist." << endl;
	}
	evt_metSig_branch = 0;
	if (tree->GetAlias("evt_metSig") != 0) {
		evt_metSig_branch = tree->GetBranch(tree->GetAlias("evt_metSig"));
		evt_metSig_branch->SetAddress(&evt_metSig_);
	}
	if(evt_metSig_branch == 0 ) {
	//cout << "Branch evt_metSig does not exist." << endl;
	}
	evt_sumet_branch = 0;
	if (tree->GetAlias("evt_sumet") != 0) {
		evt_sumet_branch = tree->GetBranch(tree->GetAlias("evt_sumet"));
		evt_sumet_branch->SetAddress(&evt_sumet_);
	}
	if(evt_sumet_branch == 0 ) {
	//cout << "Branch evt_sumet does not exist." << endl;
	}
	evt_sumetHO_branch = 0;
	if (tree->GetAlias("evt_sumetHO") != 0) {
		evt_sumetHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetHO"));
		evt_sumetHO_branch->SetAddress(&evt_sumetHO_);
	}
	if(evt_sumetHO_branch == 0 ) {
	//cout << "Branch evt_sumetHO does not exist." << endl;
	}
	evt_sumetMuonCorr_branch = 0;
	if (tree->GetAlias("evt_sumetMuonCorr") != 0) {
		evt_sumetMuonCorr_branch = tree->GetBranch(tree->GetAlias("evt_sumetMuonCorr"));
		evt_sumetMuonCorr_branch->SetAddress(&evt_sumetMuonCorr_);
	}
	if(evt_sumetMuonCorr_branch == 0 ) {
	//cout << "Branch evt_sumetMuonCorr does not exist." << endl;
	}
	evt_sumetNoHF_branch = 0;
	if (tree->GetAlias("evt_sumetNoHF") != 0) {
		evt_sumetNoHF_branch = tree->GetBranch(tree->GetAlias("evt_sumetNoHF"));
		evt_sumetNoHF_branch->SetAddress(&evt_sumetNoHF_);
	}
	if(evt_sumetNoHF_branch == 0 ) {
	//cout << "Branch evt_sumetNoHF does not exist." << endl;
	}
	evt_sumetNoHFHO_branch = 0;
	if (tree->GetAlias("evt_sumetNoHFHO") != 0) {
		evt_sumetNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetNoHFHO"));
		evt_sumetNoHFHO_branch->SetAddress(&evt_sumetNoHFHO_);
	}
	if(evt_sumetNoHFHO_branch == 0 ) {
	//cout << "Branch evt_sumetNoHFHO does not exist." << endl;
	}
	evt_sumetOpt_branch = 0;
	if (tree->GetAlias("evt_sumetOpt") != 0) {
		evt_sumetOpt_branch = tree->GetBranch(tree->GetAlias("evt_sumetOpt"));
		evt_sumetOpt_branch->SetAddress(&evt_sumetOpt_);
	}
	if(evt_sumetOpt_branch == 0 ) {
	//cout << "Branch evt_sumetOpt does not exist." << endl;
	}
	evt_sumetOptHO_branch = 0;
	if (tree->GetAlias("evt_sumetOptHO") != 0) {
		evt_sumetOptHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetOptHO"));
		evt_sumetOptHO_branch->SetAddress(&evt_sumetOptHO_);
	}
	if(evt_sumetOptHO_branch == 0 ) {
	//cout << "Branch evt_sumetOptHO does not exist." << endl;
	}
	evt_sumetOptNoHF_branch = 0;
	if (tree->GetAlias("evt_sumetOptNoHF") != 0) {
		evt_sumetOptNoHF_branch = tree->GetBranch(tree->GetAlias("evt_sumetOptNoHF"));
		evt_sumetOptNoHF_branch->SetAddress(&evt_sumetOptNoHF_);
	}
	if(evt_sumetOptNoHF_branch == 0 ) {
	//cout << "Branch evt_sumetOptNoHF does not exist." << endl;
	}
	evt_sumetOptNoHFHO_branch = 0;
	if (tree->GetAlias("evt_sumetOptNoHFHO") != 0) {
		evt_sumetOptNoHFHO_branch = tree->GetBranch(tree->GetAlias("evt_sumetOptNoHFHO"));
		evt_sumetOptNoHFHO_branch->SetAddress(&evt_sumetOptNoHFHO_);
	}
	if(evt_sumetOptNoHFHO_branch == 0 ) {
	//cout << "Branch evt_sumetOptNoHFHO does not exist." << endl;
	}
	evt_pfmet_branch = 0;
	if (tree->GetAlias("evt_pfmet") != 0) {
		evt_pfmet_branch = tree->GetBranch(tree->GetAlias("evt_pfmet"));
		evt_pfmet_branch->SetAddress(&evt_pfmet_);
	}
	if(evt_pfmet_branch == 0 ) {
	//cout << "Branch evt_pfmet does not exist." << endl;
	}
	evt_pfmetPhi_branch = 0;
	if (tree->GetAlias("evt_pfmetPhi") != 0) {
		evt_pfmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_pfmetPhi"));
		evt_pfmetPhi_branch->SetAddress(&evt_pfmetPhi_);
	}
	if(evt_pfmetPhi_branch == 0 ) {
	//cout << "Branch evt_pfmetPhi does not exist." << endl;
	}
	evt_pfmetSig_branch = 0;
	if (tree->GetAlias("evt_pfmetSig") != 0) {
		evt_pfmetSig_branch = tree->GetBranch(tree->GetAlias("evt_pfmetSig"));
		evt_pfmetSig_branch->SetAddress(&evt_pfmetSig_);
	}
	if(evt_pfmetSig_branch == 0 ) {
	//cout << "Branch evt_pfmetSig does not exist." << endl;
	}
	evt_pfsumet_branch = 0;
	if (tree->GetAlias("evt_pfsumet") != 0) {
		evt_pfsumet_branch = tree->GetBranch(tree->GetAlias("evt_pfsumet"));
		evt_pfsumet_branch->SetAddress(&evt_pfsumet_);
	}
	if(evt_pfsumet_branch == 0 ) {
	//cout << "Branch evt_pfsumet does not exist." << endl;
	}
	evt_tcmet_branch = 0;
	if (tree->GetAlias("evt_tcmet") != 0) {
		evt_tcmet_branch = tree->GetBranch(tree->GetAlias("evt_tcmet"));
		evt_tcmet_branch->SetAddress(&evt_tcmet_);
	}
	if(evt_tcmet_branch == 0 ) {
	//cout << "Branch evt_tcmet does not exist." << endl;
	}
	evt_tcmetPhi_branch = 0;
	if (tree->GetAlias("evt_tcmetPhi") != 0) {
		evt_tcmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_tcmetPhi"));
		evt_tcmetPhi_branch->SetAddress(&evt_tcmetPhi_);
	}
	if(evt_tcmetPhi_branch == 0 ) {
	//cout << "Branch evt_tcmetPhi does not exist." << endl;
	}
	evt_tcmetSig_branch = 0;
	if (tree->GetAlias("evt_tcmetSig") != 0) {
		evt_tcmetSig_branch = tree->GetBranch(tree->GetAlias("evt_tcmetSig"));
		evt_tcmetSig_branch->SetAddress(&evt_tcmetSig_);
	}
	if(evt_tcmetSig_branch == 0 ) {
	//cout << "Branch evt_tcmetSig does not exist." << endl;
	}
	evt_tcsumet_branch = 0;
	if (tree->GetAlias("evt_tcsumet") != 0) {
		evt_tcsumet_branch = tree->GetBranch(tree->GetAlias("evt_tcsumet"));
		evt_tcsumet_branch->SetAddress(&evt_tcsumet_);
	}
	if(evt_tcsumet_branch == 0 ) {
	//cout << "Branch evt_tcsumet does not exist." << endl;
	}
	hlt_trigObjs_p4_branch = 0;
	if (tree->GetAlias("hlt_trigObjs_p4") != 0) {
		hlt_trigObjs_p4_branch = tree->GetBranch(tree->GetAlias("hlt_trigObjs_p4"));
		hlt_trigObjs_p4_branch->SetAddress(&hlt_trigObjs_p4_);
	}
	if(hlt_trigObjs_p4_branch == 0 ) {
	//cout << "Branch hlt_trigObjs_p4 does not exist." << endl;
	}
	evt_covMatrix_branch = 0;
	if (tree->GetAlias("evt_covMatrix") != 0) {
		evt_covMatrix_branch = tree->GetBranch(tree->GetAlias("evt_covMatrix"));
		evt_covMatrix_branch->SetAddress(&evt_covMatrix_);
	}
	if(evt_covMatrix_branch == 0 ) {
	//cout << "Branch evt_covMatrix does not exist." << endl;
	}
	twrs_ecalTime_branch = 0;
	if (tree->GetAlias("twrs_ecalTime") != 0) {
		twrs_ecalTime_branch = tree->GetBranch(tree->GetAlias("twrs_ecalTime"));
		twrs_ecalTime_branch->SetAddress(&twrs_ecalTime_);
	}
	if(twrs_ecalTime_branch == 0 ) {
	//cout << "Branch twrs_ecalTime does not exist." << endl;
	}
	twrs_emEnergy_branch = 0;
	if (tree->GetAlias("twrs_emEnergy") != 0) {
		twrs_emEnergy_branch = tree->GetBranch(tree->GetAlias("twrs_emEnergy"));
		twrs_emEnergy_branch->SetAddress(&twrs_emEnergy_);
	}
	if(twrs_emEnergy_branch == 0 ) {
	//cout << "Branch twrs_emEnergy does not exist." << endl;
	}
	twrs_emEt_branch = 0;
	if (tree->GetAlias("twrs_emEt") != 0) {
		twrs_emEt_branch = tree->GetBranch(tree->GetAlias("twrs_emEt"));
		twrs_emEt_branch->SetAddress(&twrs_emEt_);
	}
	if(twrs_emEt_branch == 0 ) {
	//cout << "Branch twrs_emEt does not exist." << endl;
	}
	twrs_emEtcorr_branch = 0;
	if (tree->GetAlias("twrs_emEtcorr") != 0) {
		twrs_emEtcorr_branch = tree->GetBranch(tree->GetAlias("twrs_emEtcorr"));
		twrs_emEtcorr_branch->SetAddress(&twrs_emEtcorr_);
	}
	if(twrs_emEtcorr_branch == 0 ) {
	//cout << "Branch twrs_emEtcorr does not exist." << endl;
	}
	twrs_eta_branch = 0;
	if (tree->GetAlias("twrs_eta") != 0) {
		twrs_eta_branch = tree->GetBranch(tree->GetAlias("twrs_eta"));
		twrs_eta_branch->SetAddress(&twrs_eta_);
	}
	if(twrs_eta_branch == 0 ) {
	//cout << "Branch twrs_eta does not exist." << endl;
	}
	twrs_etcorr_branch = 0;
	if (tree->GetAlias("twrs_etcorr") != 0) {
		twrs_etcorr_branch = tree->GetBranch(tree->GetAlias("twrs_etcorr"));
		twrs_etcorr_branch->SetAddress(&twrs_etcorr_);
	}
	if(twrs_etcorr_branch == 0 ) {
	//cout << "Branch twrs_etcorr does not exist." << endl;
	}
	twrs_hadEnergy_branch = 0;
	if (tree->GetAlias("twrs_hadEnergy") != 0) {
		twrs_hadEnergy_branch = tree->GetBranch(tree->GetAlias("twrs_hadEnergy"));
		twrs_hadEnergy_branch->SetAddress(&twrs_hadEnergy_);
	}
	if(twrs_hadEnergy_branch == 0 ) {
	//cout << "Branch twrs_hadEnergy does not exist." << endl;
	}
	twrs_hadEt_branch = 0;
	if (tree->GetAlias("twrs_hadEt") != 0) {
		twrs_hadEt_branch = tree->GetBranch(tree->GetAlias("twrs_hadEt"));
		twrs_hadEt_branch->SetAddress(&twrs_hadEt_);
	}
	if(twrs_hadEt_branch == 0 ) {
	//cout << "Branch twrs_hadEt does not exist." << endl;
	}
	twrs_hadEtcorr_branch = 0;
	if (tree->GetAlias("twrs_hadEtcorr") != 0) {
		twrs_hadEtcorr_branch = tree->GetBranch(tree->GetAlias("twrs_hadEtcorr"));
		twrs_hadEtcorr_branch->SetAddress(&twrs_hadEtcorr_);
	}
	if(twrs_hadEtcorr_branch == 0 ) {
	//cout << "Branch twrs_hadEtcorr does not exist." << endl;
	}
	twrs_hcalTime_branch = 0;
	if (tree->GetAlias("twrs_hcalTime") != 0) {
		twrs_hcalTime_branch = tree->GetBranch(tree->GetAlias("twrs_hcalTime"));
		twrs_hcalTime_branch->SetAddress(&twrs_hcalTime_);
	}
	if(twrs_hcalTime_branch == 0 ) {
	//cout << "Branch twrs_hcalTime does not exist." << endl;
	}
	twrs_outerEnergy_branch = 0;
	if (tree->GetAlias("twrs_outerEnergy") != 0) {
		twrs_outerEnergy_branch = tree->GetBranch(tree->GetAlias("twrs_outerEnergy"));
		twrs_outerEnergy_branch->SetAddress(&twrs_outerEnergy_);
	}
	if(twrs_outerEnergy_branch == 0 ) {
	//cout << "Branch twrs_outerEnergy does not exist." << endl;
	}
	twrs_outerEt_branch = 0;
	if (tree->GetAlias("twrs_outerEt") != 0) {
		twrs_outerEt_branch = tree->GetBranch(tree->GetAlias("twrs_outerEt"));
		twrs_outerEt_branch->SetAddress(&twrs_outerEt_);
	}
	if(twrs_outerEt_branch == 0 ) {
	//cout << "Branch twrs_outerEt does not exist." << endl;
	}
	twrs_outerEtcorr_branch = 0;
	if (tree->GetAlias("twrs_outerEtcorr") != 0) {
		twrs_outerEtcorr_branch = tree->GetBranch(tree->GetAlias("twrs_outerEtcorr"));
		twrs_outerEtcorr_branch->SetAddress(&twrs_outerEtcorr_);
	}
	if(twrs_outerEtcorr_branch == 0 ) {
	//cout << "Branch twrs_outerEtcorr does not exist." << endl;
	}
	twrs_pcorr_branch = 0;
	if (tree->GetAlias("twrs_pcorr") != 0) {
		twrs_pcorr_branch = tree->GetBranch(tree->GetAlias("twrs_pcorr"));
		twrs_pcorr_branch->SetAddress(&twrs_pcorr_);
	}
	if(twrs_pcorr_branch == 0 ) {
	//cout << "Branch twrs_pcorr does not exist." << endl;
	}
	twrs_phi_branch = 0;
	if (tree->GetAlias("twrs_phi") != 0) {
		twrs_phi_branch = tree->GetBranch(tree->GetAlias("twrs_phi"));
		twrs_phi_branch->SetAddress(&twrs_phi_);
	}
	if(twrs_phi_branch == 0 ) {
	//cout << "Branch twrs_phi does not exist." << endl;
	}
	els_ecalJuraIso_branch = 0;
	if (tree->GetAlias("els_ecalJuraIso") != 0) {
		els_ecalJuraIso_branch = tree->GetBranch(tree->GetAlias("els_ecalJuraIso"));
		els_ecalJuraIso_branch->SetAddress(&els_ecalJuraIso_);
	}
	if(els_ecalJuraIso_branch == 0 ) {
	//cout << "Branch els_ecalJuraIso does not exist." << endl;
	}
	els_ecalJuraTowerIso_branch = 0;
	if (tree->GetAlias("els_ecalJuraTowerIso") != 0) {
		els_ecalJuraTowerIso_branch = tree->GetBranch(tree->GetAlias("els_ecalJuraTowerIso"));
		els_ecalJuraTowerIso_branch->SetAddress(&els_ecalJuraTowerIso_);
	}
	if(els_ecalJuraTowerIso_branch == 0 ) {
	//cout << "Branch els_ecalJuraTowerIso does not exist." << endl;
	}
	els_hcalConeIso_branch = 0;
	if (tree->GetAlias("els_hcalConeIso") != 0) {
		els_hcalConeIso_branch = tree->GetBranch(tree->GetAlias("els_hcalConeIso"));
		els_hcalConeIso_branch->SetAddress(&els_hcalConeIso_);
	}
	if(els_hcalConeIso_branch == 0 ) {
	//cout << "Branch els_hcalConeIso does not exist." << endl;
	}
	els_tkJuraIso_branch = 0;
	if (tree->GetAlias("els_tkJuraIso") != 0) {
		els_tkJuraIso_branch = tree->GetBranch(tree->GetAlias("els_tkJuraIso"));
		els_tkJuraIso_branch->SetAddress(&els_tkJuraIso_);
	}
	if(els_tkJuraIso_branch == 0 ) {
	//cout << "Branch els_tkJuraIso does not exist." << endl;
	}
	els_jetdr_branch = 0;
	if (tree->GetAlias("els_jetdr") != 0) {
		els_jetdr_branch = tree->GetBranch(tree->GetAlias("els_jetdr"));
		els_jetdr_branch->SetAddress(&els_jetdr_);
	}
	if(els_jetdr_branch == 0 ) {
	//cout << "Branch els_jetdr does not exist." << endl;
	}
	els_musdr_branch = 0;
	if (tree->GetAlias("els_musdr") != 0) {
		els_musdr_branch = tree->GetBranch(tree->GetAlias("els_musdr"));
		els_musdr_branch->SetAddress(&els_musdr_);
	}
	if(els_musdr_branch == 0 ) {
	//cout << "Branch els_musdr does not exist." << endl;
	}
	els_hcalDepth1OverEcal_branch = 0;
	if (tree->GetAlias("els_hcalDepth1OverEcal") != 0) {
		els_hcalDepth1OverEcal_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1OverEcal"));
		els_hcalDepth1OverEcal_branch->SetAddress(&els_hcalDepth1OverEcal_);
	}
	if(els_hcalDepth1OverEcal_branch == 0 ) {
	//cout << "Branch els_hcalDepth1OverEcal does not exist." << endl;
	}
	els_hcalDepth1TowerSumEt_branch = 0;
	if (tree->GetAlias("els_hcalDepth1TowerSumEt") != 0) {
		els_hcalDepth1TowerSumEt_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1TowerSumEt"));
		els_hcalDepth1TowerSumEt_branch->SetAddress(&els_hcalDepth1TowerSumEt_);
	}
	if(els_hcalDepth1TowerSumEt_branch == 0 ) {
	//cout << "Branch els_hcalDepth1TowerSumEt does not exist." << endl;
	}
	els_hcalDepth1TowerSumEt04_branch = 0;
	if (tree->GetAlias("els_hcalDepth1TowerSumEt04") != 0) {
		els_hcalDepth1TowerSumEt04_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1TowerSumEt04"));
		els_hcalDepth1TowerSumEt04_branch->SetAddress(&els_hcalDepth1TowerSumEt04_);
	}
	if(els_hcalDepth1TowerSumEt04_branch == 0 ) {
	//cout << "Branch els_hcalDepth1TowerSumEt04 does not exist." << endl;
	}
	els_hcalDepth2OverEcal_branch = 0;
	if (tree->GetAlias("els_hcalDepth2OverEcal") != 0) {
		els_hcalDepth2OverEcal_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2OverEcal"));
		els_hcalDepth2OverEcal_branch->SetAddress(&els_hcalDepth2OverEcal_);
	}
	if(els_hcalDepth2OverEcal_branch == 0 ) {
	//cout << "Branch els_hcalDepth2OverEcal does not exist." << endl;
	}
	els_hcalDepth2TowerSumEt_branch = 0;
	if (tree->GetAlias("els_hcalDepth2TowerSumEt") != 0) {
		els_hcalDepth2TowerSumEt_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2TowerSumEt"));
		els_hcalDepth2TowerSumEt_branch->SetAddress(&els_hcalDepth2TowerSumEt_);
	}
	if(els_hcalDepth2TowerSumEt_branch == 0 ) {
	//cout << "Branch els_hcalDepth2TowerSumEt does not exist." << endl;
	}
	els_hcalDepth2TowerSumEt04_branch = 0;
	if (tree->GetAlias("els_hcalDepth2TowerSumEt04") != 0) {
		els_hcalDepth2TowerSumEt04_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2TowerSumEt04"));
		els_hcalDepth2TowerSumEt04_branch->SetAddress(&els_hcalDepth2TowerSumEt04_);
	}
	if(els_hcalDepth2TowerSumEt04_branch == 0 ) {
	//cout << "Branch els_hcalDepth2TowerSumEt04 does not exist." << endl;
	}
	els_chi2_branch = 0;
	if (tree->GetAlias("els_chi2") != 0) {
		els_chi2_branch = tree->GetBranch(tree->GetAlias("els_chi2"));
		els_chi2_branch->SetAddress(&els_chi2_);
	}
	if(els_chi2_branch == 0 ) {
	//cout << "Branch els_chi2 does not exist." << endl;
	}
	els_conv_dcot_branch = 0;
	if (tree->GetAlias("els_conv_dcot") != 0) {
		els_conv_dcot_branch = tree->GetBranch(tree->GetAlias("els_conv_dcot"));
		els_conv_dcot_branch->SetAddress(&els_conv_dcot_);
	}
	if(els_conv_dcot_branch == 0 ) {
	//cout << "Branch els_conv_dcot does not exist." << endl;
	}
	els_conv_dist_branch = 0;
	if (tree->GetAlias("els_conv_dist") != 0) {
		els_conv_dist_branch = tree->GetBranch(tree->GetAlias("els_conv_dist"));
		els_conv_dist_branch->SetAddress(&els_conv_dist_);
	}
	if(els_conv_dist_branch == 0 ) {
	//cout << "Branch els_conv_dist does not exist." << endl;
	}
	els_d0_branch = 0;
	if (tree->GetAlias("els_d0") != 0) {
		els_d0_branch = tree->GetBranch(tree->GetAlias("els_d0"));
		els_d0_branch->SetAddress(&els_d0_);
	}
	if(els_d0_branch == 0 ) {
	//cout << "Branch els_d0 does not exist." << endl;
	}
	els_d0Err_branch = 0;
	if (tree->GetAlias("els_d0Err") != 0) {
		els_d0Err_branch = tree->GetBranch(tree->GetAlias("els_d0Err"));
		els_d0Err_branch->SetAddress(&els_d0Err_);
	}
	if(els_d0Err_branch == 0 ) {
	//cout << "Branch els_d0Err does not exist." << endl;
	}
	els_d0corr_branch = 0;
	if (tree->GetAlias("els_d0corr") != 0) {
		els_d0corr_branch = tree->GetBranch(tree->GetAlias("els_d0corr"));
		els_d0corr_branch->SetAddress(&els_d0corr_);
	}
	if(els_d0corr_branch == 0 ) {
	//cout << "Branch els_d0corr does not exist." << endl;
	}
	els_dEtaIn_branch = 0;
	if (tree->GetAlias("els_dEtaIn") != 0) {
		els_dEtaIn_branch = tree->GetBranch(tree->GetAlias("els_dEtaIn"));
		els_dEtaIn_branch->SetAddress(&els_dEtaIn_);
	}
	if(els_dEtaIn_branch == 0 ) {
	//cout << "Branch els_dEtaIn does not exist." << endl;
	}
	els_dEtaOut_branch = 0;
	if (tree->GetAlias("els_dEtaOut") != 0) {
		els_dEtaOut_branch = tree->GetBranch(tree->GetAlias("els_dEtaOut"));
		els_dEtaOut_branch->SetAddress(&els_dEtaOut_);
	}
	if(els_dEtaOut_branch == 0 ) {
	//cout << "Branch els_dEtaOut does not exist." << endl;
	}
	els_dPhiIn_branch = 0;
	if (tree->GetAlias("els_dPhiIn") != 0) {
		els_dPhiIn_branch = tree->GetBranch(tree->GetAlias("els_dPhiIn"));
		els_dPhiIn_branch->SetAddress(&els_dPhiIn_);
	}
	if(els_dPhiIn_branch == 0 ) {
	//cout << "Branch els_dPhiIn does not exist." << endl;
	}
	els_dPhiInPhiOut_branch = 0;
	if (tree->GetAlias("els_dPhiInPhiOut") != 0) {
		els_dPhiInPhiOut_branch = tree->GetBranch(tree->GetAlias("els_dPhiInPhiOut"));
		els_dPhiInPhiOut_branch->SetAddress(&els_dPhiInPhiOut_);
	}
	if(els_dPhiInPhiOut_branch == 0 ) {
	//cout << "Branch els_dPhiInPhiOut does not exist." << endl;
	}
	els_dPhiOut_branch = 0;
	if (tree->GetAlias("els_dPhiOut") != 0) {
		els_dPhiOut_branch = tree->GetBranch(tree->GetAlias("els_dPhiOut"));
		els_dPhiOut_branch->SetAddress(&els_dPhiOut_);
	}
	if(els_dPhiOut_branch == 0 ) {
	//cout << "Branch els_dPhiOut does not exist." << endl;
	}
	els_deltaEtaEleClusterTrackAtCalo_branch = 0;
	if (tree->GetAlias("els_deltaEtaEleClusterTrackAtCalo") != 0) {
		els_deltaEtaEleClusterTrackAtCalo_branch = tree->GetBranch(tree->GetAlias("els_deltaEtaEleClusterTrackAtCalo"));
		els_deltaEtaEleClusterTrackAtCalo_branch->SetAddress(&els_deltaEtaEleClusterTrackAtCalo_);
	}
	if(els_deltaEtaEleClusterTrackAtCalo_branch == 0 ) {
	//cout << "Branch els_deltaEtaEleClusterTrackAtCalo does not exist." << endl;
	}
	els_deltaPhiEleClusterTrackAtCalo_branch = 0;
	if (tree->GetAlias("els_deltaPhiEleClusterTrackAtCalo") != 0) {
		els_deltaPhiEleClusterTrackAtCalo_branch = tree->GetBranch(tree->GetAlias("els_deltaPhiEleClusterTrackAtCalo"));
		els_deltaPhiEleClusterTrackAtCalo_branch->SetAddress(&els_deltaPhiEleClusterTrackAtCalo_);
	}
	if(els_deltaPhiEleClusterTrackAtCalo_branch == 0 ) {
	//cout << "Branch els_deltaPhiEleClusterTrackAtCalo does not exist." << endl;
	}
	els_e1x5_branch = 0;
	if (tree->GetAlias("els_e1x5") != 0) {
		els_e1x5_branch = tree->GetBranch(tree->GetAlias("els_e1x5"));
		els_e1x5_branch->SetAddress(&els_e1x5_);
	}
	if(els_e1x5_branch == 0 ) {
	//cout << "Branch els_e1x5 does not exist." << endl;
	}
	els_e2x5Max_branch = 0;
	if (tree->GetAlias("els_e2x5Max") != 0) {
		els_e2x5Max_branch = tree->GetBranch(tree->GetAlias("els_e2x5Max"));
		els_e2x5Max_branch->SetAddress(&els_e2x5Max_);
	}
	if(els_e2x5Max_branch == 0 ) {
	//cout << "Branch els_e2x5Max does not exist." << endl;
	}
	els_e3x3_branch = 0;
	if (tree->GetAlias("els_e3x3") != 0) {
		els_e3x3_branch = tree->GetBranch(tree->GetAlias("els_e3x3"));
		els_e3x3_branch->SetAddress(&els_e3x3_);
	}
	if(els_e3x3_branch == 0 ) {
	//cout << "Branch els_e3x3 does not exist." << endl;
	}
	els_e5x5_branch = 0;
	if (tree->GetAlias("els_e5x5") != 0) {
		els_e5x5_branch = tree->GetBranch(tree->GetAlias("els_e5x5"));
		els_e5x5_branch->SetAddress(&els_e5x5_);
	}
	if(els_e5x5_branch == 0 ) {
	//cout << "Branch els_e5x5 does not exist." << endl;
	}
	els_eMax_branch = 0;
	if (tree->GetAlias("els_eMax") != 0) {
		els_eMax_branch = tree->GetBranch(tree->GetAlias("els_eMax"));
		els_eMax_branch->SetAddress(&els_eMax_);
	}
	if(els_eMax_branch == 0 ) {
	//cout << "Branch els_eMax does not exist." << endl;
	}
	els_eOverPIn_branch = 0;
	if (tree->GetAlias("els_eOverPIn") != 0) {
		els_eOverPIn_branch = tree->GetBranch(tree->GetAlias("els_eOverPIn"));
		els_eOverPIn_branch->SetAddress(&els_eOverPIn_);
	}
	if(els_eOverPIn_branch == 0 ) {
	//cout << "Branch els_eOverPIn does not exist." << endl;
	}
	els_eOverPOut_branch = 0;
	if (tree->GetAlias("els_eOverPOut") != 0) {
		els_eOverPOut_branch = tree->GetBranch(tree->GetAlias("els_eOverPOut"));
		els_eOverPOut_branch->SetAddress(&els_eOverPOut_);
	}
	if(els_eOverPOut_branch == 0 ) {
	//cout << "Branch els_eOverPOut does not exist." << endl;
	}
	els_eSC_branch = 0;
	if (tree->GetAlias("els_eSC") != 0) {
		els_eSC_branch = tree->GetBranch(tree->GetAlias("els_eSC"));
		els_eSC_branch->SetAddress(&els_eSC_);
	}
	if(els_eSC_branch == 0 ) {
	//cout << "Branch els_eSC does not exist." << endl;
	}
	els_eSCPresh_branch = 0;
	if (tree->GetAlias("els_eSCPresh") != 0) {
		els_eSCPresh_branch = tree->GetBranch(tree->GetAlias("els_eSCPresh"));
		els_eSCPresh_branch->SetAddress(&els_eSCPresh_);
	}
	if(els_eSCPresh_branch == 0 ) {
	//cout << "Branch els_eSCPresh does not exist." << endl;
	}
	els_eSCRaw_branch = 0;
	if (tree->GetAlias("els_eSCRaw") != 0) {
		els_eSCRaw_branch = tree->GetBranch(tree->GetAlias("els_eSCRaw"));
		els_eSCRaw_branch->SetAddress(&els_eSCRaw_);
	}
	if(els_eSCRaw_branch == 0 ) {
	//cout << "Branch els_eSCRaw does not exist." << endl;
	}
	els_eSeed_branch = 0;
	if (tree->GetAlias("els_eSeed") != 0) {
		els_eSeed_branch = tree->GetBranch(tree->GetAlias("els_eSeed"));
		els_eSeed_branch->SetAddress(&els_eSeed_);
	}
	if(els_eSeed_branch == 0 ) {
	//cout << "Branch els_eSeed does not exist." << endl;
	}
	els_eSeedOverPIn_branch = 0;
	if (tree->GetAlias("els_eSeedOverPIn") != 0) {
		els_eSeedOverPIn_branch = tree->GetBranch(tree->GetAlias("els_eSeedOverPIn"));
		els_eSeedOverPIn_branch->SetAddress(&els_eSeedOverPIn_);
	}
	if(els_eSeedOverPIn_branch == 0 ) {
	//cout << "Branch els_eSeedOverPIn does not exist." << endl;
	}
	els_eSeedOverPOut_branch = 0;
	if (tree->GetAlias("els_eSeedOverPOut") != 0) {
		els_eSeedOverPOut_branch = tree->GetBranch(tree->GetAlias("els_eSeedOverPOut"));
		els_eSeedOverPOut_branch->SetAddress(&els_eSeedOverPOut_);
	}
	if(els_eSeedOverPOut_branch == 0 ) {
	//cout << "Branch els_eSeedOverPOut does not exist." << endl;
	}
	els_ecalEnergy_branch = 0;
	if (tree->GetAlias("els_ecalEnergy") != 0) {
		els_ecalEnergy_branch = tree->GetBranch(tree->GetAlias("els_ecalEnergy"));
		els_ecalEnergy_branch->SetAddress(&els_ecalEnergy_);
	}
	if(els_ecalEnergy_branch == 0 ) {
	//cout << "Branch els_ecalEnergy does not exist." << endl;
	}
	els_ecalEnergyError_branch = 0;
	if (tree->GetAlias("els_ecalEnergyError") != 0) {
		els_ecalEnergyError_branch = tree->GetBranch(tree->GetAlias("els_ecalEnergyError"));
		els_ecalEnergyError_branch->SetAddress(&els_ecalEnergyError_);
	}
	if(els_ecalEnergyError_branch == 0 ) {
	//cout << "Branch els_ecalEnergyError does not exist." << endl;
	}
	els_ecalIso_branch = 0;
	if (tree->GetAlias("els_ecalIso") != 0) {
		els_ecalIso_branch = tree->GetBranch(tree->GetAlias("els_ecalIso"));
		els_ecalIso_branch->SetAddress(&els_ecalIso_);
	}
	if(els_ecalIso_branch == 0 ) {
	//cout << "Branch els_ecalIso does not exist." << endl;
	}
	els_ecalIso04_branch = 0;
	if (tree->GetAlias("els_ecalIso04") != 0) {
		els_ecalIso04_branch = tree->GetBranch(tree->GetAlias("els_ecalIso04"));
		els_ecalIso04_branch->SetAddress(&els_ecalIso04_);
	}
	if(els_ecalIso04_branch == 0 ) {
	//cout << "Branch els_ecalIso04 does not exist." << endl;
	}
	els_egamma_looseId_branch = 0;
	if (tree->GetAlias("els_egamma_looseId") != 0) {
		els_egamma_looseId_branch = tree->GetBranch(tree->GetAlias("els_egamma_looseId"));
		els_egamma_looseId_branch->SetAddress(&els_egamma_looseId_);
	}
	if(els_egamma_looseId_branch == 0 ) {
	//cout << "Branch els_egamma_looseId does not exist." << endl;
	}
	els_egamma_robustHighEnergy_branch = 0;
	if (tree->GetAlias("els_egamma_robustHighEnergy") != 0) {
		els_egamma_robustHighEnergy_branch = tree->GetBranch(tree->GetAlias("els_egamma_robustHighEnergy"));
		els_egamma_robustHighEnergy_branch->SetAddress(&els_egamma_robustHighEnergy_);
	}
	if(els_egamma_robustHighEnergy_branch == 0 ) {
	//cout << "Branch els_egamma_robustHighEnergy does not exist." << endl;
	}
	els_egamma_robustLooseId_branch = 0;
	if (tree->GetAlias("els_egamma_robustLooseId") != 0) {
		els_egamma_robustLooseId_branch = tree->GetBranch(tree->GetAlias("els_egamma_robustLooseId"));
		els_egamma_robustLooseId_branch->SetAddress(&els_egamma_robustLooseId_);
	}
	if(els_egamma_robustLooseId_branch == 0 ) {
	//cout << "Branch els_egamma_robustLooseId does not exist." << endl;
	}
	els_egamma_robustTightId_branch = 0;
	if (tree->GetAlias("els_egamma_robustTightId") != 0) {
		els_egamma_robustTightId_branch = tree->GetBranch(tree->GetAlias("els_egamma_robustTightId"));
		els_egamma_robustTightId_branch->SetAddress(&els_egamma_robustTightId_);
	}
	if(els_egamma_robustTightId_branch == 0 ) {
	//cout << "Branch els_egamma_robustTightId does not exist." << endl;
	}
	els_egamma_tightId_branch = 0;
	if (tree->GetAlias("els_egamma_tightId") != 0) {
		els_egamma_tightId_branch = tree->GetBranch(tree->GetAlias("els_egamma_tightId"));
		els_egamma_tightId_branch->SetAddress(&els_egamma_tightId_);
	}
	if(els_egamma_tightId_branch == 0 ) {
	//cout << "Branch els_egamma_tightId does not exist." << endl;
	}
	els_electronMomentumError_branch = 0;
	if (tree->GetAlias("els_electronMomentumError") != 0) {
		els_electronMomentumError_branch = tree->GetBranch(tree->GetAlias("els_electronMomentumError"));
		els_electronMomentumError_branch->SetAddress(&els_electronMomentumError_);
	}
	if(els_electronMomentumError_branch == 0 ) {
	//cout << "Branch els_electronMomentumError does not exist." << endl;
	}
	els_etaErr_branch = 0;
	if (tree->GetAlias("els_etaErr") != 0) {
		els_etaErr_branch = tree->GetBranch(tree->GetAlias("els_etaErr"));
		els_etaErr_branch->SetAddress(&els_etaErr_);
	}
	if(els_etaErr_branch == 0 ) {
	//cout << "Branch els_etaErr does not exist." << endl;
	}
	els_etaSC_branch = 0;
	if (tree->GetAlias("els_etaSC") != 0) {
		els_etaSC_branch = tree->GetBranch(tree->GetAlias("els_etaSC"));
		els_etaSC_branch->SetAddress(&els_etaSC_);
	}
	if(els_etaSC_branch == 0 ) {
	//cout << "Branch els_etaSC does not exist." << endl;
	}
	els_fbrem_branch = 0;
	if (tree->GetAlias("els_fbrem") != 0) {
		els_fbrem_branch = tree->GetBranch(tree->GetAlias("els_fbrem"));
		els_fbrem_branch->SetAddress(&els_fbrem_);
	}
	if(els_fbrem_branch == 0 ) {
	//cout << "Branch els_fbrem does not exist." << endl;
	}
	els_hOverE_branch = 0;
	if (tree->GetAlias("els_hOverE") != 0) {
		els_hOverE_branch = tree->GetBranch(tree->GetAlias("els_hOverE"));
		els_hOverE_branch->SetAddress(&els_hOverE_);
	}
	if(els_hOverE_branch == 0 ) {
	//cout << "Branch els_hOverE does not exist." << endl;
	}
	els_hcalIso_branch = 0;
	if (tree->GetAlias("els_hcalIso") != 0) {
		els_hcalIso_branch = tree->GetBranch(tree->GetAlias("els_hcalIso"));
		els_hcalIso_branch->SetAddress(&els_hcalIso_);
	}
	if(els_hcalIso_branch == 0 ) {
	//cout << "Branch els_hcalIso does not exist." << endl;
	}
	els_hcalIso04_branch = 0;
	if (tree->GetAlias("els_hcalIso04") != 0) {
		els_hcalIso04_branch = tree->GetBranch(tree->GetAlias("els_hcalIso04"));
		els_hcalIso04_branch->SetAddress(&els_hcalIso04_);
	}
	if(els_hcalIso04_branch == 0 ) {
	//cout << "Branch els_hcalIso04 does not exist." << endl;
	}
	els_layer1_charge_branch = 0;
	if (tree->GetAlias("els_layer1_charge") != 0) {
		els_layer1_charge_branch = tree->GetBranch(tree->GetAlias("els_layer1_charge"));
		els_layer1_charge_branch->SetAddress(&els_layer1_charge_);
	}
	if(els_layer1_charge_branch == 0 ) {
	//cout << "Branch els_layer1_charge does not exist." << endl;
	}
	els_ndof_branch = 0;
	if (tree->GetAlias("els_ndof") != 0) {
		els_ndof_branch = tree->GetBranch(tree->GetAlias("els_ndof"));
		els_ndof_branch->SetAddress(&els_ndof_);
	}
	if(els_ndof_branch == 0 ) {
	//cout << "Branch els_ndof does not exist." << endl;
	}
	els_phiErr_branch = 0;
	if (tree->GetAlias("els_phiErr") != 0) {
		els_phiErr_branch = tree->GetBranch(tree->GetAlias("els_phiErr"));
		els_phiErr_branch->SetAddress(&els_phiErr_);
	}
	if(els_phiErr_branch == 0 ) {
	//cout << "Branch els_phiErr does not exist." << endl;
	}
	els_phiSC_branch = 0;
	if (tree->GetAlias("els_phiSC") != 0) {
		els_phiSC_branch = tree->GetBranch(tree->GetAlias("els_phiSC"));
		els_phiSC_branch->SetAddress(&els_phiSC_);
	}
	if(els_phiSC_branch == 0 ) {
	//cout << "Branch els_phiSC does not exist." << endl;
	}
	els_ptErr_branch = 0;
	if (tree->GetAlias("els_ptErr") != 0) {
		els_ptErr_branch = tree->GetBranch(tree->GetAlias("els_ptErr"));
		els_ptErr_branch->SetAddress(&els_ptErr_);
	}
	if(els_ptErr_branch == 0 ) {
	//cout << "Branch els_ptErr does not exist." << endl;
	}
	els_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("els_sigmaEtaEta") != 0) {
		els_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("els_sigmaEtaEta"));
		els_sigmaEtaEta_branch->SetAddress(&els_sigmaEtaEta_);
	}
	if(els_sigmaEtaEta_branch == 0 ) {
	//cout << "Branch els_sigmaEtaEta does not exist." << endl;
	}
	els_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("els_sigmaIEtaIEta") != 0) {
		els_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("els_sigmaIEtaIEta"));
		els_sigmaIEtaIEta_branch->SetAddress(&els_sigmaIEtaIEta_);
	}
	if(els_sigmaIEtaIEta_branch == 0 ) {
	//cout << "Branch els_sigmaIEtaIEta does not exist." << endl;
	}
	els_sigmaIPhiIPhi_branch = 0;
	if (tree->GetAlias("els_sigmaIPhiIPhi") != 0) {
		els_sigmaIPhiIPhi_branch = tree->GetBranch(tree->GetAlias("els_sigmaIPhiIPhi"));
		els_sigmaIPhiIPhi_branch->SetAddress(&els_sigmaIPhiIPhi_);
	}
	if(els_sigmaIPhiIPhi_branch == 0 ) {
	//cout << "Branch els_sigmaIPhiIPhi does not exist." << endl;
	}
	els_sigmaPhiPhi_branch = 0;
	if (tree->GetAlias("els_sigmaPhiPhi") != 0) {
		els_sigmaPhiPhi_branch = tree->GetBranch(tree->GetAlias("els_sigmaPhiPhi"));
		els_sigmaPhiPhi_branch->SetAddress(&els_sigmaPhiPhi_);
	}
	if(els_sigmaPhiPhi_branch == 0 ) {
	//cout << "Branch els_sigmaPhiPhi does not exist." << endl;
	}
	els_tkIso_branch = 0;
	if (tree->GetAlias("els_tkIso") != 0) {
		els_tkIso_branch = tree->GetBranch(tree->GetAlias("els_tkIso"));
		els_tkIso_branch->SetAddress(&els_tkIso_);
	}
	if(els_tkIso_branch == 0 ) {
	//cout << "Branch els_tkIso does not exist." << endl;
	}
	els_tkIso04_branch = 0;
	if (tree->GetAlias("els_tkIso04") != 0) {
		els_tkIso04_branch = tree->GetBranch(tree->GetAlias("els_tkIso04"));
		els_tkIso04_branch->SetAddress(&els_tkIso04_);
	}
	if(els_tkIso04_branch == 0 ) {
	//cout << "Branch els_tkIso04 does not exist." << endl;
	}
	els_trackMomentumError_branch = 0;
	if (tree->GetAlias("els_trackMomentumError") != 0) {
		els_trackMomentumError_branch = tree->GetBranch(tree->GetAlias("els_trackMomentumError"));
		els_trackMomentumError_branch->SetAddress(&els_trackMomentumError_);
	}
	if(els_trackMomentumError_branch == 0 ) {
	//cout << "Branch els_trackMomentumError does not exist." << endl;
	}
	els_trkdr_branch = 0;
	if (tree->GetAlias("els_trkdr") != 0) {
		els_trkdr_branch = tree->GetBranch(tree->GetAlias("els_trkdr"));
		els_trkdr_branch->SetAddress(&els_trkdr_);
	}
	if(els_trkdr_branch == 0 ) {
	//cout << "Branch els_trkdr does not exist." << endl;
	}
	els_trkshFrac_branch = 0;
	if (tree->GetAlias("els_trkshFrac") != 0) {
		els_trkshFrac_branch = tree->GetBranch(tree->GetAlias("els_trkshFrac"));
		els_trkshFrac_branch->SetAddress(&els_trkshFrac_);
	}
	if(els_trkshFrac_branch == 0 ) {
	//cout << "Branch els_trkshFrac does not exist." << endl;
	}
	els_z0_branch = 0;
	if (tree->GetAlias("els_z0") != 0) {
		els_z0_branch = tree->GetBranch(tree->GetAlias("els_z0"));
		els_z0_branch->SetAddress(&els_z0_);
	}
	if(els_z0_branch == 0 ) {
	//cout << "Branch els_z0 does not exist." << endl;
	}
	els_z0Err_branch = 0;
	if (tree->GetAlias("els_z0Err") != 0) {
		els_z0Err_branch = tree->GetBranch(tree->GetAlias("els_z0Err"));
		els_z0Err_branch->SetAddress(&els_z0Err_);
	}
	if(els_z0Err_branch == 0 ) {
	//cout << "Branch els_z0Err does not exist." << endl;
	}
	els_z0corr_branch = 0;
	if (tree->GetAlias("els_z0corr") != 0) {
		els_z0corr_branch = tree->GetBranch(tree->GetAlias("els_z0corr"));
		els_z0corr_branch->SetAddress(&els_z0corr_);
	}
	if(els_z0corr_branch == 0 ) {
	//cout << "Branch els_z0corr does not exist." << endl;
	}
	jets_cor_branch = 0;
	if (tree->GetAlias("jets_cor") != 0) {
		jets_cor_branch = tree->GetBranch(tree->GetAlias("jets_cor"));
		jets_cor_branch->SetAddress(&jets_cor_);
	}
	if(jets_cor_branch == 0 ) {
	//cout << "Branch jets_cor does not exist." << endl;
	}
	jets_emFrac_branch = 0;
	if (tree->GetAlias("jets_emFrac") != 0) {
		jets_emFrac_branch = tree->GetBranch(tree->GetAlias("jets_emFrac"));
		jets_emFrac_branch->SetAddress(&jets_emFrac_);
	}
	if(jets_emFrac_branch == 0 ) {
	//cout << "Branch jets_emFrac does not exist." << endl;
	}
	jets_fHPD_branch = 0;
	if (tree->GetAlias("jets_fHPD") != 0) {
		jets_fHPD_branch = tree->GetBranch(tree->GetAlias("jets_fHPD"));
		jets_fHPD_branch->SetAddress(&jets_fHPD_);
	}
	if(jets_fHPD_branch == 0 ) {
	//cout << "Branch jets_fHPD does not exist." << endl;
	}
	jets_fRBX_branch = 0;
	if (tree->GetAlias("jets_fRBX") != 0) {
		jets_fRBX_branch = tree->GetBranch(tree->GetAlias("jets_fRBX"));
		jets_fRBX_branch->SetAddress(&jets_fRBX_);
	}
	if(jets_fRBX_branch == 0 ) {
	//cout << "Branch jets_fRBX does not exist." << endl;
	}
	jets_fSubDetector1_branch = 0;
	if (tree->GetAlias("jets_fSubDetector1") != 0) {
		jets_fSubDetector1_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector1"));
		jets_fSubDetector1_branch->SetAddress(&jets_fSubDetector1_);
	}
	if(jets_fSubDetector1_branch == 0 ) {
	//cout << "Branch jets_fSubDetector1 does not exist." << endl;
	}
	jets_fSubDetector2_branch = 0;
	if (tree->GetAlias("jets_fSubDetector2") != 0) {
		jets_fSubDetector2_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector2"));
		jets_fSubDetector2_branch->SetAddress(&jets_fSubDetector2_);
	}
	if(jets_fSubDetector2_branch == 0 ) {
	//cout << "Branch jets_fSubDetector2 does not exist." << endl;
	}
	jets_fSubDetector3_branch = 0;
	if (tree->GetAlias("jets_fSubDetector3") != 0) {
		jets_fSubDetector3_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector3"));
		jets_fSubDetector3_branch->SetAddress(&jets_fSubDetector3_);
	}
	if(jets_fSubDetector3_branch == 0 ) {
	//cout << "Branch jets_fSubDetector3 does not exist." << endl;
	}
	jets_fSubDetector4_branch = 0;
	if (tree->GetAlias("jets_fSubDetector4") != 0) {
		jets_fSubDetector4_branch = tree->GetBranch(tree->GetAlias("jets_fSubDetector4"));
		jets_fSubDetector4_branch->SetAddress(&jets_fSubDetector4_);
	}
	if(jets_fSubDetector4_branch == 0 ) {
	//cout << "Branch jets_fSubDetector4 does not exist." << endl;
	}
	jets_n90Hits_branch = 0;
	if (tree->GetAlias("jets_n90Hits") != 0) {
		jets_n90Hits_branch = tree->GetBranch(tree->GetAlias("jets_n90Hits"));
		jets_n90Hits_branch->SetAddress(&jets_n90Hits_);
	}
	if(jets_n90Hits_branch == 0 ) {
	//cout << "Branch jets_n90Hits does not exist." << endl;
	}
	jets_nECALTowers_branch = 0;
	if (tree->GetAlias("jets_nECALTowers") != 0) {
		jets_nECALTowers_branch = tree->GetBranch(tree->GetAlias("jets_nECALTowers"));
		jets_nECALTowers_branch->SetAddress(&jets_nECALTowers_);
	}
	if(jets_nECALTowers_branch == 0 ) {
	//cout << "Branch jets_nECALTowers does not exist." << endl;
	}
	jets_nHCALTowers_branch = 0;
	if (tree->GetAlias("jets_nHCALTowers") != 0) {
		jets_nHCALTowers_branch = tree->GetBranch(tree->GetAlias("jets_nHCALTowers"));
		jets_nHCALTowers_branch->SetAddress(&jets_nHCALTowers_);
	}
	if(jets_nHCALTowers_branch == 0 ) {
	//cout << "Branch jets_nHCALTowers does not exist." << endl;
	}
	jets_restrictedEMF_branch = 0;
	if (tree->GetAlias("jets_restrictedEMF") != 0) {
		jets_restrictedEMF_branch = tree->GetBranch(tree->GetAlias("jets_restrictedEMF"));
		jets_restrictedEMF_branch->SetAddress(&jets_restrictedEMF_);
	}
	if(jets_restrictedEMF_branch == 0 ) {
	//cout << "Branch jets_restrictedEMF does not exist." << endl;
	}
	jpts_emFrac_branch = 0;
	if (tree->GetAlias("jpts_emFrac") != 0) {
		jpts_emFrac_branch = tree->GetBranch(tree->GetAlias("jpts_emFrac"));
		jpts_emFrac_branch->SetAddress(&jpts_emFrac_);
	}
	if(jpts_emFrac_branch == 0 ) {
	//cout << "Branch jpts_emFrac does not exist." << endl;
	}
	evt_ecalmet_etaslice_branch = 0;
	if (tree->GetAlias("evt_ecalmet_etaslice") != 0) {
		evt_ecalmet_etaslice_branch = tree->GetBranch(tree->GetAlias("evt_ecalmet_etaslice"));
		evt_ecalmet_etaslice_branch->SetAddress(&evt_ecalmet_etaslice_);
	}
	if(evt_ecalmet_etaslice_branch == 0 ) {
	//cout << "Branch evt_ecalmet_etaslice does not exist." << endl;
	}
	evt_ecalmet_etaslicePhi_branch = 0;
	if (tree->GetAlias("evt_ecalmet_etaslicePhi") != 0) {
		evt_ecalmet_etaslicePhi_branch = tree->GetBranch(tree->GetAlias("evt_ecalmet_etaslicePhi"));
		evt_ecalmet_etaslicePhi_branch->SetAddress(&evt_ecalmet_etaslicePhi_);
	}
	if(evt_ecalmet_etaslicePhi_branch == 0 ) {
	//cout << "Branch evt_ecalmet_etaslicePhi does not exist." << endl;
	}
	evt_hcalmet_etaslice_branch = 0;
	if (tree->GetAlias("evt_hcalmet_etaslice") != 0) {
		evt_hcalmet_etaslice_branch = tree->GetBranch(tree->GetAlias("evt_hcalmet_etaslice"));
		evt_hcalmet_etaslice_branch->SetAddress(&evt_hcalmet_etaslice_);
	}
	if(evt_hcalmet_etaslice_branch == 0 ) {
	//cout << "Branch evt_hcalmet_etaslice does not exist." << endl;
	}
	evt_hcalmet_etaslicePhi_branch = 0;
	if (tree->GetAlias("evt_hcalmet_etaslicePhi") != 0) {
		evt_hcalmet_etaslicePhi_branch = tree->GetBranch(tree->GetAlias("evt_hcalmet_etaslicePhi"));
		evt_hcalmet_etaslicePhi_branch->SetAddress(&evt_hcalmet_etaslicePhi_);
	}
	if(evt_hcalmet_etaslicePhi_branch == 0 ) {
	//cout << "Branch evt_hcalmet_etaslicePhi does not exist." << endl;
	}
	evt_towermet_etaslice_branch = 0;
	if (tree->GetAlias("evt_towermet_etaslice") != 0) {
		evt_towermet_etaslice_branch = tree->GetBranch(tree->GetAlias("evt_towermet_etaslice"));
		evt_towermet_etaslice_branch->SetAddress(&evt_towermet_etaslice_);
	}
	if(evt_towermet_etaslice_branch == 0 ) {
	//cout << "Branch evt_towermet_etaslice does not exist." << endl;
	}
	evt_towermet_etaslicePhi_branch = 0;
	if (tree->GetAlias("evt_towermet_etaslicePhi") != 0) {
		evt_towermet_etaslicePhi_branch = tree->GetBranch(tree->GetAlias("evt_towermet_etaslicePhi"));
		evt_towermet_etaslicePhi_branch->SetAddress(&evt_towermet_etaslicePhi_);
	}
	if(evt_towermet_etaslicePhi_branch == 0 ) {
	//cout << "Branch evt_towermet_etaslicePhi does not exist." << endl;
	}
	mus_met_deltax_branch = 0;
	if (tree->GetAlias("mus_met_deltax") != 0) {
		mus_met_deltax_branch = tree->GetBranch(tree->GetAlias("mus_met_deltax"));
		mus_met_deltax_branch->SetAddress(&mus_met_deltax_);
	}
	if(mus_met_deltax_branch == 0 ) {
	//cout << "Branch mus_met_deltax does not exist." << endl;
	}
	mus_met_deltay_branch = 0;
	if (tree->GetAlias("mus_met_deltay") != 0) {
		mus_met_deltay_branch = tree->GetBranch(tree->GetAlias("mus_met_deltay"));
		mus_met_deltay_branch->SetAddress(&mus_met_deltay_);
	}
	if(mus_met_deltay_branch == 0 ) {
	//cout << "Branch mus_met_deltay does not exist." << endl;
	}
	mus_eledr_branch = 0;
	if (tree->GetAlias("mus_eledr") != 0) {
		mus_eledr_branch = tree->GetBranch(tree->GetAlias("mus_eledr"));
		mus_eledr_branch->SetAddress(&mus_eledr_);
	}
	if(mus_eledr_branch == 0 ) {
	//cout << "Branch mus_eledr does not exist." << endl;
	}
	mus_jetdr_branch = 0;
	if (tree->GetAlias("mus_jetdr") != 0) {
		mus_jetdr_branch = tree->GetBranch(tree->GetAlias("mus_jetdr"));
		mus_jetdr_branch->SetAddress(&mus_jetdr_);
	}
	if(mus_jetdr_branch == 0 ) {
	//cout << "Branch mus_jetdr does not exist." << endl;
	}
	mus_caloCompatibility_branch = 0;
	if (tree->GetAlias("mus_caloCompatibility") != 0) {
		mus_caloCompatibility_branch = tree->GetBranch(tree->GetAlias("mus_caloCompatibility"));
		mus_caloCompatibility_branch->SetAddress(&mus_caloCompatibility_);
	}
	if(mus_caloCompatibility_branch == 0 ) {
	//cout << "Branch mus_caloCompatibility does not exist." << endl;
	}
	mus_chi2_branch = 0;
	if (tree->GetAlias("mus_chi2") != 0) {
		mus_chi2_branch = tree->GetBranch(tree->GetAlias("mus_chi2"));
		mus_chi2_branch->SetAddress(&mus_chi2_);
	}
	if(mus_chi2_branch == 0 ) {
	//cout << "Branch mus_chi2 does not exist." << endl;
	}
	mus_d0_branch = 0;
	if (tree->GetAlias("mus_d0") != 0) {
		mus_d0_branch = tree->GetBranch(tree->GetAlias("mus_d0"));
		mus_d0_branch->SetAddress(&mus_d0_);
	}
	if(mus_d0_branch == 0 ) {
	//cout << "Branch mus_d0 does not exist." << endl;
	}
	mus_d0Err_branch = 0;
	if (tree->GetAlias("mus_d0Err") != 0) {
		mus_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_d0Err"));
		mus_d0Err_branch->SetAddress(&mus_d0Err_);
	}
	if(mus_d0Err_branch == 0 ) {
	//cout << "Branch mus_d0Err does not exist." << endl;
	}
	mus_d0corr_branch = 0;
	if (tree->GetAlias("mus_d0corr") != 0) {
		mus_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_d0corr"));
		mus_d0corr_branch->SetAddress(&mus_d0corr_);
	}
	if(mus_d0corr_branch == 0 ) {
	//cout << "Branch mus_d0corr does not exist." << endl;
	}
	mus_e_em_branch = 0;
	if (tree->GetAlias("mus_e_em") != 0) {
		mus_e_em_branch = tree->GetBranch(tree->GetAlias("mus_e_em"));
		mus_e_em_branch->SetAddress(&mus_e_em_);
	}
	if(mus_e_em_branch == 0 ) {
	//cout << "Branch mus_e_em does not exist." << endl;
	}
	mus_e_emS9_branch = 0;
	if (tree->GetAlias("mus_e_emS9") != 0) {
		mus_e_emS9_branch = tree->GetBranch(tree->GetAlias("mus_e_emS9"));
		mus_e_emS9_branch->SetAddress(&mus_e_emS9_);
	}
	if(mus_e_emS9_branch == 0 ) {
	//cout << "Branch mus_e_emS9 does not exist." << endl;
	}
	mus_e_had_branch = 0;
	if (tree->GetAlias("mus_e_had") != 0) {
		mus_e_had_branch = tree->GetBranch(tree->GetAlias("mus_e_had"));
		mus_e_had_branch->SetAddress(&mus_e_had_);
	}
	if(mus_e_had_branch == 0 ) {
	//cout << "Branch mus_e_had does not exist." << endl;
	}
	mus_e_hadS9_branch = 0;
	if (tree->GetAlias("mus_e_hadS9") != 0) {
		mus_e_hadS9_branch = tree->GetBranch(tree->GetAlias("mus_e_hadS9"));
		mus_e_hadS9_branch->SetAddress(&mus_e_hadS9_);
	}
	if(mus_e_hadS9_branch == 0 ) {
	//cout << "Branch mus_e_hadS9 does not exist." << endl;
	}
	mus_e_ho_branch = 0;
	if (tree->GetAlias("mus_e_ho") != 0) {
		mus_e_ho_branch = tree->GetBranch(tree->GetAlias("mus_e_ho"));
		mus_e_ho_branch->SetAddress(&mus_e_ho_);
	}
	if(mus_e_ho_branch == 0 ) {
	//cout << "Branch mus_e_ho does not exist." << endl;
	}
	mus_e_hoS9_branch = 0;
	if (tree->GetAlias("mus_e_hoS9") != 0) {
		mus_e_hoS9_branch = tree->GetBranch(tree->GetAlias("mus_e_hoS9"));
		mus_e_hoS9_branch->SetAddress(&mus_e_hoS9_);
	}
	if(mus_e_hoS9_branch == 0 ) {
	//cout << "Branch mus_e_hoS9 does not exist." << endl;
	}
	mus_etaErr_branch = 0;
	if (tree->GetAlias("mus_etaErr") != 0) {
		mus_etaErr_branch = tree->GetBranch(tree->GetAlias("mus_etaErr"));
		mus_etaErr_branch->SetAddress(&mus_etaErr_);
	}
	if(mus_etaErr_branch == 0 ) {
	//cout << "Branch mus_etaErr does not exist." << endl;
	}
	mus_gfit_chi2_branch = 0;
	if (tree->GetAlias("mus_gfit_chi2") != 0) {
		mus_gfit_chi2_branch = tree->GetBranch(tree->GetAlias("mus_gfit_chi2"));
		mus_gfit_chi2_branch->SetAddress(&mus_gfit_chi2_);
	}
	if(mus_gfit_chi2_branch == 0 ) {
	//cout << "Branch mus_gfit_chi2 does not exist." << endl;
	}
	mus_gfit_d0_branch = 0;
	if (tree->GetAlias("mus_gfit_d0") != 0) {
		mus_gfit_d0_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0"));
		mus_gfit_d0_branch->SetAddress(&mus_gfit_d0_);
	}
	if(mus_gfit_d0_branch == 0 ) {
	//cout << "Branch mus_gfit_d0 does not exist." << endl;
	}
	mus_gfit_d0Err_branch = 0;
	if (tree->GetAlias("mus_gfit_d0Err") != 0) {
		mus_gfit_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0Err"));
		mus_gfit_d0Err_branch->SetAddress(&mus_gfit_d0Err_);
	}
	if(mus_gfit_d0Err_branch == 0 ) {
	//cout << "Branch mus_gfit_d0Err does not exist." << endl;
	}
	mus_gfit_d0corr_branch = 0;
	if (tree->GetAlias("mus_gfit_d0corr") != 0) {
		mus_gfit_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0corr"));
		mus_gfit_d0corr_branch->SetAddress(&mus_gfit_d0corr_);
	}
	if(mus_gfit_d0corr_branch == 0 ) {
	//cout << "Branch mus_gfit_d0corr does not exist." << endl;
	}
	mus_gfit_ndof_branch = 0;
	if (tree->GetAlias("mus_gfit_ndof") != 0) {
		mus_gfit_ndof_branch = tree->GetBranch(tree->GetAlias("mus_gfit_ndof"));
		mus_gfit_ndof_branch->SetAddress(&mus_gfit_ndof_);
	}
	if(mus_gfit_ndof_branch == 0 ) {
	//cout << "Branch mus_gfit_ndof does not exist." << endl;
	}
	mus_gfit_qoverp_branch = 0;
	if (tree->GetAlias("mus_gfit_qoverp") != 0) {
		mus_gfit_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_gfit_qoverp"));
		mus_gfit_qoverp_branch->SetAddress(&mus_gfit_qoverp_);
	}
	if(mus_gfit_qoverp_branch == 0 ) {
	//cout << "Branch mus_gfit_qoverp does not exist." << endl;
	}
	mus_gfit_qoverpError_branch = 0;
	if (tree->GetAlias("mus_gfit_qoverpError") != 0) {
		mus_gfit_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_gfit_qoverpError"));
		mus_gfit_qoverpError_branch->SetAddress(&mus_gfit_qoverpError_);
	}
	if(mus_gfit_qoverpError_branch == 0 ) {
	//cout << "Branch mus_gfit_qoverpError does not exist." << endl;
	}
	mus_gfit_z0_branch = 0;
	if (tree->GetAlias("mus_gfit_z0") != 0) {
		mus_gfit_z0_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0"));
		mus_gfit_z0_branch->SetAddress(&mus_gfit_z0_);
	}
	if(mus_gfit_z0_branch == 0 ) {
	//cout << "Branch mus_gfit_z0 does not exist." << endl;
	}
	mus_gfit_z0Err_branch = 0;
	if (tree->GetAlias("mus_gfit_z0Err") != 0) {
		mus_gfit_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0Err"));
		mus_gfit_z0Err_branch->SetAddress(&mus_gfit_z0Err_);
	}
	if(mus_gfit_z0Err_branch == 0 ) {
	//cout << "Branch mus_gfit_z0Err does not exist." << endl;
	}
	mus_gfit_z0corr_branch = 0;
	if (tree->GetAlias("mus_gfit_z0corr") != 0) {
		mus_gfit_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0corr"));
		mus_gfit_z0corr_branch->SetAddress(&mus_gfit_z0corr_);
	}
	if(mus_gfit_z0corr_branch == 0 ) {
	//cout << "Branch mus_gfit_z0corr does not exist." << endl;
	}
	mus_iso03_emEt_branch = 0;
	if (tree->GetAlias("mus_iso03_emEt") != 0) {
		mus_iso03_emEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_emEt"));
		mus_iso03_emEt_branch->SetAddress(&mus_iso03_emEt_);
	}
	if(mus_iso03_emEt_branch == 0 ) {
	//cout << "Branch mus_iso03_emEt does not exist." << endl;
	}
	mus_iso03_hadEt_branch = 0;
	if (tree->GetAlias("mus_iso03_hadEt") != 0) {
		mus_iso03_hadEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_hadEt"));
		mus_iso03_hadEt_branch->SetAddress(&mus_iso03_hadEt_);
	}
	if(mus_iso03_hadEt_branch == 0 ) {
	//cout << "Branch mus_iso03_hadEt does not exist." << endl;
	}
	mus_iso03_hoEt_branch = 0;
	if (tree->GetAlias("mus_iso03_hoEt") != 0) {
		mus_iso03_hoEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_hoEt"));
		mus_iso03_hoEt_branch->SetAddress(&mus_iso03_hoEt_);
	}
	if(mus_iso03_hoEt_branch == 0 ) {
	//cout << "Branch mus_iso03_hoEt does not exist." << endl;
	}
	mus_iso03_sumPt_branch = 0;
	if (tree->GetAlias("mus_iso03_sumPt") != 0) {
		mus_iso03_sumPt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_sumPt"));
		mus_iso03_sumPt_branch->SetAddress(&mus_iso03_sumPt_);
	}
	if(mus_iso03_sumPt_branch == 0 ) {
	//cout << "Branch mus_iso03_sumPt does not exist." << endl;
	}
	mus_iso05_emEt_branch = 0;
	if (tree->GetAlias("mus_iso05_emEt") != 0) {
		mus_iso05_emEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_emEt"));
		mus_iso05_emEt_branch->SetAddress(&mus_iso05_emEt_);
	}
	if(mus_iso05_emEt_branch == 0 ) {
	//cout << "Branch mus_iso05_emEt does not exist." << endl;
	}
	mus_iso05_hadEt_branch = 0;
	if (tree->GetAlias("mus_iso05_hadEt") != 0) {
		mus_iso05_hadEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_hadEt"));
		mus_iso05_hadEt_branch->SetAddress(&mus_iso05_hadEt_);
	}
	if(mus_iso05_hadEt_branch == 0 ) {
	//cout << "Branch mus_iso05_hadEt does not exist." << endl;
	}
	mus_iso05_hoEt_branch = 0;
	if (tree->GetAlias("mus_iso05_hoEt") != 0) {
		mus_iso05_hoEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_hoEt"));
		mus_iso05_hoEt_branch->SetAddress(&mus_iso05_hoEt_);
	}
	if(mus_iso05_hoEt_branch == 0 ) {
	//cout << "Branch mus_iso05_hoEt does not exist." << endl;
	}
	mus_iso05_sumPt_branch = 0;
	if (tree->GetAlias("mus_iso05_sumPt") != 0) {
		mus_iso05_sumPt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_sumPt"));
		mus_iso05_sumPt_branch->SetAddress(&mus_iso05_sumPt_);
	}
	if(mus_iso05_sumPt_branch == 0 ) {
	//cout << "Branch mus_iso05_sumPt does not exist." << endl;
	}
	mus_iso_ecalvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_ecalvetoDep") != 0) {
		mus_iso_ecalvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_ecalvetoDep"));
		mus_iso_ecalvetoDep_branch->SetAddress(&mus_iso_ecalvetoDep_);
	}
	if(mus_iso_ecalvetoDep_branch == 0 ) {
	//cout << "Branch mus_iso_ecalvetoDep does not exist." << endl;
	}
	mus_iso_hcalvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_hcalvetoDep") != 0) {
		mus_iso_hcalvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_hcalvetoDep"));
		mus_iso_hcalvetoDep_branch->SetAddress(&mus_iso_hcalvetoDep_);
	}
	if(mus_iso_hcalvetoDep_branch == 0 ) {
	//cout << "Branch mus_iso_hcalvetoDep does not exist." << endl;
	}
	mus_iso_hovetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_hovetoDep") != 0) {
		mus_iso_hovetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_hovetoDep"));
		mus_iso_hovetoDep_branch->SetAddress(&mus_iso_hovetoDep_);
	}
	if(mus_iso_hovetoDep_branch == 0 ) {
	//cout << "Branch mus_iso_hovetoDep does not exist." << endl;
	}
	mus_iso_trckvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_trckvetoDep") != 0) {
		mus_iso_trckvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_trckvetoDep"));
		mus_iso_trckvetoDep_branch->SetAddress(&mus_iso_trckvetoDep_);
	}
	if(mus_iso_trckvetoDep_branch == 0 ) {
	//cout << "Branch mus_iso_trckvetoDep does not exist." << endl;
	}
	mus_ndof_branch = 0;
	if (tree->GetAlias("mus_ndof") != 0) {
		mus_ndof_branch = tree->GetBranch(tree->GetAlias("mus_ndof"));
		mus_ndof_branch->SetAddress(&mus_ndof_);
	}
	if(mus_ndof_branch == 0 ) {
	//cout << "Branch mus_ndof does not exist." << endl;
	}
	mus_phiErr_branch = 0;
	if (tree->GetAlias("mus_phiErr") != 0) {
		mus_phiErr_branch = tree->GetBranch(tree->GetAlias("mus_phiErr"));
		mus_phiErr_branch->SetAddress(&mus_phiErr_);
	}
	if(mus_phiErr_branch == 0 ) {
	//cout << "Branch mus_phiErr does not exist." << endl;
	}
	mus_ptErr_branch = 0;
	if (tree->GetAlias("mus_ptErr") != 0) {
		mus_ptErr_branch = tree->GetBranch(tree->GetAlias("mus_ptErr"));
		mus_ptErr_branch->SetAddress(&mus_ptErr_);
	}
	if(mus_ptErr_branch == 0 ) {
	//cout << "Branch mus_ptErr does not exist." << endl;
	}
	mus_qoverp_branch = 0;
	if (tree->GetAlias("mus_qoverp") != 0) {
		mus_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_qoverp"));
		mus_qoverp_branch->SetAddress(&mus_qoverp_);
	}
	if(mus_qoverp_branch == 0 ) {
	//cout << "Branch mus_qoverp does not exist." << endl;
	}
	mus_qoverpError_branch = 0;
	if (tree->GetAlias("mus_qoverpError") != 0) {
		mus_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_qoverpError"));
		mus_qoverpError_branch->SetAddress(&mus_qoverpError_);
	}
	if(mus_qoverpError_branch == 0 ) {
	//cout << "Branch mus_qoverpError does not exist." << endl;
	}
	mus_sta_chi2_branch = 0;
	if (tree->GetAlias("mus_sta_chi2") != 0) {
		mus_sta_chi2_branch = tree->GetBranch(tree->GetAlias("mus_sta_chi2"));
		mus_sta_chi2_branch->SetAddress(&mus_sta_chi2_);
	}
	if(mus_sta_chi2_branch == 0 ) {
	//cout << "Branch mus_sta_chi2 does not exist." << endl;
	}
	mus_sta_d0_branch = 0;
	if (tree->GetAlias("mus_sta_d0") != 0) {
		mus_sta_d0_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0"));
		mus_sta_d0_branch->SetAddress(&mus_sta_d0_);
	}
	if(mus_sta_d0_branch == 0 ) {
	//cout << "Branch mus_sta_d0 does not exist." << endl;
	}
	mus_sta_d0Err_branch = 0;
	if (tree->GetAlias("mus_sta_d0Err") != 0) {
		mus_sta_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0Err"));
		mus_sta_d0Err_branch->SetAddress(&mus_sta_d0Err_);
	}
	if(mus_sta_d0Err_branch == 0 ) {
	//cout << "Branch mus_sta_d0Err does not exist." << endl;
	}
	mus_sta_d0corr_branch = 0;
	if (tree->GetAlias("mus_sta_d0corr") != 0) {
		mus_sta_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0corr"));
		mus_sta_d0corr_branch->SetAddress(&mus_sta_d0corr_);
	}
	if(mus_sta_d0corr_branch == 0 ) {
	//cout << "Branch mus_sta_d0corr does not exist." << endl;
	}
	mus_sta_ndof_branch = 0;
	if (tree->GetAlias("mus_sta_ndof") != 0) {
		mus_sta_ndof_branch = tree->GetBranch(tree->GetAlias("mus_sta_ndof"));
		mus_sta_ndof_branch->SetAddress(&mus_sta_ndof_);
	}
	if(mus_sta_ndof_branch == 0 ) {
	//cout << "Branch mus_sta_ndof does not exist." << endl;
	}
	mus_sta_qoverp_branch = 0;
	if (tree->GetAlias("mus_sta_qoverp") != 0) {
		mus_sta_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_sta_qoverp"));
		mus_sta_qoverp_branch->SetAddress(&mus_sta_qoverp_);
	}
	if(mus_sta_qoverp_branch == 0 ) {
	//cout << "Branch mus_sta_qoverp does not exist." << endl;
	}
	mus_sta_qoverpError_branch = 0;
	if (tree->GetAlias("mus_sta_qoverpError") != 0) {
		mus_sta_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_sta_qoverpError"));
		mus_sta_qoverpError_branch->SetAddress(&mus_sta_qoverpError_);
	}
	if(mus_sta_qoverpError_branch == 0 ) {
	//cout << "Branch mus_sta_qoverpError does not exist." << endl;
	}
	mus_sta_z0_branch = 0;
	if (tree->GetAlias("mus_sta_z0") != 0) {
		mus_sta_z0_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0"));
		mus_sta_z0_branch->SetAddress(&mus_sta_z0_);
	}
	if(mus_sta_z0_branch == 0 ) {
	//cout << "Branch mus_sta_z0 does not exist." << endl;
	}
	mus_sta_z0Err_branch = 0;
	if (tree->GetAlias("mus_sta_z0Err") != 0) {
		mus_sta_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0Err"));
		mus_sta_z0Err_branch->SetAddress(&mus_sta_z0Err_);
	}
	if(mus_sta_z0Err_branch == 0 ) {
	//cout << "Branch mus_sta_z0Err does not exist." << endl;
	}
	mus_sta_z0corr_branch = 0;
	if (tree->GetAlias("mus_sta_z0corr") != 0) {
		mus_sta_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0corr"));
		mus_sta_z0corr_branch->SetAddress(&mus_sta_z0corr_);
	}
	if(mus_sta_z0corr_branch == 0 ) {
	//cout << "Branch mus_sta_z0corr does not exist." << endl;
	}
	mus_timeAtIpInOut_branch = 0;
	if (tree->GetAlias("mus_timeAtIpInOut") != 0) {
		mus_timeAtIpInOut_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpInOut"));
		mus_timeAtIpInOut_branch->SetAddress(&mus_timeAtIpInOut_);
	}
	if(mus_timeAtIpInOut_branch == 0 ) {
	//cout << "Branch mus_timeAtIpInOut does not exist." << endl;
	}
	mus_timeAtIpInOutErr_branch = 0;
	if (tree->GetAlias("mus_timeAtIpInOutErr") != 0) {
		mus_timeAtIpInOutErr_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpInOutErr"));
		mus_timeAtIpInOutErr_branch->SetAddress(&mus_timeAtIpInOutErr_);
	}
	if(mus_timeAtIpInOutErr_branch == 0 ) {
	//cout << "Branch mus_timeAtIpInOutErr does not exist." << endl;
	}
	mus_timeAtIpOutIn_branch = 0;
	if (tree->GetAlias("mus_timeAtIpOutIn") != 0) {
		mus_timeAtIpOutIn_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpOutIn"));
		mus_timeAtIpOutIn_branch->SetAddress(&mus_timeAtIpOutIn_);
	}
	if(mus_timeAtIpOutIn_branch == 0 ) {
	//cout << "Branch mus_timeAtIpOutIn does not exist." << endl;
	}
	mus_timeAtIpOutInErr_branch = 0;
	if (tree->GetAlias("mus_timeAtIpOutInErr") != 0) {
		mus_timeAtIpOutInErr_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpOutInErr"));
		mus_timeAtIpOutInErr_branch->SetAddress(&mus_timeAtIpOutInErr_);
	}
	if(mus_timeAtIpOutInErr_branch == 0 ) {
	//cout << "Branch mus_timeAtIpOutInErr does not exist." << endl;
	}
	mus_vertexphi_branch = 0;
	if (tree->GetAlias("mus_vertexphi") != 0) {
		mus_vertexphi_branch = tree->GetBranch(tree->GetAlias("mus_vertexphi"));
		mus_vertexphi_branch->SetAddress(&mus_vertexphi_);
	}
	if(mus_vertexphi_branch == 0 ) {
	//cout << "Branch mus_vertexphi does not exist." << endl;
	}
	mus_z0_branch = 0;
	if (tree->GetAlias("mus_z0") != 0) {
		mus_z0_branch = tree->GetBranch(tree->GetAlias("mus_z0"));
		mus_z0_branch->SetAddress(&mus_z0_);
	}
	if(mus_z0_branch == 0 ) {
	//cout << "Branch mus_z0 does not exist." << endl;
	}
	mus_z0Err_branch = 0;
	if (tree->GetAlias("mus_z0Err") != 0) {
		mus_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_z0Err"));
		mus_z0Err_branch->SetAddress(&mus_z0Err_);
	}
	if(mus_z0Err_branch == 0 ) {
	//cout << "Branch mus_z0Err does not exist." << endl;
	}
	mus_z0corr_branch = 0;
	if (tree->GetAlias("mus_z0corr") != 0) {
		mus_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_z0corr"));
		mus_z0corr_branch->SetAddress(&mus_z0corr_);
	}
	if(mus_z0corr_branch == 0 ) {
	//cout << "Branch mus_z0corr does not exist." << endl;
	}
	pfjets_chargedEmE_branch = 0;
	if (tree->GetAlias("pfjets_chargedEmE") != 0) {
		pfjets_chargedEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedEmE"));
		pfjets_chargedEmE_branch->SetAddress(&pfjets_chargedEmE_);
	}
	if(pfjets_chargedEmE_branch == 0 ) {
	//cout << "Branch pfjets_chargedEmE does not exist." << endl;
	}
	pfjets_chargedHadronE_branch = 0;
	if (tree->GetAlias("pfjets_chargedHadronE") != 0) {
		pfjets_chargedHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedHadronE"));
		pfjets_chargedHadronE_branch->SetAddress(&pfjets_chargedHadronE_);
	}
	if(pfjets_chargedHadronE_branch == 0 ) {
	//cout << "Branch pfjets_chargedHadronE does not exist." << endl;
	}
	pfjets_cor_branch = 0;
	if (tree->GetAlias("pfjets_cor") != 0) {
		pfjets_cor_branch = tree->GetBranch(tree->GetAlias("pfjets_cor"));
		pfjets_cor_branch->SetAddress(&pfjets_cor_);
	}
	if(pfjets_cor_branch == 0 ) {
	//cout << "Branch pfjets_cor does not exist." << endl;
	}
	pfjets_neutralEmE_branch = 0;
	if (tree->GetAlias("pfjets_neutralEmE") != 0) {
		pfjets_neutralEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralEmE"));
		pfjets_neutralEmE_branch->SetAddress(&pfjets_neutralEmE_);
	}
	if(pfjets_neutralEmE_branch == 0 ) {
	//cout << "Branch pfjets_neutralEmE does not exist." << endl;
	}
	pfjets_neutralHadronE_branch = 0;
	if (tree->GetAlias("pfjets_neutralHadronE") != 0) {
		pfjets_neutralHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralHadronE"));
		pfjets_neutralHadronE_branch->SetAddress(&pfjets_neutralHadronE_);
	}
	if(pfjets_neutralHadronE_branch == 0 ) {
	//cout << "Branch pfjets_neutralHadronE does not exist." << endl;
	}
	photons_e1x5_branch = 0;
	if (tree->GetAlias("photons_e1x5") != 0) {
		photons_e1x5_branch = tree->GetBranch(tree->GetAlias("photons_e1x5"));
		photons_e1x5_branch->SetAddress(&photons_e1x5_);
	}
	if(photons_e1x5_branch == 0 ) {
	//cout << "Branch photons_e1x5 does not exist." << endl;
	}
	photons_e2x5Max_branch = 0;
	if (tree->GetAlias("photons_e2x5Max") != 0) {
		photons_e2x5Max_branch = tree->GetBranch(tree->GetAlias("photons_e2x5Max"));
		photons_e2x5Max_branch->SetAddress(&photons_e2x5Max_);
	}
	if(photons_e2x5Max_branch == 0 ) {
	//cout << "Branch photons_e2x5Max does not exist." << endl;
	}
	photons_e3x3_branch = 0;
	if (tree->GetAlias("photons_e3x3") != 0) {
		photons_e3x3_branch = tree->GetBranch(tree->GetAlias("photons_e3x3"));
		photons_e3x3_branch->SetAddress(&photons_e3x3_);
	}
	if(photons_e3x3_branch == 0 ) {
	//cout << "Branch photons_e3x3 does not exist." << endl;
	}
	photons_e5x5_branch = 0;
	if (tree->GetAlias("photons_e5x5") != 0) {
		photons_e5x5_branch = tree->GetBranch(tree->GetAlias("photons_e5x5"));
		photons_e5x5_branch->SetAddress(&photons_e5x5_);
	}
	if(photons_e5x5_branch == 0 ) {
	//cout << "Branch photons_e5x5 does not exist." << endl;
	}
	photons_eMax_branch = 0;
	if (tree->GetAlias("photons_eMax") != 0) {
		photons_eMax_branch = tree->GetBranch(tree->GetAlias("photons_eMax"));
		photons_eMax_branch->SetAddress(&photons_eMax_);
	}
	if(photons_eMax_branch == 0 ) {
	//cout << "Branch photons_eMax does not exist." << endl;
	}
	photons_eSC_branch = 0;
	if (tree->GetAlias("photons_eSC") != 0) {
		photons_eSC_branch = tree->GetBranch(tree->GetAlias("photons_eSC"));
		photons_eSC_branch->SetAddress(&photons_eSC_);
	}
	if(photons_eSC_branch == 0 ) {
	//cout << "Branch photons_eSC does not exist." << endl;
	}
	photons_eSCPresh_branch = 0;
	if (tree->GetAlias("photons_eSCPresh") != 0) {
		photons_eSCPresh_branch = tree->GetBranch(tree->GetAlias("photons_eSCPresh"));
		photons_eSCPresh_branch->SetAddress(&photons_eSCPresh_);
	}
	if(photons_eSCPresh_branch == 0 ) {
	//cout << "Branch photons_eSCPresh does not exist." << endl;
	}
	photons_eSCRaw_branch = 0;
	if (tree->GetAlias("photons_eSCRaw") != 0) {
		photons_eSCRaw_branch = tree->GetBranch(tree->GetAlias("photons_eSCRaw"));
		photons_eSCRaw_branch->SetAddress(&photons_eSCRaw_);
	}
	if(photons_eSCRaw_branch == 0 ) {
	//cout << "Branch photons_eSCRaw does not exist." << endl;
	}
	photons_eSeed_branch = 0;
	if (tree->GetAlias("photons_eSeed") != 0) {
		photons_eSeed_branch = tree->GetBranch(tree->GetAlias("photons_eSeed"));
		photons_eSeed_branch->SetAddress(&photons_eSeed_);
	}
	if(photons_eSeed_branch == 0 ) {
	//cout << "Branch photons_eSeed does not exist." << endl;
	}
	photons_ecalIso_branch = 0;
	if (tree->GetAlias("photons_ecalIso") != 0) {
		photons_ecalIso_branch = tree->GetBranch(tree->GetAlias("photons_ecalIso"));
		photons_ecalIso_branch->SetAddress(&photons_ecalIso_);
	}
	if(photons_ecalIso_branch == 0 ) {
	//cout << "Branch photons_ecalIso does not exist." << endl;
	}
	photons_hOverE_branch = 0;
	if (tree->GetAlias("photons_hOverE") != 0) {
		photons_hOverE_branch = tree->GetBranch(tree->GetAlias("photons_hOverE"));
		photons_hOverE_branch->SetAddress(&photons_hOverE_);
	}
	if(photons_hOverE_branch == 0 ) {
	//cout << "Branch photons_hOverE does not exist." << endl;
	}
	photons_hcalIso_branch = 0;
	if (tree->GetAlias("photons_hcalIso") != 0) {
		photons_hcalIso_branch = tree->GetBranch(tree->GetAlias("photons_hcalIso"));
		photons_hcalIso_branch->SetAddress(&photons_hcalIso_);
	}
	if(photons_hcalIso_branch == 0 ) {
	//cout << "Branch photons_hcalIso does not exist." << endl;
	}
	photons_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("photons_sigmaEtaEta") != 0) {
		photons_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("photons_sigmaEtaEta"));
		photons_sigmaEtaEta_branch->SetAddress(&photons_sigmaEtaEta_);
	}
	if(photons_sigmaEtaEta_branch == 0 ) {
	//cout << "Branch photons_sigmaEtaEta does not exist." << endl;
	}
	photons_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("photons_sigmaIEtaIEta") != 0) {
		photons_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("photons_sigmaIEtaIEta"));
		photons_sigmaIEtaIEta_branch->SetAddress(&photons_sigmaIEtaIEta_);
	}
	if(photons_sigmaIEtaIEta_branch == 0 ) {
	//cout << "Branch photons_sigmaIEtaIEta does not exist." << endl;
	}
	photons_sigmaIPhiIPhi_branch = 0;
	if (tree->GetAlias("photons_sigmaIPhiIPhi") != 0) {
		photons_sigmaIPhiIPhi_branch = tree->GetBranch(tree->GetAlias("photons_sigmaIPhiIPhi"));
		photons_sigmaIPhiIPhi_branch->SetAddress(&photons_sigmaIPhiIPhi_);
	}
	if(photons_sigmaIPhiIPhi_branch == 0 ) {
	//cout << "Branch photons_sigmaIPhiIPhi does not exist." << endl;
	}
	photons_sigmaPhiPhi_branch = 0;
	if (tree->GetAlias("photons_sigmaPhiPhi") != 0) {
		photons_sigmaPhiPhi_branch = tree->GetBranch(tree->GetAlias("photons_sigmaPhiPhi"));
		photons_sigmaPhiPhi_branch->SetAddress(&photons_sigmaPhiPhi_);
	}
	if(photons_sigmaPhiPhi_branch == 0 ) {
	//cout << "Branch photons_sigmaPhiPhi does not exist." << endl;
	}
	photons_tkIsoHollow_branch = 0;
	if (tree->GetAlias("photons_tkIsoHollow") != 0) {
		photons_tkIsoHollow_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoHollow"));
		photons_tkIsoHollow_branch->SetAddress(&photons_tkIsoHollow_);
	}
	if(photons_tkIsoHollow_branch == 0 ) {
	//cout << "Branch photons_tkIsoHollow does not exist." << endl;
	}
	photons_tkIsoSolid_branch = 0;
	if (tree->GetAlias("photons_tkIsoSolid") != 0) {
		photons_tkIsoSolid_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoSolid"));
		photons_tkIsoSolid_branch->SetAddress(&photons_tkIsoSolid_);
	}
	if(photons_tkIsoSolid_branch == 0 ) {
	//cout << "Branch photons_tkIsoSolid does not exist." << endl;
	}
	ran_dRClosestTower_branch = 0;
	if (tree->GetAlias("ran_dRClosestTower") != 0) {
		ran_dRClosestTower_branch = tree->GetBranch(tree->GetAlias("ran_dRClosestTower"));
		ran_dRClosestTower_branch->SetAddress(&ran_dRClosestTower_);
	}
	if(ran_dRClosestTower_branch == 0 ) {
	//cout << "Branch ran_dRClosestTower does not exist." << endl;
	}
	ran_dRClosestTowerEmEt_branch = 0;
	if (tree->GetAlias("ran_dRClosestTowerEmEt") != 0) {
		ran_dRClosestTowerEmEt_branch = tree->GetBranch(tree->GetAlias("ran_dRClosestTowerEmEt"));
		ran_dRClosestTowerEmEt_branch->SetAddress(&ran_dRClosestTowerEmEt_);
	}
	if(ran_dRClosestTowerEmEt_branch == 0 ) {
	//cout << "Branch ran_dRClosestTowerEmEt does not exist." << endl;
	}
	ran_ecalIso03_egamma_branch = 0;
	if (tree->GetAlias("ran_ecalIso03_egamma") != 0) {
		ran_ecalIso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_ecalIso03_egamma"));
		ran_ecalIso03_egamma_branch->SetAddress(&ran_ecalIso03_egamma_);
	}
	if(ran_ecalIso03_egamma_branch == 0 ) {
	//cout << "Branch ran_ecalIso03_egamma does not exist." << endl;
	}
	ran_ecalIso03_mu_branch = 0;
	if (tree->GetAlias("ran_ecalIso03_mu") != 0) {
		ran_ecalIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_ecalIso03_mu"));
		ran_ecalIso03_mu_branch->SetAddress(&ran_ecalIso03_mu_);
	}
	if(ran_ecalIso03_mu_branch == 0 ) {
	//cout << "Branch ran_ecalIso03_mu does not exist." << endl;
	}
	ran_hcalD1Iso03_egamma_branch = 0;
	if (tree->GetAlias("ran_hcalD1Iso03_egamma") != 0) {
		ran_hcalD1Iso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_hcalD1Iso03_egamma"));
		ran_hcalD1Iso03_egamma_branch->SetAddress(&ran_hcalD1Iso03_egamma_);
	}
	if(ran_hcalD1Iso03_egamma_branch == 0 ) {
	//cout << "Branch ran_hcalD1Iso03_egamma does not exist." << endl;
	}
	ran_hcalD2Iso03_egamma_branch = 0;
	if (tree->GetAlias("ran_hcalD2Iso03_egamma") != 0) {
		ran_hcalD2Iso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_hcalD2Iso03_egamma"));
		ran_hcalD2Iso03_egamma_branch->SetAddress(&ran_hcalD2Iso03_egamma_);
	}
	if(ran_hcalD2Iso03_egamma_branch == 0 ) {
	//cout << "Branch ran_hcalD2Iso03_egamma does not exist." << endl;
	}
	ran_hcalIso03_egamma_branch = 0;
	if (tree->GetAlias("ran_hcalIso03_egamma") != 0) {
		ran_hcalIso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_hcalIso03_egamma"));
		ran_hcalIso03_egamma_branch->SetAddress(&ran_hcalIso03_egamma_);
	}
	if(ran_hcalIso03_egamma_branch == 0 ) {
	//cout << "Branch ran_hcalIso03_egamma does not exist." << endl;
	}
	ran_hcalIso03_mu_branch = 0;
	if (tree->GetAlias("ran_hcalIso03_mu") != 0) {
		ran_hcalIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_hcalIso03_mu"));
		ran_hcalIso03_mu_branch->SetAddress(&ran_hcalIso03_mu_);
	}
	if(ran_hcalIso03_mu_branch == 0 ) {
	//cout << "Branch ran_hcalIso03_mu does not exist." << endl;
	}
	ran_hoIso03_mu_branch = 0;
	if (tree->GetAlias("ran_hoIso03_mu") != 0) {
		ran_hoIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_hoIso03_mu"));
		ran_hoIso03_mu_branch->SetAddress(&ran_hoIso03_mu_);
	}
	if(ran_hoIso03_mu_branch == 0 ) {
	//cout << "Branch ran_hoIso03_mu does not exist." << endl;
	}
	ran_towerEmEt_branch = 0;
	if (tree->GetAlias("ran_towerEmEt") != 0) {
		ran_towerEmEt_branch = tree->GetBranch(tree->GetAlias("ran_towerEmEt"));
		ran_towerEmEt_branch->SetAddress(&ran_towerEmEt_);
	}
	if(ran_towerEmEt_branch == 0 ) {
	//cout << "Branch ran_towerEmEt does not exist." << endl;
	}
	ran_towerHadEt_branch = 0;
	if (tree->GetAlias("ran_towerHadEt") != 0) {
		ran_towerHadEt_branch = tree->GetBranch(tree->GetAlias("ran_towerHadEt"));
		ran_towerHadEt_branch->SetAddress(&ran_towerHadEt_);
	}
	if(ran_towerHadEt_branch == 0 ) {
	//cout << "Branch ran_towerHadEt does not exist." << endl;
	}
	ran_trkIso03_egamma_branch = 0;
	if (tree->GetAlias("ran_trkIso03_egamma") != 0) {
		ran_trkIso03_egamma_branch = tree->GetBranch(tree->GetAlias("ran_trkIso03_egamma"));
		ran_trkIso03_egamma_branch->SetAddress(&ran_trkIso03_egamma_);
	}
	if(ran_trkIso03_egamma_branch == 0 ) {
	//cout << "Branch ran_trkIso03_egamma does not exist." << endl;
	}
	ran_trkIso03_mu_branch = 0;
	if (tree->GetAlias("ran_trkIso03_mu") != 0) {
		ran_trkIso03_mu_branch = tree->GetBranch(tree->GetAlias("ran_trkIso03_mu"));
		ran_trkIso03_mu_branch->SetAddress(&ran_trkIso03_mu_);
	}
	if(ran_trkIso03_mu_branch == 0 ) {
	//cout << "Branch ran_trkIso03_mu does not exist." << endl;
	}
	scs_clustersSize_branch = 0;
	if (tree->GetAlias("scs_clustersSize") != 0) {
		scs_clustersSize_branch = tree->GetBranch(tree->GetAlias("scs_clustersSize"));
		scs_clustersSize_branch->SetAddress(&scs_clustersSize_);
	}
	if(scs_clustersSize_branch == 0 ) {
	//cout << "Branch scs_clustersSize does not exist." << endl;
	}
	scs_crystalsSize_branch = 0;
	if (tree->GetAlias("scs_crystalsSize") != 0) {
		scs_crystalsSize_branch = tree->GetBranch(tree->GetAlias("scs_crystalsSize"));
		scs_crystalsSize_branch->SetAddress(&scs_crystalsSize_);
	}
	if(scs_crystalsSize_branch == 0 ) {
	//cout << "Branch scs_crystalsSize does not exist." << endl;
	}
	scs_e1x3_branch = 0;
	if (tree->GetAlias("scs_e1x3") != 0) {
		scs_e1x3_branch = tree->GetBranch(tree->GetAlias("scs_e1x3"));
		scs_e1x3_branch->SetAddress(&scs_e1x3_);
	}
	if(scs_e1x3_branch == 0 ) {
	//cout << "Branch scs_e1x3 does not exist." << endl;
	}
	scs_e1x5_branch = 0;
	if (tree->GetAlias("scs_e1x5") != 0) {
		scs_e1x5_branch = tree->GetBranch(tree->GetAlias("scs_e1x5"));
		scs_e1x5_branch->SetAddress(&scs_e1x5_);
	}
	if(scs_e1x5_branch == 0 ) {
	//cout << "Branch scs_e1x5 does not exist." << endl;
	}
	scs_e2nd_branch = 0;
	if (tree->GetAlias("scs_e2nd") != 0) {
		scs_e2nd_branch = tree->GetBranch(tree->GetAlias("scs_e2nd"));
		scs_e2nd_branch->SetAddress(&scs_e2nd_);
	}
	if(scs_e2nd_branch == 0 ) {
	//cout << "Branch scs_e2nd does not exist." << endl;
	}
	scs_e2x2_branch = 0;
	if (tree->GetAlias("scs_e2x2") != 0) {
		scs_e2x2_branch = tree->GetBranch(tree->GetAlias("scs_e2x2"));
		scs_e2x2_branch->SetAddress(&scs_e2x2_);
	}
	if(scs_e2x2_branch == 0 ) {
	//cout << "Branch scs_e2x2 does not exist." << endl;
	}
	scs_e2x5Max_branch = 0;
	if (tree->GetAlias("scs_e2x5Max") != 0) {
		scs_e2x5Max_branch = tree->GetBranch(tree->GetAlias("scs_e2x5Max"));
		scs_e2x5Max_branch->SetAddress(&scs_e2x5Max_);
	}
	if(scs_e2x5Max_branch == 0 ) {
	//cout << "Branch scs_e2x5Max does not exist." << endl;
	}
	scs_e3x1_branch = 0;
	if (tree->GetAlias("scs_e3x1") != 0) {
		scs_e3x1_branch = tree->GetBranch(tree->GetAlias("scs_e3x1"));
		scs_e3x1_branch->SetAddress(&scs_e3x1_);
	}
	if(scs_e3x1_branch == 0 ) {
	//cout << "Branch scs_e3x1 does not exist." << endl;
	}
	scs_e3x2_branch = 0;
	if (tree->GetAlias("scs_e3x2") != 0) {
		scs_e3x2_branch = tree->GetBranch(tree->GetAlias("scs_e3x2"));
		scs_e3x2_branch->SetAddress(&scs_e3x2_);
	}
	if(scs_e3x2_branch == 0 ) {
	//cout << "Branch scs_e3x2 does not exist." << endl;
	}
	scs_e3x3_branch = 0;
	if (tree->GetAlias("scs_e3x3") != 0) {
		scs_e3x3_branch = tree->GetBranch(tree->GetAlias("scs_e3x3"));
		scs_e3x3_branch->SetAddress(&scs_e3x3_);
	}
	if(scs_e3x3_branch == 0 ) {
	//cout << "Branch scs_e3x3 does not exist." << endl;
	}
	scs_e4x4_branch = 0;
	if (tree->GetAlias("scs_e4x4") != 0) {
		scs_e4x4_branch = tree->GetBranch(tree->GetAlias("scs_e4x4"));
		scs_e4x4_branch->SetAddress(&scs_e4x4_);
	}
	if(scs_e4x4_branch == 0 ) {
	//cout << "Branch scs_e4x4 does not exist." << endl;
	}
	scs_e5x5_branch = 0;
	if (tree->GetAlias("scs_e5x5") != 0) {
		scs_e5x5_branch = tree->GetBranch(tree->GetAlias("scs_e5x5"));
		scs_e5x5_branch->SetAddress(&scs_e5x5_);
	}
	if(scs_e5x5_branch == 0 ) {
	//cout << "Branch scs_e5x5 does not exist." << endl;
	}
	scs_eMax_branch = 0;
	if (tree->GetAlias("scs_eMax") != 0) {
		scs_eMax_branch = tree->GetBranch(tree->GetAlias("scs_eMax"));
		scs_eMax_branch->SetAddress(&scs_eMax_);
	}
	if(scs_eMax_branch == 0 ) {
	//cout << "Branch scs_eMax does not exist." << endl;
	}
	scs_eSeed_branch = 0;
	if (tree->GetAlias("scs_eSeed") != 0) {
		scs_eSeed_branch = tree->GetBranch(tree->GetAlias("scs_eSeed"));
		scs_eSeed_branch->SetAddress(&scs_eSeed_);
	}
	if(scs_eSeed_branch == 0 ) {
	//cout << "Branch scs_eSeed does not exist." << endl;
	}
	scs_energy_branch = 0;
	if (tree->GetAlias("scs_energy") != 0) {
		scs_energy_branch = tree->GetBranch(tree->GetAlias("scs_energy"));
		scs_energy_branch->SetAddress(&scs_energy_);
	}
	if(scs_energy_branch == 0 ) {
	//cout << "Branch scs_energy does not exist." << endl;
	}
	scs_eta_branch = 0;
	if (tree->GetAlias("scs_eta") != 0) {
		scs_eta_branch = tree->GetBranch(tree->GetAlias("scs_eta"));
		scs_eta_branch->SetAddress(&scs_eta_);
	}
	if(scs_eta_branch == 0 ) {
	//cout << "Branch scs_eta does not exist." << endl;
	}
	scs_hoe_branch = 0;
	if (tree->GetAlias("scs_hoe") != 0) {
		scs_hoe_branch = tree->GetBranch(tree->GetAlias("scs_hoe"));
		scs_hoe_branch->SetAddress(&scs_hoe_);
	}
	if(scs_hoe_branch == 0 ) {
	//cout << "Branch scs_hoe does not exist." << endl;
	}
	scs_phi_branch = 0;
	if (tree->GetAlias("scs_phi") != 0) {
		scs_phi_branch = tree->GetBranch(tree->GetAlias("scs_phi"));
		scs_phi_branch->SetAddress(&scs_phi_);
	}
	if(scs_phi_branch == 0 ) {
	//cout << "Branch scs_phi does not exist." << endl;
	}
	scs_preshowerEnergy_branch = 0;
	if (tree->GetAlias("scs_preshowerEnergy") != 0) {
		scs_preshowerEnergy_branch = tree->GetBranch(tree->GetAlias("scs_preshowerEnergy"));
		scs_preshowerEnergy_branch->SetAddress(&scs_preshowerEnergy_);
	}
	if(scs_preshowerEnergy_branch == 0 ) {
	//cout << "Branch scs_preshowerEnergy does not exist." << endl;
	}
	scs_rawEnergy_branch = 0;
	if (tree->GetAlias("scs_rawEnergy") != 0) {
		scs_rawEnergy_branch = tree->GetBranch(tree->GetAlias("scs_rawEnergy"));
		scs_rawEnergy_branch->SetAddress(&scs_rawEnergy_);
	}
	if(scs_rawEnergy_branch == 0 ) {
	//cout << "Branch scs_rawEnergy does not exist." << endl;
	}
	scs_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("scs_sigmaEtaEta") != 0) {
		scs_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("scs_sigmaEtaEta"));
		scs_sigmaEtaEta_branch->SetAddress(&scs_sigmaEtaEta_);
	}
	if(scs_sigmaEtaEta_branch == 0 ) {
	//cout << "Branch scs_sigmaEtaEta does not exist." << endl;
	}
	scs_sigmaEtaPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaEtaPhi") != 0) {
		scs_sigmaEtaPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaEtaPhi"));
		scs_sigmaEtaPhi_branch->SetAddress(&scs_sigmaEtaPhi_);
	}
	if(scs_sigmaEtaPhi_branch == 0 ) {
	//cout << "Branch scs_sigmaEtaPhi does not exist." << endl;
	}
	scs_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("scs_sigmaIEtaIEta") != 0) {
		scs_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("scs_sigmaIEtaIEta"));
		scs_sigmaIEtaIEta_branch->SetAddress(&scs_sigmaIEtaIEta_);
	}
	if(scs_sigmaIEtaIEta_branch == 0 ) {
	//cout << "Branch scs_sigmaIEtaIEta does not exist." << endl;
	}
	scs_sigmaIEtaIPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaIEtaIPhi") != 0) {
		scs_sigmaIEtaIPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaIEtaIPhi"));
		scs_sigmaIEtaIPhi_branch->SetAddress(&scs_sigmaIEtaIPhi_);
	}
	if(scs_sigmaIEtaIPhi_branch == 0 ) {
	//cout << "Branch scs_sigmaIEtaIPhi does not exist." << endl;
	}
	scs_sigmaIPhiIPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaIPhiIPhi") != 0) {
		scs_sigmaIPhiIPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaIPhiIPhi"));
		scs_sigmaIPhiIPhi_branch->SetAddress(&scs_sigmaIPhiIPhi_);
	}
	if(scs_sigmaIPhiIPhi_branch == 0 ) {
	//cout << "Branch scs_sigmaIPhiIPhi does not exist." << endl;
	}
	scs_sigmaPhiPhi_branch = 0;
	if (tree->GetAlias("scs_sigmaPhiPhi") != 0) {
		scs_sigmaPhiPhi_branch = tree->GetBranch(tree->GetAlias("scs_sigmaPhiPhi"));
		scs_sigmaPhiPhi_branch->SetAddress(&scs_sigmaPhiPhi_);
	}
	if(scs_sigmaPhiPhi_branch == 0 ) {
	//cout << "Branch scs_sigmaPhiPhi does not exist." << endl;
	}
	scjets_cor_branch = 0;
	if (tree->GetAlias("scjets_cor") != 0) {
		scjets_cor_branch = tree->GetBranch(tree->GetAlias("scjets_cor"));
		scjets_cor_branch->SetAddress(&scjets_cor_);
	}
	if(scjets_cor_branch == 0 ) {
	//cout << "Branch scjets_cor does not exist." << endl;
	}
	scjets_emFrac_branch = 0;
	if (tree->GetAlias("scjets_emFrac") != 0) {
		scjets_emFrac_branch = tree->GetBranch(tree->GetAlias("scjets_emFrac"));
		scjets_emFrac_branch->SetAddress(&scjets_emFrac_);
	}
	if(scjets_emFrac_branch == 0 ) {
	//cout << "Branch scjets_emFrac does not exist." << endl;
	}
	scjets_fHPD_branch = 0;
	if (tree->GetAlias("scjets_fHPD") != 0) {
		scjets_fHPD_branch = tree->GetBranch(tree->GetAlias("scjets_fHPD"));
		scjets_fHPD_branch->SetAddress(&scjets_fHPD_);
	}
	if(scjets_fHPD_branch == 0 ) {
	//cout << "Branch scjets_fHPD does not exist." << endl;
	}
	scjets_fRBX_branch = 0;
	if (tree->GetAlias("scjets_fRBX") != 0) {
		scjets_fRBX_branch = tree->GetBranch(tree->GetAlias("scjets_fRBX"));
		scjets_fRBX_branch->SetAddress(&scjets_fRBX_);
	}
	if(scjets_fRBX_branch == 0 ) {
	//cout << "Branch scjets_fRBX does not exist." << endl;
	}
	scjets_fSubDetector1_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector1") != 0) {
		scjets_fSubDetector1_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector1"));
		scjets_fSubDetector1_branch->SetAddress(&scjets_fSubDetector1_);
	}
	if(scjets_fSubDetector1_branch == 0 ) {
	//cout << "Branch scjets_fSubDetector1 does not exist." << endl;
	}
	scjets_fSubDetector2_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector2") != 0) {
		scjets_fSubDetector2_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector2"));
		scjets_fSubDetector2_branch->SetAddress(&scjets_fSubDetector2_);
	}
	if(scjets_fSubDetector2_branch == 0 ) {
	//cout << "Branch scjets_fSubDetector2 does not exist." << endl;
	}
	scjets_fSubDetector3_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector3") != 0) {
		scjets_fSubDetector3_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector3"));
		scjets_fSubDetector3_branch->SetAddress(&scjets_fSubDetector3_);
	}
	if(scjets_fSubDetector3_branch == 0 ) {
	//cout << "Branch scjets_fSubDetector3 does not exist." << endl;
	}
	scjets_fSubDetector4_branch = 0;
	if (tree->GetAlias("scjets_fSubDetector4") != 0) {
		scjets_fSubDetector4_branch = tree->GetBranch(tree->GetAlias("scjets_fSubDetector4"));
		scjets_fSubDetector4_branch->SetAddress(&scjets_fSubDetector4_);
	}
	if(scjets_fSubDetector4_branch == 0 ) {
	//cout << "Branch scjets_fSubDetector4 does not exist." << endl;
	}
	scjets_n90Hits_branch = 0;
	if (tree->GetAlias("scjets_n90Hits") != 0) {
		scjets_n90Hits_branch = tree->GetBranch(tree->GetAlias("scjets_n90Hits"));
		scjets_n90Hits_branch->SetAddress(&scjets_n90Hits_);
	}
	if(scjets_n90Hits_branch == 0 ) {
	//cout << "Branch scjets_n90Hits does not exist." << endl;
	}
	scjets_nECALTowers_branch = 0;
	if (tree->GetAlias("scjets_nECALTowers") != 0) {
		scjets_nECALTowers_branch = tree->GetBranch(tree->GetAlias("scjets_nECALTowers"));
		scjets_nECALTowers_branch->SetAddress(&scjets_nECALTowers_);
	}
	if(scjets_nECALTowers_branch == 0 ) {
	//cout << "Branch scjets_nECALTowers does not exist." << endl;
	}
	scjets_nHCALTowers_branch = 0;
	if (tree->GetAlias("scjets_nHCALTowers") != 0) {
		scjets_nHCALTowers_branch = tree->GetBranch(tree->GetAlias("scjets_nHCALTowers"));
		scjets_nHCALTowers_branch->SetAddress(&scjets_nHCALTowers_);
	}
	if(scjets_nHCALTowers_branch == 0 ) {
	//cout << "Branch scjets_nHCALTowers does not exist." << endl;
	}
	scjets_restrictedEMF_branch = 0;
	if (tree->GetAlias("scjets_restrictedEMF") != 0) {
		scjets_restrictedEMF_branch = tree->GetBranch(tree->GetAlias("scjets_restrictedEMF"));
		scjets_restrictedEMF_branch->SetAddress(&scjets_restrictedEMF_);
	}
	if(scjets_restrictedEMF_branch == 0 ) {
	//cout << "Branch scjets_restrictedEMF does not exist." << endl;
	}
	mus_tcmet_deltax_branch = 0;
	if (tree->GetAlias("mus_tcmet_deltax") != 0) {
		mus_tcmet_deltax_branch = tree->GetBranch(tree->GetAlias("mus_tcmet_deltax"));
		mus_tcmet_deltax_branch->SetAddress(&mus_tcmet_deltax_);
	}
	if(mus_tcmet_deltax_branch == 0 ) {
	//cout << "Branch mus_tcmet_deltax does not exist." << endl;
	}
	mus_tcmet_deltay_branch = 0;
	if (tree->GetAlias("mus_tcmet_deltay") != 0) {
		mus_tcmet_deltay_branch = tree->GetBranch(tree->GetAlias("mus_tcmet_deltay"));
		mus_tcmet_deltay_branch->SetAddress(&mus_tcmet_deltay_);
	}
	if(mus_tcmet_deltay_branch == 0 ) {
	//cout << "Branch mus_tcmet_deltay does not exist." << endl;
	}
	trks_chi2_branch = 0;
	if (tree->GetAlias("trks_chi2") != 0) {
		trks_chi2_branch = tree->GetBranch(tree->GetAlias("trks_chi2"));
		trks_chi2_branch->SetAddress(&trks_chi2_);
	}
	if(trks_chi2_branch == 0 ) {
	//cout << "Branch trks_chi2 does not exist." << endl;
	}
	trks_d0_branch = 0;
	if (tree->GetAlias("trks_d0") != 0) {
		trks_d0_branch = tree->GetBranch(tree->GetAlias("trks_d0"));
		trks_d0_branch->SetAddress(&trks_d0_);
	}
	if(trks_d0_branch == 0 ) {
	//cout << "Branch trks_d0 does not exist." << endl;
	}
	trks_d0Err_branch = 0;
	if (tree->GetAlias("trks_d0Err") != 0) {
		trks_d0Err_branch = tree->GetBranch(tree->GetAlias("trks_d0Err"));
		trks_d0Err_branch->SetAddress(&trks_d0Err_);
	}
	if(trks_d0Err_branch == 0 ) {
	//cout << "Branch trks_d0Err does not exist." << endl;
	}
	trks_d0corr_branch = 0;
	if (tree->GetAlias("trks_d0corr") != 0) {
		trks_d0corr_branch = tree->GetBranch(tree->GetAlias("trks_d0corr"));
		trks_d0corr_branch->SetAddress(&trks_d0corr_);
	}
	if(trks_d0corr_branch == 0 ) {
	//cout << "Branch trks_d0corr does not exist." << endl;
	}
	trks_d0corrPhi_branch = 0;
	if (tree->GetAlias("trks_d0corrPhi") != 0) {
		trks_d0corrPhi_branch = tree->GetBranch(tree->GetAlias("trks_d0corrPhi"));
		trks_d0corrPhi_branch->SetAddress(&trks_d0corrPhi_);
	}
	if(trks_d0corrPhi_branch == 0 ) {
	//cout << "Branch trks_d0corrPhi does not exist." << endl;
	}
	trks_etaErr_branch = 0;
	if (tree->GetAlias("trks_etaErr") != 0) {
		trks_etaErr_branch = tree->GetBranch(tree->GetAlias("trks_etaErr"));
		trks_etaErr_branch->SetAddress(&trks_etaErr_);
	}
	if(trks_etaErr_branch == 0 ) {
	//cout << "Branch trks_etaErr does not exist." << endl;
	}
	trks_layer1_charge_branch = 0;
	if (tree->GetAlias("trks_layer1_charge") != 0) {
		trks_layer1_charge_branch = tree->GetBranch(tree->GetAlias("trks_layer1_charge"));
		trks_layer1_charge_branch->SetAddress(&trks_layer1_charge_);
	}
	if(trks_layer1_charge_branch == 0 ) {
	//cout << "Branch trks_layer1_charge does not exist." << endl;
	}
	trks_ndof_branch = 0;
	if (tree->GetAlias("trks_ndof") != 0) {
		trks_ndof_branch = tree->GetBranch(tree->GetAlias("trks_ndof"));
		trks_ndof_branch->SetAddress(&trks_ndof_);
	}
	if(trks_ndof_branch == 0 ) {
	//cout << "Branch trks_ndof does not exist." << endl;
	}
	trks_phiErr_branch = 0;
	if (tree->GetAlias("trks_phiErr") != 0) {
		trks_phiErr_branch = tree->GetBranch(tree->GetAlias("trks_phiErr"));
		trks_phiErr_branch->SetAddress(&trks_phiErr_);
	}
	if(trks_phiErr_branch == 0 ) {
	//cout << "Branch trks_phiErr does not exist." << endl;
	}
	trks_ptErr_branch = 0;
	if (tree->GetAlias("trks_ptErr") != 0) {
		trks_ptErr_branch = tree->GetBranch(tree->GetAlias("trks_ptErr"));
		trks_ptErr_branch->SetAddress(&trks_ptErr_);
	}
	if(trks_ptErr_branch == 0 ) {
	//cout << "Branch trks_ptErr does not exist." << endl;
	}
	trks_z0_branch = 0;
	if (tree->GetAlias("trks_z0") != 0) {
		trks_z0_branch = tree->GetBranch(tree->GetAlias("trks_z0"));
		trks_z0_branch->SetAddress(&trks_z0_);
	}
	if(trks_z0_branch == 0 ) {
	//cout << "Branch trks_z0 does not exist." << endl;
	}
	trks_z0Err_branch = 0;
	if (tree->GetAlias("trks_z0Err") != 0) {
		trks_z0Err_branch = tree->GetBranch(tree->GetAlias("trks_z0Err"));
		trks_z0Err_branch->SetAddress(&trks_z0Err_);
	}
	if(trks_z0Err_branch == 0 ) {
	//cout << "Branch trks_z0Err does not exist." << endl;
	}
	trks_z0corr_branch = 0;
	if (tree->GetAlias("trks_z0corr") != 0) {
		trks_z0corr_branch = tree->GetBranch(tree->GetAlias("trks_z0corr"));
		trks_z0corr_branch->SetAddress(&trks_z0corr_);
	}
	if(trks_z0corr_branch == 0 ) {
	//cout << "Branch trks_z0corr does not exist." << endl;
	}
	vtxs_chi2_branch = 0;
	if (tree->GetAlias("vtxs_chi2") != 0) {
		vtxs_chi2_branch = tree->GetBranch(tree->GetAlias("vtxs_chi2"));
		vtxs_chi2_branch->SetAddress(&vtxs_chi2_);
	}
	if(vtxs_chi2_branch == 0 ) {
	//cout << "Branch vtxs_chi2 does not exist." << endl;
	}
	vtxs_ndof_branch = 0;
	if (tree->GetAlias("vtxs_ndof") != 0) {
		vtxs_ndof_branch = tree->GetBranch(tree->GetAlias("vtxs_ndof"));
		vtxs_ndof_branch->SetAddress(&vtxs_ndof_);
	}
	if(vtxs_ndof_branch == 0 ) {
	//cout << "Branch vtxs_ndof does not exist." << endl;
	}
	vtxs_xError_branch = 0;
	if (tree->GetAlias("vtxs_xError") != 0) {
		vtxs_xError_branch = tree->GetBranch(tree->GetAlias("vtxs_xError"));
		vtxs_xError_branch->SetAddress(&vtxs_xError_);
	}
	if(vtxs_xError_branch == 0 ) {
	//cout << "Branch vtxs_xError does not exist." << endl;
	}
	vtxs_yError_branch = 0;
	if (tree->GetAlias("vtxs_yError") != 0) {
		vtxs_yError_branch = tree->GetBranch(tree->GetAlias("vtxs_yError"));
		vtxs_yError_branch->SetAddress(&vtxs_yError_);
	}
	if(vtxs_yError_branch == 0 ) {
	//cout << "Branch vtxs_yError does not exist." << endl;
	}
	vtxs_zError_branch = 0;
	if (tree->GetAlias("vtxs_zError") != 0) {
		vtxs_zError_branch = tree->GetBranch(tree->GetAlias("vtxs_zError"));
		vtxs_zError_branch->SetAddress(&vtxs_zError_);
	}
	if(vtxs_zError_branch == 0 ) {
	//cout << "Branch vtxs_zError does not exist." << endl;
	}
	vtxs_covMatrix_branch = 0;
	if (tree->GetAlias("vtxs_covMatrix") != 0) {
		vtxs_covMatrix_branch = tree->GetBranch(tree->GetAlias("vtxs_covMatrix"));
		vtxs_covMatrix_branch->SetAddress(&vtxs_covMatrix_);
	}
	if(vtxs_covMatrix_branch == 0 ) {
	//cout << "Branch vtxs_covMatrix does not exist." << endl;
	}
	evt_cscLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_cscLooseHaloId") != 0) {
		evt_cscLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_cscLooseHaloId"));
		evt_cscLooseHaloId_branch->SetAddress(&evt_cscLooseHaloId_);
	}
	if(evt_cscLooseHaloId_branch == 0 ) {
	//cout << "Branch evt_cscLooseHaloId does not exist." << endl;
	}
	evt_cscTightHaloId_branch = 0;
	if (tree->GetAlias("evt_cscTightHaloId") != 0) {
		evt_cscTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_cscTightHaloId"));
		evt_cscTightHaloId_branch->SetAddress(&evt_cscTightHaloId_);
	}
	if(evt_cscTightHaloId_branch == 0 ) {
	//cout << "Branch evt_cscTightHaloId does not exist." << endl;
	}
	evt_ecalLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_ecalLooseHaloId") != 0) {
		evt_ecalLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_ecalLooseHaloId"));
		evt_ecalLooseHaloId_branch->SetAddress(&evt_ecalLooseHaloId_);
	}
	if(evt_ecalLooseHaloId_branch == 0 ) {
	//cout << "Branch evt_ecalLooseHaloId does not exist." << endl;
	}
	evt_ecalTightHaloId_branch = 0;
	if (tree->GetAlias("evt_ecalTightHaloId") != 0) {
		evt_ecalTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_ecalTightHaloId"));
		evt_ecalTightHaloId_branch->SetAddress(&evt_ecalTightHaloId_);
	}
	if(evt_ecalTightHaloId_branch == 0 ) {
	//cout << "Branch evt_ecalTightHaloId does not exist." << endl;
	}
	evt_extremeTightHaloId_branch = 0;
	if (tree->GetAlias("evt_extremeTightHaloId") != 0) {
		evt_extremeTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_extremeTightHaloId"));
		evt_extremeTightHaloId_branch->SetAddress(&evt_extremeTightHaloId_);
	}
	if(evt_extremeTightHaloId_branch == 0 ) {
	//cout << "Branch evt_extremeTightHaloId does not exist." << endl;
	}
	evt_globalLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_globalLooseHaloId") != 0) {
		evt_globalLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_globalLooseHaloId"));
		evt_globalLooseHaloId_branch->SetAddress(&evt_globalLooseHaloId_);
	}
	if(evt_globalLooseHaloId_branch == 0 ) {
	//cout << "Branch evt_globalLooseHaloId does not exist." << endl;
	}
	evt_globalTightHaloId_branch = 0;
	if (tree->GetAlias("evt_globalTightHaloId") != 0) {
		evt_globalTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_globalTightHaloId"));
		evt_globalTightHaloId_branch->SetAddress(&evt_globalTightHaloId_);
	}
	if(evt_globalTightHaloId_branch == 0 ) {
	//cout << "Branch evt_globalTightHaloId does not exist." << endl;
	}
	evt_hcalLooseHaloId_branch = 0;
	if (tree->GetAlias("evt_hcalLooseHaloId") != 0) {
		evt_hcalLooseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_hcalLooseHaloId"));
		evt_hcalLooseHaloId_branch->SetAddress(&evt_hcalLooseHaloId_);
	}
	if(evt_hcalLooseHaloId_branch == 0 ) {
	//cout << "Branch evt_hcalLooseHaloId does not exist." << endl;
	}
	evt_hcalTightHaloId_branch = 0;
	if (tree->GetAlias("evt_hcalTightHaloId") != 0) {
		evt_hcalTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_hcalTightHaloId"));
		evt_hcalTightHaloId_branch->SetAddress(&evt_hcalTightHaloId_);
	}
	if(evt_hcalTightHaloId_branch == 0 ) {
	//cout << "Branch evt_hcalTightHaloId does not exist." << endl;
	}
	evt_looseHaloId_branch = 0;
	if (tree->GetAlias("evt_looseHaloId") != 0) {
		evt_looseHaloId_branch = tree->GetBranch(tree->GetAlias("evt_looseHaloId"));
		evt_looseHaloId_branch->SetAddress(&evt_looseHaloId_);
	}
	if(evt_looseHaloId_branch == 0 ) {
	//cout << "Branch evt_looseHaloId does not exist." << endl;
	}
	evt_tightHaloId_branch = 0;
	if (tree->GetAlias("evt_tightHaloId") != 0) {
		evt_tightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_tightHaloId"));
		evt_tightHaloId_branch->SetAddress(&evt_tightHaloId_);
	}
	if(evt_tightHaloId_branch == 0 ) {
	//cout << "Branch evt_tightHaloId does not exist." << endl;
	}
	evt_bsType_branch = 0;
	if (tree->GetAlias("evt_bsType") != 0) {
		evt_bsType_branch = tree->GetBranch(tree->GetAlias("evt_bsType"));
		evt_bsType_branch->SetAddress(&evt_bsType_);
	}
	if(evt_bsType_branch == 0 ) {
	//cout << "Branch evt_bsType does not exist." << endl;
	}
	evt_bunchCrossing_branch = 0;
	if (tree->GetAlias("evt_bunchCrossing") != 0) {
		evt_bunchCrossing_branch = tree->GetBranch(tree->GetAlias("evt_bunchCrossing"));
		evt_bunchCrossing_branch->SetAddress(&evt_bunchCrossing_);
	}
	if(evt_bunchCrossing_branch == 0 ) {
	//cout << "Branch evt_bunchCrossing does not exist." << endl;
	}
	evt_experimentType_branch = 0;
	if (tree->GetAlias("evt_experimentType") != 0) {
		evt_experimentType_branch = tree->GetBranch(tree->GetAlias("evt_experimentType"));
		evt_experimentType_branch->SetAddress(&evt_experimentType_);
	}
	if(evt_experimentType_branch == 0 ) {
	//cout << "Branch evt_experimentType does not exist." << endl;
	}
	evt_orbitNumber_branch = 0;
	if (tree->GetAlias("evt_orbitNumber") != 0) {
		evt_orbitNumber_branch = tree->GetBranch(tree->GetAlias("evt_orbitNumber"));
		evt_orbitNumber_branch->SetAddress(&evt_orbitNumber_);
	}
	if(evt_orbitNumber_branch == 0 ) {
	//cout << "Branch evt_orbitNumber does not exist." << endl;
	}
	evt_storeNumber_branch = 0;
	if (tree->GetAlias("evt_storeNumber") != 0) {
		evt_storeNumber_branch = tree->GetBranch(tree->GetAlias("evt_storeNumber"));
		evt_storeNumber_branch->SetAddress(&evt_storeNumber_);
	}
	if(evt_storeNumber_branch == 0 ) {
	//cout << "Branch evt_storeNumber does not exist." << endl;
	}
	hcalnoise_maxHPDHits_branch = 0;
	if (tree->GetAlias("hcalnoise_maxHPDHits") != 0) {
		hcalnoise_maxHPDHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxHPDHits"));
		hcalnoise_maxHPDHits_branch->SetAddress(&hcalnoise_maxHPDHits_);
	}
	if(hcalnoise_maxHPDHits_branch == 0 ) {
	//cout << "Branch hcalnoise_maxHPDHits does not exist." << endl;
	}
	hcalnoise_maxRBXHits_branch = 0;
	if (tree->GetAlias("hcalnoise_maxRBXHits") != 0) {
		hcalnoise_maxRBXHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxRBXHits"));
		hcalnoise_maxRBXHits_branch->SetAddress(&hcalnoise_maxRBXHits_);
	}
	if(hcalnoise_maxRBXHits_branch == 0 ) {
	//cout << "Branch hcalnoise_maxRBXHits does not exist." << endl;
	}
	hcalnoise_maxZeros_branch = 0;
	if (tree->GetAlias("hcalnoise_maxZeros") != 0) {
		hcalnoise_maxZeros_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxZeros"));
		hcalnoise_maxZeros_branch->SetAddress(&hcalnoise_maxZeros_);
	}
	if(hcalnoise_maxZeros_branch == 0 ) {
	//cout << "Branch hcalnoise_maxZeros does not exist." << endl;
	}
	hcalnoise_noiseFilterStatus_branch = 0;
	if (tree->GetAlias("hcalnoise_noiseFilterStatus") != 0) {
		hcalnoise_noiseFilterStatus_branch = tree->GetBranch(tree->GetAlias("hcalnoise_noiseFilterStatus"));
		hcalnoise_noiseFilterStatus_branch->SetAddress(&hcalnoise_noiseFilterStatus_);
	}
	if(hcalnoise_noiseFilterStatus_branch == 0 ) {
	//cout << "Branch hcalnoise_noiseFilterStatus does not exist." << endl;
	}
	hcalnoise_noiseType_branch = 0;
	if (tree->GetAlias("hcalnoise_noiseType") != 0) {
		hcalnoise_noiseType_branch = tree->GetBranch(tree->GetAlias("hcalnoise_noiseType"));
		hcalnoise_noiseType_branch->SetAddress(&hcalnoise_noiseType_);
	}
	if(hcalnoise_noiseType_branch == 0 ) {
	//cout << "Branch hcalnoise_noiseType does not exist." << endl;
	}
	hcalnoise_num10GeVHits_branch = 0;
	if (tree->GetAlias("hcalnoise_num10GeVHits") != 0) {
		hcalnoise_num10GeVHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_num10GeVHits"));
		hcalnoise_num10GeVHits_branch->SetAddress(&hcalnoise_num10GeVHits_);
	}
	if(hcalnoise_num10GeVHits_branch == 0 ) {
	//cout << "Branch hcalnoise_num10GeVHits does not exist." << endl;
	}
	hcalnoise_num25GeVHits_branch = 0;
	if (tree->GetAlias("hcalnoise_num25GeVHits") != 0) {
		hcalnoise_num25GeVHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_num25GeVHits"));
		hcalnoise_num25GeVHits_branch->SetAddress(&hcalnoise_num25GeVHits_);
	}
	if(hcalnoise_num25GeVHits_branch == 0 ) {
	//cout << "Branch hcalnoise_num25GeVHits does not exist." << endl;
	}
	hcalnoise_numProblematicRBXs_branch = 0;
	if (tree->GetAlias("hcalnoise_numProblematicRBXs") != 0) {
		hcalnoise_numProblematicRBXs_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numProblematicRBXs"));
		hcalnoise_numProblematicRBXs_branch->SetAddress(&hcalnoise_numProblematicRBXs_);
	}
	if(hcalnoise_numProblematicRBXs_branch == 0 ) {
	//cout << "Branch hcalnoise_numProblematicRBXs does not exist." << endl;
	}
	hcalnoise_passHighLevelNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passHighLevelNoiseFilter") != 0) {
		hcalnoise_passHighLevelNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passHighLevelNoiseFilter"));
		hcalnoise_passHighLevelNoiseFilter_branch->SetAddress(&hcalnoise_passHighLevelNoiseFilter_);
	}
	if(hcalnoise_passHighLevelNoiseFilter_branch == 0 ) {
	//cout << "Branch hcalnoise_passHighLevelNoiseFilter does not exist." << endl;
	}
	hcalnoise_passLooseNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passLooseNoiseFilter") != 0) {
		hcalnoise_passLooseNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passLooseNoiseFilter"));
		hcalnoise_passLooseNoiseFilter_branch->SetAddress(&hcalnoise_passLooseNoiseFilter_);
	}
	if(hcalnoise_passLooseNoiseFilter_branch == 0 ) {
	//cout << "Branch hcalnoise_passLooseNoiseFilter does not exist." << endl;
	}
	hcalnoise_passTightNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passTightNoiseFilter") != 0) {
		hcalnoise_passTightNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passTightNoiseFilter"));
		hcalnoise_passTightNoiseFilter_branch->SetAddress(&hcalnoise_passTightNoiseFilter_);
	}
	if(hcalnoise_passTightNoiseFilter_branch == 0 ) {
	//cout << "Branch hcalnoise_passTightNoiseFilter does not exist." << endl;
	}
	l1_nemiso_branch = 0;
	if (tree->GetAlias("l1_nemiso") != 0) {
		l1_nemiso_branch = tree->GetBranch(tree->GetAlias("l1_nemiso"));
		l1_nemiso_branch->SetAddress(&l1_nemiso_);
	}
	if(l1_nemiso_branch == 0 ) {
	//cout << "Branch l1_nemiso does not exist." << endl;
	}
	l1_nemnoiso_branch = 0;
	if (tree->GetAlias("l1_nemnoiso") != 0) {
		l1_nemnoiso_branch = tree->GetBranch(tree->GetAlias("l1_nemnoiso"));
		l1_nemnoiso_branch->SetAddress(&l1_nemnoiso_);
	}
	if(l1_nemnoiso_branch == 0 ) {
	//cout << "Branch l1_nemnoiso does not exist." << endl;
	}
	l1_njetsc_branch = 0;
	if (tree->GetAlias("l1_njetsc") != 0) {
		l1_njetsc_branch = tree->GetBranch(tree->GetAlias("l1_njetsc"));
		l1_njetsc_branch->SetAddress(&l1_njetsc_);
	}
	if(l1_njetsc_branch == 0 ) {
	//cout << "Branch l1_njetsc does not exist." << endl;
	}
	l1_njetsf_branch = 0;
	if (tree->GetAlias("l1_njetsf") != 0) {
		l1_njetsf_branch = tree->GetBranch(tree->GetAlias("l1_njetsf"));
		l1_njetsf_branch->SetAddress(&l1_njetsf_);
	}
	if(l1_njetsf_branch == 0 ) {
	//cout << "Branch l1_njetsf does not exist." << endl;
	}
	l1_njetst_branch = 0;
	if (tree->GetAlias("l1_njetst") != 0) {
		l1_njetst_branch = tree->GetBranch(tree->GetAlias("l1_njetst"));
		l1_njetst_branch->SetAddress(&l1_njetst_);
	}
	if(l1_njetst_branch == 0 ) {
	//cout << "Branch l1_njetst does not exist." << endl;
	}
	l1_nmus_branch = 0;
	if (tree->GetAlias("l1_nmus") != 0) {
		l1_nmus_branch = tree->GetBranch(tree->GetAlias("l1_nmus"));
		l1_nmus_branch->SetAddress(&l1_nmus_);
	}
	if(l1_nmus_branch == 0 ) {
	//cout << "Branch l1_nmus does not exist." << endl;
	}
	evt_ecaliPhiSuspects_branch = 0;
	if (tree->GetAlias("evt_ecaliPhiSuspects") != 0) {
		evt_ecaliPhiSuspects_branch = tree->GetBranch(tree->GetAlias("evt_ecaliPhiSuspects"));
		evt_ecaliPhiSuspects_branch->SetAddress(&evt_ecaliPhiSuspects_);
	}
	if(evt_ecaliPhiSuspects_branch == 0 ) {
	//cout << "Branch evt_ecaliPhiSuspects does not exist." << endl;
	}
	evt_globaliPhiSuspects_branch = 0;
	if (tree->GetAlias("evt_globaliPhiSuspects") != 0) {
		evt_globaliPhiSuspects_branch = tree->GetBranch(tree->GetAlias("evt_globaliPhiSuspects"));
		evt_globaliPhiSuspects_branch->SetAddress(&evt_globaliPhiSuspects_);
	}
	if(evt_globaliPhiSuspects_branch == 0 ) {
	//cout << "Branch evt_globaliPhiSuspects does not exist." << endl;
	}
	evt_hcaliPhiSuspects_branch = 0;
	if (tree->GetAlias("evt_hcaliPhiSuspects") != 0) {
		evt_hcaliPhiSuspects_branch = tree->GetBranch(tree->GetAlias("evt_hcaliPhiSuspects"));
		evt_hcaliPhiSuspects_branch->SetAddress(&evt_hcaliPhiSuspects_);
	}
	if(evt_hcaliPhiSuspects_branch == 0 ) {
	//cout << "Branch evt_hcaliPhiSuspects does not exist." << endl;
	}
	els_closestJet_branch = 0;
	if (tree->GetAlias("els_closestJet") != 0) {
		els_closestJet_branch = tree->GetBranch(tree->GetAlias("els_closestJet"));
		els_closestJet_branch->SetAddress(&els_closestJet_);
	}
	if(els_closestJet_branch == 0 ) {
	//cout << "Branch els_closestJet does not exist." << endl;
	}
	els_closestMuon_branch = 0;
	if (tree->GetAlias("els_closestMuon") != 0) {
		els_closestMuon_branch = tree->GetBranch(tree->GetAlias("els_closestMuon"));
		els_closestMuon_branch->SetAddress(&els_closestMuon_);
	}
	if(els_closestMuon_branch == 0 ) {
	//cout << "Branch els_closestMuon does not exist." << endl;
	}
	els_category_branch = 0;
	if (tree->GetAlias("els_category") != 0) {
		els_category_branch = tree->GetBranch(tree->GetAlias("els_category"));
		els_category_branch->SetAddress(&els_category_);
	}
	if(els_category_branch == 0 ) {
	//cout << "Branch els_category does not exist." << endl;
	}
	els_charge_branch = 0;
	if (tree->GetAlias("els_charge") != 0) {
		els_charge_branch = tree->GetBranch(tree->GetAlias("els_charge"));
		els_charge_branch->SetAddress(&els_charge_);
	}
	if(els_charge_branch == 0 ) {
	//cout << "Branch els_charge does not exist." << endl;
	}
	els_class_branch = 0;
	if (tree->GetAlias("els_class") != 0) {
		els_class_branch = tree->GetBranch(tree->GetAlias("els_class"));
		els_class_branch->SetAddress(&els_class_);
	}
	if(els_class_branch == 0 ) {
	//cout << "Branch els_class does not exist." << endl;
	}
	els_conv_tkidx_branch = 0;
	if (tree->GetAlias("els_conv_tkidx") != 0) {
		els_conv_tkidx_branch = tree->GetBranch(tree->GetAlias("els_conv_tkidx"));
		els_conv_tkidx_branch->SetAddress(&els_conv_tkidx_);
	}
	if(els_conv_tkidx_branch == 0 ) {
	//cout << "Branch els_conv_tkidx does not exist." << endl;
	}
	els_exp_innerlayers_branch = 0;
	if (tree->GetAlias("els_exp_innerlayers") != 0) {
		els_exp_innerlayers_branch = tree->GetBranch(tree->GetAlias("els_exp_innerlayers"));
		els_exp_innerlayers_branch->SetAddress(&els_exp_innerlayers_);
	}
	if(els_exp_innerlayers_branch == 0 ) {
	//cout << "Branch els_exp_innerlayers does not exist." << endl;
	}
	els_exp_outerlayers_branch = 0;
	if (tree->GetAlias("els_exp_outerlayers") != 0) {
		els_exp_outerlayers_branch = tree->GetBranch(tree->GetAlias("els_exp_outerlayers"));
		els_exp_outerlayers_branch->SetAddress(&els_exp_outerlayers_);
	}
	if(els_exp_outerlayers_branch == 0 ) {
	//cout << "Branch els_exp_outerlayers does not exist." << endl;
	}
	els_fiduciality_branch = 0;
	if (tree->GetAlias("els_fiduciality") != 0) {
		els_fiduciality_branch = tree->GetBranch(tree->GetAlias("els_fiduciality"));
		els_fiduciality_branch->SetAddress(&els_fiduciality_);
	}
	if(els_fiduciality_branch == 0 ) {
	//cout << "Branch els_fiduciality does not exist." << endl;
	}
	els_layer1_det_branch = 0;
	if (tree->GetAlias("els_layer1_det") != 0) {
		els_layer1_det_branch = tree->GetBranch(tree->GetAlias("els_layer1_det"));
		els_layer1_det_branch->SetAddress(&els_layer1_det_);
	}
	if(els_layer1_det_branch == 0 ) {
	//cout << "Branch els_layer1_det does not exist." << endl;
	}
	els_layer1_layer_branch = 0;
	if (tree->GetAlias("els_layer1_layer") != 0) {
		els_layer1_layer_branch = tree->GetBranch(tree->GetAlias("els_layer1_layer"));
		els_layer1_layer_branch->SetAddress(&els_layer1_layer_);
	}
	if(els_layer1_layer_branch == 0 ) {
	//cout << "Branch els_layer1_layer does not exist." << endl;
	}
	els_layer1_sizerphi_branch = 0;
	if (tree->GetAlias("els_layer1_sizerphi") != 0) {
		els_layer1_sizerphi_branch = tree->GetBranch(tree->GetAlias("els_layer1_sizerphi"));
		els_layer1_sizerphi_branch->SetAddress(&els_layer1_sizerphi_);
	}
	if(els_layer1_sizerphi_branch == 0 ) {
	//cout << "Branch els_layer1_sizerphi does not exist." << endl;
	}
	els_layer1_sizerz_branch = 0;
	if (tree->GetAlias("els_layer1_sizerz") != 0) {
		els_layer1_sizerz_branch = tree->GetBranch(tree->GetAlias("els_layer1_sizerz"));
		els_layer1_sizerz_branch->SetAddress(&els_layer1_sizerz_);
	}
	if(els_layer1_sizerz_branch == 0 ) {
	//cout << "Branch els_layer1_sizerz does not exist." << endl;
	}
	els_lostHits_branch = 0;
	if (tree->GetAlias("els_lostHits") != 0) {
		els_lostHits_branch = tree->GetBranch(tree->GetAlias("els_lostHits"));
		els_lostHits_branch->SetAddress(&els_lostHits_);
	}
	if(els_lostHits_branch == 0 ) {
	//cout << "Branch els_lostHits does not exist." << endl;
	}
	els_lost_pixelhits_branch = 0;
	if (tree->GetAlias("els_lost_pixelhits") != 0) {
		els_lost_pixelhits_branch = tree->GetBranch(tree->GetAlias("els_lost_pixelhits"));
		els_lost_pixelhits_branch->SetAddress(&els_lost_pixelhits_);
	}
	if(els_lost_pixelhits_branch == 0 ) {
	//cout << "Branch els_lost_pixelhits does not exist." << endl;
	}
	els_nSeed_branch = 0;
	if (tree->GetAlias("els_nSeed") != 0) {
		els_nSeed_branch = tree->GetBranch(tree->GetAlias("els_nSeed"));
		els_nSeed_branch->SetAddress(&els_nSeed_);
	}
	if(els_nSeed_branch == 0 ) {
	//cout << "Branch els_nSeed does not exist." << endl;
	}
	els_sccharge_branch = 0;
	if (tree->GetAlias("els_sccharge") != 0) {
		els_sccharge_branch = tree->GetBranch(tree->GetAlias("els_sccharge"));
		els_sccharge_branch->SetAddress(&els_sccharge_);
	}
	if(els_sccharge_branch == 0 ) {
	//cout << "Branch els_sccharge does not exist." << endl;
	}
	els_trk_charge_branch = 0;
	if (tree->GetAlias("els_trk_charge") != 0) {
		els_trk_charge_branch = tree->GetBranch(tree->GetAlias("els_trk_charge"));
		els_trk_charge_branch->SetAddress(&els_trk_charge_);
	}
	if(els_trk_charge_branch == 0 ) {
	//cout << "Branch els_trk_charge does not exist." << endl;
	}
	els_trkidx_branch = 0;
	if (tree->GetAlias("els_trkidx") != 0) {
		els_trkidx_branch = tree->GetBranch(tree->GetAlias("els_trkidx"));
		els_trkidx_branch->SetAddress(&els_trkidx_);
	}
	if(els_trkidx_branch == 0 ) {
	//cout << "Branch els_trkidx does not exist." << endl;
	}
	els_type_branch = 0;
	if (tree->GetAlias("els_type") != 0) {
		els_type_branch = tree->GetBranch(tree->GetAlias("els_type"));
		els_type_branch->SetAddress(&els_type_);
	}
	if(els_type_branch == 0 ) {
	//cout << "Branch els_type does not exist." << endl;
	}
	els_validHits_branch = 0;
	if (tree->GetAlias("els_validHits") != 0) {
		els_validHits_branch = tree->GetBranch(tree->GetAlias("els_validHits"));
		els_validHits_branch->SetAddress(&els_validHits_);
	}
	if(els_validHits_branch == 0 ) {
	//cout << "Branch els_validHits does not exist." << endl;
	}
	els_valid_pixelhits_branch = 0;
	if (tree->GetAlias("els_valid_pixelhits") != 0) {
		els_valid_pixelhits_branch = tree->GetBranch(tree->GetAlias("els_valid_pixelhits"));
		els_valid_pixelhits_branch->SetAddress(&els_valid_pixelhits_);
	}
	if(els_valid_pixelhits_branch == 0 ) {
	//cout << "Branch els_valid_pixelhits does not exist." << endl;
	}
	jets_closestElectron_branch = 0;
	if (tree->GetAlias("jets_closestElectron") != 0) {
		jets_closestElectron_branch = tree->GetBranch(tree->GetAlias("jets_closestElectron"));
		jets_closestElectron_branch->SetAddress(&jets_closestElectron_);
	}
	if(jets_closestElectron_branch == 0 ) {
	//cout << "Branch jets_closestElectron does not exist." << endl;
	}
	jets_closestMuon_branch = 0;
	if (tree->GetAlias("jets_closestMuon") != 0) {
		jets_closestMuon_branch = tree->GetBranch(tree->GetAlias("jets_closestMuon"));
		jets_closestMuon_branch->SetAddress(&jets_closestMuon_);
	}
	if(jets_closestMuon_branch == 0 ) {
	//cout << "Branch jets_closestMuon does not exist." << endl;
	}
	l1_emiso_ieta_branch = 0;
	if (tree->GetAlias("l1_emiso_ieta") != 0) {
		l1_emiso_ieta_branch = tree->GetBranch(tree->GetAlias("l1_emiso_ieta"));
		l1_emiso_ieta_branch->SetAddress(&l1_emiso_ieta_);
	}
	if(l1_emiso_ieta_branch == 0 ) {
	//cout << "Branch l1_emiso_ieta does not exist." << endl;
	}
	l1_emiso_iphi_branch = 0;
	if (tree->GetAlias("l1_emiso_iphi") != 0) {
		l1_emiso_iphi_branch = tree->GetBranch(tree->GetAlias("l1_emiso_iphi"));
		l1_emiso_iphi_branch->SetAddress(&l1_emiso_iphi_);
	}
	if(l1_emiso_iphi_branch == 0 ) {
	//cout << "Branch l1_emiso_iphi does not exist." << endl;
	}
	l1_emiso_rawId_branch = 0;
	if (tree->GetAlias("l1_emiso_rawId") != 0) {
		l1_emiso_rawId_branch = tree->GetBranch(tree->GetAlias("l1_emiso_rawId"));
		l1_emiso_rawId_branch->SetAddress(&l1_emiso_rawId_);
	}
	if(l1_emiso_rawId_branch == 0 ) {
	//cout << "Branch l1_emiso_rawId does not exist." << endl;
	}
	l1_emiso_type_branch = 0;
	if (tree->GetAlias("l1_emiso_type") != 0) {
		l1_emiso_type_branch = tree->GetBranch(tree->GetAlias("l1_emiso_type"));
		l1_emiso_type_branch->SetAddress(&l1_emiso_type_);
	}
	if(l1_emiso_type_branch == 0 ) {
	//cout << "Branch l1_emiso_type does not exist." << endl;
	}
	l1_emnoiso_ieta_branch = 0;
	if (tree->GetAlias("l1_emnoiso_ieta") != 0) {
		l1_emnoiso_ieta_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_ieta"));
		l1_emnoiso_ieta_branch->SetAddress(&l1_emnoiso_ieta_);
	}
	if(l1_emnoiso_ieta_branch == 0 ) {
	//cout << "Branch l1_emnoiso_ieta does not exist." << endl;
	}
	l1_emnoiso_iphi_branch = 0;
	if (tree->GetAlias("l1_emnoiso_iphi") != 0) {
		l1_emnoiso_iphi_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_iphi"));
		l1_emnoiso_iphi_branch->SetAddress(&l1_emnoiso_iphi_);
	}
	if(l1_emnoiso_iphi_branch == 0 ) {
	//cout << "Branch l1_emnoiso_iphi does not exist." << endl;
	}
	l1_emnoiso_rawId_branch = 0;
	if (tree->GetAlias("l1_emnoiso_rawId") != 0) {
		l1_emnoiso_rawId_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_rawId"));
		l1_emnoiso_rawId_branch->SetAddress(&l1_emnoiso_rawId_);
	}
	if(l1_emnoiso_rawId_branch == 0 ) {
	//cout << "Branch l1_emnoiso_rawId does not exist." << endl;
	}
	l1_emnoiso_type_branch = 0;
	if (tree->GetAlias("l1_emnoiso_type") != 0) {
		l1_emnoiso_type_branch = tree->GetBranch(tree->GetAlias("l1_emnoiso_type"));
		l1_emnoiso_type_branch->SetAddress(&l1_emnoiso_type_);
	}
	if(l1_emnoiso_type_branch == 0 ) {
	//cout << "Branch l1_emnoiso_type does not exist." << endl;
	}
	l1_jetsc_ieta_branch = 0;
	if (tree->GetAlias("l1_jetsc_ieta") != 0) {
		l1_jetsc_ieta_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_ieta"));
		l1_jetsc_ieta_branch->SetAddress(&l1_jetsc_ieta_);
	}
	if(l1_jetsc_ieta_branch == 0 ) {
	//cout << "Branch l1_jetsc_ieta does not exist." << endl;
	}
	l1_jetsc_iphi_branch = 0;
	if (tree->GetAlias("l1_jetsc_iphi") != 0) {
		l1_jetsc_iphi_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_iphi"));
		l1_jetsc_iphi_branch->SetAddress(&l1_jetsc_iphi_);
	}
	if(l1_jetsc_iphi_branch == 0 ) {
	//cout << "Branch l1_jetsc_iphi does not exist." << endl;
	}
	l1_jetsc_rawId_branch = 0;
	if (tree->GetAlias("l1_jetsc_rawId") != 0) {
		l1_jetsc_rawId_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_rawId"));
		l1_jetsc_rawId_branch->SetAddress(&l1_jetsc_rawId_);
	}
	if(l1_jetsc_rawId_branch == 0 ) {
	//cout << "Branch l1_jetsc_rawId does not exist." << endl;
	}
	l1_jetsc_type_branch = 0;
	if (tree->GetAlias("l1_jetsc_type") != 0) {
		l1_jetsc_type_branch = tree->GetBranch(tree->GetAlias("l1_jetsc_type"));
		l1_jetsc_type_branch->SetAddress(&l1_jetsc_type_);
	}
	if(l1_jetsc_type_branch == 0 ) {
	//cout << "Branch l1_jetsc_type does not exist." << endl;
	}
	l1_jetsf_ieta_branch = 0;
	if (tree->GetAlias("l1_jetsf_ieta") != 0) {
		l1_jetsf_ieta_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_ieta"));
		l1_jetsf_ieta_branch->SetAddress(&l1_jetsf_ieta_);
	}
	if(l1_jetsf_ieta_branch == 0 ) {
	//cout << "Branch l1_jetsf_ieta does not exist." << endl;
	}
	l1_jetsf_iphi_branch = 0;
	if (tree->GetAlias("l1_jetsf_iphi") != 0) {
		l1_jetsf_iphi_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_iphi"));
		l1_jetsf_iphi_branch->SetAddress(&l1_jetsf_iphi_);
	}
	if(l1_jetsf_iphi_branch == 0 ) {
	//cout << "Branch l1_jetsf_iphi does not exist." << endl;
	}
	l1_jetsf_rawId_branch = 0;
	if (tree->GetAlias("l1_jetsf_rawId") != 0) {
		l1_jetsf_rawId_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_rawId"));
		l1_jetsf_rawId_branch->SetAddress(&l1_jetsf_rawId_);
	}
	if(l1_jetsf_rawId_branch == 0 ) {
	//cout << "Branch l1_jetsf_rawId does not exist." << endl;
	}
	l1_jetsf_type_branch = 0;
	if (tree->GetAlias("l1_jetsf_type") != 0) {
		l1_jetsf_type_branch = tree->GetBranch(tree->GetAlias("l1_jetsf_type"));
		l1_jetsf_type_branch->SetAddress(&l1_jetsf_type_);
	}
	if(l1_jetsf_type_branch == 0 ) {
	//cout << "Branch l1_jetsf_type does not exist." << endl;
	}
	l1_jetst_ieta_branch = 0;
	if (tree->GetAlias("l1_jetst_ieta") != 0) {
		l1_jetst_ieta_branch = tree->GetBranch(tree->GetAlias("l1_jetst_ieta"));
		l1_jetst_ieta_branch->SetAddress(&l1_jetst_ieta_);
	}
	if(l1_jetst_ieta_branch == 0 ) {
	//cout << "Branch l1_jetst_ieta does not exist." << endl;
	}
	l1_jetst_iphi_branch = 0;
	if (tree->GetAlias("l1_jetst_iphi") != 0) {
		l1_jetst_iphi_branch = tree->GetBranch(tree->GetAlias("l1_jetst_iphi"));
		l1_jetst_iphi_branch->SetAddress(&l1_jetst_iphi_);
	}
	if(l1_jetst_iphi_branch == 0 ) {
	//cout << "Branch l1_jetst_iphi does not exist." << endl;
	}
	l1_jetst_rawId_branch = 0;
	if (tree->GetAlias("l1_jetst_rawId") != 0) {
		l1_jetst_rawId_branch = tree->GetBranch(tree->GetAlias("l1_jetst_rawId"));
		l1_jetst_rawId_branch->SetAddress(&l1_jetst_rawId_);
	}
	if(l1_jetst_rawId_branch == 0 ) {
	//cout << "Branch l1_jetst_rawId does not exist." << endl;
	}
	l1_jetst_type_branch = 0;
	if (tree->GetAlias("l1_jetst_type") != 0) {
		l1_jetst_type_branch = tree->GetBranch(tree->GetAlias("l1_jetst_type"));
		l1_jetst_type_branch->SetAddress(&l1_jetst_type_);
	}
	if(l1_jetst_type_branch == 0 ) {
	//cout << "Branch l1_jetst_type does not exist." << endl;
	}
	l1_mus_flags_branch = 0;
	if (tree->GetAlias("l1_mus_flags") != 0) {
		l1_mus_flags_branch = tree->GetBranch(tree->GetAlias("l1_mus_flags"));
		l1_mus_flags_branch->SetAddress(&l1_mus_flags_);
	}
	if(l1_mus_flags_branch == 0 ) {
	//cout << "Branch l1_mus_flags does not exist." << endl;
	}
	l1_mus_q_branch = 0;
	if (tree->GetAlias("l1_mus_q") != 0) {
		l1_mus_q_branch = tree->GetBranch(tree->GetAlias("l1_mus_q"));
		l1_mus_q_branch->SetAddress(&l1_mus_q_);
	}
	if(l1_mus_q_branch == 0 ) {
	//cout << "Branch l1_mus_q does not exist." << endl;
	}
	l1_mus_qual_branch = 0;
	if (tree->GetAlias("l1_mus_qual") != 0) {
		l1_mus_qual_branch = tree->GetBranch(tree->GetAlias("l1_mus_qual"));
		l1_mus_qual_branch->SetAddress(&l1_mus_qual_);
	}
	if(l1_mus_qual_branch == 0 ) {
	//cout << "Branch l1_mus_qual does not exist." << endl;
	}
	l1_mus_qualFlags_branch = 0;
	if (tree->GetAlias("l1_mus_qualFlags") != 0) {
		l1_mus_qualFlags_branch = tree->GetBranch(tree->GetAlias("l1_mus_qualFlags"));
		l1_mus_qualFlags_branch->SetAddress(&l1_mus_qualFlags_);
	}
	if(l1_mus_qualFlags_branch == 0 ) {
	//cout << "Branch l1_mus_qualFlags does not exist." << endl;
	}
	mus_met_flag_branch = 0;
	if (tree->GetAlias("mus_met_flag") != 0) {
		mus_met_flag_branch = tree->GetBranch(tree->GetAlias("mus_met_flag"));
		mus_met_flag_branch->SetAddress(&mus_met_flag_);
	}
	if(mus_met_flag_branch == 0 ) {
	//cout << "Branch mus_met_flag does not exist." << endl;
	}
	mus_closestEle_branch = 0;
	if (tree->GetAlias("mus_closestEle") != 0) {
		mus_closestEle_branch = tree->GetBranch(tree->GetAlias("mus_closestEle"));
		mus_closestEle_branch->SetAddress(&mus_closestEle_);
	}
	if(mus_closestEle_branch == 0 ) {
	//cout << "Branch mus_closestEle does not exist." << endl;
	}
	mus_closestJet_branch = 0;
	if (tree->GetAlias("mus_closestJet") != 0) {
		mus_closestJet_branch = tree->GetBranch(tree->GetAlias("mus_closestJet"));
		mus_closestJet_branch->SetAddress(&mus_closestJet_);
	}
	if(mus_closestJet_branch == 0 ) {
	//cout << "Branch mus_closestJet does not exist." << endl;
	}
	mus_charge_branch = 0;
	if (tree->GetAlias("mus_charge") != 0) {
		mus_charge_branch = tree->GetBranch(tree->GetAlias("mus_charge"));
		mus_charge_branch->SetAddress(&mus_charge_);
	}
	if(mus_charge_branch == 0 ) {
	//cout << "Branch mus_charge does not exist." << endl;
	}
	mus_gfit_validHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validHits") != 0) {
		mus_gfit_validHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validHits"));
		mus_gfit_validHits_branch->SetAddress(&mus_gfit_validHits_);
	}
	if(mus_gfit_validHits_branch == 0 ) {
	//cout << "Branch mus_gfit_validHits does not exist." << endl;
	}
	mus_gfit_validSTAHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validSTAHits") != 0) {
		mus_gfit_validSTAHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validSTAHits"));
		mus_gfit_validSTAHits_branch->SetAddress(&mus_gfit_validSTAHits_);
	}
	if(mus_gfit_validSTAHits_branch == 0 ) {
	//cout << "Branch mus_gfit_validSTAHits does not exist." << endl;
	}
	mus_gfit_validSiHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validSiHits") != 0) {
		mus_gfit_validSiHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validSiHits"));
		mus_gfit_validSiHits_branch->SetAddress(&mus_gfit_validSiHits_);
	}
	if(mus_gfit_validSiHits_branch == 0 ) {
	//cout << "Branch mus_gfit_validSiHits does not exist." << endl;
	}
	mus_goodmask_branch = 0;
	if (tree->GetAlias("mus_goodmask") != 0) {
		mus_goodmask_branch = tree->GetBranch(tree->GetAlias("mus_goodmask"));
		mus_goodmask_branch->SetAddress(&mus_goodmask_);
	}
	if(mus_goodmask_branch == 0 ) {
	//cout << "Branch mus_goodmask does not exist." << endl;
	}
	mus_iso03_ntrk_branch = 0;
	if (tree->GetAlias("mus_iso03_ntrk") != 0) {
		mus_iso03_ntrk_branch = tree->GetBranch(tree->GetAlias("mus_iso03_ntrk"));
		mus_iso03_ntrk_branch->SetAddress(&mus_iso03_ntrk_);
	}
	if(mus_iso03_ntrk_branch == 0 ) {
	//cout << "Branch mus_iso03_ntrk does not exist." << endl;
	}
	mus_iso05_ntrk_branch = 0;
	if (tree->GetAlias("mus_iso05_ntrk") != 0) {
		mus_iso05_ntrk_branch = tree->GetBranch(tree->GetAlias("mus_iso05_ntrk"));
		mus_iso05_ntrk_branch->SetAddress(&mus_iso05_ntrk_);
	}
	if(mus_iso05_ntrk_branch == 0 ) {
	//cout << "Branch mus_iso05_ntrk does not exist." << endl;
	}
	mus_lostHits_branch = 0;
	if (tree->GetAlias("mus_lostHits") != 0) {
		mus_lostHits_branch = tree->GetBranch(tree->GetAlias("mus_lostHits"));
		mus_lostHits_branch->SetAddress(&mus_lostHits_);
	}
	if(mus_lostHits_branch == 0 ) {
	//cout << "Branch mus_lostHits does not exist." << endl;
	}
	mus_nmatches_branch = 0;
	if (tree->GetAlias("mus_nmatches") != 0) {
		mus_nmatches_branch = tree->GetBranch(tree->GetAlias("mus_nmatches"));
		mus_nmatches_branch->SetAddress(&mus_nmatches_);
	}
	if(mus_nmatches_branch == 0 ) {
	//cout << "Branch mus_nmatches does not exist." << endl;
	}
	mus_pid_TM2DCompatibilityLoose_branch = 0;
	if (tree->GetAlias("mus_pid_TM2DCompatibilityLoose") != 0) {
		mus_pid_TM2DCompatibilityLoose_branch = tree->GetBranch(tree->GetAlias("mus_pid_TM2DCompatibilityLoose"));
		mus_pid_TM2DCompatibilityLoose_branch->SetAddress(&mus_pid_TM2DCompatibilityLoose_);
	}
	if(mus_pid_TM2DCompatibilityLoose_branch == 0 ) {
	//cout << "Branch mus_pid_TM2DCompatibilityLoose does not exist." << endl;
	}
	mus_pid_TM2DCompatibilityTight_branch = 0;
	if (tree->GetAlias("mus_pid_TM2DCompatibilityTight") != 0) {
		mus_pid_TM2DCompatibilityTight_branch = tree->GetBranch(tree->GetAlias("mus_pid_TM2DCompatibilityTight"));
		mus_pid_TM2DCompatibilityTight_branch->SetAddress(&mus_pid_TM2DCompatibilityTight_);
	}
	if(mus_pid_TM2DCompatibilityTight_branch == 0 ) {
	//cout << "Branch mus_pid_TM2DCompatibilityTight does not exist." << endl;
	}
	mus_pid_TMLastStationLoose_branch = 0;
	if (tree->GetAlias("mus_pid_TMLastStationLoose") != 0) {
		mus_pid_TMLastStationLoose_branch = tree->GetBranch(tree->GetAlias("mus_pid_TMLastStationLoose"));
		mus_pid_TMLastStationLoose_branch->SetAddress(&mus_pid_TMLastStationLoose_);
	}
	if(mus_pid_TMLastStationLoose_branch == 0 ) {
	//cout << "Branch mus_pid_TMLastStationLoose does not exist." << endl;
	}
	mus_pid_TMLastStationTight_branch = 0;
	if (tree->GetAlias("mus_pid_TMLastStationTight") != 0) {
		mus_pid_TMLastStationTight_branch = tree->GetBranch(tree->GetAlias("mus_pid_TMLastStationTight"));
		mus_pid_TMLastStationTight_branch->SetAddress(&mus_pid_TMLastStationTight_);
	}
	if(mus_pid_TMLastStationTight_branch == 0 ) {
	//cout << "Branch mus_pid_TMLastStationTight does not exist." << endl;
	}
	mus_sta_validHits_branch = 0;
	if (tree->GetAlias("mus_sta_validHits") != 0) {
		mus_sta_validHits_branch = tree->GetBranch(tree->GetAlias("mus_sta_validHits"));
		mus_sta_validHits_branch->SetAddress(&mus_sta_validHits_);
	}
	if(mus_sta_validHits_branch == 0 ) {
	//cout << "Branch mus_sta_validHits does not exist." << endl;
	}
	mus_timeDirection_branch = 0;
	if (tree->GetAlias("mus_timeDirection") != 0) {
		mus_timeDirection_branch = tree->GetBranch(tree->GetAlias("mus_timeDirection"));
		mus_timeDirection_branch->SetAddress(&mus_timeDirection_);
	}
	if(mus_timeDirection_branch == 0 ) {
	//cout << "Branch mus_timeDirection does not exist." << endl;
	}
	mus_timeNumStationsUsed_branch = 0;
	if (tree->GetAlias("mus_timeNumStationsUsed") != 0) {
		mus_timeNumStationsUsed_branch = tree->GetBranch(tree->GetAlias("mus_timeNumStationsUsed"));
		mus_timeNumStationsUsed_branch->SetAddress(&mus_timeNumStationsUsed_);
	}
	if(mus_timeNumStationsUsed_branch == 0 ) {
	//cout << "Branch mus_timeNumStationsUsed does not exist." << endl;
	}
	mus_trk_charge_branch = 0;
	if (tree->GetAlias("mus_trk_charge") != 0) {
		mus_trk_charge_branch = tree->GetBranch(tree->GetAlias("mus_trk_charge"));
		mus_trk_charge_branch->SetAddress(&mus_trk_charge_);
	}
	if(mus_trk_charge_branch == 0 ) {
	//cout << "Branch mus_trk_charge does not exist." << endl;
	}
	mus_trkidx_branch = 0;
	if (tree->GetAlias("mus_trkidx") != 0) {
		mus_trkidx_branch = tree->GetBranch(tree->GetAlias("mus_trkidx"));
		mus_trkidx_branch->SetAddress(&mus_trkidx_);
	}
	if(mus_trkidx_branch == 0 ) {
	//cout << "Branch mus_trkidx does not exist." << endl;
	}
	mus_type_branch = 0;
	if (tree->GetAlias("mus_type") != 0) {
		mus_type_branch = tree->GetBranch(tree->GetAlias("mus_type"));
		mus_type_branch->SetAddress(&mus_type_);
	}
	if(mus_type_branch == 0 ) {
	//cout << "Branch mus_type does not exist." << endl;
	}
	mus_validHits_branch = 0;
	if (tree->GetAlias("mus_validHits") != 0) {
		mus_validHits_branch = tree->GetBranch(tree->GetAlias("mus_validHits"));
		mus_validHits_branch->SetAddress(&mus_validHits_);
	}
	if(mus_validHits_branch == 0 ) {
	//cout << "Branch mus_validHits does not exist." << endl;
	}
	pfjets_chargedMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_chargedMultiplicity") != 0) {
		pfjets_chargedMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedMultiplicity"));
		pfjets_chargedMultiplicity_branch->SetAddress(&pfjets_chargedMultiplicity_);
	}
	if(pfjets_chargedMultiplicity_branch == 0 ) {
	//cout << "Branch pfjets_chargedMultiplicity does not exist." << endl;
	}
	pfjets_muonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_muonMultiplicity") != 0) {
		pfjets_muonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_muonMultiplicity"));
		pfjets_muonMultiplicity_branch->SetAddress(&pfjets_muonMultiplicity_);
	}
	if(pfjets_muonMultiplicity_branch == 0 ) {
	//cout << "Branch pfjets_muonMultiplicity does not exist." << endl;
	}
	pfjets_neutralMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_neutralMultiplicity") != 0) {
		pfjets_neutralMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralMultiplicity"));
		pfjets_neutralMultiplicity_branch->SetAddress(&pfjets_neutralMultiplicity_);
	}
	if(pfjets_neutralMultiplicity_branch == 0 ) {
	//cout << "Branch pfjets_neutralMultiplicity does not exist." << endl;
	}
	photons_fiduciality_branch = 0;
	if (tree->GetAlias("photons_fiduciality") != 0) {
		photons_fiduciality_branch = tree->GetBranch(tree->GetAlias("photons_fiduciality"));
		photons_fiduciality_branch->SetAddress(&photons_fiduciality_);
	}
	if(photons_fiduciality_branch == 0 ) {
	//cout << "Branch photons_fiduciality does not exist." << endl;
	}
	pxl_ndigis_pxb_branch = 0;
	if (tree->GetAlias("pxl_ndigis_pxb") != 0) {
		pxl_ndigis_pxb_branch = tree->GetBranch(tree->GetAlias("pxl_ndigis_pxb"));
		pxl_ndigis_pxb_branch->SetAddress(&pxl_ndigis_pxb_);
	}
	if(pxl_ndigis_pxb_branch == 0 ) {
	//cout << "Branch pxl_ndigis_pxb does not exist." << endl;
	}
	pxl_ndigis_pxf_branch = 0;
	if (tree->GetAlias("pxl_ndigis_pxf") != 0) {
		pxl_ndigis_pxf_branch = tree->GetBranch(tree->GetAlias("pxl_ndigis_pxf"));
		pxl_ndigis_pxf_branch->SetAddress(&pxl_ndigis_pxf_);
	}
	if(pxl_ndigis_pxf_branch == 0 ) {
	//cout << "Branch pxl_ndigis_pxf does not exist." << endl;
	}
	ran_srFlag_branch = 0;
	if (tree->GetAlias("ran_srFlag") != 0) {
		ran_srFlag_branch = tree->GetBranch(tree->GetAlias("ran_srFlag"));
		ran_srFlag_branch->SetAddress(&ran_srFlag_);
	}
	if(ran_srFlag_branch == 0 ) {
	//cout << "Branch ran_srFlag does not exist." << endl;
	}
	scs_elsidx_branch = 0;
	if (tree->GetAlias("scs_elsidx") != 0) {
		scs_elsidx_branch = tree->GetBranch(tree->GetAlias("scs_elsidx"));
		scs_elsidx_branch->SetAddress(&scs_elsidx_);
	}
	if(scs_elsidx_branch == 0 ) {
	//cout << "Branch scs_elsidx does not exist." << endl;
	}
	scs_severitySeed_branch = 0;
	if (tree->GetAlias("scs_severitySeed") != 0) {
		scs_severitySeed_branch = tree->GetBranch(tree->GetAlias("scs_severitySeed"));
		scs_severitySeed_branch->SetAddress(&scs_severitySeed_);
	}
	if(scs_severitySeed_branch == 0 ) {
	//cout << "Branch scs_severitySeed does not exist." << endl;
	}
	mus_tcmet_flag_branch = 0;
	if (tree->GetAlias("mus_tcmet_flag") != 0) {
		mus_tcmet_flag_branch = tree->GetBranch(tree->GetAlias("mus_tcmet_flag"));
		mus_tcmet_flag_branch->SetAddress(&mus_tcmet_flag_);
	}
	if(mus_tcmet_flag_branch == 0 ) {
	//cout << "Branch mus_tcmet_flag does not exist." << endl;
	}
	trks_algo_branch = 0;
	if (tree->GetAlias("trks_algo") != 0) {
		trks_algo_branch = tree->GetBranch(tree->GetAlias("trks_algo"));
		trks_algo_branch->SetAddress(&trks_algo_);
	}
	if(trks_algo_branch == 0 ) {
	//cout << "Branch trks_algo does not exist." << endl;
	}
	trks_charge_branch = 0;
	if (tree->GetAlias("trks_charge") != 0) {
		trks_charge_branch = tree->GetBranch(tree->GetAlias("trks_charge"));
		trks_charge_branch->SetAddress(&trks_charge_);
	}
	if(trks_charge_branch == 0 ) {
	//cout << "Branch trks_charge does not exist." << endl;
	}
	trks_exp_innerlayers_branch = 0;
	if (tree->GetAlias("trks_exp_innerlayers") != 0) {
		trks_exp_innerlayers_branch = tree->GetBranch(tree->GetAlias("trks_exp_innerlayers"));
		trks_exp_innerlayers_branch->SetAddress(&trks_exp_innerlayers_);
	}
	if(trks_exp_innerlayers_branch == 0 ) {
	//cout << "Branch trks_exp_innerlayers does not exist." << endl;
	}
	trks_exp_outerlayers_branch = 0;
	if (tree->GetAlias("trks_exp_outerlayers") != 0) {
		trks_exp_outerlayers_branch = tree->GetBranch(tree->GetAlias("trks_exp_outerlayers"));
		trks_exp_outerlayers_branch->SetAddress(&trks_exp_outerlayers_);
	}
	if(trks_exp_outerlayers_branch == 0 ) {
	//cout << "Branch trks_exp_outerlayers does not exist." << endl;
	}
	trks_layer1_det_branch = 0;
	if (tree->GetAlias("trks_layer1_det") != 0) {
		trks_layer1_det_branch = tree->GetBranch(tree->GetAlias("trks_layer1_det"));
		trks_layer1_det_branch->SetAddress(&trks_layer1_det_);
	}
	if(trks_layer1_det_branch == 0 ) {
	//cout << "Branch trks_layer1_det does not exist." << endl;
	}
	trks_layer1_layer_branch = 0;
	if (tree->GetAlias("trks_layer1_layer") != 0) {
		trks_layer1_layer_branch = tree->GetBranch(tree->GetAlias("trks_layer1_layer"));
		trks_layer1_layer_branch->SetAddress(&trks_layer1_layer_);
	}
	if(trks_layer1_layer_branch == 0 ) {
	//cout << "Branch trks_layer1_layer does not exist." << endl;
	}
	trks_layer1_sizerphi_branch = 0;
	if (tree->GetAlias("trks_layer1_sizerphi") != 0) {
		trks_layer1_sizerphi_branch = tree->GetBranch(tree->GetAlias("trks_layer1_sizerphi"));
		trks_layer1_sizerphi_branch->SetAddress(&trks_layer1_sizerphi_);
	}
	if(trks_layer1_sizerphi_branch == 0 ) {
	//cout << "Branch trks_layer1_sizerphi does not exist." << endl;
	}
	trks_layer1_sizerz_branch = 0;
	if (tree->GetAlias("trks_layer1_sizerz") != 0) {
		trks_layer1_sizerz_branch = tree->GetBranch(tree->GetAlias("trks_layer1_sizerz"));
		trks_layer1_sizerz_branch->SetAddress(&trks_layer1_sizerz_);
	}
	if(trks_layer1_sizerz_branch == 0 ) {
	//cout << "Branch trks_layer1_sizerz does not exist." << endl;
	}
	trks_lostHits_branch = 0;
	if (tree->GetAlias("trks_lostHits") != 0) {
		trks_lostHits_branch = tree->GetBranch(tree->GetAlias("trks_lostHits"));
		trks_lostHits_branch->SetAddress(&trks_lostHits_);
	}
	if(trks_lostHits_branch == 0 ) {
	//cout << "Branch trks_lostHits does not exist." << endl;
	}
	trks_lost_pixelhits_branch = 0;
	if (tree->GetAlias("trks_lost_pixelhits") != 0) {
		trks_lost_pixelhits_branch = tree->GetBranch(tree->GetAlias("trks_lost_pixelhits"));
		trks_lost_pixelhits_branch->SetAddress(&trks_lost_pixelhits_);
	}
	if(trks_lost_pixelhits_branch == 0 ) {
	//cout << "Branch trks_lost_pixelhits does not exist." << endl;
	}
	trks_nlayers_branch = 0;
	if (tree->GetAlias("trks_nlayers") != 0) {
		trks_nlayers_branch = tree->GetBranch(tree->GetAlias("trks_nlayers"));
		trks_nlayers_branch->SetAddress(&trks_nlayers_);
	}
	if(trks_nlayers_branch == 0 ) {
	//cout << "Branch trks_nlayers does not exist." << endl;
	}
	trks_nlayers3D_branch = 0;
	if (tree->GetAlias("trks_nlayers3D") != 0) {
		trks_nlayers3D_branch = tree->GetBranch(tree->GetAlias("trks_nlayers3D"));
		trks_nlayers3D_branch->SetAddress(&trks_nlayers3D_);
	}
	if(trks_nlayers3D_branch == 0 ) {
	//cout << "Branch trks_nlayers3D does not exist." << endl;
	}
	trks_nlayersLost_branch = 0;
	if (tree->GetAlias("trks_nlayersLost") != 0) {
		trks_nlayersLost_branch = tree->GetBranch(tree->GetAlias("trks_nlayersLost"));
		trks_nlayersLost_branch->SetAddress(&trks_nlayersLost_);
	}
	if(trks_nlayersLost_branch == 0 ) {
	//cout << "Branch trks_nlayersLost does not exist." << endl;
	}
	trks_qualityMask_branch = 0;
	if (tree->GetAlias("trks_qualityMask") != 0) {
		trks_qualityMask_branch = tree->GetBranch(tree->GetAlias("trks_qualityMask"));
		trks_qualityMask_branch->SetAddress(&trks_qualityMask_);
	}
	if(trks_qualityMask_branch == 0 ) {
	//cout << "Branch trks_qualityMask does not exist." << endl;
	}
	trks_validHits_branch = 0;
	if (tree->GetAlias("trks_validHits") != 0) {
		trks_validHits_branch = tree->GetBranch(tree->GetAlias("trks_validHits"));
		trks_validHits_branch->SetAddress(&trks_validHits_);
	}
	if(trks_validHits_branch == 0 ) {
	//cout << "Branch trks_validHits does not exist." << endl;
	}
	trks_valid_pixelhits_branch = 0;
	if (tree->GetAlias("trks_valid_pixelhits") != 0) {
		trks_valid_pixelhits_branch = tree->GetBranch(tree->GetAlias("trks_valid_pixelhits"));
		trks_valid_pixelhits_branch->SetAddress(&trks_valid_pixelhits_);
	}
	if(trks_valid_pixelhits_branch == 0 ) {
	//cout << "Branch trks_valid_pixelhits does not exist." << endl;
	}
	trks_elsidx_branch = 0;
	if (tree->GetAlias("trks_elsidx") != 0) {
		trks_elsidx_branch = tree->GetBranch(tree->GetAlias("trks_elsidx"));
		trks_elsidx_branch->SetAddress(&trks_elsidx_);
	}
	if(trks_elsidx_branch == 0 ) {
	//cout << "Branch trks_elsidx does not exist." << endl;
	}
	trk_musidx_branch = 0;
	if (tree->GetAlias("trk_musidx") != 0) {
		trk_musidx_branch = tree->GetBranch(tree->GetAlias("trk_musidx"));
		trk_musidx_branch->SetAddress(&trk_musidx_);
	}
	if(trk_musidx_branch == 0 ) {
	//cout << "Branch trk_musidx does not exist." << endl;
	}
	vtxs_isFake_branch = 0;
	if (tree->GetAlias("vtxs_isFake") != 0) {
		vtxs_isFake_branch = tree->GetBranch(tree->GetAlias("vtxs_isFake"));
		vtxs_isFake_branch->SetAddress(&vtxs_isFake_);
	}
	if(vtxs_isFake_branch == 0 ) {
	//cout << "Branch vtxs_isFake does not exist." << endl;
	}
	vtxs_isValid_branch = 0;
	if (tree->GetAlias("vtxs_isValid") != 0) {
		vtxs_isValid_branch = tree->GetBranch(tree->GetAlias("vtxs_isValid"));
		vtxs_isValid_branch->SetAddress(&vtxs_isValid_);
	}
	if(vtxs_isValid_branch == 0 ) {
	//cout << "Branch vtxs_isValid does not exist." << endl;
	}
	vtxs_tracksSize_branch = 0;
	if (tree->GetAlias("vtxs_tracksSize") != 0) {
		vtxs_tracksSize_branch = tree->GetBranch(tree->GetAlias("vtxs_tracksSize"));
		vtxs_tracksSize_branch->SetAddress(&vtxs_tracksSize_);
	}
	if(vtxs_tracksSize_branch == 0 ) {
	//cout << "Branch vtxs_tracksSize does not exist." << endl;
	}
	hlt_trigObjs_id_branch = 0;
	if (tree->GetAlias("hlt_trigObjs_id") != 0) {
		hlt_trigObjs_id_branch = tree->GetBranch(tree->GetAlias("hlt_trigObjs_id"));
		hlt_trigObjs_id_branch->SetAddress(&hlt_trigObjs_id_);
	}
	if(hlt_trigObjs_id_branch == 0 ) {
	//cout << "Branch hlt_trigObjs_id does not exist." << endl;
	}
	evt_ntwrs_branch = 0;
	if (tree->GetAlias("evt_ntwrs") != 0) {
		evt_ntwrs_branch = tree->GetBranch(tree->GetAlias("evt_ntwrs"));
		evt_ntwrs_branch->SetAddress(&evt_ntwrs_);
	}
	if(evt_ntwrs_branch == 0 ) {
	//cout << "Branch evt_ntwrs does not exist." << endl;
	}
	evt_nels_branch = 0;
	if (tree->GetAlias("evt_nels") != 0) {
		evt_nels_branch = tree->GetBranch(tree->GetAlias("evt_nels"));
		evt_nels_branch->SetAddress(&evt_nels_);
	}
	if(evt_nels_branch == 0 ) {
	//cout << "Branch evt_nels does not exist." << endl;
	}
	evt_event_branch = 0;
	if (tree->GetAlias("evt_event") != 0) {
		evt_event_branch = tree->GetBranch(tree->GetAlias("evt_event"));
		evt_event_branch->SetAddress(&evt_event_);
	}
	if(evt_event_branch == 0 ) {
	//cout << "Branch evt_event does not exist." << endl;
	}
	evt_lumiBlock_branch = 0;
	if (tree->GetAlias("evt_lumiBlock") != 0) {
		evt_lumiBlock_branch = tree->GetBranch(tree->GetAlias("evt_lumiBlock"));
		evt_lumiBlock_branch->SetAddress(&evt_lumiBlock_);
	}
	if(evt_lumiBlock_branch == 0 ) {
	//cout << "Branch evt_lumiBlock does not exist." << endl;
	}
	evt_run_branch = 0;
	if (tree->GetAlias("evt_run") != 0) {
		evt_run_branch = tree->GetBranch(tree->GetAlias("evt_run"));
		evt_run_branch->SetAddress(&evt_run_);
	}
	if(evt_run_branch == 0 ) {
	//cout << "Branch evt_run does not exist." << endl;
	}
	hlt_bits1_branch = 0;
	if (tree->GetAlias("hlt_bits1") != 0) {
		hlt_bits1_branch = tree->GetBranch(tree->GetAlias("hlt_bits1"));
		hlt_bits1_branch->SetAddress(&hlt_bits1_);
	}
	if(hlt_bits1_branch == 0 ) {
	//cout << "Branch hlt_bits1 does not exist." << endl;
	}
	hlt_bits2_branch = 0;
	if (tree->GetAlias("hlt_bits2") != 0) {
		hlt_bits2_branch = tree->GetBranch(tree->GetAlias("hlt_bits2"));
		hlt_bits2_branch->SetAddress(&hlt_bits2_);
	}
	if(hlt_bits2_branch == 0 ) {
	//cout << "Branch hlt_bits2 does not exist." << endl;
	}
	hlt_bits3_branch = 0;
	if (tree->GetAlias("hlt_bits3") != 0) {
		hlt_bits3_branch = tree->GetBranch(tree->GetAlias("hlt_bits3"));
		hlt_bits3_branch->SetAddress(&hlt_bits3_);
	}
	if(hlt_bits3_branch == 0 ) {
	//cout << "Branch hlt_bits3 does not exist." << endl;
	}
	hlt_bits4_branch = 0;
	if (tree->GetAlias("hlt_bits4") != 0) {
		hlt_bits4_branch = tree->GetBranch(tree->GetAlias("hlt_bits4"));
		hlt_bits4_branch->SetAddress(&hlt_bits4_);
	}
	if(hlt_bits4_branch == 0 ) {
	//cout << "Branch hlt_bits4 does not exist." << endl;
	}
	hlt_bits5_branch = 0;
	if (tree->GetAlias("hlt_bits5") != 0) {
		hlt_bits5_branch = tree->GetBranch(tree->GetAlias("hlt_bits5"));
		hlt_bits5_branch->SetAddress(&hlt_bits5_);
	}
	if(hlt_bits5_branch == 0 ) {
	//cout << "Branch hlt_bits5 does not exist." << endl;
	}
	hlt_bits6_branch = 0;
	if (tree->GetAlias("hlt_bits6") != 0) {
		hlt_bits6_branch = tree->GetBranch(tree->GetAlias("hlt_bits6"));
		hlt_bits6_branch->SetAddress(&hlt_bits6_);
	}
	if(hlt_bits6_branch == 0 ) {
	//cout << "Branch hlt_bits6 does not exist." << endl;
	}
	hlt_bits7_branch = 0;
	if (tree->GetAlias("hlt_bits7") != 0) {
		hlt_bits7_branch = tree->GetBranch(tree->GetAlias("hlt_bits7"));
		hlt_bits7_branch->SetAddress(&hlt_bits7_);
	}
	if(hlt_bits7_branch == 0 ) {
	//cout << "Branch hlt_bits7 does not exist." << endl;
	}
	hlt_bits8_branch = 0;
	if (tree->GetAlias("hlt_bits8") != 0) {
		hlt_bits8_branch = tree->GetBranch(tree->GetAlias("hlt_bits8"));
		hlt_bits8_branch->SetAddress(&hlt_bits8_);
	}
	if(hlt_bits8_branch == 0 ) {
	//cout << "Branch hlt_bits8 does not exist." << endl;
	}
	evt_njets_branch = 0;
	if (tree->GetAlias("evt_njets") != 0) {
		evt_njets_branch = tree->GetBranch(tree->GetAlias("evt_njets"));
		evt_njets_branch->SetAddress(&evt_njets_);
	}
	if(evt_njets_branch == 0 ) {
	//cout << "Branch evt_njets does not exist." << endl;
	}
	evt_njpts_branch = 0;
	if (tree->GetAlias("evt_njpts") != 0) {
		evt_njpts_branch = tree->GetBranch(tree->GetAlias("evt_njpts"));
		evt_njpts_branch->SetAddress(&evt_njpts_);
	}
	if(evt_njpts_branch == 0 ) {
	//cout << "Branch evt_njpts does not exist." << endl;
	}
	l1_bits1_branch = 0;
	if (tree->GetAlias("l1_bits1") != 0) {
		l1_bits1_branch = tree->GetBranch(tree->GetAlias("l1_bits1"));
		l1_bits1_branch->SetAddress(&l1_bits1_);
	}
	if(l1_bits1_branch == 0 ) {
	//cout << "Branch l1_bits1 does not exist." << endl;
	}
	l1_bits2_branch = 0;
	if (tree->GetAlias("l1_bits2") != 0) {
		l1_bits2_branch = tree->GetBranch(tree->GetAlias("l1_bits2"));
		l1_bits2_branch->SetAddress(&l1_bits2_);
	}
	if(l1_bits2_branch == 0 ) {
	//cout << "Branch l1_bits2 does not exist." << endl;
	}
	l1_bits3_branch = 0;
	if (tree->GetAlias("l1_bits3") != 0) {
		l1_bits3_branch = tree->GetBranch(tree->GetAlias("l1_bits3"));
		l1_bits3_branch->SetAddress(&l1_bits3_);
	}
	if(l1_bits3_branch == 0 ) {
	//cout << "Branch l1_bits3 does not exist." << endl;
	}
	l1_bits4_branch = 0;
	if (tree->GetAlias("l1_bits4") != 0) {
		l1_bits4_branch = tree->GetBranch(tree->GetAlias("l1_bits4"));
		l1_bits4_branch->SetAddress(&l1_bits4_);
	}
	if(l1_bits4_branch == 0 ) {
	//cout << "Branch l1_bits4 does not exist." << endl;
	}
	l1_techbits1_branch = 0;
	if (tree->GetAlias("l1_techbits1") != 0) {
		l1_techbits1_branch = tree->GetBranch(tree->GetAlias("l1_techbits1"));
		l1_techbits1_branch->SetAddress(&l1_techbits1_);
	}
	if(l1_techbits1_branch == 0 ) {
	//cout << "Branch l1_techbits1 does not exist." << endl;
	}
	l1_techbits2_branch = 0;
	if (tree->GetAlias("l1_techbits2") != 0) {
		l1_techbits2_branch = tree->GetBranch(tree->GetAlias("l1_techbits2"));
		l1_techbits2_branch->SetAddress(&l1_techbits2_);
	}
	if(l1_techbits2_branch == 0 ) {
	//cout << "Branch l1_techbits2 does not exist." << endl;
	}
	evt_nphotons_branch = 0;
	if (tree->GetAlias("evt_nphotons") != 0) {
		evt_nphotons_branch = tree->GetBranch(tree->GetAlias("evt_nphotons"));
		evt_nphotons_branch->SetAddress(&evt_nphotons_);
	}
	if(evt_nphotons_branch == 0 ) {
	//cout << "Branch evt_nphotons does not exist." << endl;
	}
	evt_nscs_branch = 0;
	if (tree->GetAlias("evt_nscs") != 0) {
		evt_nscs_branch = tree->GetBranch(tree->GetAlias("evt_nscs"));
		evt_nscs_branch->SetAddress(&evt_nscs_);
	}
	if(evt_nscs_branch == 0 ) {
	//cout << "Branch evt_nscs does not exist." << endl;
	}
	evt_nscjets_branch = 0;
	if (tree->GetAlias("evt_nscjets") != 0) {
		evt_nscjets_branch = tree->GetBranch(tree->GetAlias("evt_nscjets"));
		evt_nscjets_branch->SetAddress(&evt_nscjets_);
	}
	if(evt_nscjets_branch == 0 ) {
	//cout << "Branch evt_nscjets does not exist." << endl;
	}
	evt_ntrkjets_branch = 0;
	if (tree->GetAlias("evt_ntrkjets") != 0) {
		evt_ntrkjets_branch = tree->GetBranch(tree->GetAlias("evt_ntrkjets"));
		evt_ntrkjets_branch->SetAddress(&evt_ntrkjets_);
	}
	if(evt_ntrkjets_branch == 0 ) {
	//cout << "Branch evt_ntrkjets does not exist." << endl;
	}
	evt_nvtxs_branch = 0;
	if (tree->GetAlias("evt_nvtxs") != 0) {
		evt_nvtxs_branch = tree->GetBranch(tree->GetAlias("evt_nvtxs"));
		evt_nvtxs_branch->SetAddress(&evt_nvtxs_);
	}
	if(evt_nvtxs_branch == 0 ) {
	//cout << "Branch evt_nvtxs does not exist." << endl;
	}
	twrs_numBadEcalCells_branch = 0;
	if (tree->GetAlias("twrs_numBadEcalCells") != 0) {
		twrs_numBadEcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numBadEcalCells"));
		twrs_numBadEcalCells_branch->SetAddress(&twrs_numBadEcalCells_);
	}
	if(twrs_numBadEcalCells_branch == 0 ) {
	//cout << "Branch twrs_numBadEcalCells does not exist." << endl;
	}
	twrs_numBadHcalCells_branch = 0;
	if (tree->GetAlias("twrs_numBadHcalCells") != 0) {
		twrs_numBadHcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numBadHcalCells"));
		twrs_numBadHcalCells_branch->SetAddress(&twrs_numBadHcalCells_);
	}
	if(twrs_numBadHcalCells_branch == 0 ) {
	//cout << "Branch twrs_numBadHcalCells does not exist." << endl;
	}
	twrs_numProblematicEcalCells_branch = 0;
	if (tree->GetAlias("twrs_numProblematicEcalCells") != 0) {
		twrs_numProblematicEcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numProblematicEcalCells"));
		twrs_numProblematicEcalCells_branch->SetAddress(&twrs_numProblematicEcalCells_);
	}
	if(twrs_numProblematicEcalCells_branch == 0 ) {
	//cout << "Branch twrs_numProblematicEcalCells does not exist." << endl;
	}
	twrs_numProblematicHcalCells_branch = 0;
	if (tree->GetAlias("twrs_numProblematicHcalCells") != 0) {
		twrs_numProblematicHcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numProblematicHcalCells"));
		twrs_numProblematicHcalCells_branch->SetAddress(&twrs_numProblematicHcalCells_);
	}
	if(twrs_numProblematicHcalCells_branch == 0 ) {
	//cout << "Branch twrs_numProblematicHcalCells does not exist." << endl;
	}
	twrs_numRecoveredEcalCells_branch = 0;
	if (tree->GetAlias("twrs_numRecoveredEcalCells") != 0) {
		twrs_numRecoveredEcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numRecoveredEcalCells"));
		twrs_numRecoveredEcalCells_branch->SetAddress(&twrs_numRecoveredEcalCells_);
	}
	if(twrs_numRecoveredEcalCells_branch == 0 ) {
	//cout << "Branch twrs_numRecoveredEcalCells does not exist." << endl;
	}
	twrs_numRecoveredHcalCells_branch = 0;
	if (tree->GetAlias("twrs_numRecoveredHcalCells") != 0) {
		twrs_numRecoveredHcalCells_branch = tree->GetBranch(tree->GetAlias("twrs_numRecoveredHcalCells"));
		twrs_numRecoveredHcalCells_branch->SetAddress(&twrs_numRecoveredHcalCells_);
	}
	if(twrs_numRecoveredHcalCells_branch == 0 ) {
	//cout << "Branch twrs_numRecoveredHcalCells does not exist." << endl;
	}
	evt_scale1fb_branch = 0;
	if (tree->GetAlias("evt_scale1fb") != 0) {
		evt_scale1fb_branch = tree->GetBranch(tree->GetAlias("evt_scale1fb"));
		evt_scale1fb_branch->SetAddress(&evt_scale1fb_);
	}
	if(evt_scale1fb_branch == 0 ) {
	//cout << "Branch evt_scale1fb does not exist." << endl;
	}
	evt_xsec_excl_branch = 0;
	if (tree->GetAlias("evt_xsec_excl") != 0) {
		evt_xsec_excl_branch = tree->GetBranch(tree->GetAlias("evt_xsec_excl"));
		evt_xsec_excl_branch->SetAddress(&evt_xsec_excl_);
	}
	if(evt_xsec_excl_branch == 0 ) {
	//cout << "Branch evt_xsec_excl does not exist." << endl;
	}
	evt_xsec_incl_branch = 0;
	if (tree->GetAlias("evt_xsec_incl") != 0) {
		evt_xsec_incl_branch = tree->GetBranch(tree->GetAlias("evt_xsec_incl"));
		evt_xsec_incl_branch->SetAddress(&evt_xsec_incl_);
	}
	if(evt_xsec_incl_branch == 0 ) {
	//cout << "Branch evt_xsec_incl does not exist." << endl;
	}
	evt_kfactor_branch = 0;
	if (tree->GetAlias("evt_kfactor") != 0) {
		evt_kfactor_branch = tree->GetBranch(tree->GetAlias("evt_kfactor"));
		evt_kfactor_branch->SetAddress(&evt_kfactor_);
	}
	if(evt_kfactor_branch == 0 ) {
	//cout << "Branch evt_kfactor does not exist." << endl;
	}
	evt_nEvts_branch = 0;
	if (tree->GetAlias("evt_nEvts") != 0) {
		evt_nEvts_branch = tree->GetBranch(tree->GetAlias("evt_nEvts"));
		evt_nEvts_branch->SetAddress(&evt_nEvts_);
	}
	if(evt_nEvts_branch == 0 ) {
	//cout << "Branch evt_nEvts does not exist." << endl;
	}
	evt_filt_eff_branch = 0;
	if (tree->GetAlias("evt_filt_eff") != 0) {
		evt_filt_eff_branch = tree->GetBranch(tree->GetAlias("evt_filt_eff"));
		evt_filt_eff_branch->SetAddress(&evt_filt_eff_);
	}
	if(evt_filt_eff_branch == 0 ) {
	//cout << "Branch evt_filt_eff does not exist." << endl;
	}
  tree->SetMakeClass(0);
}
void GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		evt_CMS2tag_isLoaded = false;
		evt_dataset_isLoaded = false;
		hlt_trigNames_isLoaded = false;
		l1_trigNames_isLoaded = false;
		jets_closestElectron_DR_isLoaded = false;
		jets_closestMuon_DR_isLoaded = false;
		evt_bs_Xwidth_isLoaded = false;
		evt_bs_XwidthErr_isLoaded = false;
		evt_bs_Ywidth_isLoaded = false;
		evt_bs_YwidthErr_isLoaded = false;
		evt_bs_dxdz_isLoaded = false;
		evt_bs_dxdzErr_isLoaded = false;
		evt_bs_dydz_isLoaded = false;
		evt_bs_dydzErr_isLoaded = false;
		evt_bs_sigmaZ_isLoaded = false;
		evt_bs_sigmaZErr_isLoaded = false;
		evt_bs_xErr_isLoaded = false;
		evt_bs_yErr_isLoaded = false;
		evt_bs_zErr_isLoaded = false;
		evt_bField_isLoaded = false;
		hcalnoise_eventChargeFraction_isLoaded = false;
		hcalnoise_eventEMEnergy_isLoaded = false;
		hcalnoise_eventEMFraction_isLoaded = false;
		hcalnoise_eventHadEnergy_isLoaded = false;
		hcalnoise_eventTrackEnergy_isLoaded = false;
		hcalnoise_max10GeVHitTime_isLoaded = false;
		hcalnoise_max25GeVHitTime_isLoaded = false;
		hcalnoise_min10GeVHitTime_isLoaded = false;
		hcalnoise_min25GeVHitTime_isLoaded = false;
		hcalnoise_minE10TS_isLoaded = false;
		hcalnoise_minE2Over10TS_isLoaded = false;
		hcalnoise_minE2TS_isLoaded = false;
		hcalnoise_minHPDEMF_isLoaded = false;
		hcalnoise_minRBXEMF_isLoaded = false;
		hcalnoise_rms10GeVHitTime_isLoaded = false;
		hcalnoise_rms25GeVHitTime_isLoaded = false;
		l1_met_etTot_isLoaded = false;
		l1_met_met_isLoaded = false;
		l1_mht_htTot_isLoaded = false;
		l1_mht_mht_isLoaded = false;
		evt_ecalendcapm_met_isLoaded = false;
		evt_ecalendcapm_metPhi_isLoaded = false;
		evt_ecalendcapp_met_isLoaded = false;
		evt_ecalendcapp_metPhi_isLoaded = false;
		evt_ecalmet_isLoaded = false;
		evt_ecalmetPhi_isLoaded = false;
		evt_endcapm_met_isLoaded = false;
		evt_endcapm_metPhi_isLoaded = false;
		evt_endcapp_met_isLoaded = false;
		evt_endcapp_metPhi_isLoaded = false;
		evt_hcalendcapm_met_isLoaded = false;
		evt_hcalendcapm_metPhi_isLoaded = false;
		evt_hcalendcapp_met_isLoaded = false;
		evt_hcalendcapp_metPhi_isLoaded = false;
		evt_hcalmet_isLoaded = false;
		evt_hcalmetPhi_isLoaded = false;
		evt_met_isLoaded = false;
		evt_metHO_isLoaded = false;
		evt_metHOPhi_isLoaded = false;
		evt_metHOSig_isLoaded = false;
		evt_metMuonCorr_isLoaded = false;
		evt_metMuonCorrPhi_isLoaded = false;
		evt_metMuonCorrSig_isLoaded = false;
		evt_metMuonJESCorr_isLoaded = false;
		evt_metMuonJESCorrPhi_isLoaded = false;
		evt_metMuonJESCorrSig_isLoaded = false;
		evt_metNoHF_isLoaded = false;
		evt_metNoHFHO_isLoaded = false;
		evt_metNoHFHOPhi_isLoaded = false;
		evt_metNoHFHOSig_isLoaded = false;
		evt_metNoHFPhi_isLoaded = false;
		evt_metNoHFSig_isLoaded = false;
		evt_metOpt_isLoaded = false;
		evt_metOptHO_isLoaded = false;
		evt_metOptHOPhi_isLoaded = false;
		evt_metOptHOSig_isLoaded = false;
		evt_metOptNoHF_isLoaded = false;
		evt_metOptNoHFHO_isLoaded = false;
		evt_metOptNoHFHOPhi_isLoaded = false;
		evt_metOptNoHFHOSig_isLoaded = false;
		evt_metOptNoHFPhi_isLoaded = false;
		evt_metOptNoHFSig_isLoaded = false;
		evt_metOptPhi_isLoaded = false;
		evt_metOptSig_isLoaded = false;
		evt_metPhi_isLoaded = false;
		evt_metSig_isLoaded = false;
		evt_sumet_isLoaded = false;
		evt_sumetHO_isLoaded = false;
		evt_sumetMuonCorr_isLoaded = false;
		evt_sumetNoHF_isLoaded = false;
		evt_sumetNoHFHO_isLoaded = false;
		evt_sumetOpt_isLoaded = false;
		evt_sumetOptHO_isLoaded = false;
		evt_sumetOptNoHF_isLoaded = false;
		evt_sumetOptNoHFHO_isLoaded = false;
		evt_pfmet_isLoaded = false;
		evt_pfmetPhi_isLoaded = false;
		evt_pfmetSig_isLoaded = false;
		evt_pfsumet_isLoaded = false;
		evt_tcmet_isLoaded = false;
		evt_tcmetPhi_isLoaded = false;
		evt_tcmetSig_isLoaded = false;
		evt_tcsumet_isLoaded = false;
		evt_bsp4_isLoaded = false;
		l1_met_p4_isLoaded = false;
		l1_mht_p4_isLoaded = false;
		els_inner_position_isLoaded = false;
		els_outer_position_isLoaded = false;
		els_p4_isLoaded = false;
		els_p4In_isLoaded = false;
		els_p4Out_isLoaded = false;
		els_trk_p4_isLoaded = false;
		els_vertex_p4_isLoaded = false;
		jets_p4_isLoaded = false;
		jets_vertex_p4_isLoaded = false;
		jpts_p4_isLoaded = false;
		l1_emiso_p4_isLoaded = false;
		l1_emnoiso_p4_isLoaded = false;
		l1_jetsc_p4_isLoaded = false;
		l1_jetsf_p4_isLoaded = false;
		l1_jetst_p4_isLoaded = false;
		l1_mus_p4_isLoaded = false;
		mus_fitdefault_p4_isLoaded = false;
		mus_fitfirsthit_p4_isLoaded = false;
		mus_fitpicky_p4_isLoaded = false;
		mus_fittev_p4_isLoaded = false;
		mus_gfit_outerPos_p4_isLoaded = false;
		mus_gfit_p4_isLoaded = false;
		mus_gfit_vertex_p4_isLoaded = false;
		mus_p4_isLoaded = false;
		mus_sta_p4_isLoaded = false;
		mus_sta_vertex_p4_isLoaded = false;
		mus_trk_p4_isLoaded = false;
		mus_vertex_p4_isLoaded = false;
		pfjets_p4_isLoaded = false;
		photons_p4_isLoaded = false;
		ran_trksecalp4_isLoaded = false;
		ran_trksp4_isLoaded = false;
		scs_p4_isLoaded = false;
		scs_pos_p4_isLoaded = false;
		scs_vtx_p4_isLoaded = false;
		scjets_p4_isLoaded = false;
		scjets_vertex_p4_isLoaded = false;
		trks_inner_position_isLoaded = false;
		trks_outer_p4_isLoaded = false;
		trks_outer_position_isLoaded = false;
		trks_trk_p4_isLoaded = false;
		trks_vertex_p4_isLoaded = false;
		trkjets_p4_isLoaded = false;
		vtxs_position_isLoaded = false;
		hlt_trigObjs_p4_isLoaded = false;
		evt_covMatrix_isLoaded = false;
		twrs_ecalTime_isLoaded = false;
		twrs_emEnergy_isLoaded = false;
		twrs_emEt_isLoaded = false;
		twrs_emEtcorr_isLoaded = false;
		twrs_eta_isLoaded = false;
		twrs_etcorr_isLoaded = false;
		twrs_hadEnergy_isLoaded = false;
		twrs_hadEt_isLoaded = false;
		twrs_hadEtcorr_isLoaded = false;
		twrs_hcalTime_isLoaded = false;
		twrs_outerEnergy_isLoaded = false;
		twrs_outerEt_isLoaded = false;
		twrs_outerEtcorr_isLoaded = false;
		twrs_pcorr_isLoaded = false;
		twrs_phi_isLoaded = false;
		els_ecalJuraIso_isLoaded = false;
		els_ecalJuraTowerIso_isLoaded = false;
		els_hcalConeIso_isLoaded = false;
		els_tkJuraIso_isLoaded = false;
		els_jetdr_isLoaded = false;
		els_musdr_isLoaded = false;
		els_hcalDepth1OverEcal_isLoaded = false;
		els_hcalDepth1TowerSumEt_isLoaded = false;
		els_hcalDepth1TowerSumEt04_isLoaded = false;
		els_hcalDepth2OverEcal_isLoaded = false;
		els_hcalDepth2TowerSumEt_isLoaded = false;
		els_hcalDepth2TowerSumEt04_isLoaded = false;
		els_chi2_isLoaded = false;
		els_conv_dcot_isLoaded = false;
		els_conv_dist_isLoaded = false;
		els_d0_isLoaded = false;
		els_d0Err_isLoaded = false;
		els_d0corr_isLoaded = false;
		els_dEtaIn_isLoaded = false;
		els_dEtaOut_isLoaded = false;
		els_dPhiIn_isLoaded = false;
		els_dPhiInPhiOut_isLoaded = false;
		els_dPhiOut_isLoaded = false;
		els_deltaEtaEleClusterTrackAtCalo_isLoaded = false;
		els_deltaPhiEleClusterTrackAtCalo_isLoaded = false;
		els_e1x5_isLoaded = false;
		els_e2x5Max_isLoaded = false;
		els_e3x3_isLoaded = false;
		els_e5x5_isLoaded = false;
		els_eMax_isLoaded = false;
		els_eOverPIn_isLoaded = false;
		els_eOverPOut_isLoaded = false;
		els_eSC_isLoaded = false;
		els_eSCPresh_isLoaded = false;
		els_eSCRaw_isLoaded = false;
		els_eSeed_isLoaded = false;
		els_eSeedOverPIn_isLoaded = false;
		els_eSeedOverPOut_isLoaded = false;
		els_ecalEnergy_isLoaded = false;
		els_ecalEnergyError_isLoaded = false;
		els_ecalIso_isLoaded = false;
		els_ecalIso04_isLoaded = false;
		els_egamma_looseId_isLoaded = false;
		els_egamma_robustHighEnergy_isLoaded = false;
		els_egamma_robustLooseId_isLoaded = false;
		els_egamma_robustTightId_isLoaded = false;
		els_egamma_tightId_isLoaded = false;
		els_electronMomentumError_isLoaded = false;
		els_etaErr_isLoaded = false;
		els_etaSC_isLoaded = false;
		els_fbrem_isLoaded = false;
		els_hOverE_isLoaded = false;
		els_hcalIso_isLoaded = false;
		els_hcalIso04_isLoaded = false;
		els_layer1_charge_isLoaded = false;
		els_ndof_isLoaded = false;
		els_phiErr_isLoaded = false;
		els_phiSC_isLoaded = false;
		els_ptErr_isLoaded = false;
		els_sigmaEtaEta_isLoaded = false;
		els_sigmaIEtaIEta_isLoaded = false;
		els_sigmaIPhiIPhi_isLoaded = false;
		els_sigmaPhiPhi_isLoaded = false;
		els_tkIso_isLoaded = false;
		els_tkIso04_isLoaded = false;
		els_trackMomentumError_isLoaded = false;
		els_trkdr_isLoaded = false;
		els_trkshFrac_isLoaded = false;
		els_z0_isLoaded = false;
		els_z0Err_isLoaded = false;
		els_z0corr_isLoaded = false;
		jets_cor_isLoaded = false;
		jets_emFrac_isLoaded = false;
		jets_fHPD_isLoaded = false;
		jets_fRBX_isLoaded = false;
		jets_fSubDetector1_isLoaded = false;
		jets_fSubDetector2_isLoaded = false;
		jets_fSubDetector3_isLoaded = false;
		jets_fSubDetector4_isLoaded = false;
		jets_n90Hits_isLoaded = false;
		jets_nECALTowers_isLoaded = false;
		jets_nHCALTowers_isLoaded = false;
		jets_restrictedEMF_isLoaded = false;
		jpts_emFrac_isLoaded = false;
		evt_ecalmet_etaslice_isLoaded = false;
		evt_ecalmet_etaslicePhi_isLoaded = false;
		evt_hcalmet_etaslice_isLoaded = false;
		evt_hcalmet_etaslicePhi_isLoaded = false;
		evt_towermet_etaslice_isLoaded = false;
		evt_towermet_etaslicePhi_isLoaded = false;
		mus_met_deltax_isLoaded = false;
		mus_met_deltay_isLoaded = false;
		mus_eledr_isLoaded = false;
		mus_jetdr_isLoaded = false;
		mus_caloCompatibility_isLoaded = false;
		mus_chi2_isLoaded = false;
		mus_d0_isLoaded = false;
		mus_d0Err_isLoaded = false;
		mus_d0corr_isLoaded = false;
		mus_e_em_isLoaded = false;
		mus_e_emS9_isLoaded = false;
		mus_e_had_isLoaded = false;
		mus_e_hadS9_isLoaded = false;
		mus_e_ho_isLoaded = false;
		mus_e_hoS9_isLoaded = false;
		mus_etaErr_isLoaded = false;
		mus_gfit_chi2_isLoaded = false;
		mus_gfit_d0_isLoaded = false;
		mus_gfit_d0Err_isLoaded = false;
		mus_gfit_d0corr_isLoaded = false;
		mus_gfit_ndof_isLoaded = false;
		mus_gfit_qoverp_isLoaded = false;
		mus_gfit_qoverpError_isLoaded = false;
		mus_gfit_z0_isLoaded = false;
		mus_gfit_z0Err_isLoaded = false;
		mus_gfit_z0corr_isLoaded = false;
		mus_iso03_emEt_isLoaded = false;
		mus_iso03_hadEt_isLoaded = false;
		mus_iso03_hoEt_isLoaded = false;
		mus_iso03_sumPt_isLoaded = false;
		mus_iso05_emEt_isLoaded = false;
		mus_iso05_hadEt_isLoaded = false;
		mus_iso05_hoEt_isLoaded = false;
		mus_iso05_sumPt_isLoaded = false;
		mus_iso_ecalvetoDep_isLoaded = false;
		mus_iso_hcalvetoDep_isLoaded = false;
		mus_iso_hovetoDep_isLoaded = false;
		mus_iso_trckvetoDep_isLoaded = false;
		mus_ndof_isLoaded = false;
		mus_phiErr_isLoaded = false;
		mus_ptErr_isLoaded = false;
		mus_qoverp_isLoaded = false;
		mus_qoverpError_isLoaded = false;
		mus_sta_chi2_isLoaded = false;
		mus_sta_d0_isLoaded = false;
		mus_sta_d0Err_isLoaded = false;
		mus_sta_d0corr_isLoaded = false;
		mus_sta_ndof_isLoaded = false;
		mus_sta_qoverp_isLoaded = false;
		mus_sta_qoverpError_isLoaded = false;
		mus_sta_z0_isLoaded = false;
		mus_sta_z0Err_isLoaded = false;
		mus_sta_z0corr_isLoaded = false;
		mus_timeAtIpInOut_isLoaded = false;
		mus_timeAtIpInOutErr_isLoaded = false;
		mus_timeAtIpOutIn_isLoaded = false;
		mus_timeAtIpOutInErr_isLoaded = false;
		mus_vertexphi_isLoaded = false;
		mus_z0_isLoaded = false;
		mus_z0Err_isLoaded = false;
		mus_z0corr_isLoaded = false;
		pfjets_chargedEmE_isLoaded = false;
		pfjets_chargedHadronE_isLoaded = false;
		pfjets_cor_isLoaded = false;
		pfjets_neutralEmE_isLoaded = false;
		pfjets_neutralHadronE_isLoaded = false;
		photons_e1x5_isLoaded = false;
		photons_e2x5Max_isLoaded = false;
		photons_e3x3_isLoaded = false;
		photons_e5x5_isLoaded = false;
		photons_eMax_isLoaded = false;
		photons_eSC_isLoaded = false;
		photons_eSCPresh_isLoaded = false;
		photons_eSCRaw_isLoaded = false;
		photons_eSeed_isLoaded = false;
		photons_ecalIso_isLoaded = false;
		photons_hOverE_isLoaded = false;
		photons_hcalIso_isLoaded = false;
		photons_sigmaEtaEta_isLoaded = false;
		photons_sigmaIEtaIEta_isLoaded = false;
		photons_sigmaIPhiIPhi_isLoaded = false;
		photons_sigmaPhiPhi_isLoaded = false;
		photons_tkIsoHollow_isLoaded = false;
		photons_tkIsoSolid_isLoaded = false;
		ran_dRClosestTower_isLoaded = false;
		ran_dRClosestTowerEmEt_isLoaded = false;
		ran_ecalIso03_egamma_isLoaded = false;
		ran_ecalIso03_mu_isLoaded = false;
		ran_hcalD1Iso03_egamma_isLoaded = false;
		ran_hcalD2Iso03_egamma_isLoaded = false;
		ran_hcalIso03_egamma_isLoaded = false;
		ran_hcalIso03_mu_isLoaded = false;
		ran_hoIso03_mu_isLoaded = false;
		ran_towerEmEt_isLoaded = false;
		ran_towerHadEt_isLoaded = false;
		ran_trkIso03_egamma_isLoaded = false;
		ran_trkIso03_mu_isLoaded = false;
		scs_clustersSize_isLoaded = false;
		scs_crystalsSize_isLoaded = false;
		scs_e1x3_isLoaded = false;
		scs_e1x5_isLoaded = false;
		scs_e2nd_isLoaded = false;
		scs_e2x2_isLoaded = false;
		scs_e2x5Max_isLoaded = false;
		scs_e3x1_isLoaded = false;
		scs_e3x2_isLoaded = false;
		scs_e3x3_isLoaded = false;
		scs_e4x4_isLoaded = false;
		scs_e5x5_isLoaded = false;
		scs_eMax_isLoaded = false;
		scs_eSeed_isLoaded = false;
		scs_energy_isLoaded = false;
		scs_eta_isLoaded = false;
		scs_hoe_isLoaded = false;
		scs_phi_isLoaded = false;
		scs_preshowerEnergy_isLoaded = false;
		scs_rawEnergy_isLoaded = false;
		scs_sigmaEtaEta_isLoaded = false;
		scs_sigmaEtaPhi_isLoaded = false;
		scs_sigmaIEtaIEta_isLoaded = false;
		scs_sigmaIEtaIPhi_isLoaded = false;
		scs_sigmaIPhiIPhi_isLoaded = false;
		scs_sigmaPhiPhi_isLoaded = false;
		scjets_cor_isLoaded = false;
		scjets_emFrac_isLoaded = false;
		scjets_fHPD_isLoaded = false;
		scjets_fRBX_isLoaded = false;
		scjets_fSubDetector1_isLoaded = false;
		scjets_fSubDetector2_isLoaded = false;
		scjets_fSubDetector3_isLoaded = false;
		scjets_fSubDetector4_isLoaded = false;
		scjets_n90Hits_isLoaded = false;
		scjets_nECALTowers_isLoaded = false;
		scjets_nHCALTowers_isLoaded = false;
		scjets_restrictedEMF_isLoaded = false;
		mus_tcmet_deltax_isLoaded = false;
		mus_tcmet_deltay_isLoaded = false;
		trks_chi2_isLoaded = false;
		trks_d0_isLoaded = false;
		trks_d0Err_isLoaded = false;
		trks_d0corr_isLoaded = false;
		trks_d0corrPhi_isLoaded = false;
		trks_etaErr_isLoaded = false;
		trks_layer1_charge_isLoaded = false;
		trks_ndof_isLoaded = false;
		trks_phiErr_isLoaded = false;
		trks_ptErr_isLoaded = false;
		trks_z0_isLoaded = false;
		trks_z0Err_isLoaded = false;
		trks_z0corr_isLoaded = false;
		vtxs_chi2_isLoaded = false;
		vtxs_ndof_isLoaded = false;
		vtxs_xError_isLoaded = false;
		vtxs_yError_isLoaded = false;
		vtxs_zError_isLoaded = false;
		vtxs_covMatrix_isLoaded = false;
		evt_cscLooseHaloId_isLoaded = false;
		evt_cscTightHaloId_isLoaded = false;
		evt_ecalLooseHaloId_isLoaded = false;
		evt_ecalTightHaloId_isLoaded = false;
		evt_extremeTightHaloId_isLoaded = false;
		evt_globalLooseHaloId_isLoaded = false;
		evt_globalTightHaloId_isLoaded = false;
		evt_hcalLooseHaloId_isLoaded = false;
		evt_hcalTightHaloId_isLoaded = false;
		evt_looseHaloId_isLoaded = false;
		evt_tightHaloId_isLoaded = false;
		evt_bsType_isLoaded = false;
		evt_bunchCrossing_isLoaded = false;
		evt_experimentType_isLoaded = false;
		evt_orbitNumber_isLoaded = false;
		evt_storeNumber_isLoaded = false;
		hcalnoise_maxHPDHits_isLoaded = false;
		hcalnoise_maxRBXHits_isLoaded = false;
		hcalnoise_maxZeros_isLoaded = false;
		hcalnoise_noiseFilterStatus_isLoaded = false;
		hcalnoise_noiseType_isLoaded = false;
		hcalnoise_num10GeVHits_isLoaded = false;
		hcalnoise_num25GeVHits_isLoaded = false;
		hcalnoise_numProblematicRBXs_isLoaded = false;
		hcalnoise_passHighLevelNoiseFilter_isLoaded = false;
		hcalnoise_passLooseNoiseFilter_isLoaded = false;
		hcalnoise_passTightNoiseFilter_isLoaded = false;
		l1_nemiso_isLoaded = false;
		l1_nemnoiso_isLoaded = false;
		l1_njetsc_isLoaded = false;
		l1_njetsf_isLoaded = false;
		l1_njetst_isLoaded = false;
		l1_nmus_isLoaded = false;
		evt_ecaliPhiSuspects_isLoaded = false;
		evt_globaliPhiSuspects_isLoaded = false;
		evt_hcaliPhiSuspects_isLoaded = false;
		els_closestJet_isLoaded = false;
		els_closestMuon_isLoaded = false;
		els_category_isLoaded = false;
		els_charge_isLoaded = false;
		els_class_isLoaded = false;
		els_conv_tkidx_isLoaded = false;
		els_exp_innerlayers_isLoaded = false;
		els_exp_outerlayers_isLoaded = false;
		els_fiduciality_isLoaded = false;
		els_layer1_det_isLoaded = false;
		els_layer1_layer_isLoaded = false;
		els_layer1_sizerphi_isLoaded = false;
		els_layer1_sizerz_isLoaded = false;
		els_lostHits_isLoaded = false;
		els_lost_pixelhits_isLoaded = false;
		els_nSeed_isLoaded = false;
		els_sccharge_isLoaded = false;
		els_trk_charge_isLoaded = false;
		els_trkidx_isLoaded = false;
		els_type_isLoaded = false;
		els_validHits_isLoaded = false;
		els_valid_pixelhits_isLoaded = false;
		jets_closestElectron_isLoaded = false;
		jets_closestMuon_isLoaded = false;
		l1_emiso_ieta_isLoaded = false;
		l1_emiso_iphi_isLoaded = false;
		l1_emiso_rawId_isLoaded = false;
		l1_emiso_type_isLoaded = false;
		l1_emnoiso_ieta_isLoaded = false;
		l1_emnoiso_iphi_isLoaded = false;
		l1_emnoiso_rawId_isLoaded = false;
		l1_emnoiso_type_isLoaded = false;
		l1_jetsc_ieta_isLoaded = false;
		l1_jetsc_iphi_isLoaded = false;
		l1_jetsc_rawId_isLoaded = false;
		l1_jetsc_type_isLoaded = false;
		l1_jetsf_ieta_isLoaded = false;
		l1_jetsf_iphi_isLoaded = false;
		l1_jetsf_rawId_isLoaded = false;
		l1_jetsf_type_isLoaded = false;
		l1_jetst_ieta_isLoaded = false;
		l1_jetst_iphi_isLoaded = false;
		l1_jetst_rawId_isLoaded = false;
		l1_jetst_type_isLoaded = false;
		l1_mus_flags_isLoaded = false;
		l1_mus_q_isLoaded = false;
		l1_mus_qual_isLoaded = false;
		l1_mus_qualFlags_isLoaded = false;
		mus_met_flag_isLoaded = false;
		mus_closestEle_isLoaded = false;
		mus_closestJet_isLoaded = false;
		mus_charge_isLoaded = false;
		mus_gfit_validHits_isLoaded = false;
		mus_gfit_validSTAHits_isLoaded = false;
		mus_gfit_validSiHits_isLoaded = false;
		mus_goodmask_isLoaded = false;
		mus_iso03_ntrk_isLoaded = false;
		mus_iso05_ntrk_isLoaded = false;
		mus_lostHits_isLoaded = false;
		mus_nmatches_isLoaded = false;
		mus_pid_TM2DCompatibilityLoose_isLoaded = false;
		mus_pid_TM2DCompatibilityTight_isLoaded = false;
		mus_pid_TMLastStationLoose_isLoaded = false;
		mus_pid_TMLastStationTight_isLoaded = false;
		mus_sta_validHits_isLoaded = false;
		mus_timeDirection_isLoaded = false;
		mus_timeNumStationsUsed_isLoaded = false;
		mus_trk_charge_isLoaded = false;
		mus_trkidx_isLoaded = false;
		mus_type_isLoaded = false;
		mus_validHits_isLoaded = false;
		pfjets_chargedMultiplicity_isLoaded = false;
		pfjets_muonMultiplicity_isLoaded = false;
		pfjets_neutralMultiplicity_isLoaded = false;
		photons_fiduciality_isLoaded = false;
		pxl_ndigis_pxb_isLoaded = false;
		pxl_ndigis_pxf_isLoaded = false;
		ran_srFlag_isLoaded = false;
		scs_elsidx_isLoaded = false;
		scs_severitySeed_isLoaded = false;
		mus_tcmet_flag_isLoaded = false;
		trks_algo_isLoaded = false;
		trks_charge_isLoaded = false;
		trks_exp_innerlayers_isLoaded = false;
		trks_exp_outerlayers_isLoaded = false;
		trks_layer1_det_isLoaded = false;
		trks_layer1_layer_isLoaded = false;
		trks_layer1_sizerphi_isLoaded = false;
		trks_layer1_sizerz_isLoaded = false;
		trks_lostHits_isLoaded = false;
		trks_lost_pixelhits_isLoaded = false;
		trks_nlayers_isLoaded = false;
		trks_nlayers3D_isLoaded = false;
		trks_nlayersLost_isLoaded = false;
		trks_qualityMask_isLoaded = false;
		trks_validHits_isLoaded = false;
		trks_valid_pixelhits_isLoaded = false;
		trks_elsidx_isLoaded = false;
		trk_musidx_isLoaded = false;
		vtxs_isFake_isLoaded = false;
		vtxs_isValid_isLoaded = false;
		vtxs_tracksSize_isLoaded = false;
		hlt_trigObjs_id_isLoaded = false;
		evt_ntwrs_isLoaded = false;
		evt_nels_isLoaded = false;
		evt_event_isLoaded = false;
		evt_lumiBlock_isLoaded = false;
		evt_run_isLoaded = false;
		hlt_bits1_isLoaded = false;
		hlt_bits2_isLoaded = false;
		hlt_bits3_isLoaded = false;
		hlt_bits4_isLoaded = false;
		hlt_bits5_isLoaded = false;
		hlt_bits6_isLoaded = false;
		hlt_bits7_isLoaded = false;
		hlt_bits8_isLoaded = false;
		evt_njets_isLoaded = false;
		evt_njpts_isLoaded = false;
		l1_bits1_isLoaded = false;
		l1_bits2_isLoaded = false;
		l1_bits3_isLoaded = false;
		l1_bits4_isLoaded = false;
		l1_techbits1_isLoaded = false;
		l1_techbits2_isLoaded = false;
		evt_nphotons_isLoaded = false;
		evt_nscs_isLoaded = false;
		evt_nscjets_isLoaded = false;
		evt_ntrkjets_isLoaded = false;
		evt_nvtxs_isLoaded = false;
		twrs_numBadEcalCells_isLoaded = false;
		twrs_numBadHcalCells_isLoaded = false;
		twrs_numProblematicEcalCells_isLoaded = false;
		twrs_numProblematicHcalCells_isLoaded = false;
		twrs_numRecoveredEcalCells_isLoaded = false;
		twrs_numRecoveredHcalCells_isLoaded = false;
		evt_scale1fb_isLoaded = false;
		evt_xsec_excl_isLoaded = false;
		evt_xsec_incl_isLoaded = false;
		evt_kfactor_isLoaded = false;
		evt_nEvts_isLoaded = false;
		evt_filt_eff_isLoaded = false;
	}

void LoadAllBranches() 
	// load all branches
{
	if (evt_CMS2tag_branch != 0) evt_CMS2tag();
	if (evt_dataset_branch != 0) evt_dataset();
	if (hlt_trigNames_branch != 0) hlt_trigNames();
	if (l1_trigNames_branch != 0) l1_trigNames();
	if (jets_closestElectron_DR_branch != 0) jets_closestElectron_DR();
	if (jets_closestMuon_DR_branch != 0) jets_closestMuon_DR();
	if (evt_bs_Xwidth_branch != 0) evt_bs_Xwidth();
	if (evt_bs_XwidthErr_branch != 0) evt_bs_XwidthErr();
	if (evt_bs_Ywidth_branch != 0) evt_bs_Ywidth();
	if (evt_bs_YwidthErr_branch != 0) evt_bs_YwidthErr();
	if (evt_bs_dxdz_branch != 0) evt_bs_dxdz();
	if (evt_bs_dxdzErr_branch != 0) evt_bs_dxdzErr();
	if (evt_bs_dydz_branch != 0) evt_bs_dydz();
	if (evt_bs_dydzErr_branch != 0) evt_bs_dydzErr();
	if (evt_bs_sigmaZ_branch != 0) evt_bs_sigmaZ();
	if (evt_bs_sigmaZErr_branch != 0) evt_bs_sigmaZErr();
	if (evt_bs_xErr_branch != 0) evt_bs_xErr();
	if (evt_bs_yErr_branch != 0) evt_bs_yErr();
	if (evt_bs_zErr_branch != 0) evt_bs_zErr();
	if (evt_bField_branch != 0) evt_bField();
	if (hcalnoise_eventChargeFraction_branch != 0) hcalnoise_eventChargeFraction();
	if (hcalnoise_eventEMEnergy_branch != 0) hcalnoise_eventEMEnergy();
	if (hcalnoise_eventEMFraction_branch != 0) hcalnoise_eventEMFraction();
	if (hcalnoise_eventHadEnergy_branch != 0) hcalnoise_eventHadEnergy();
	if (hcalnoise_eventTrackEnergy_branch != 0) hcalnoise_eventTrackEnergy();
	if (hcalnoise_max10GeVHitTime_branch != 0) hcalnoise_max10GeVHitTime();
	if (hcalnoise_max25GeVHitTime_branch != 0) hcalnoise_max25GeVHitTime();
	if (hcalnoise_min10GeVHitTime_branch != 0) hcalnoise_min10GeVHitTime();
	if (hcalnoise_min25GeVHitTime_branch != 0) hcalnoise_min25GeVHitTime();
	if (hcalnoise_minE10TS_branch != 0) hcalnoise_minE10TS();
	if (hcalnoise_minE2Over10TS_branch != 0) hcalnoise_minE2Over10TS();
	if (hcalnoise_minE2TS_branch != 0) hcalnoise_minE2TS();
	if (hcalnoise_minHPDEMF_branch != 0) hcalnoise_minHPDEMF();
	if (hcalnoise_minRBXEMF_branch != 0) hcalnoise_minRBXEMF();
	if (hcalnoise_rms10GeVHitTime_branch != 0) hcalnoise_rms10GeVHitTime();
	if (hcalnoise_rms25GeVHitTime_branch != 0) hcalnoise_rms25GeVHitTime();
	if (l1_met_etTot_branch != 0) l1_met_etTot();
	if (l1_met_met_branch != 0) l1_met_met();
	if (l1_mht_htTot_branch != 0) l1_mht_htTot();
	if (l1_mht_mht_branch != 0) l1_mht_mht();
	if (evt_ecalendcapm_met_branch != 0) evt_ecalendcapm_met();
	if (evt_ecalendcapm_metPhi_branch != 0) evt_ecalendcapm_metPhi();
	if (evt_ecalendcapp_met_branch != 0) evt_ecalendcapp_met();
	if (evt_ecalendcapp_metPhi_branch != 0) evt_ecalendcapp_metPhi();
	if (evt_ecalmet_branch != 0) evt_ecalmet();
	if (evt_ecalmetPhi_branch != 0) evt_ecalmetPhi();
	if (evt_endcapm_met_branch != 0) evt_endcapm_met();
	if (evt_endcapm_metPhi_branch != 0) evt_endcapm_metPhi();
	if (evt_endcapp_met_branch != 0) evt_endcapp_met();
	if (evt_endcapp_metPhi_branch != 0) evt_endcapp_metPhi();
	if (evt_hcalendcapm_met_branch != 0) evt_hcalendcapm_met();
	if (evt_hcalendcapm_metPhi_branch != 0) evt_hcalendcapm_metPhi();
	if (evt_hcalendcapp_met_branch != 0) evt_hcalendcapp_met();
	if (evt_hcalendcapp_metPhi_branch != 0) evt_hcalendcapp_metPhi();
	if (evt_hcalmet_branch != 0) evt_hcalmet();
	if (evt_hcalmetPhi_branch != 0) evt_hcalmetPhi();
	if (evt_met_branch != 0) evt_met();
	if (evt_metHO_branch != 0) evt_metHO();
	if (evt_metHOPhi_branch != 0) evt_metHOPhi();
	if (evt_metHOSig_branch != 0) evt_metHOSig();
	if (evt_metMuonCorr_branch != 0) evt_metMuonCorr();
	if (evt_metMuonCorrPhi_branch != 0) evt_metMuonCorrPhi();
	if (evt_metMuonCorrSig_branch != 0) evt_metMuonCorrSig();
	if (evt_metMuonJESCorr_branch != 0) evt_metMuonJESCorr();
	if (evt_metMuonJESCorrPhi_branch != 0) evt_metMuonJESCorrPhi();
	if (evt_metMuonJESCorrSig_branch != 0) evt_metMuonJESCorrSig();
	if (evt_metNoHF_branch != 0) evt_metNoHF();
	if (evt_metNoHFHO_branch != 0) evt_metNoHFHO();
	if (evt_metNoHFHOPhi_branch != 0) evt_metNoHFHOPhi();
	if (evt_metNoHFHOSig_branch != 0) evt_metNoHFHOSig();
	if (evt_metNoHFPhi_branch != 0) evt_metNoHFPhi();
	if (evt_metNoHFSig_branch != 0) evt_metNoHFSig();
	if (evt_metOpt_branch != 0) evt_metOpt();
	if (evt_metOptHO_branch != 0) evt_metOptHO();
	if (evt_metOptHOPhi_branch != 0) evt_metOptHOPhi();
	if (evt_metOptHOSig_branch != 0) evt_metOptHOSig();
	if (evt_metOptNoHF_branch != 0) evt_metOptNoHF();
	if (evt_metOptNoHFHO_branch != 0) evt_metOptNoHFHO();
	if (evt_metOptNoHFHOPhi_branch != 0) evt_metOptNoHFHOPhi();
	if (evt_metOptNoHFHOSig_branch != 0) evt_metOptNoHFHOSig();
	if (evt_metOptNoHFPhi_branch != 0) evt_metOptNoHFPhi();
	if (evt_metOptNoHFSig_branch != 0) evt_metOptNoHFSig();
	if (evt_metOptPhi_branch != 0) evt_metOptPhi();
	if (evt_metOptSig_branch != 0) evt_metOptSig();
	if (evt_metPhi_branch != 0) evt_metPhi();
	if (evt_metSig_branch != 0) evt_metSig();
	if (evt_sumet_branch != 0) evt_sumet();
	if (evt_sumetHO_branch != 0) evt_sumetHO();
	if (evt_sumetMuonCorr_branch != 0) evt_sumetMuonCorr();
	if (evt_sumetNoHF_branch != 0) evt_sumetNoHF();
	if (evt_sumetNoHFHO_branch != 0) evt_sumetNoHFHO();
	if (evt_sumetOpt_branch != 0) evt_sumetOpt();
	if (evt_sumetOptHO_branch != 0) evt_sumetOptHO();
	if (evt_sumetOptNoHF_branch != 0) evt_sumetOptNoHF();
	if (evt_sumetOptNoHFHO_branch != 0) evt_sumetOptNoHFHO();
	if (evt_pfmet_branch != 0) evt_pfmet();
	if (evt_pfmetPhi_branch != 0) evt_pfmetPhi();
	if (evt_pfmetSig_branch != 0) evt_pfmetSig();
	if (evt_pfsumet_branch != 0) evt_pfsumet();
	if (evt_tcmet_branch != 0) evt_tcmet();
	if (evt_tcmetPhi_branch != 0) evt_tcmetPhi();
	if (evt_tcmetSig_branch != 0) evt_tcmetSig();
	if (evt_tcsumet_branch != 0) evt_tcsumet();
	if (evt_bsp4_branch != 0) evt_bsp4();
	if (l1_met_p4_branch != 0) l1_met_p4();
	if (l1_mht_p4_branch != 0) l1_mht_p4();
	if (els_inner_position_branch != 0) els_inner_position();
	if (els_outer_position_branch != 0) els_outer_position();
	if (els_p4_branch != 0) els_p4();
	if (els_p4In_branch != 0) els_p4In();
	if (els_p4Out_branch != 0) els_p4Out();
	if (els_trk_p4_branch != 0) els_trk_p4();
	if (els_vertex_p4_branch != 0) els_vertex_p4();
	if (jets_p4_branch != 0) jets_p4();
	if (jets_vertex_p4_branch != 0) jets_vertex_p4();
	if (jpts_p4_branch != 0) jpts_p4();
	if (l1_emiso_p4_branch != 0) l1_emiso_p4();
	if (l1_emnoiso_p4_branch != 0) l1_emnoiso_p4();
	if (l1_jetsc_p4_branch != 0) l1_jetsc_p4();
	if (l1_jetsf_p4_branch != 0) l1_jetsf_p4();
	if (l1_jetst_p4_branch != 0) l1_jetst_p4();
	if (l1_mus_p4_branch != 0) l1_mus_p4();
	if (mus_fitdefault_p4_branch != 0) mus_fitdefault_p4();
	if (mus_fitfirsthit_p4_branch != 0) mus_fitfirsthit_p4();
	if (mus_fitpicky_p4_branch != 0) mus_fitpicky_p4();
	if (mus_fittev_p4_branch != 0) mus_fittev_p4();
	if (mus_gfit_outerPos_p4_branch != 0) mus_gfit_outerPos_p4();
	if (mus_gfit_p4_branch != 0) mus_gfit_p4();
	if (mus_gfit_vertex_p4_branch != 0) mus_gfit_vertex_p4();
	if (mus_p4_branch != 0) mus_p4();
	if (mus_sta_p4_branch != 0) mus_sta_p4();
	if (mus_sta_vertex_p4_branch != 0) mus_sta_vertex_p4();
	if (mus_trk_p4_branch != 0) mus_trk_p4();
	if (mus_vertex_p4_branch != 0) mus_vertex_p4();
	if (pfjets_p4_branch != 0) pfjets_p4();
	if (photons_p4_branch != 0) photons_p4();
	if (ran_trksecalp4_branch != 0) ran_trksecalp4();
	if (ran_trksp4_branch != 0) ran_trksp4();
	if (scs_p4_branch != 0) scs_p4();
	if (scs_pos_p4_branch != 0) scs_pos_p4();
	if (scs_vtx_p4_branch != 0) scs_vtx_p4();
	if (scjets_p4_branch != 0) scjets_p4();
	if (scjets_vertex_p4_branch != 0) scjets_vertex_p4();
	if (trks_inner_position_branch != 0) trks_inner_position();
	if (trks_outer_p4_branch != 0) trks_outer_p4();
	if (trks_outer_position_branch != 0) trks_outer_position();
	if (trks_trk_p4_branch != 0) trks_trk_p4();
	if (trks_vertex_p4_branch != 0) trks_vertex_p4();
	if (trkjets_p4_branch != 0) trkjets_p4();
	if (vtxs_position_branch != 0) vtxs_position();
	if (hlt_trigObjs_p4_branch != 0) hlt_trigObjs_p4();
	if (evt_covMatrix_branch != 0) evt_covMatrix();
	if (twrs_ecalTime_branch != 0) twrs_ecalTime();
	if (twrs_emEnergy_branch != 0) twrs_emEnergy();
	if (twrs_emEt_branch != 0) twrs_emEt();
	if (twrs_emEtcorr_branch != 0) twrs_emEtcorr();
	if (twrs_eta_branch != 0) twrs_eta();
	if (twrs_etcorr_branch != 0) twrs_etcorr();
	if (twrs_hadEnergy_branch != 0) twrs_hadEnergy();
	if (twrs_hadEt_branch != 0) twrs_hadEt();
	if (twrs_hadEtcorr_branch != 0) twrs_hadEtcorr();
	if (twrs_hcalTime_branch != 0) twrs_hcalTime();
	if (twrs_outerEnergy_branch != 0) twrs_outerEnergy();
	if (twrs_outerEt_branch != 0) twrs_outerEt();
	if (twrs_outerEtcorr_branch != 0) twrs_outerEtcorr();
	if (twrs_pcorr_branch != 0) twrs_pcorr();
	if (twrs_phi_branch != 0) twrs_phi();
	if (els_ecalJuraIso_branch != 0) els_ecalJuraIso();
	if (els_ecalJuraTowerIso_branch != 0) els_ecalJuraTowerIso();
	if (els_hcalConeIso_branch != 0) els_hcalConeIso();
	if (els_tkJuraIso_branch != 0) els_tkJuraIso();
	if (els_jetdr_branch != 0) els_jetdr();
	if (els_musdr_branch != 0) els_musdr();
	if (els_hcalDepth1OverEcal_branch != 0) els_hcalDepth1OverEcal();
	if (els_hcalDepth1TowerSumEt_branch != 0) els_hcalDepth1TowerSumEt();
	if (els_hcalDepth1TowerSumEt04_branch != 0) els_hcalDepth1TowerSumEt04();
	if (els_hcalDepth2OverEcal_branch != 0) els_hcalDepth2OverEcal();
	if (els_hcalDepth2TowerSumEt_branch != 0) els_hcalDepth2TowerSumEt();
	if (els_hcalDepth2TowerSumEt04_branch != 0) els_hcalDepth2TowerSumEt04();
	if (els_chi2_branch != 0) els_chi2();
	if (els_conv_dcot_branch != 0) els_conv_dcot();
	if (els_conv_dist_branch != 0) els_conv_dist();
	if (els_d0_branch != 0) els_d0();
	if (els_d0Err_branch != 0) els_d0Err();
	if (els_d0corr_branch != 0) els_d0corr();
	if (els_dEtaIn_branch != 0) els_dEtaIn();
	if (els_dEtaOut_branch != 0) els_dEtaOut();
	if (els_dPhiIn_branch != 0) els_dPhiIn();
	if (els_dPhiInPhiOut_branch != 0) els_dPhiInPhiOut();
	if (els_dPhiOut_branch != 0) els_dPhiOut();
	if (els_deltaEtaEleClusterTrackAtCalo_branch != 0) els_deltaEtaEleClusterTrackAtCalo();
	if (els_deltaPhiEleClusterTrackAtCalo_branch != 0) els_deltaPhiEleClusterTrackAtCalo();
	if (els_e1x5_branch != 0) els_e1x5();
	if (els_e2x5Max_branch != 0) els_e2x5Max();
	if (els_e3x3_branch != 0) els_e3x3();
	if (els_e5x5_branch != 0) els_e5x5();
	if (els_eMax_branch != 0) els_eMax();
	if (els_eOverPIn_branch != 0) els_eOverPIn();
	if (els_eOverPOut_branch != 0) els_eOverPOut();
	if (els_eSC_branch != 0) els_eSC();
	if (els_eSCPresh_branch != 0) els_eSCPresh();
	if (els_eSCRaw_branch != 0) els_eSCRaw();
	if (els_eSeed_branch != 0) els_eSeed();
	if (els_eSeedOverPIn_branch != 0) els_eSeedOverPIn();
	if (els_eSeedOverPOut_branch != 0) els_eSeedOverPOut();
	if (els_ecalEnergy_branch != 0) els_ecalEnergy();
	if (els_ecalEnergyError_branch != 0) els_ecalEnergyError();
	if (els_ecalIso_branch != 0) els_ecalIso();
	if (els_ecalIso04_branch != 0) els_ecalIso04();
	if (els_egamma_looseId_branch != 0) els_egamma_looseId();
	if (els_egamma_robustHighEnergy_branch != 0) els_egamma_robustHighEnergy();
	if (els_egamma_robustLooseId_branch != 0) els_egamma_robustLooseId();
	if (els_egamma_robustTightId_branch != 0) els_egamma_robustTightId();
	if (els_egamma_tightId_branch != 0) els_egamma_tightId();
	if (els_electronMomentumError_branch != 0) els_electronMomentumError();
	if (els_etaErr_branch != 0) els_etaErr();
	if (els_etaSC_branch != 0) els_etaSC();
	if (els_fbrem_branch != 0) els_fbrem();
	if (els_hOverE_branch != 0) els_hOverE();
	if (els_hcalIso_branch != 0) els_hcalIso();
	if (els_hcalIso04_branch != 0) els_hcalIso04();
	if (els_layer1_charge_branch != 0) els_layer1_charge();
	if (els_ndof_branch != 0) els_ndof();
	if (els_phiErr_branch != 0) els_phiErr();
	if (els_phiSC_branch != 0) els_phiSC();
	if (els_ptErr_branch != 0) els_ptErr();
	if (els_sigmaEtaEta_branch != 0) els_sigmaEtaEta();
	if (els_sigmaIEtaIEta_branch != 0) els_sigmaIEtaIEta();
	if (els_sigmaIPhiIPhi_branch != 0) els_sigmaIPhiIPhi();
	if (els_sigmaPhiPhi_branch != 0) els_sigmaPhiPhi();
	if (els_tkIso_branch != 0) els_tkIso();
	if (els_tkIso04_branch != 0) els_tkIso04();
	if (els_trackMomentumError_branch != 0) els_trackMomentumError();
	if (els_trkdr_branch != 0) els_trkdr();
	if (els_trkshFrac_branch != 0) els_trkshFrac();
	if (els_z0_branch != 0) els_z0();
	if (els_z0Err_branch != 0) els_z0Err();
	if (els_z0corr_branch != 0) els_z0corr();
	if (jets_cor_branch != 0) jets_cor();
	if (jets_emFrac_branch != 0) jets_emFrac();
	if (jets_fHPD_branch != 0) jets_fHPD();
	if (jets_fRBX_branch != 0) jets_fRBX();
	if (jets_fSubDetector1_branch != 0) jets_fSubDetector1();
	if (jets_fSubDetector2_branch != 0) jets_fSubDetector2();
	if (jets_fSubDetector3_branch != 0) jets_fSubDetector3();
	if (jets_fSubDetector4_branch != 0) jets_fSubDetector4();
	if (jets_n90Hits_branch != 0) jets_n90Hits();
	if (jets_nECALTowers_branch != 0) jets_nECALTowers();
	if (jets_nHCALTowers_branch != 0) jets_nHCALTowers();
	if (jets_restrictedEMF_branch != 0) jets_restrictedEMF();
	if (jpts_emFrac_branch != 0) jpts_emFrac();
	if (evt_ecalmet_etaslice_branch != 0) evt_ecalmet_etaslice();
	if (evt_ecalmet_etaslicePhi_branch != 0) evt_ecalmet_etaslicePhi();
	if (evt_hcalmet_etaslice_branch != 0) evt_hcalmet_etaslice();
	if (evt_hcalmet_etaslicePhi_branch != 0) evt_hcalmet_etaslicePhi();
	if (evt_towermet_etaslice_branch != 0) evt_towermet_etaslice();
	if (evt_towermet_etaslicePhi_branch != 0) evt_towermet_etaslicePhi();
	if (mus_met_deltax_branch != 0) mus_met_deltax();
	if (mus_met_deltay_branch != 0) mus_met_deltay();
	if (mus_eledr_branch != 0) mus_eledr();
	if (mus_jetdr_branch != 0) mus_jetdr();
	if (mus_caloCompatibility_branch != 0) mus_caloCompatibility();
	if (mus_chi2_branch != 0) mus_chi2();
	if (mus_d0_branch != 0) mus_d0();
	if (mus_d0Err_branch != 0) mus_d0Err();
	if (mus_d0corr_branch != 0) mus_d0corr();
	if (mus_e_em_branch != 0) mus_e_em();
	if (mus_e_emS9_branch != 0) mus_e_emS9();
	if (mus_e_had_branch != 0) mus_e_had();
	if (mus_e_hadS9_branch != 0) mus_e_hadS9();
	if (mus_e_ho_branch != 0) mus_e_ho();
	if (mus_e_hoS9_branch != 0) mus_e_hoS9();
	if (mus_etaErr_branch != 0) mus_etaErr();
	if (mus_gfit_chi2_branch != 0) mus_gfit_chi2();
	if (mus_gfit_d0_branch != 0) mus_gfit_d0();
	if (mus_gfit_d0Err_branch != 0) mus_gfit_d0Err();
	if (mus_gfit_d0corr_branch != 0) mus_gfit_d0corr();
	if (mus_gfit_ndof_branch != 0) mus_gfit_ndof();
	if (mus_gfit_qoverp_branch != 0) mus_gfit_qoverp();
	if (mus_gfit_qoverpError_branch != 0) mus_gfit_qoverpError();
	if (mus_gfit_z0_branch != 0) mus_gfit_z0();
	if (mus_gfit_z0Err_branch != 0) mus_gfit_z0Err();
	if (mus_gfit_z0corr_branch != 0) mus_gfit_z0corr();
	if (mus_iso03_emEt_branch != 0) mus_iso03_emEt();
	if (mus_iso03_hadEt_branch != 0) mus_iso03_hadEt();
	if (mus_iso03_hoEt_branch != 0) mus_iso03_hoEt();
	if (mus_iso03_sumPt_branch != 0) mus_iso03_sumPt();
	if (mus_iso05_emEt_branch != 0) mus_iso05_emEt();
	if (mus_iso05_hadEt_branch != 0) mus_iso05_hadEt();
	if (mus_iso05_hoEt_branch != 0) mus_iso05_hoEt();
	if (mus_iso05_sumPt_branch != 0) mus_iso05_sumPt();
	if (mus_iso_ecalvetoDep_branch != 0) mus_iso_ecalvetoDep();
	if (mus_iso_hcalvetoDep_branch != 0) mus_iso_hcalvetoDep();
	if (mus_iso_hovetoDep_branch != 0) mus_iso_hovetoDep();
	if (mus_iso_trckvetoDep_branch != 0) mus_iso_trckvetoDep();
	if (mus_ndof_branch != 0) mus_ndof();
	if (mus_phiErr_branch != 0) mus_phiErr();
	if (mus_ptErr_branch != 0) mus_ptErr();
	if (mus_qoverp_branch != 0) mus_qoverp();
	if (mus_qoverpError_branch != 0) mus_qoverpError();
	if (mus_sta_chi2_branch != 0) mus_sta_chi2();
	if (mus_sta_d0_branch != 0) mus_sta_d0();
	if (mus_sta_d0Err_branch != 0) mus_sta_d0Err();
	if (mus_sta_d0corr_branch != 0) mus_sta_d0corr();
	if (mus_sta_ndof_branch != 0) mus_sta_ndof();
	if (mus_sta_qoverp_branch != 0) mus_sta_qoverp();
	if (mus_sta_qoverpError_branch != 0) mus_sta_qoverpError();
	if (mus_sta_z0_branch != 0) mus_sta_z0();
	if (mus_sta_z0Err_branch != 0) mus_sta_z0Err();
	if (mus_sta_z0corr_branch != 0) mus_sta_z0corr();
	if (mus_timeAtIpInOut_branch != 0) mus_timeAtIpInOut();
	if (mus_timeAtIpInOutErr_branch != 0) mus_timeAtIpInOutErr();
	if (mus_timeAtIpOutIn_branch != 0) mus_timeAtIpOutIn();
	if (mus_timeAtIpOutInErr_branch != 0) mus_timeAtIpOutInErr();
	if (mus_vertexphi_branch != 0) mus_vertexphi();
	if (mus_z0_branch != 0) mus_z0();
	if (mus_z0Err_branch != 0) mus_z0Err();
	if (mus_z0corr_branch != 0) mus_z0corr();
	if (pfjets_chargedEmE_branch != 0) pfjets_chargedEmE();
	if (pfjets_chargedHadronE_branch != 0) pfjets_chargedHadronE();
	if (pfjets_cor_branch != 0) pfjets_cor();
	if (pfjets_neutralEmE_branch != 0) pfjets_neutralEmE();
	if (pfjets_neutralHadronE_branch != 0) pfjets_neutralHadronE();
	if (photons_e1x5_branch != 0) photons_e1x5();
	if (photons_e2x5Max_branch != 0) photons_e2x5Max();
	if (photons_e3x3_branch != 0) photons_e3x3();
	if (photons_e5x5_branch != 0) photons_e5x5();
	if (photons_eMax_branch != 0) photons_eMax();
	if (photons_eSC_branch != 0) photons_eSC();
	if (photons_eSCPresh_branch != 0) photons_eSCPresh();
	if (photons_eSCRaw_branch != 0) photons_eSCRaw();
	if (photons_eSeed_branch != 0) photons_eSeed();
	if (photons_ecalIso_branch != 0) photons_ecalIso();
	if (photons_hOverE_branch != 0) photons_hOverE();
	if (photons_hcalIso_branch != 0) photons_hcalIso();
	if (photons_sigmaEtaEta_branch != 0) photons_sigmaEtaEta();
	if (photons_sigmaIEtaIEta_branch != 0) photons_sigmaIEtaIEta();
	if (photons_sigmaIPhiIPhi_branch != 0) photons_sigmaIPhiIPhi();
	if (photons_sigmaPhiPhi_branch != 0) photons_sigmaPhiPhi();
	if (photons_tkIsoHollow_branch != 0) photons_tkIsoHollow();
	if (photons_tkIsoSolid_branch != 0) photons_tkIsoSolid();
	if (ran_dRClosestTower_branch != 0) ran_dRClosestTower();
	if (ran_dRClosestTowerEmEt_branch != 0) ran_dRClosestTowerEmEt();
	if (ran_ecalIso03_egamma_branch != 0) ran_ecalIso03_egamma();
	if (ran_ecalIso03_mu_branch != 0) ran_ecalIso03_mu();
	if (ran_hcalD1Iso03_egamma_branch != 0) ran_hcalD1Iso03_egamma();
	if (ran_hcalD2Iso03_egamma_branch != 0) ran_hcalD2Iso03_egamma();
	if (ran_hcalIso03_egamma_branch != 0) ran_hcalIso03_egamma();
	if (ran_hcalIso03_mu_branch != 0) ran_hcalIso03_mu();
	if (ran_hoIso03_mu_branch != 0) ran_hoIso03_mu();
	if (ran_towerEmEt_branch != 0) ran_towerEmEt();
	if (ran_towerHadEt_branch != 0) ran_towerHadEt();
	if (ran_trkIso03_egamma_branch != 0) ran_trkIso03_egamma();
	if (ran_trkIso03_mu_branch != 0) ran_trkIso03_mu();
	if (scs_clustersSize_branch != 0) scs_clustersSize();
	if (scs_crystalsSize_branch != 0) scs_crystalsSize();
	if (scs_e1x3_branch != 0) scs_e1x3();
	if (scs_e1x5_branch != 0) scs_e1x5();
	if (scs_e2nd_branch != 0) scs_e2nd();
	if (scs_e2x2_branch != 0) scs_e2x2();
	if (scs_e2x5Max_branch != 0) scs_e2x5Max();
	if (scs_e3x1_branch != 0) scs_e3x1();
	if (scs_e3x2_branch != 0) scs_e3x2();
	if (scs_e3x3_branch != 0) scs_e3x3();
	if (scs_e4x4_branch != 0) scs_e4x4();
	if (scs_e5x5_branch != 0) scs_e5x5();
	if (scs_eMax_branch != 0) scs_eMax();
	if (scs_eSeed_branch != 0) scs_eSeed();
	if (scs_energy_branch != 0) scs_energy();
	if (scs_eta_branch != 0) scs_eta();
	if (scs_hoe_branch != 0) scs_hoe();
	if (scs_phi_branch != 0) scs_phi();
	if (scs_preshowerEnergy_branch != 0) scs_preshowerEnergy();
	if (scs_rawEnergy_branch != 0) scs_rawEnergy();
	if (scs_sigmaEtaEta_branch != 0) scs_sigmaEtaEta();
	if (scs_sigmaEtaPhi_branch != 0) scs_sigmaEtaPhi();
	if (scs_sigmaIEtaIEta_branch != 0) scs_sigmaIEtaIEta();
	if (scs_sigmaIEtaIPhi_branch != 0) scs_sigmaIEtaIPhi();
	if (scs_sigmaIPhiIPhi_branch != 0) scs_sigmaIPhiIPhi();
	if (scs_sigmaPhiPhi_branch != 0) scs_sigmaPhiPhi();
	if (scjets_cor_branch != 0) scjets_cor();
	if (scjets_emFrac_branch != 0) scjets_emFrac();
	if (scjets_fHPD_branch != 0) scjets_fHPD();
	if (scjets_fRBX_branch != 0) scjets_fRBX();
	if (scjets_fSubDetector1_branch != 0) scjets_fSubDetector1();
	if (scjets_fSubDetector2_branch != 0) scjets_fSubDetector2();
	if (scjets_fSubDetector3_branch != 0) scjets_fSubDetector3();
	if (scjets_fSubDetector4_branch != 0) scjets_fSubDetector4();
	if (scjets_n90Hits_branch != 0) scjets_n90Hits();
	if (scjets_nECALTowers_branch != 0) scjets_nECALTowers();
	if (scjets_nHCALTowers_branch != 0) scjets_nHCALTowers();
	if (scjets_restrictedEMF_branch != 0) scjets_restrictedEMF();
	if (mus_tcmet_deltax_branch != 0) mus_tcmet_deltax();
	if (mus_tcmet_deltay_branch != 0) mus_tcmet_deltay();
	if (trks_chi2_branch != 0) trks_chi2();
	if (trks_d0_branch != 0) trks_d0();
	if (trks_d0Err_branch != 0) trks_d0Err();
	if (trks_d0corr_branch != 0) trks_d0corr();
	if (trks_d0corrPhi_branch != 0) trks_d0corrPhi();
	if (trks_etaErr_branch != 0) trks_etaErr();
	if (trks_layer1_charge_branch != 0) trks_layer1_charge();
	if (trks_ndof_branch != 0) trks_ndof();
	if (trks_phiErr_branch != 0) trks_phiErr();
	if (trks_ptErr_branch != 0) trks_ptErr();
	if (trks_z0_branch != 0) trks_z0();
	if (trks_z0Err_branch != 0) trks_z0Err();
	if (trks_z0corr_branch != 0) trks_z0corr();
	if (vtxs_chi2_branch != 0) vtxs_chi2();
	if (vtxs_ndof_branch != 0) vtxs_ndof();
	if (vtxs_xError_branch != 0) vtxs_xError();
	if (vtxs_yError_branch != 0) vtxs_yError();
	if (vtxs_zError_branch != 0) vtxs_zError();
	if (vtxs_covMatrix_branch != 0) vtxs_covMatrix();
	if (evt_cscLooseHaloId_branch != 0) evt_cscLooseHaloId();
	if (evt_cscTightHaloId_branch != 0) evt_cscTightHaloId();
	if (evt_ecalLooseHaloId_branch != 0) evt_ecalLooseHaloId();
	if (evt_ecalTightHaloId_branch != 0) evt_ecalTightHaloId();
	if (evt_extremeTightHaloId_branch != 0) evt_extremeTightHaloId();
	if (evt_globalLooseHaloId_branch != 0) evt_globalLooseHaloId();
	if (evt_globalTightHaloId_branch != 0) evt_globalTightHaloId();
	if (evt_hcalLooseHaloId_branch != 0) evt_hcalLooseHaloId();
	if (evt_hcalTightHaloId_branch != 0) evt_hcalTightHaloId();
	if (evt_looseHaloId_branch != 0) evt_looseHaloId();
	if (evt_tightHaloId_branch != 0) evt_tightHaloId();
	if (evt_bsType_branch != 0) evt_bsType();
	if (evt_bunchCrossing_branch != 0) evt_bunchCrossing();
	if (evt_experimentType_branch != 0) evt_experimentType();
	if (evt_orbitNumber_branch != 0) evt_orbitNumber();
	if (evt_storeNumber_branch != 0) evt_storeNumber();
	if (hcalnoise_maxHPDHits_branch != 0) hcalnoise_maxHPDHits();
	if (hcalnoise_maxRBXHits_branch != 0) hcalnoise_maxRBXHits();
	if (hcalnoise_maxZeros_branch != 0) hcalnoise_maxZeros();
	if (hcalnoise_noiseFilterStatus_branch != 0) hcalnoise_noiseFilterStatus();
	if (hcalnoise_noiseType_branch != 0) hcalnoise_noiseType();
	if (hcalnoise_num10GeVHits_branch != 0) hcalnoise_num10GeVHits();
	if (hcalnoise_num25GeVHits_branch != 0) hcalnoise_num25GeVHits();
	if (hcalnoise_numProblematicRBXs_branch != 0) hcalnoise_numProblematicRBXs();
	if (hcalnoise_passHighLevelNoiseFilter_branch != 0) hcalnoise_passHighLevelNoiseFilter();
	if (hcalnoise_passLooseNoiseFilter_branch != 0) hcalnoise_passLooseNoiseFilter();
	if (hcalnoise_passTightNoiseFilter_branch != 0) hcalnoise_passTightNoiseFilter();
	if (l1_nemiso_branch != 0) l1_nemiso();
	if (l1_nemnoiso_branch != 0) l1_nemnoiso();
	if (l1_njetsc_branch != 0) l1_njetsc();
	if (l1_njetsf_branch != 0) l1_njetsf();
	if (l1_njetst_branch != 0) l1_njetst();
	if (l1_nmus_branch != 0) l1_nmus();
	if (evt_ecaliPhiSuspects_branch != 0) evt_ecaliPhiSuspects();
	if (evt_globaliPhiSuspects_branch != 0) evt_globaliPhiSuspects();
	if (evt_hcaliPhiSuspects_branch != 0) evt_hcaliPhiSuspects();
	if (els_closestJet_branch != 0) els_closestJet();
	if (els_closestMuon_branch != 0) els_closestMuon();
	if (els_category_branch != 0) els_category();
	if (els_charge_branch != 0) els_charge();
	if (els_class_branch != 0) els_class();
	if (els_conv_tkidx_branch != 0) els_conv_tkidx();
	if (els_exp_innerlayers_branch != 0) els_exp_innerlayers();
	if (els_exp_outerlayers_branch != 0) els_exp_outerlayers();
	if (els_fiduciality_branch != 0) els_fiduciality();
	if (els_layer1_det_branch != 0) els_layer1_det();
	if (els_layer1_layer_branch != 0) els_layer1_layer();
	if (els_layer1_sizerphi_branch != 0) els_layer1_sizerphi();
	if (els_layer1_sizerz_branch != 0) els_layer1_sizerz();
	if (els_lostHits_branch != 0) els_lostHits();
	if (els_lost_pixelhits_branch != 0) els_lost_pixelhits();
	if (els_nSeed_branch != 0) els_nSeed();
	if (els_sccharge_branch != 0) els_sccharge();
	if (els_trk_charge_branch != 0) els_trk_charge();
	if (els_trkidx_branch != 0) els_trkidx();
	if (els_type_branch != 0) els_type();
	if (els_validHits_branch != 0) els_validHits();
	if (els_valid_pixelhits_branch != 0) els_valid_pixelhits();
	if (jets_closestElectron_branch != 0) jets_closestElectron();
	if (jets_closestMuon_branch != 0) jets_closestMuon();
	if (l1_emiso_ieta_branch != 0) l1_emiso_ieta();
	if (l1_emiso_iphi_branch != 0) l1_emiso_iphi();
	if (l1_emiso_rawId_branch != 0) l1_emiso_rawId();
	if (l1_emiso_type_branch != 0) l1_emiso_type();
	if (l1_emnoiso_ieta_branch != 0) l1_emnoiso_ieta();
	if (l1_emnoiso_iphi_branch != 0) l1_emnoiso_iphi();
	if (l1_emnoiso_rawId_branch != 0) l1_emnoiso_rawId();
	if (l1_emnoiso_type_branch != 0) l1_emnoiso_type();
	if (l1_jetsc_ieta_branch != 0) l1_jetsc_ieta();
	if (l1_jetsc_iphi_branch != 0) l1_jetsc_iphi();
	if (l1_jetsc_rawId_branch != 0) l1_jetsc_rawId();
	if (l1_jetsc_type_branch != 0) l1_jetsc_type();
	if (l1_jetsf_ieta_branch != 0) l1_jetsf_ieta();
	if (l1_jetsf_iphi_branch != 0) l1_jetsf_iphi();
	if (l1_jetsf_rawId_branch != 0) l1_jetsf_rawId();
	if (l1_jetsf_type_branch != 0) l1_jetsf_type();
	if (l1_jetst_ieta_branch != 0) l1_jetst_ieta();
	if (l1_jetst_iphi_branch != 0) l1_jetst_iphi();
	if (l1_jetst_rawId_branch != 0) l1_jetst_rawId();
	if (l1_jetst_type_branch != 0) l1_jetst_type();
	if (l1_mus_flags_branch != 0) l1_mus_flags();
	if (l1_mus_q_branch != 0) l1_mus_q();
	if (l1_mus_qual_branch != 0) l1_mus_qual();
	if (l1_mus_qualFlags_branch != 0) l1_mus_qualFlags();
	if (mus_met_flag_branch != 0) mus_met_flag();
	if (mus_closestEle_branch != 0) mus_closestEle();
	if (mus_closestJet_branch != 0) mus_closestJet();
	if (mus_charge_branch != 0) mus_charge();
	if (mus_gfit_validHits_branch != 0) mus_gfit_validHits();
	if (mus_gfit_validSTAHits_branch != 0) mus_gfit_validSTAHits();
	if (mus_gfit_validSiHits_branch != 0) mus_gfit_validSiHits();
	if (mus_goodmask_branch != 0) mus_goodmask();
	if (mus_iso03_ntrk_branch != 0) mus_iso03_ntrk();
	if (mus_iso05_ntrk_branch != 0) mus_iso05_ntrk();
	if (mus_lostHits_branch != 0) mus_lostHits();
	if (mus_nmatches_branch != 0) mus_nmatches();
	if (mus_pid_TM2DCompatibilityLoose_branch != 0) mus_pid_TM2DCompatibilityLoose();
	if (mus_pid_TM2DCompatibilityTight_branch != 0) mus_pid_TM2DCompatibilityTight();
	if (mus_pid_TMLastStationLoose_branch != 0) mus_pid_TMLastStationLoose();
	if (mus_pid_TMLastStationTight_branch != 0) mus_pid_TMLastStationTight();
	if (mus_sta_validHits_branch != 0) mus_sta_validHits();
	if (mus_timeDirection_branch != 0) mus_timeDirection();
	if (mus_timeNumStationsUsed_branch != 0) mus_timeNumStationsUsed();
	if (mus_trk_charge_branch != 0) mus_trk_charge();
	if (mus_trkidx_branch != 0) mus_trkidx();
	if (mus_type_branch != 0) mus_type();
	if (mus_validHits_branch != 0) mus_validHits();
	if (pfjets_chargedMultiplicity_branch != 0) pfjets_chargedMultiplicity();
	if (pfjets_muonMultiplicity_branch != 0) pfjets_muonMultiplicity();
	if (pfjets_neutralMultiplicity_branch != 0) pfjets_neutralMultiplicity();
	if (photons_fiduciality_branch != 0) photons_fiduciality();
	if (pxl_ndigis_pxb_branch != 0) pxl_ndigis_pxb();
	if (pxl_ndigis_pxf_branch != 0) pxl_ndigis_pxf();
	if (ran_srFlag_branch != 0) ran_srFlag();
	if (scs_elsidx_branch != 0) scs_elsidx();
	if (scs_severitySeed_branch != 0) scs_severitySeed();
	if (mus_tcmet_flag_branch != 0) mus_tcmet_flag();
	if (trks_algo_branch != 0) trks_algo();
	if (trks_charge_branch != 0) trks_charge();
	if (trks_exp_innerlayers_branch != 0) trks_exp_innerlayers();
	if (trks_exp_outerlayers_branch != 0) trks_exp_outerlayers();
	if (trks_layer1_det_branch != 0) trks_layer1_det();
	if (trks_layer1_layer_branch != 0) trks_layer1_layer();
	if (trks_layer1_sizerphi_branch != 0) trks_layer1_sizerphi();
	if (trks_layer1_sizerz_branch != 0) trks_layer1_sizerz();
	if (trks_lostHits_branch != 0) trks_lostHits();
	if (trks_lost_pixelhits_branch != 0) trks_lost_pixelhits();
	if (trks_nlayers_branch != 0) trks_nlayers();
	if (trks_nlayers3D_branch != 0) trks_nlayers3D();
	if (trks_nlayersLost_branch != 0) trks_nlayersLost();
	if (trks_qualityMask_branch != 0) trks_qualityMask();
	if (trks_validHits_branch != 0) trks_validHits();
	if (trks_valid_pixelhits_branch != 0) trks_valid_pixelhits();
	if (trks_elsidx_branch != 0) trks_elsidx();
	if (trk_musidx_branch != 0) trk_musidx();
	if (vtxs_isFake_branch != 0) vtxs_isFake();
	if (vtxs_isValid_branch != 0) vtxs_isValid();
	if (vtxs_tracksSize_branch != 0) vtxs_tracksSize();
	if (hlt_trigObjs_id_branch != 0) hlt_trigObjs_id();
	if (evt_ntwrs_branch != 0) evt_ntwrs();
	if (evt_nels_branch != 0) evt_nels();
	if (evt_event_branch != 0) evt_event();
	if (evt_lumiBlock_branch != 0) evt_lumiBlock();
	if (evt_run_branch != 0) evt_run();
	if (hlt_bits1_branch != 0) hlt_bits1();
	if (hlt_bits2_branch != 0) hlt_bits2();
	if (hlt_bits3_branch != 0) hlt_bits3();
	if (hlt_bits4_branch != 0) hlt_bits4();
	if (hlt_bits5_branch != 0) hlt_bits5();
	if (hlt_bits6_branch != 0) hlt_bits6();
	if (hlt_bits7_branch != 0) hlt_bits7();
	if (hlt_bits8_branch != 0) hlt_bits8();
	if (evt_njets_branch != 0) evt_njets();
	if (evt_njpts_branch != 0) evt_njpts();
	if (l1_bits1_branch != 0) l1_bits1();
	if (l1_bits2_branch != 0) l1_bits2();
	if (l1_bits3_branch != 0) l1_bits3();
	if (l1_bits4_branch != 0) l1_bits4();
	if (l1_techbits1_branch != 0) l1_techbits1();
	if (l1_techbits2_branch != 0) l1_techbits2();
	if (evt_nphotons_branch != 0) evt_nphotons();
	if (evt_nscs_branch != 0) evt_nscs();
	if (evt_nscjets_branch != 0) evt_nscjets();
	if (evt_ntrkjets_branch != 0) evt_ntrkjets();
	if (evt_nvtxs_branch != 0) evt_nvtxs();
	if (twrs_numBadEcalCells_branch != 0) twrs_numBadEcalCells();
	if (twrs_numBadHcalCells_branch != 0) twrs_numBadHcalCells();
	if (twrs_numProblematicEcalCells_branch != 0) twrs_numProblematicEcalCells();
	if (twrs_numProblematicHcalCells_branch != 0) twrs_numProblematicHcalCells();
	if (twrs_numRecoveredEcalCells_branch != 0) twrs_numRecoveredEcalCells();
	if (twrs_numRecoveredHcalCells_branch != 0) twrs_numRecoveredHcalCells();
	if (evt_scale1fb_branch != 0) evt_scale1fb();
	if (evt_xsec_excl_branch != 0) evt_xsec_excl();
	if (evt_xsec_incl_branch != 0) evt_xsec_incl();
	if (evt_kfactor_branch != 0) evt_kfactor();
	if (evt_nEvts_branch != 0) evt_nEvts();
	if (evt_filt_eff_branch != 0) evt_filt_eff();
}

	TString &evt_CMS2tag()
	{
		if (not evt_CMS2tag_isLoaded) {
			if (evt_CMS2tag_branch != 0) {
				evt_CMS2tag_branch->GetEntry(index);
			} else { 
				printf("branch evt_CMS2tag_branch does not exist!\n");
				exit(1);
			}
			evt_CMS2tag_isLoaded = true;
		}
		return evt_CMS2tag_;
	}
	TString &evt_dataset()
	{
		if (not evt_dataset_isLoaded) {
			if (evt_dataset_branch != 0) {
				evt_dataset_branch->GetEntry(index);
			} else { 
				printf("branch evt_dataset_branch does not exist!\n");
				exit(1);
			}
			evt_dataset_isLoaded = true;
		}
		return evt_dataset_;
	}
	vector<TString> &hlt_trigNames()
	{
		if (not hlt_trigNames_isLoaded) {
			if (hlt_trigNames_branch != 0) {
				hlt_trigNames_branch->GetEntry(index);
			} else { 
				printf("branch hlt_trigNames_branch does not exist!\n");
				exit(1);
			}
			hlt_trigNames_isLoaded = true;
		}
		return hlt_trigNames_;
	}
	vector<TString> &l1_trigNames()
	{
		if (not l1_trigNames_isLoaded) {
			if (l1_trigNames_branch != 0) {
				l1_trigNames_branch->GetEntry(index);
			} else { 
				printf("branch l1_trigNames_branch does not exist!\n");
				exit(1);
			}
			l1_trigNames_isLoaded = true;
		}
		return l1_trigNames_;
	}
	vector<double> &jets_closestElectron_DR()
	{
		if (not jets_closestElectron_DR_isLoaded) {
			if (jets_closestElectron_DR_branch != 0) {
				jets_closestElectron_DR_branch->GetEntry(index);
			} else { 
				printf("branch jets_closestElectron_DR_branch does not exist!\n");
				exit(1);
			}
			jets_closestElectron_DR_isLoaded = true;
		}
		return jets_closestElectron_DR_;
	}
	vector<double> &jets_closestMuon_DR()
	{
		if (not jets_closestMuon_DR_isLoaded) {
			if (jets_closestMuon_DR_branch != 0) {
				jets_closestMuon_DR_branch->GetEntry(index);
			} else { 
				printf("branch jets_closestMuon_DR_branch does not exist!\n");
				exit(1);
			}
			jets_closestMuon_DR_isLoaded = true;
		}
		return jets_closestMuon_DR_;
	}
	float &evt_bs_Xwidth()
	{
		if (not evt_bs_Xwidth_isLoaded) {
			if (evt_bs_Xwidth_branch != 0) {
				evt_bs_Xwidth_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_Xwidth_branch does not exist!\n");
				exit(1);
			}
			evt_bs_Xwidth_isLoaded = true;
		}
		return evt_bs_Xwidth_;
	}
	float &evt_bs_XwidthErr()
	{
		if (not evt_bs_XwidthErr_isLoaded) {
			if (evt_bs_XwidthErr_branch != 0) {
				evt_bs_XwidthErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_XwidthErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_XwidthErr_isLoaded = true;
		}
		return evt_bs_XwidthErr_;
	}
	float &evt_bs_Ywidth()
	{
		if (not evt_bs_Ywidth_isLoaded) {
			if (evt_bs_Ywidth_branch != 0) {
				evt_bs_Ywidth_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_Ywidth_branch does not exist!\n");
				exit(1);
			}
			evt_bs_Ywidth_isLoaded = true;
		}
		return evt_bs_Ywidth_;
	}
	float &evt_bs_YwidthErr()
	{
		if (not evt_bs_YwidthErr_isLoaded) {
			if (evt_bs_YwidthErr_branch != 0) {
				evt_bs_YwidthErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_YwidthErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_YwidthErr_isLoaded = true;
		}
		return evt_bs_YwidthErr_;
	}
	float &evt_bs_dxdz()
	{
		if (not evt_bs_dxdz_isLoaded) {
			if (evt_bs_dxdz_branch != 0) {
				evt_bs_dxdz_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dxdz_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dxdz_isLoaded = true;
		}
		return evt_bs_dxdz_;
	}
	float &evt_bs_dxdzErr()
	{
		if (not evt_bs_dxdzErr_isLoaded) {
			if (evt_bs_dxdzErr_branch != 0) {
				evt_bs_dxdzErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dxdzErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dxdzErr_isLoaded = true;
		}
		return evt_bs_dxdzErr_;
	}
	float &evt_bs_dydz()
	{
		if (not evt_bs_dydz_isLoaded) {
			if (evt_bs_dydz_branch != 0) {
				evt_bs_dydz_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dydz_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dydz_isLoaded = true;
		}
		return evt_bs_dydz_;
	}
	float &evt_bs_dydzErr()
	{
		if (not evt_bs_dydzErr_isLoaded) {
			if (evt_bs_dydzErr_branch != 0) {
				evt_bs_dydzErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dydzErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dydzErr_isLoaded = true;
		}
		return evt_bs_dydzErr_;
	}
	float &evt_bs_sigmaZ()
	{
		if (not evt_bs_sigmaZ_isLoaded) {
			if (evt_bs_sigmaZ_branch != 0) {
				evt_bs_sigmaZ_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_sigmaZ_branch does not exist!\n");
				exit(1);
			}
			evt_bs_sigmaZ_isLoaded = true;
		}
		return evt_bs_sigmaZ_;
	}
	float &evt_bs_sigmaZErr()
	{
		if (not evt_bs_sigmaZErr_isLoaded) {
			if (evt_bs_sigmaZErr_branch != 0) {
				evt_bs_sigmaZErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_sigmaZErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_sigmaZErr_isLoaded = true;
		}
		return evt_bs_sigmaZErr_;
	}
	float &evt_bs_xErr()
	{
		if (not evt_bs_xErr_isLoaded) {
			if (evt_bs_xErr_branch != 0) {
				evt_bs_xErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_xErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_xErr_isLoaded = true;
		}
		return evt_bs_xErr_;
	}
	float &evt_bs_yErr()
	{
		if (not evt_bs_yErr_isLoaded) {
			if (evt_bs_yErr_branch != 0) {
				evt_bs_yErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_yErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_yErr_isLoaded = true;
		}
		return evt_bs_yErr_;
	}
	float &evt_bs_zErr()
	{
		if (not evt_bs_zErr_isLoaded) {
			if (evt_bs_zErr_branch != 0) {
				evt_bs_zErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_zErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_zErr_isLoaded = true;
		}
		return evt_bs_zErr_;
	}
	float &evt_bField()
	{
		if (not evt_bField_isLoaded) {
			if (evt_bField_branch != 0) {
				evt_bField_branch->GetEntry(index);
			} else { 
				printf("branch evt_bField_branch does not exist!\n");
				exit(1);
			}
			evt_bField_isLoaded = true;
		}
		return evt_bField_;
	}
	float &hcalnoise_eventChargeFraction()
	{
		if (not hcalnoise_eventChargeFraction_isLoaded) {
			if (hcalnoise_eventChargeFraction_branch != 0) {
				hcalnoise_eventChargeFraction_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventChargeFraction_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventChargeFraction_isLoaded = true;
		}
		return hcalnoise_eventChargeFraction_;
	}
	float &hcalnoise_eventEMEnergy()
	{
		if (not hcalnoise_eventEMEnergy_isLoaded) {
			if (hcalnoise_eventEMEnergy_branch != 0) {
				hcalnoise_eventEMEnergy_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventEMEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventEMEnergy_isLoaded = true;
		}
		return hcalnoise_eventEMEnergy_;
	}
	float &hcalnoise_eventEMFraction()
	{
		if (not hcalnoise_eventEMFraction_isLoaded) {
			if (hcalnoise_eventEMFraction_branch != 0) {
				hcalnoise_eventEMFraction_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventEMFraction_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventEMFraction_isLoaded = true;
		}
		return hcalnoise_eventEMFraction_;
	}
	float &hcalnoise_eventHadEnergy()
	{
		if (not hcalnoise_eventHadEnergy_isLoaded) {
			if (hcalnoise_eventHadEnergy_branch != 0) {
				hcalnoise_eventHadEnergy_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventHadEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventHadEnergy_isLoaded = true;
		}
		return hcalnoise_eventHadEnergy_;
	}
	float &hcalnoise_eventTrackEnergy()
	{
		if (not hcalnoise_eventTrackEnergy_isLoaded) {
			if (hcalnoise_eventTrackEnergy_branch != 0) {
				hcalnoise_eventTrackEnergy_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventTrackEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventTrackEnergy_isLoaded = true;
		}
		return hcalnoise_eventTrackEnergy_;
	}
	float &hcalnoise_max10GeVHitTime()
	{
		if (not hcalnoise_max10GeVHitTime_isLoaded) {
			if (hcalnoise_max10GeVHitTime_branch != 0) {
				hcalnoise_max10GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_max10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_max10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_max10GeVHitTime_;
	}
	float &hcalnoise_max25GeVHitTime()
	{
		if (not hcalnoise_max25GeVHitTime_isLoaded) {
			if (hcalnoise_max25GeVHitTime_branch != 0) {
				hcalnoise_max25GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_max25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_max25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_max25GeVHitTime_;
	}
	float &hcalnoise_min10GeVHitTime()
	{
		if (not hcalnoise_min10GeVHitTime_isLoaded) {
			if (hcalnoise_min10GeVHitTime_branch != 0) {
				hcalnoise_min10GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_min10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_min10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_min10GeVHitTime_;
	}
	float &hcalnoise_min25GeVHitTime()
	{
		if (not hcalnoise_min25GeVHitTime_isLoaded) {
			if (hcalnoise_min25GeVHitTime_branch != 0) {
				hcalnoise_min25GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_min25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_min25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_min25GeVHitTime_;
	}
	float &hcalnoise_minE10TS()
	{
		if (not hcalnoise_minE10TS_isLoaded) {
			if (hcalnoise_minE10TS_branch != 0) {
				hcalnoise_minE10TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minE10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE10TS_isLoaded = true;
		}
		return hcalnoise_minE10TS_;
	}
	float &hcalnoise_minE2Over10TS()
	{
		if (not hcalnoise_minE2Over10TS_isLoaded) {
			if (hcalnoise_minE2Over10TS_branch != 0) {
				hcalnoise_minE2Over10TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minE2Over10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE2Over10TS_isLoaded = true;
		}
		return hcalnoise_minE2Over10TS_;
	}
	float &hcalnoise_minE2TS()
	{
		if (not hcalnoise_minE2TS_isLoaded) {
			if (hcalnoise_minE2TS_branch != 0) {
				hcalnoise_minE2TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minE2TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE2TS_isLoaded = true;
		}
		return hcalnoise_minE2TS_;
	}
	float &hcalnoise_minHPDEMF()
	{
		if (not hcalnoise_minHPDEMF_isLoaded) {
			if (hcalnoise_minHPDEMF_branch != 0) {
				hcalnoise_minHPDEMF_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minHPDEMF_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minHPDEMF_isLoaded = true;
		}
		return hcalnoise_minHPDEMF_;
	}
	float &hcalnoise_minRBXEMF()
	{
		if (not hcalnoise_minRBXEMF_isLoaded) {
			if (hcalnoise_minRBXEMF_branch != 0) {
				hcalnoise_minRBXEMF_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minRBXEMF_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minRBXEMF_isLoaded = true;
		}
		return hcalnoise_minRBXEMF_;
	}
	float &hcalnoise_rms10GeVHitTime()
	{
		if (not hcalnoise_rms10GeVHitTime_isLoaded) {
			if (hcalnoise_rms10GeVHitTime_branch != 0) {
				hcalnoise_rms10GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_rms10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_rms10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_rms10GeVHitTime_;
	}
	float &hcalnoise_rms25GeVHitTime()
	{
		if (not hcalnoise_rms25GeVHitTime_isLoaded) {
			if (hcalnoise_rms25GeVHitTime_branch != 0) {
				hcalnoise_rms25GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_rms25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_rms25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_rms25GeVHitTime_;
	}
	float &l1_met_etTot()
	{
		if (not l1_met_etTot_isLoaded) {
			if (l1_met_etTot_branch != 0) {
				l1_met_etTot_branch->GetEntry(index);
			} else { 
				printf("branch l1_met_etTot_branch does not exist!\n");
				exit(1);
			}
			l1_met_etTot_isLoaded = true;
		}
		return l1_met_etTot_;
	}
	float &l1_met_met()
	{
		if (not l1_met_met_isLoaded) {
			if (l1_met_met_branch != 0) {
				l1_met_met_branch->GetEntry(index);
			} else { 
				printf("branch l1_met_met_branch does not exist!\n");
				exit(1);
			}
			l1_met_met_isLoaded = true;
		}
		return l1_met_met_;
	}
	float &l1_mht_htTot()
	{
		if (not l1_mht_htTot_isLoaded) {
			if (l1_mht_htTot_branch != 0) {
				l1_mht_htTot_branch->GetEntry(index);
			} else { 
				printf("branch l1_mht_htTot_branch does not exist!\n");
				exit(1);
			}
			l1_mht_htTot_isLoaded = true;
		}
		return l1_mht_htTot_;
	}
	float &l1_mht_mht()
	{
		if (not l1_mht_mht_isLoaded) {
			if (l1_mht_mht_branch != 0) {
				l1_mht_mht_branch->GetEntry(index);
			} else { 
				printf("branch l1_mht_mht_branch does not exist!\n");
				exit(1);
			}
			l1_mht_mht_isLoaded = true;
		}
		return l1_mht_mht_;
	}
	float &evt_ecalendcapm_met()
	{
		if (not evt_ecalendcapm_met_isLoaded) {
			if (evt_ecalendcapm_met_branch != 0) {
				evt_ecalendcapm_met_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalendcapm_met_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapm_met_isLoaded = true;
		}
		return evt_ecalendcapm_met_;
	}
	float &evt_ecalendcapm_metPhi()
	{
		if (not evt_ecalendcapm_metPhi_isLoaded) {
			if (evt_ecalendcapm_metPhi_branch != 0) {
				evt_ecalendcapm_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalendcapm_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapm_metPhi_isLoaded = true;
		}
		return evt_ecalendcapm_metPhi_;
	}
	float &evt_ecalendcapp_met()
	{
		if (not evt_ecalendcapp_met_isLoaded) {
			if (evt_ecalendcapp_met_branch != 0) {
				evt_ecalendcapp_met_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalendcapp_met_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapp_met_isLoaded = true;
		}
		return evt_ecalendcapp_met_;
	}
	float &evt_ecalendcapp_metPhi()
	{
		if (not evt_ecalendcapp_metPhi_isLoaded) {
			if (evt_ecalendcapp_metPhi_branch != 0) {
				evt_ecalendcapp_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalendcapp_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalendcapp_metPhi_isLoaded = true;
		}
		return evt_ecalendcapp_metPhi_;
	}
	float &evt_ecalmet()
	{
		if (not evt_ecalmet_isLoaded) {
			if (evt_ecalmet_branch != 0) {
				evt_ecalmet_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalmet_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmet_isLoaded = true;
		}
		return evt_ecalmet_;
	}
	float &evt_ecalmetPhi()
	{
		if (not evt_ecalmetPhi_isLoaded) {
			if (evt_ecalmetPhi_branch != 0) {
				evt_ecalmetPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmetPhi_isLoaded = true;
		}
		return evt_ecalmetPhi_;
	}
	float &evt_endcapm_met()
	{
		if (not evt_endcapm_met_isLoaded) {
			if (evt_endcapm_met_branch != 0) {
				evt_endcapm_met_branch->GetEntry(index);
			} else { 
				printf("branch evt_endcapm_met_branch does not exist!\n");
				exit(1);
			}
			evt_endcapm_met_isLoaded = true;
		}
		return evt_endcapm_met_;
	}
	float &evt_endcapm_metPhi()
	{
		if (not evt_endcapm_metPhi_isLoaded) {
			if (evt_endcapm_metPhi_branch != 0) {
				evt_endcapm_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_endcapm_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_endcapm_metPhi_isLoaded = true;
		}
		return evt_endcapm_metPhi_;
	}
	float &evt_endcapp_met()
	{
		if (not evt_endcapp_met_isLoaded) {
			if (evt_endcapp_met_branch != 0) {
				evt_endcapp_met_branch->GetEntry(index);
			} else { 
				printf("branch evt_endcapp_met_branch does not exist!\n");
				exit(1);
			}
			evt_endcapp_met_isLoaded = true;
		}
		return evt_endcapp_met_;
	}
	float &evt_endcapp_metPhi()
	{
		if (not evt_endcapp_metPhi_isLoaded) {
			if (evt_endcapp_metPhi_branch != 0) {
				evt_endcapp_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_endcapp_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_endcapp_metPhi_isLoaded = true;
		}
		return evt_endcapp_metPhi_;
	}
	float &evt_hcalendcapm_met()
	{
		if (not evt_hcalendcapm_met_isLoaded) {
			if (evt_hcalendcapm_met_branch != 0) {
				evt_hcalendcapm_met_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalendcapm_met_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapm_met_isLoaded = true;
		}
		return evt_hcalendcapm_met_;
	}
	float &evt_hcalendcapm_metPhi()
	{
		if (not evt_hcalendcapm_metPhi_isLoaded) {
			if (evt_hcalendcapm_metPhi_branch != 0) {
				evt_hcalendcapm_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalendcapm_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapm_metPhi_isLoaded = true;
		}
		return evt_hcalendcapm_metPhi_;
	}
	float &evt_hcalendcapp_met()
	{
		if (not evt_hcalendcapp_met_isLoaded) {
			if (evt_hcalendcapp_met_branch != 0) {
				evt_hcalendcapp_met_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalendcapp_met_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapp_met_isLoaded = true;
		}
		return evt_hcalendcapp_met_;
	}
	float &evt_hcalendcapp_metPhi()
	{
		if (not evt_hcalendcapp_metPhi_isLoaded) {
			if (evt_hcalendcapp_metPhi_branch != 0) {
				evt_hcalendcapp_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalendcapp_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalendcapp_metPhi_isLoaded = true;
		}
		return evt_hcalendcapp_metPhi_;
	}
	float &evt_hcalmet()
	{
		if (not evt_hcalmet_isLoaded) {
			if (evt_hcalmet_branch != 0) {
				evt_hcalmet_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalmet_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmet_isLoaded = true;
		}
		return evt_hcalmet_;
	}
	float &evt_hcalmetPhi()
	{
		if (not evt_hcalmetPhi_isLoaded) {
			if (evt_hcalmetPhi_branch != 0) {
				evt_hcalmetPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmetPhi_isLoaded = true;
		}
		return evt_hcalmetPhi_;
	}
	float &evt_met()
	{
		if (not evt_met_isLoaded) {
			if (evt_met_branch != 0) {
				evt_met_branch->GetEntry(index);
			} else { 
				printf("branch evt_met_branch does not exist!\n");
				exit(1);
			}
			evt_met_isLoaded = true;
		}
		return evt_met_;
	}
	float &evt_metHO()
	{
		if (not evt_metHO_isLoaded) {
			if (evt_metHO_branch != 0) {
				evt_metHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_metHO_branch does not exist!\n");
				exit(1);
			}
			evt_metHO_isLoaded = true;
		}
		return evt_metHO_;
	}
	float &evt_metHOPhi()
	{
		if (not evt_metHOPhi_isLoaded) {
			if (evt_metHOPhi_branch != 0) {
				evt_metHOPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metHOPhi_isLoaded = true;
		}
		return evt_metHOPhi_;
	}
	float &evt_metHOSig()
	{
		if (not evt_metHOSig_isLoaded) {
			if (evt_metHOSig_branch != 0) {
				evt_metHOSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metHOSig_isLoaded = true;
		}
		return evt_metHOSig_;
	}
	float &evt_metMuonCorr()
	{
		if (not evt_metMuonCorr_isLoaded) {
			if (evt_metMuonCorr_branch != 0) {
				evt_metMuonCorr_branch->GetEntry(index);
			} else { 
				printf("branch evt_metMuonCorr_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonCorr_isLoaded = true;
		}
		return evt_metMuonCorr_;
	}
	float &evt_metMuonCorrPhi()
	{
		if (not evt_metMuonCorrPhi_isLoaded) {
			if (evt_metMuonCorrPhi_branch != 0) {
				evt_metMuonCorrPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metMuonCorrPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonCorrPhi_isLoaded = true;
		}
		return evt_metMuonCorrPhi_;
	}
	float &evt_metMuonCorrSig()
	{
		if (not evt_metMuonCorrSig_isLoaded) {
			if (evt_metMuonCorrSig_branch != 0) {
				evt_metMuonCorrSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metMuonCorrSig_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonCorrSig_isLoaded = true;
		}
		return evt_metMuonCorrSig_;
	}
	float &evt_metMuonJESCorr()
	{
		if (not evt_metMuonJESCorr_isLoaded) {
			if (evt_metMuonJESCorr_branch != 0) {
				evt_metMuonJESCorr_branch->GetEntry(index);
			} else { 
				printf("branch evt_metMuonJESCorr_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonJESCorr_isLoaded = true;
		}
		return evt_metMuonJESCorr_;
	}
	float &evt_metMuonJESCorrPhi()
	{
		if (not evt_metMuonJESCorrPhi_isLoaded) {
			if (evt_metMuonJESCorrPhi_branch != 0) {
				evt_metMuonJESCorrPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metMuonJESCorrPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonJESCorrPhi_isLoaded = true;
		}
		return evt_metMuonJESCorrPhi_;
	}
	float &evt_metMuonJESCorrSig()
	{
		if (not evt_metMuonJESCorrSig_isLoaded) {
			if (evt_metMuonJESCorrSig_branch != 0) {
				evt_metMuonJESCorrSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metMuonJESCorrSig_branch does not exist!\n");
				exit(1);
			}
			evt_metMuonJESCorrSig_isLoaded = true;
		}
		return evt_metMuonJESCorrSig_;
	}
	float &evt_metNoHF()
	{
		if (not evt_metNoHF_isLoaded) {
			if (evt_metNoHF_branch != 0) {
				evt_metNoHF_branch->GetEntry(index);
			} else { 
				printf("branch evt_metNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHF_isLoaded = true;
		}
		return evt_metNoHF_;
	}
	float &evt_metNoHFHO()
	{
		if (not evt_metNoHFHO_isLoaded) {
			if (evt_metNoHFHO_branch != 0) {
				evt_metNoHFHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_metNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFHO_isLoaded = true;
		}
		return evt_metNoHFHO_;
	}
	float &evt_metNoHFHOPhi()
	{
		if (not evt_metNoHFHOPhi_isLoaded) {
			if (evt_metNoHFHOPhi_branch != 0) {
				evt_metNoHFHOPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metNoHFHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFHOPhi_isLoaded = true;
		}
		return evt_metNoHFHOPhi_;
	}
	float &evt_metNoHFHOSig()
	{
		if (not evt_metNoHFHOSig_isLoaded) {
			if (evt_metNoHFHOSig_branch != 0) {
				evt_metNoHFHOSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metNoHFHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFHOSig_isLoaded = true;
		}
		return evt_metNoHFHOSig_;
	}
	float &evt_metNoHFPhi()
	{
		if (not evt_metNoHFPhi_isLoaded) {
			if (evt_metNoHFPhi_branch != 0) {
				evt_metNoHFPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metNoHFPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFPhi_isLoaded = true;
		}
		return evt_metNoHFPhi_;
	}
	float &evt_metNoHFSig()
	{
		if (not evt_metNoHFSig_isLoaded) {
			if (evt_metNoHFSig_branch != 0) {
				evt_metNoHFSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metNoHFSig_branch does not exist!\n");
				exit(1);
			}
			evt_metNoHFSig_isLoaded = true;
		}
		return evt_metNoHFSig_;
	}
	float &evt_metOpt()
	{
		if (not evt_metOpt_isLoaded) {
			if (evt_metOpt_branch != 0) {
				evt_metOpt_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOpt_branch does not exist!\n");
				exit(1);
			}
			evt_metOpt_isLoaded = true;
		}
		return evt_metOpt_;
	}
	float &evt_metOptHO()
	{
		if (not evt_metOptHO_isLoaded) {
			if (evt_metOptHO_branch != 0) {
				evt_metOptHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptHO_branch does not exist!\n");
				exit(1);
			}
			evt_metOptHO_isLoaded = true;
		}
		return evt_metOptHO_;
	}
	float &evt_metOptHOPhi()
	{
		if (not evt_metOptHOPhi_isLoaded) {
			if (evt_metOptHOPhi_branch != 0) {
				evt_metOptHOPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptHOPhi_isLoaded = true;
		}
		return evt_metOptHOPhi_;
	}
	float &evt_metOptHOSig()
	{
		if (not evt_metOptHOSig_isLoaded) {
			if (evt_metOptHOSig_branch != 0) {
				evt_metOptHOSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptHOSig_isLoaded = true;
		}
		return evt_metOptHOSig_;
	}
	float &evt_metOptNoHF()
	{
		if (not evt_metOptNoHF_isLoaded) {
			if (evt_metOptNoHF_branch != 0) {
				evt_metOptNoHF_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHF_isLoaded = true;
		}
		return evt_metOptNoHF_;
	}
	float &evt_metOptNoHFHO()
	{
		if (not evt_metOptNoHFHO_isLoaded) {
			if (evt_metOptNoHFHO_branch != 0) {
				evt_metOptNoHFHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFHO_isLoaded = true;
		}
		return evt_metOptNoHFHO_;
	}
	float &evt_metOptNoHFHOPhi()
	{
		if (not evt_metOptNoHFHOPhi_isLoaded) {
			if (evt_metOptNoHFHOPhi_branch != 0) {
				evt_metOptNoHFHOPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptNoHFHOPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFHOPhi_isLoaded = true;
		}
		return evt_metOptNoHFHOPhi_;
	}
	float &evt_metOptNoHFHOSig()
	{
		if (not evt_metOptNoHFHOSig_isLoaded) {
			if (evt_metOptNoHFHOSig_branch != 0) {
				evt_metOptNoHFHOSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptNoHFHOSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFHOSig_isLoaded = true;
		}
		return evt_metOptNoHFHOSig_;
	}
	float &evt_metOptNoHFPhi()
	{
		if (not evt_metOptNoHFPhi_isLoaded) {
			if (evt_metOptNoHFPhi_branch != 0) {
				evt_metOptNoHFPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptNoHFPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFPhi_isLoaded = true;
		}
		return evt_metOptNoHFPhi_;
	}
	float &evt_metOptNoHFSig()
	{
		if (not evt_metOptNoHFSig_isLoaded) {
			if (evt_metOptNoHFSig_branch != 0) {
				evt_metOptNoHFSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptNoHFSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptNoHFSig_isLoaded = true;
		}
		return evt_metOptNoHFSig_;
	}
	float &evt_metOptPhi()
	{
		if (not evt_metOptPhi_isLoaded) {
			if (evt_metOptPhi_branch != 0) {
				evt_metOptPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metOptPhi_isLoaded = true;
		}
		return evt_metOptPhi_;
	}
	float &evt_metOptSig()
	{
		if (not evt_metOptSig_isLoaded) {
			if (evt_metOptSig_branch != 0) {
				evt_metOptSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metOptSig_branch does not exist!\n");
				exit(1);
			}
			evt_metOptSig_isLoaded = true;
		}
		return evt_metOptSig_;
	}
	float &evt_metPhi()
	{
		if (not evt_metPhi_isLoaded) {
			if (evt_metPhi_branch != 0) {
				evt_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_metPhi_branch does not exist!\n");
				exit(1);
			}
			evt_metPhi_isLoaded = true;
		}
		return evt_metPhi_;
	}
	float &evt_metSig()
	{
		if (not evt_metSig_isLoaded) {
			if (evt_metSig_branch != 0) {
				evt_metSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_metSig_branch does not exist!\n");
				exit(1);
			}
			evt_metSig_isLoaded = true;
		}
		return evt_metSig_;
	}
	float &evt_sumet()
	{
		if (not evt_sumet_isLoaded) {
			if (evt_sumet_branch != 0) {
				evt_sumet_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumet_branch does not exist!\n");
				exit(1);
			}
			evt_sumet_isLoaded = true;
		}
		return evt_sumet_;
	}
	float &evt_sumetHO()
	{
		if (not evt_sumetHO_isLoaded) {
			if (evt_sumetHO_branch != 0) {
				evt_sumetHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetHO_isLoaded = true;
		}
		return evt_sumetHO_;
	}
	float &evt_sumetMuonCorr()
	{
		if (not evt_sumetMuonCorr_isLoaded) {
			if (evt_sumetMuonCorr_branch != 0) {
				evt_sumetMuonCorr_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetMuonCorr_branch does not exist!\n");
				exit(1);
			}
			evt_sumetMuonCorr_isLoaded = true;
		}
		return evt_sumetMuonCorr_;
	}
	float &evt_sumetNoHF()
	{
		if (not evt_sumetNoHF_isLoaded) {
			if (evt_sumetNoHF_branch != 0) {
				evt_sumetNoHF_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_sumetNoHF_isLoaded = true;
		}
		return evt_sumetNoHF_;
	}
	float &evt_sumetNoHFHO()
	{
		if (not evt_sumetNoHFHO_isLoaded) {
			if (evt_sumetNoHFHO_branch != 0) {
				evt_sumetNoHFHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetNoHFHO_isLoaded = true;
		}
		return evt_sumetNoHFHO_;
	}
	float &evt_sumetOpt()
	{
		if (not evt_sumetOpt_isLoaded) {
			if (evt_sumetOpt_branch != 0) {
				evt_sumetOpt_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetOpt_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOpt_isLoaded = true;
		}
		return evt_sumetOpt_;
	}
	float &evt_sumetOptHO()
	{
		if (not evt_sumetOptHO_isLoaded) {
			if (evt_sumetOptHO_branch != 0) {
				evt_sumetOptHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetOptHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOptHO_isLoaded = true;
		}
		return evt_sumetOptHO_;
	}
	float &evt_sumetOptNoHF()
	{
		if (not evt_sumetOptNoHF_isLoaded) {
			if (evt_sumetOptNoHF_branch != 0) {
				evt_sumetOptNoHF_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetOptNoHF_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOptNoHF_isLoaded = true;
		}
		return evt_sumetOptNoHF_;
	}
	float &evt_sumetOptNoHFHO()
	{
		if (not evt_sumetOptNoHFHO_isLoaded) {
			if (evt_sumetOptNoHFHO_branch != 0) {
				evt_sumetOptNoHFHO_branch->GetEntry(index);
			} else { 
				printf("branch evt_sumetOptNoHFHO_branch does not exist!\n");
				exit(1);
			}
			evt_sumetOptNoHFHO_isLoaded = true;
		}
		return evt_sumetOptNoHFHO_;
	}
	float &evt_pfmet()
	{
		if (not evt_pfmet_isLoaded) {
			if (evt_pfmet_branch != 0) {
				evt_pfmet_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmet_branch does not exist!\n");
				exit(1);
			}
			evt_pfmet_isLoaded = true;
		}
		return evt_pfmet_;
	}
	float &evt_pfmetPhi()
	{
		if (not evt_pfmetPhi_isLoaded) {
			if (evt_pfmetPhi_branch != 0) {
				evt_pfmetPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_pfmetPhi_isLoaded = true;
		}
		return evt_pfmetPhi_;
	}
	float &evt_pfmetSig()
	{
		if (not evt_pfmetSig_isLoaded) {
			if (evt_pfmetSig_branch != 0) {
				evt_pfmetSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmetSig_branch does not exist!\n");
				exit(1);
			}
			evt_pfmetSig_isLoaded = true;
		}
		return evt_pfmetSig_;
	}
	float &evt_pfsumet()
	{
		if (not evt_pfsumet_isLoaded) {
			if (evt_pfsumet_branch != 0) {
				evt_pfsumet_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfsumet_branch does not exist!\n");
				exit(1);
			}
			evt_pfsumet_isLoaded = true;
		}
		return evt_pfsumet_;
	}
	float &evt_tcmet()
	{
		if (not evt_tcmet_isLoaded) {
			if (evt_tcmet_branch != 0) {
				evt_tcmet_branch->GetEntry(index);
			} else { 
				printf("branch evt_tcmet_branch does not exist!\n");
				exit(1);
			}
			evt_tcmet_isLoaded = true;
		}
		return evt_tcmet_;
	}
	float &evt_tcmetPhi()
	{
		if (not evt_tcmetPhi_isLoaded) {
			if (evt_tcmetPhi_branch != 0) {
				evt_tcmetPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_tcmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_tcmetPhi_isLoaded = true;
		}
		return evt_tcmetPhi_;
	}
	float &evt_tcmetSig()
	{
		if (not evt_tcmetSig_isLoaded) {
			if (evt_tcmetSig_branch != 0) {
				evt_tcmetSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_tcmetSig_branch does not exist!\n");
				exit(1);
			}
			evt_tcmetSig_isLoaded = true;
		}
		return evt_tcmetSig_;
	}
	float &evt_tcsumet()
	{
		if (not evt_tcsumet_isLoaded) {
			if (evt_tcsumet_branch != 0) {
				evt_tcsumet_branch->GetEntry(index);
			} else { 
				printf("branch evt_tcsumet_branch does not exist!\n");
				exit(1);
			}
			evt_tcsumet_isLoaded = true;
		}
		return evt_tcsumet_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &evt_bsp4()
	{
		if (not evt_bsp4_isLoaded) {
			if (evt_bsp4_branch != 0) {
				evt_bsp4_branch->GetEntry(index);
			} else { 
				printf("branch evt_bsp4_branch does not exist!\n");
				exit(1);
			}
			evt_bsp4_isLoaded = true;
		}
		return evt_bsp4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_met_p4()
	{
		if (not l1_met_p4_isLoaded) {
			if (l1_met_p4_branch != 0) {
				l1_met_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_met_p4_branch does not exist!\n");
				exit(1);
			}
			l1_met_p4_isLoaded = true;
		}
		return l1_met_p4_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_mht_p4()
	{
		if (not l1_mht_p4_isLoaded) {
			if (l1_mht_p4_branch != 0) {
				l1_mht_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_mht_p4_branch does not exist!\n");
				exit(1);
			}
			l1_mht_p4_isLoaded = true;
		}
		return l1_mht_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_inner_position()
	{
		if (not els_inner_position_isLoaded) {
			if (els_inner_position_branch != 0) {
				els_inner_position_branch->GetEntry(index);
			} else { 
				printf("branch els_inner_position_branch does not exist!\n");
				exit(1);
			}
			els_inner_position_isLoaded = true;
		}
		return els_inner_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_outer_position()
	{
		if (not els_outer_position_isLoaded) {
			if (els_outer_position_branch != 0) {
				els_outer_position_branch->GetEntry(index);
			} else { 
				printf("branch els_outer_position_branch does not exist!\n");
				exit(1);
			}
			els_outer_position_isLoaded = true;
		}
		return els_outer_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4()
	{
		if (not els_p4_isLoaded) {
			if (els_p4_branch != 0) {
				els_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_p4_branch does not exist!\n");
				exit(1);
			}
			els_p4_isLoaded = true;
		}
		return els_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In()
	{
		if (not els_p4In_isLoaded) {
			if (els_p4In_branch != 0) {
				els_p4In_branch->GetEntry(index);
			} else { 
				printf("branch els_p4In_branch does not exist!\n");
				exit(1);
			}
			els_p4In_isLoaded = true;
		}
		return els_p4In_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out()
	{
		if (not els_p4Out_isLoaded) {
			if (els_p4Out_branch != 0) {
				els_p4Out_branch->GetEntry(index);
			} else { 
				printf("branch els_p4Out_branch does not exist!\n");
				exit(1);
			}
			els_p4Out_isLoaded = true;
		}
		return els_p4Out_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4()
	{
		if (not els_trk_p4_isLoaded) {
			if (els_trk_p4_branch != 0) {
				els_trk_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_trk_p4_branch does not exist!\n");
				exit(1);
			}
			els_trk_p4_isLoaded = true;
		}
		return els_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4()
	{
		if (not els_vertex_p4_isLoaded) {
			if (els_vertex_p4_branch != 0) {
				els_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			els_vertex_p4_isLoaded = true;
		}
		return els_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4()
	{
		if (not jets_p4_isLoaded) {
			if (jets_p4_branch != 0) {
				jets_p4_branch->GetEntry(index);
			} else { 
				printf("branch jets_p4_branch does not exist!\n");
				exit(1);
			}
			jets_p4_isLoaded = true;
		}
		return jets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_vertex_p4()
	{
		if (not jets_vertex_p4_isLoaded) {
			if (jets_vertex_p4_branch != 0) {
				jets_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch jets_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			jets_vertex_p4_isLoaded = true;
		}
		return jets_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jpts_p4()
	{
		if (not jpts_p4_isLoaded) {
			if (jpts_p4_branch != 0) {
				jpts_p4_branch->GetEntry(index);
			} else { 
				printf("branch jpts_p4_branch does not exist!\n");
				exit(1);
			}
			jpts_p4_isLoaded = true;
		}
		return jpts_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emiso_p4()
	{
		if (not l1_emiso_p4_isLoaded) {
			if (l1_emiso_p4_branch != 0) {
				l1_emiso_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_emiso_p4_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_p4_isLoaded = true;
		}
		return l1_emiso_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emnoiso_p4()
	{
		if (not l1_emnoiso_p4_isLoaded) {
			if (l1_emnoiso_p4_branch != 0) {
				l1_emnoiso_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_emnoiso_p4_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_p4_isLoaded = true;
		}
		return l1_emnoiso_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsc_p4()
	{
		if (not l1_jetsc_p4_isLoaded) {
			if (l1_jetsc_p4_branch != 0) {
				l1_jetsc_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsc_p4_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_p4_isLoaded = true;
		}
		return l1_jetsc_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsf_p4()
	{
		if (not l1_jetsf_p4_isLoaded) {
			if (l1_jetsf_p4_branch != 0) {
				l1_jetsf_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsf_p4_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_p4_isLoaded = true;
		}
		return l1_jetsf_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetst_p4()
	{
		if (not l1_jetst_p4_isLoaded) {
			if (l1_jetst_p4_branch != 0) {
				l1_jetst_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetst_p4_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_p4_isLoaded = true;
		}
		return l1_jetst_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_mus_p4()
	{
		if (not l1_mus_p4_isLoaded) {
			if (l1_mus_p4_branch != 0) {
				l1_mus_p4_branch->GetEntry(index);
			} else { 
				printf("branch l1_mus_p4_branch does not exist!\n");
				exit(1);
			}
			l1_mus_p4_isLoaded = true;
		}
		return l1_mus_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitdefault_p4()
	{
		if (not mus_fitdefault_p4_isLoaded) {
			if (mus_fitdefault_p4_branch != 0) {
				mus_fitdefault_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_fitdefault_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fitdefault_p4_isLoaded = true;
		}
		return mus_fitdefault_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitfirsthit_p4()
	{
		if (not mus_fitfirsthit_p4_isLoaded) {
			if (mus_fitfirsthit_p4_branch != 0) {
				mus_fitfirsthit_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_fitfirsthit_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fitfirsthit_p4_isLoaded = true;
		}
		return mus_fitfirsthit_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitpicky_p4()
	{
		if (not mus_fitpicky_p4_isLoaded) {
			if (mus_fitpicky_p4_branch != 0) {
				mus_fitpicky_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_fitpicky_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fitpicky_p4_isLoaded = true;
		}
		return mus_fitpicky_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fittev_p4()
	{
		if (not mus_fittev_p4_isLoaded) {
			if (mus_fittev_p4_branch != 0) {
				mus_fittev_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_fittev_p4_branch does not exist!\n");
				exit(1);
			}
			mus_fittev_p4_isLoaded = true;
		}
		return mus_fittev_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_outerPos_p4()
	{
		if (not mus_gfit_outerPos_p4_isLoaded) {
			if (mus_gfit_outerPos_p4_branch != 0) {
				mus_gfit_outerPos_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_outerPos_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_outerPos_p4_isLoaded = true;
		}
		return mus_gfit_outerPos_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_p4()
	{
		if (not mus_gfit_p4_isLoaded) {
			if (mus_gfit_p4_branch != 0) {
				mus_gfit_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_p4_isLoaded = true;
		}
		return mus_gfit_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_vertex_p4()
	{
		if (not mus_gfit_vertex_p4_isLoaded) {
			if (mus_gfit_vertex_p4_branch != 0) {
				mus_gfit_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_vertex_p4_isLoaded = true;
		}
		return mus_gfit_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_p4()
	{
		if (not mus_p4_isLoaded) {
			if (mus_p4_branch != 0) {
				mus_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_p4_branch does not exist!\n");
				exit(1);
			}
			mus_p4_isLoaded = true;
		}
		return mus_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_p4()
	{
		if (not mus_sta_p4_isLoaded) {
			if (mus_sta_p4_branch != 0) {
				mus_sta_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_p4_branch does not exist!\n");
				exit(1);
			}
			mus_sta_p4_isLoaded = true;
		}
		return mus_sta_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_vertex_p4()
	{
		if (not mus_sta_vertex_p4_isLoaded) {
			if (mus_sta_vertex_p4_branch != 0) {
				mus_sta_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_sta_vertex_p4_isLoaded = true;
		}
		return mus_sta_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_trk_p4()
	{
		if (not mus_trk_p4_isLoaded) {
			if (mus_trk_p4_branch != 0) {
				mus_trk_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_trk_p4_branch does not exist!\n");
				exit(1);
			}
			mus_trk_p4_isLoaded = true;
		}
		return mus_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_vertex_p4()
	{
		if (not mus_vertex_p4_isLoaded) {
			if (mus_vertex_p4_branch != 0) {
				mus_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_vertex_p4_isLoaded = true;
		}
		return mus_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_p4()
	{
		if (not pfjets_p4_isLoaded) {
			if (pfjets_p4_branch != 0) {
				pfjets_p4_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_p4_branch does not exist!\n");
				exit(1);
			}
			pfjets_p4_isLoaded = true;
		}
		return pfjets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_p4()
	{
		if (not photons_p4_isLoaded) {
			if (photons_p4_branch != 0) {
				photons_p4_branch->GetEntry(index);
			} else { 
				printf("branch photons_p4_branch does not exist!\n");
				exit(1);
			}
			photons_p4_isLoaded = true;
		}
		return photons_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksecalp4()
	{
		if (not ran_trksecalp4_isLoaded) {
			if (ran_trksecalp4_branch != 0) {
				ran_trksecalp4_branch->GetEntry(index);
			} else { 
				printf("branch ran_trksecalp4_branch does not exist!\n");
				exit(1);
			}
			ran_trksecalp4_isLoaded = true;
		}
		return ran_trksecalp4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksp4()
	{
		if (not ran_trksp4_isLoaded) {
			if (ran_trksp4_branch != 0) {
				ran_trksp4_branch->GetEntry(index);
			} else { 
				printf("branch ran_trksp4_branch does not exist!\n");
				exit(1);
			}
			ran_trksp4_isLoaded = true;
		}
		return ran_trksp4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_p4()
	{
		if (not scs_p4_isLoaded) {
			if (scs_p4_branch != 0) {
				scs_p4_branch->GetEntry(index);
			} else { 
				printf("branch scs_p4_branch does not exist!\n");
				exit(1);
			}
			scs_p4_isLoaded = true;
		}
		return scs_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_pos_p4()
	{
		if (not scs_pos_p4_isLoaded) {
			if (scs_pos_p4_branch != 0) {
				scs_pos_p4_branch->GetEntry(index);
			} else { 
				printf("branch scs_pos_p4_branch does not exist!\n");
				exit(1);
			}
			scs_pos_p4_isLoaded = true;
		}
		return scs_pos_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_vtx_p4()
	{
		if (not scs_vtx_p4_isLoaded) {
			if (scs_vtx_p4_branch != 0) {
				scs_vtx_p4_branch->GetEntry(index);
			} else { 
				printf("branch scs_vtx_p4_branch does not exist!\n");
				exit(1);
			}
			scs_vtx_p4_isLoaded = true;
		}
		return scs_vtx_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_p4()
	{
		if (not scjets_p4_isLoaded) {
			if (scjets_p4_branch != 0) {
				scjets_p4_branch->GetEntry(index);
			} else { 
				printf("branch scjets_p4_branch does not exist!\n");
				exit(1);
			}
			scjets_p4_isLoaded = true;
		}
		return scjets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_vertex_p4()
	{
		if (not scjets_vertex_p4_isLoaded) {
			if (scjets_vertex_p4_branch != 0) {
				scjets_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch scjets_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			scjets_vertex_p4_isLoaded = true;
		}
		return scjets_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_inner_position()
	{
		if (not trks_inner_position_isLoaded) {
			if (trks_inner_position_branch != 0) {
				trks_inner_position_branch->GetEntry(index);
			} else { 
				printf("branch trks_inner_position_branch does not exist!\n");
				exit(1);
			}
			trks_inner_position_isLoaded = true;
		}
		return trks_inner_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_p4()
	{
		if (not trks_outer_p4_isLoaded) {
			if (trks_outer_p4_branch != 0) {
				trks_outer_p4_branch->GetEntry(index);
			} else { 
				printf("branch trks_outer_p4_branch does not exist!\n");
				exit(1);
			}
			trks_outer_p4_isLoaded = true;
		}
		return trks_outer_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_position()
	{
		if (not trks_outer_position_isLoaded) {
			if (trks_outer_position_branch != 0) {
				trks_outer_position_branch->GetEntry(index);
			} else { 
				printf("branch trks_outer_position_branch does not exist!\n");
				exit(1);
			}
			trks_outer_position_isLoaded = true;
		}
		return trks_outer_position_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_trk_p4()
	{
		if (not trks_trk_p4_isLoaded) {
			if (trks_trk_p4_branch != 0) {
				trks_trk_p4_branch->GetEntry(index);
			} else { 
				printf("branch trks_trk_p4_branch does not exist!\n");
				exit(1);
			}
			trks_trk_p4_isLoaded = true;
		}
		return trks_trk_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_vertex_p4()
	{
		if (not trks_vertex_p4_isLoaded) {
			if (trks_vertex_p4_branch != 0) {
				trks_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch trks_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			trks_vertex_p4_isLoaded = true;
		}
		return trks_vertex_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trkjets_p4()
	{
		if (not trkjets_p4_isLoaded) {
			if (trkjets_p4_branch != 0) {
				trkjets_p4_branch->GetEntry(index);
			} else { 
				printf("branch trkjets_p4_branch does not exist!\n");
				exit(1);
			}
			trkjets_p4_isLoaded = true;
		}
		return trkjets_p4_;
	}
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vtxs_position()
	{
		if (not vtxs_position_isLoaded) {
			if (vtxs_position_branch != 0) {
				vtxs_position_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_position_branch does not exist!\n");
				exit(1);
			}
			vtxs_position_isLoaded = true;
		}
		return vtxs_position_;
	}
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4()
	{
		if (not hlt_trigObjs_p4_isLoaded) {
			if (hlt_trigObjs_p4_branch != 0) {
				hlt_trigObjs_p4_branch->GetEntry(index);
			} else { 
				printf("branch hlt_trigObjs_p4_branch does not exist!\n");
				exit(1);
			}
			hlt_trigObjs_p4_isLoaded = true;
		}
		return hlt_trigObjs_p4_;
	}
	vector<float> &evt_covMatrix()
	{
		if (not evt_covMatrix_isLoaded) {
			if (evt_covMatrix_branch != 0) {
				evt_covMatrix_branch->GetEntry(index);
			} else { 
				printf("branch evt_covMatrix_branch does not exist!\n");
				exit(1);
			}
			evt_covMatrix_isLoaded = true;
		}
		return evt_covMatrix_;
	}
	vector<float> &twrs_ecalTime()
	{
		if (not twrs_ecalTime_isLoaded) {
			if (twrs_ecalTime_branch != 0) {
				twrs_ecalTime_branch->GetEntry(index);
			} else { 
				printf("branch twrs_ecalTime_branch does not exist!\n");
				exit(1);
			}
			twrs_ecalTime_isLoaded = true;
		}
		return twrs_ecalTime_;
	}
	vector<float> &twrs_emEnergy()
	{
		if (not twrs_emEnergy_isLoaded) {
			if (twrs_emEnergy_branch != 0) {
				twrs_emEnergy_branch->GetEntry(index);
			} else { 
				printf("branch twrs_emEnergy_branch does not exist!\n");
				exit(1);
			}
			twrs_emEnergy_isLoaded = true;
		}
		return twrs_emEnergy_;
	}
	vector<float> &twrs_emEt()
	{
		if (not twrs_emEt_isLoaded) {
			if (twrs_emEt_branch != 0) {
				twrs_emEt_branch->GetEntry(index);
			} else { 
				printf("branch twrs_emEt_branch does not exist!\n");
				exit(1);
			}
			twrs_emEt_isLoaded = true;
		}
		return twrs_emEt_;
	}
	vector<float> &twrs_emEtcorr()
	{
		if (not twrs_emEtcorr_isLoaded) {
			if (twrs_emEtcorr_branch != 0) {
				twrs_emEtcorr_branch->GetEntry(index);
			} else { 
				printf("branch twrs_emEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_emEtcorr_isLoaded = true;
		}
		return twrs_emEtcorr_;
	}
	vector<float> &twrs_eta()
	{
		if (not twrs_eta_isLoaded) {
			if (twrs_eta_branch != 0) {
				twrs_eta_branch->GetEntry(index);
			} else { 
				printf("branch twrs_eta_branch does not exist!\n");
				exit(1);
			}
			twrs_eta_isLoaded = true;
		}
		return twrs_eta_;
	}
	vector<float> &twrs_etcorr()
	{
		if (not twrs_etcorr_isLoaded) {
			if (twrs_etcorr_branch != 0) {
				twrs_etcorr_branch->GetEntry(index);
			} else { 
				printf("branch twrs_etcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_etcorr_isLoaded = true;
		}
		return twrs_etcorr_;
	}
	vector<float> &twrs_hadEnergy()
	{
		if (not twrs_hadEnergy_isLoaded) {
			if (twrs_hadEnergy_branch != 0) {
				twrs_hadEnergy_branch->GetEntry(index);
			} else { 
				printf("branch twrs_hadEnergy_branch does not exist!\n");
				exit(1);
			}
			twrs_hadEnergy_isLoaded = true;
		}
		return twrs_hadEnergy_;
	}
	vector<float> &twrs_hadEt()
	{
		if (not twrs_hadEt_isLoaded) {
			if (twrs_hadEt_branch != 0) {
				twrs_hadEt_branch->GetEntry(index);
			} else { 
				printf("branch twrs_hadEt_branch does not exist!\n");
				exit(1);
			}
			twrs_hadEt_isLoaded = true;
		}
		return twrs_hadEt_;
	}
	vector<float> &twrs_hadEtcorr()
	{
		if (not twrs_hadEtcorr_isLoaded) {
			if (twrs_hadEtcorr_branch != 0) {
				twrs_hadEtcorr_branch->GetEntry(index);
			} else { 
				printf("branch twrs_hadEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_hadEtcorr_isLoaded = true;
		}
		return twrs_hadEtcorr_;
	}
	vector<float> &twrs_hcalTime()
	{
		if (not twrs_hcalTime_isLoaded) {
			if (twrs_hcalTime_branch != 0) {
				twrs_hcalTime_branch->GetEntry(index);
			} else { 
				printf("branch twrs_hcalTime_branch does not exist!\n");
				exit(1);
			}
			twrs_hcalTime_isLoaded = true;
		}
		return twrs_hcalTime_;
	}
	vector<float> &twrs_outerEnergy()
	{
		if (not twrs_outerEnergy_isLoaded) {
			if (twrs_outerEnergy_branch != 0) {
				twrs_outerEnergy_branch->GetEntry(index);
			} else { 
				printf("branch twrs_outerEnergy_branch does not exist!\n");
				exit(1);
			}
			twrs_outerEnergy_isLoaded = true;
		}
		return twrs_outerEnergy_;
	}
	vector<float> &twrs_outerEt()
	{
		if (not twrs_outerEt_isLoaded) {
			if (twrs_outerEt_branch != 0) {
				twrs_outerEt_branch->GetEntry(index);
			} else { 
				printf("branch twrs_outerEt_branch does not exist!\n");
				exit(1);
			}
			twrs_outerEt_isLoaded = true;
		}
		return twrs_outerEt_;
	}
	vector<float> &twrs_outerEtcorr()
	{
		if (not twrs_outerEtcorr_isLoaded) {
			if (twrs_outerEtcorr_branch != 0) {
				twrs_outerEtcorr_branch->GetEntry(index);
			} else { 
				printf("branch twrs_outerEtcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_outerEtcorr_isLoaded = true;
		}
		return twrs_outerEtcorr_;
	}
	vector<float> &twrs_pcorr()
	{
		if (not twrs_pcorr_isLoaded) {
			if (twrs_pcorr_branch != 0) {
				twrs_pcorr_branch->GetEntry(index);
			} else { 
				printf("branch twrs_pcorr_branch does not exist!\n");
				exit(1);
			}
			twrs_pcorr_isLoaded = true;
		}
		return twrs_pcorr_;
	}
	vector<float> &twrs_phi()
	{
		if (not twrs_phi_isLoaded) {
			if (twrs_phi_branch != 0) {
				twrs_phi_branch->GetEntry(index);
			} else { 
				printf("branch twrs_phi_branch does not exist!\n");
				exit(1);
			}
			twrs_phi_isLoaded = true;
		}
		return twrs_phi_;
	}
	vector<float> &els_ecalJuraIso()
	{
		if (not els_ecalJuraIso_isLoaded) {
			if (els_ecalJuraIso_branch != 0) {
				els_ecalJuraIso_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalJuraIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalJuraIso_isLoaded = true;
		}
		return els_ecalJuraIso_;
	}
	vector<float> &els_ecalJuraTowerIso()
	{
		if (not els_ecalJuraTowerIso_isLoaded) {
			if (els_ecalJuraTowerIso_branch != 0) {
				els_ecalJuraTowerIso_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalJuraTowerIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalJuraTowerIso_isLoaded = true;
		}
		return els_ecalJuraTowerIso_;
	}
	vector<float> &els_hcalConeIso()
	{
		if (not els_hcalConeIso_isLoaded) {
			if (els_hcalConeIso_branch != 0) {
				els_hcalConeIso_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalConeIso_branch does not exist!\n");
				exit(1);
			}
			els_hcalConeIso_isLoaded = true;
		}
		return els_hcalConeIso_;
	}
	vector<float> &els_tkJuraIso()
	{
		if (not els_tkJuraIso_isLoaded) {
			if (els_tkJuraIso_branch != 0) {
				els_tkJuraIso_branch->GetEntry(index);
			} else { 
				printf("branch els_tkJuraIso_branch does not exist!\n");
				exit(1);
			}
			els_tkJuraIso_isLoaded = true;
		}
		return els_tkJuraIso_;
	}
	vector<float> &els_jetdr()
	{
		if (not els_jetdr_isLoaded) {
			if (els_jetdr_branch != 0) {
				els_jetdr_branch->GetEntry(index);
			} else { 
				printf("branch els_jetdr_branch does not exist!\n");
				exit(1);
			}
			els_jetdr_isLoaded = true;
		}
		return els_jetdr_;
	}
	vector<float> &els_musdr()
	{
		if (not els_musdr_isLoaded) {
			if (els_musdr_branch != 0) {
				els_musdr_branch->GetEntry(index);
			} else { 
				printf("branch els_musdr_branch does not exist!\n");
				exit(1);
			}
			els_musdr_isLoaded = true;
		}
		return els_musdr_;
	}
	vector<float> &els_hcalDepth1OverEcal()
	{
		if (not els_hcalDepth1OverEcal_isLoaded) {
			if (els_hcalDepth1OverEcal_branch != 0) {
				els_hcalDepth1OverEcal_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth1OverEcal_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1OverEcal_isLoaded = true;
		}
		return els_hcalDepth1OverEcal_;
	}
	vector<float> &els_hcalDepth1TowerSumEt()
	{
		if (not els_hcalDepth1TowerSumEt_isLoaded) {
			if (els_hcalDepth1TowerSumEt_branch != 0) {
				els_hcalDepth1TowerSumEt_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth1TowerSumEt_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1TowerSumEt_isLoaded = true;
		}
		return els_hcalDepth1TowerSumEt_;
	}
	vector<float> &els_hcalDepth1TowerSumEt04()
	{
		if (not els_hcalDepth1TowerSumEt04_isLoaded) {
			if (els_hcalDepth1TowerSumEt04_branch != 0) {
				els_hcalDepth1TowerSumEt04_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth1TowerSumEt04_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1TowerSumEt04_isLoaded = true;
		}
		return els_hcalDepth1TowerSumEt04_;
	}
	vector<float> &els_hcalDepth2OverEcal()
	{
		if (not els_hcalDepth2OverEcal_isLoaded) {
			if (els_hcalDepth2OverEcal_branch != 0) {
				els_hcalDepth2OverEcal_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth2OverEcal_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2OverEcal_isLoaded = true;
		}
		return els_hcalDepth2OverEcal_;
	}
	vector<float> &els_hcalDepth2TowerSumEt()
	{
		if (not els_hcalDepth2TowerSumEt_isLoaded) {
			if (els_hcalDepth2TowerSumEt_branch != 0) {
				els_hcalDepth2TowerSumEt_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth2TowerSumEt_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2TowerSumEt_isLoaded = true;
		}
		return els_hcalDepth2TowerSumEt_;
	}
	vector<float> &els_hcalDepth2TowerSumEt04()
	{
		if (not els_hcalDepth2TowerSumEt04_isLoaded) {
			if (els_hcalDepth2TowerSumEt04_branch != 0) {
				els_hcalDepth2TowerSumEt04_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth2TowerSumEt04_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2TowerSumEt04_isLoaded = true;
		}
		return els_hcalDepth2TowerSumEt04_;
	}
	vector<float> &els_chi2()
	{
		if (not els_chi2_isLoaded) {
			if (els_chi2_branch != 0) {
				els_chi2_branch->GetEntry(index);
			} else { 
				printf("branch els_chi2_branch does not exist!\n");
				exit(1);
			}
			els_chi2_isLoaded = true;
		}
		return els_chi2_;
	}
	vector<float> &els_conv_dcot()
	{
		if (not els_conv_dcot_isLoaded) {
			if (els_conv_dcot_branch != 0) {
				els_conv_dcot_branch->GetEntry(index);
			} else { 
				printf("branch els_conv_dcot_branch does not exist!\n");
				exit(1);
			}
			els_conv_dcot_isLoaded = true;
		}
		return els_conv_dcot_;
	}
	vector<float> &els_conv_dist()
	{
		if (not els_conv_dist_isLoaded) {
			if (els_conv_dist_branch != 0) {
				els_conv_dist_branch->GetEntry(index);
			} else { 
				printf("branch els_conv_dist_branch does not exist!\n");
				exit(1);
			}
			els_conv_dist_isLoaded = true;
		}
		return els_conv_dist_;
	}
	vector<float> &els_d0()
	{
		if (not els_d0_isLoaded) {
			if (els_d0_branch != 0) {
				els_d0_branch->GetEntry(index);
			} else { 
				printf("branch els_d0_branch does not exist!\n");
				exit(1);
			}
			els_d0_isLoaded = true;
		}
		return els_d0_;
	}
	vector<float> &els_d0Err()
	{
		if (not els_d0Err_isLoaded) {
			if (els_d0Err_branch != 0) {
				els_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch els_d0Err_branch does not exist!\n");
				exit(1);
			}
			els_d0Err_isLoaded = true;
		}
		return els_d0Err_;
	}
	vector<float> &els_d0corr()
	{
		if (not els_d0corr_isLoaded) {
			if (els_d0corr_branch != 0) {
				els_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch els_d0corr_branch does not exist!\n");
				exit(1);
			}
			els_d0corr_isLoaded = true;
		}
		return els_d0corr_;
	}
	vector<float> &els_dEtaIn()
	{
		if (not els_dEtaIn_isLoaded) {
			if (els_dEtaIn_branch != 0) {
				els_dEtaIn_branch->GetEntry(index);
			} else { 
				printf("branch els_dEtaIn_branch does not exist!\n");
				exit(1);
			}
			els_dEtaIn_isLoaded = true;
		}
		return els_dEtaIn_;
	}
	vector<float> &els_dEtaOut()
	{
		if (not els_dEtaOut_isLoaded) {
			if (els_dEtaOut_branch != 0) {
				els_dEtaOut_branch->GetEntry(index);
			} else { 
				printf("branch els_dEtaOut_branch does not exist!\n");
				exit(1);
			}
			els_dEtaOut_isLoaded = true;
		}
		return els_dEtaOut_;
	}
	vector<float> &els_dPhiIn()
	{
		if (not els_dPhiIn_isLoaded) {
			if (els_dPhiIn_branch != 0) {
				els_dPhiIn_branch->GetEntry(index);
			} else { 
				printf("branch els_dPhiIn_branch does not exist!\n");
				exit(1);
			}
			els_dPhiIn_isLoaded = true;
		}
		return els_dPhiIn_;
	}
	vector<float> &els_dPhiInPhiOut()
	{
		if (not els_dPhiInPhiOut_isLoaded) {
			if (els_dPhiInPhiOut_branch != 0) {
				els_dPhiInPhiOut_branch->GetEntry(index);
			} else { 
				printf("branch els_dPhiInPhiOut_branch does not exist!\n");
				exit(1);
			}
			els_dPhiInPhiOut_isLoaded = true;
		}
		return els_dPhiInPhiOut_;
	}
	vector<float> &els_dPhiOut()
	{
		if (not els_dPhiOut_isLoaded) {
			if (els_dPhiOut_branch != 0) {
				els_dPhiOut_branch->GetEntry(index);
			} else { 
				printf("branch els_dPhiOut_branch does not exist!\n");
				exit(1);
			}
			els_dPhiOut_isLoaded = true;
		}
		return els_dPhiOut_;
	}
	vector<float> &els_deltaEtaEleClusterTrackAtCalo()
	{
		if (not els_deltaEtaEleClusterTrackAtCalo_isLoaded) {
			if (els_deltaEtaEleClusterTrackAtCalo_branch != 0) {
				els_deltaEtaEleClusterTrackAtCalo_branch->GetEntry(index);
			} else { 
				printf("branch els_deltaEtaEleClusterTrackAtCalo_branch does not exist!\n");
				exit(1);
			}
			els_deltaEtaEleClusterTrackAtCalo_isLoaded = true;
		}
		return els_deltaEtaEleClusterTrackAtCalo_;
	}
	vector<float> &els_deltaPhiEleClusterTrackAtCalo()
	{
		if (not els_deltaPhiEleClusterTrackAtCalo_isLoaded) {
			if (els_deltaPhiEleClusterTrackAtCalo_branch != 0) {
				els_deltaPhiEleClusterTrackAtCalo_branch->GetEntry(index);
			} else { 
				printf("branch els_deltaPhiEleClusterTrackAtCalo_branch does not exist!\n");
				exit(1);
			}
			els_deltaPhiEleClusterTrackAtCalo_isLoaded = true;
		}
		return els_deltaPhiEleClusterTrackAtCalo_;
	}
	vector<float> &els_e1x5()
	{
		if (not els_e1x5_isLoaded) {
			if (els_e1x5_branch != 0) {
				els_e1x5_branch->GetEntry(index);
			} else { 
				printf("branch els_e1x5_branch does not exist!\n");
				exit(1);
			}
			els_e1x5_isLoaded = true;
		}
		return els_e1x5_;
	}
	vector<float> &els_e2x5Max()
	{
		if (not els_e2x5Max_isLoaded) {
			if (els_e2x5Max_branch != 0) {
				els_e2x5Max_branch->GetEntry(index);
			} else { 
				printf("branch els_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			els_e2x5Max_isLoaded = true;
		}
		return els_e2x5Max_;
	}
	vector<float> &els_e3x3()
	{
		if (not els_e3x3_isLoaded) {
			if (els_e3x3_branch != 0) {
				els_e3x3_branch->GetEntry(index);
			} else { 
				printf("branch els_e3x3_branch does not exist!\n");
				exit(1);
			}
			els_e3x3_isLoaded = true;
		}
		return els_e3x3_;
	}
	vector<float> &els_e5x5()
	{
		if (not els_e5x5_isLoaded) {
			if (els_e5x5_branch != 0) {
				els_e5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_e5x5_branch does not exist!\n");
				exit(1);
			}
			els_e5x5_isLoaded = true;
		}
		return els_e5x5_;
	}
	vector<float> &els_eMax()
	{
		if (not els_eMax_isLoaded) {
			if (els_eMax_branch != 0) {
				els_eMax_branch->GetEntry(index);
			} else { 
				printf("branch els_eMax_branch does not exist!\n");
				exit(1);
			}
			els_eMax_isLoaded = true;
		}
		return els_eMax_;
	}
	vector<float> &els_eOverPIn()
	{
		if (not els_eOverPIn_isLoaded) {
			if (els_eOverPIn_branch != 0) {
				els_eOverPIn_branch->GetEntry(index);
			} else { 
				printf("branch els_eOverPIn_branch does not exist!\n");
				exit(1);
			}
			els_eOverPIn_isLoaded = true;
		}
		return els_eOverPIn_;
	}
	vector<float> &els_eOverPOut()
	{
		if (not els_eOverPOut_isLoaded) {
			if (els_eOverPOut_branch != 0) {
				els_eOverPOut_branch->GetEntry(index);
			} else { 
				printf("branch els_eOverPOut_branch does not exist!\n");
				exit(1);
			}
			els_eOverPOut_isLoaded = true;
		}
		return els_eOverPOut_;
	}
	vector<float> &els_eSC()
	{
		if (not els_eSC_isLoaded) {
			if (els_eSC_branch != 0) {
				els_eSC_branch->GetEntry(index);
			} else { 
				printf("branch els_eSC_branch does not exist!\n");
				exit(1);
			}
			els_eSC_isLoaded = true;
		}
		return els_eSC_;
	}
	vector<float> &els_eSCPresh()
	{
		if (not els_eSCPresh_isLoaded) {
			if (els_eSCPresh_branch != 0) {
				els_eSCPresh_branch->GetEntry(index);
			} else { 
				printf("branch els_eSCPresh_branch does not exist!\n");
				exit(1);
			}
			els_eSCPresh_isLoaded = true;
		}
		return els_eSCPresh_;
	}
	vector<float> &els_eSCRaw()
	{
		if (not els_eSCRaw_isLoaded) {
			if (els_eSCRaw_branch != 0) {
				els_eSCRaw_branch->GetEntry(index);
			} else { 
				printf("branch els_eSCRaw_branch does not exist!\n");
				exit(1);
			}
			els_eSCRaw_isLoaded = true;
		}
		return els_eSCRaw_;
	}
	vector<float> &els_eSeed()
	{
		if (not els_eSeed_isLoaded) {
			if (els_eSeed_branch != 0) {
				els_eSeed_branch->GetEntry(index);
			} else { 
				printf("branch els_eSeed_branch does not exist!\n");
				exit(1);
			}
			els_eSeed_isLoaded = true;
		}
		return els_eSeed_;
	}
	vector<float> &els_eSeedOverPIn()
	{
		if (not els_eSeedOverPIn_isLoaded) {
			if (els_eSeedOverPIn_branch != 0) {
				els_eSeedOverPIn_branch->GetEntry(index);
			} else { 
				printf("branch els_eSeedOverPIn_branch does not exist!\n");
				exit(1);
			}
			els_eSeedOverPIn_isLoaded = true;
		}
		return els_eSeedOverPIn_;
	}
	vector<float> &els_eSeedOverPOut()
	{
		if (not els_eSeedOverPOut_isLoaded) {
			if (els_eSeedOverPOut_branch != 0) {
				els_eSeedOverPOut_branch->GetEntry(index);
			} else { 
				printf("branch els_eSeedOverPOut_branch does not exist!\n");
				exit(1);
			}
			els_eSeedOverPOut_isLoaded = true;
		}
		return els_eSeedOverPOut_;
	}
	vector<float> &els_ecalEnergy()
	{
		if (not els_ecalEnergy_isLoaded) {
			if (els_ecalEnergy_branch != 0) {
				els_ecalEnergy_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalEnergy_branch does not exist!\n");
				exit(1);
			}
			els_ecalEnergy_isLoaded = true;
		}
		return els_ecalEnergy_;
	}
	vector<float> &els_ecalEnergyError()
	{
		if (not els_ecalEnergyError_isLoaded) {
			if (els_ecalEnergyError_branch != 0) {
				els_ecalEnergyError_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalEnergyError_branch does not exist!\n");
				exit(1);
			}
			els_ecalEnergyError_isLoaded = true;
		}
		return els_ecalEnergyError_;
	}
	vector<float> &els_ecalIso()
	{
		if (not els_ecalIso_isLoaded) {
			if (els_ecalIso_branch != 0) {
				els_ecalIso_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalIso_isLoaded = true;
		}
		return els_ecalIso_;
	}
	vector<float> &els_ecalIso04()
	{
		if (not els_ecalIso04_isLoaded) {
			if (els_ecalIso04_branch != 0) {
				els_ecalIso04_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalIso04_branch does not exist!\n");
				exit(1);
			}
			els_ecalIso04_isLoaded = true;
		}
		return els_ecalIso04_;
	}
	vector<float> &els_egamma_looseId()
	{
		if (not els_egamma_looseId_isLoaded) {
			if (els_egamma_looseId_branch != 0) {
				els_egamma_looseId_branch->GetEntry(index);
			} else { 
				printf("branch els_egamma_looseId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_looseId_isLoaded = true;
		}
		return els_egamma_looseId_;
	}
	vector<float> &els_egamma_robustHighEnergy()
	{
		if (not els_egamma_robustHighEnergy_isLoaded) {
			if (els_egamma_robustHighEnergy_branch != 0) {
				els_egamma_robustHighEnergy_branch->GetEntry(index);
			} else { 
				printf("branch els_egamma_robustHighEnergy_branch does not exist!\n");
				exit(1);
			}
			els_egamma_robustHighEnergy_isLoaded = true;
		}
		return els_egamma_robustHighEnergy_;
	}
	vector<float> &els_egamma_robustLooseId()
	{
		if (not els_egamma_robustLooseId_isLoaded) {
			if (els_egamma_robustLooseId_branch != 0) {
				els_egamma_robustLooseId_branch->GetEntry(index);
			} else { 
				printf("branch els_egamma_robustLooseId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_robustLooseId_isLoaded = true;
		}
		return els_egamma_robustLooseId_;
	}
	vector<float> &els_egamma_robustTightId()
	{
		if (not els_egamma_robustTightId_isLoaded) {
			if (els_egamma_robustTightId_branch != 0) {
				els_egamma_robustTightId_branch->GetEntry(index);
			} else { 
				printf("branch els_egamma_robustTightId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_robustTightId_isLoaded = true;
		}
		return els_egamma_robustTightId_;
	}
	vector<float> &els_egamma_tightId()
	{
		if (not els_egamma_tightId_isLoaded) {
			if (els_egamma_tightId_branch != 0) {
				els_egamma_tightId_branch->GetEntry(index);
			} else { 
				printf("branch els_egamma_tightId_branch does not exist!\n");
				exit(1);
			}
			els_egamma_tightId_isLoaded = true;
		}
		return els_egamma_tightId_;
	}
	vector<float> &els_electronMomentumError()
	{
		if (not els_electronMomentumError_isLoaded) {
			if (els_electronMomentumError_branch != 0) {
				els_electronMomentumError_branch->GetEntry(index);
			} else { 
				printf("branch els_electronMomentumError_branch does not exist!\n");
				exit(1);
			}
			els_electronMomentumError_isLoaded = true;
		}
		return els_electronMomentumError_;
	}
	vector<float> &els_etaErr()
	{
		if (not els_etaErr_isLoaded) {
			if (els_etaErr_branch != 0) {
				els_etaErr_branch->GetEntry(index);
			} else { 
				printf("branch els_etaErr_branch does not exist!\n");
				exit(1);
			}
			els_etaErr_isLoaded = true;
		}
		return els_etaErr_;
	}
	vector<float> &els_etaSC()
	{
		if (not els_etaSC_isLoaded) {
			if (els_etaSC_branch != 0) {
				els_etaSC_branch->GetEntry(index);
			} else { 
				printf("branch els_etaSC_branch does not exist!\n");
				exit(1);
			}
			els_etaSC_isLoaded = true;
		}
		return els_etaSC_;
	}
	vector<float> &els_fbrem()
	{
		if (not els_fbrem_isLoaded) {
			if (els_fbrem_branch != 0) {
				els_fbrem_branch->GetEntry(index);
			} else { 
				printf("branch els_fbrem_branch does not exist!\n");
				exit(1);
			}
			els_fbrem_isLoaded = true;
		}
		return els_fbrem_;
	}
	vector<float> &els_hOverE()
	{
		if (not els_hOverE_isLoaded) {
			if (els_hOverE_branch != 0) {
				els_hOverE_branch->GetEntry(index);
			} else { 
				printf("branch els_hOverE_branch does not exist!\n");
				exit(1);
			}
			els_hOverE_isLoaded = true;
		}
		return els_hOverE_;
	}
	vector<float> &els_hcalIso()
	{
		if (not els_hcalIso_isLoaded) {
			if (els_hcalIso_branch != 0) {
				els_hcalIso_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalIso_branch does not exist!\n");
				exit(1);
			}
			els_hcalIso_isLoaded = true;
		}
		return els_hcalIso_;
	}
	vector<float> &els_hcalIso04()
	{
		if (not els_hcalIso04_isLoaded) {
			if (els_hcalIso04_branch != 0) {
				els_hcalIso04_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalIso04_branch does not exist!\n");
				exit(1);
			}
			els_hcalIso04_isLoaded = true;
		}
		return els_hcalIso04_;
	}
	vector<float> &els_layer1_charge()
	{
		if (not els_layer1_charge_isLoaded) {
			if (els_layer1_charge_branch != 0) {
				els_layer1_charge_branch->GetEntry(index);
			} else { 
				printf("branch els_layer1_charge_branch does not exist!\n");
				exit(1);
			}
			els_layer1_charge_isLoaded = true;
		}
		return els_layer1_charge_;
	}
	vector<float> &els_ndof()
	{
		if (not els_ndof_isLoaded) {
			if (els_ndof_branch != 0) {
				els_ndof_branch->GetEntry(index);
			} else { 
				printf("branch els_ndof_branch does not exist!\n");
				exit(1);
			}
			els_ndof_isLoaded = true;
		}
		return els_ndof_;
	}
	vector<float> &els_phiErr()
	{
		if (not els_phiErr_isLoaded) {
			if (els_phiErr_branch != 0) {
				els_phiErr_branch->GetEntry(index);
			} else { 
				printf("branch els_phiErr_branch does not exist!\n");
				exit(1);
			}
			els_phiErr_isLoaded = true;
		}
		return els_phiErr_;
	}
	vector<float> &els_phiSC()
	{
		if (not els_phiSC_isLoaded) {
			if (els_phiSC_branch != 0) {
				els_phiSC_branch->GetEntry(index);
			} else { 
				printf("branch els_phiSC_branch does not exist!\n");
				exit(1);
			}
			els_phiSC_isLoaded = true;
		}
		return els_phiSC_;
	}
	vector<float> &els_ptErr()
	{
		if (not els_ptErr_isLoaded) {
			if (els_ptErr_branch != 0) {
				els_ptErr_branch->GetEntry(index);
			} else { 
				printf("branch els_ptErr_branch does not exist!\n");
				exit(1);
			}
			els_ptErr_isLoaded = true;
		}
		return els_ptErr_;
	}
	vector<float> &els_sigmaEtaEta()
	{
		if (not els_sigmaEtaEta_isLoaded) {
			if (els_sigmaEtaEta_branch != 0) {
				els_sigmaEtaEta_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			els_sigmaEtaEta_isLoaded = true;
		}
		return els_sigmaEtaEta_;
	}
	vector<float> &els_sigmaIEtaIEta()
	{
		if (not els_sigmaIEtaIEta_isLoaded) {
			if (els_sigmaIEtaIEta_branch != 0) {
				els_sigmaIEtaIEta_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIEtaIEta_isLoaded = true;
		}
		return els_sigmaIEtaIEta_;
	}
	vector<float> &els_sigmaIPhiIPhi()
	{
		if (not els_sigmaIPhiIPhi_isLoaded) {
			if (els_sigmaIPhiIPhi_branch != 0) {
				els_sigmaIPhiIPhi_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaIPhiIPhi_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIPhiIPhi_isLoaded = true;
		}
		return els_sigmaIPhiIPhi_;
	}
	vector<float> &els_sigmaPhiPhi()
	{
		if (not els_sigmaPhiPhi_isLoaded) {
			if (els_sigmaPhiPhi_branch != 0) {
				els_sigmaPhiPhi_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaPhiPhi_branch does not exist!\n");
				exit(1);
			}
			els_sigmaPhiPhi_isLoaded = true;
		}
		return els_sigmaPhiPhi_;
	}
	vector<float> &els_tkIso()
	{
		if (not els_tkIso_isLoaded) {
			if (els_tkIso_branch != 0) {
				els_tkIso_branch->GetEntry(index);
			} else { 
				printf("branch els_tkIso_branch does not exist!\n");
				exit(1);
			}
			els_tkIso_isLoaded = true;
		}
		return els_tkIso_;
	}
	vector<float> &els_tkIso04()
	{
		if (not els_tkIso04_isLoaded) {
			if (els_tkIso04_branch != 0) {
				els_tkIso04_branch->GetEntry(index);
			} else { 
				printf("branch els_tkIso04_branch does not exist!\n");
				exit(1);
			}
			els_tkIso04_isLoaded = true;
		}
		return els_tkIso04_;
	}
	vector<float> &els_trackMomentumError()
	{
		if (not els_trackMomentumError_isLoaded) {
			if (els_trackMomentumError_branch != 0) {
				els_trackMomentumError_branch->GetEntry(index);
			} else { 
				printf("branch els_trackMomentumError_branch does not exist!\n");
				exit(1);
			}
			els_trackMomentumError_isLoaded = true;
		}
		return els_trackMomentumError_;
	}
	vector<float> &els_trkdr()
	{
		if (not els_trkdr_isLoaded) {
			if (els_trkdr_branch != 0) {
				els_trkdr_branch->GetEntry(index);
			} else { 
				printf("branch els_trkdr_branch does not exist!\n");
				exit(1);
			}
			els_trkdr_isLoaded = true;
		}
		return els_trkdr_;
	}
	vector<float> &els_trkshFrac()
	{
		if (not els_trkshFrac_isLoaded) {
			if (els_trkshFrac_branch != 0) {
				els_trkshFrac_branch->GetEntry(index);
			} else { 
				printf("branch els_trkshFrac_branch does not exist!\n");
				exit(1);
			}
			els_trkshFrac_isLoaded = true;
		}
		return els_trkshFrac_;
	}
	vector<float> &els_z0()
	{
		if (not els_z0_isLoaded) {
			if (els_z0_branch != 0) {
				els_z0_branch->GetEntry(index);
			} else { 
				printf("branch els_z0_branch does not exist!\n");
				exit(1);
			}
			els_z0_isLoaded = true;
		}
		return els_z0_;
	}
	vector<float> &els_z0Err()
	{
		if (not els_z0Err_isLoaded) {
			if (els_z0Err_branch != 0) {
				els_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch els_z0Err_branch does not exist!\n");
				exit(1);
			}
			els_z0Err_isLoaded = true;
		}
		return els_z0Err_;
	}
	vector<float> &els_z0corr()
	{
		if (not els_z0corr_isLoaded) {
			if (els_z0corr_branch != 0) {
				els_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch els_z0corr_branch does not exist!\n");
				exit(1);
			}
			els_z0corr_isLoaded = true;
		}
		return els_z0corr_;
	}
	vector<float> &jets_cor()
	{
		if (not jets_cor_isLoaded) {
			if (jets_cor_branch != 0) {
				jets_cor_branch->GetEntry(index);
			} else { 
				printf("branch jets_cor_branch does not exist!\n");
				exit(1);
			}
			jets_cor_isLoaded = true;
		}
		return jets_cor_;
	}
	vector<float> &jets_emFrac()
	{
		if (not jets_emFrac_isLoaded) {
			if (jets_emFrac_branch != 0) {
				jets_emFrac_branch->GetEntry(index);
			} else { 
				printf("branch jets_emFrac_branch does not exist!\n");
				exit(1);
			}
			jets_emFrac_isLoaded = true;
		}
		return jets_emFrac_;
	}
	vector<float> &jets_fHPD()
	{
		if (not jets_fHPD_isLoaded) {
			if (jets_fHPD_branch != 0) {
				jets_fHPD_branch->GetEntry(index);
			} else { 
				printf("branch jets_fHPD_branch does not exist!\n");
				exit(1);
			}
			jets_fHPD_isLoaded = true;
		}
		return jets_fHPD_;
	}
	vector<float> &jets_fRBX()
	{
		if (not jets_fRBX_isLoaded) {
			if (jets_fRBX_branch != 0) {
				jets_fRBX_branch->GetEntry(index);
			} else { 
				printf("branch jets_fRBX_branch does not exist!\n");
				exit(1);
			}
			jets_fRBX_isLoaded = true;
		}
		return jets_fRBX_;
	}
	vector<float> &jets_fSubDetector1()
	{
		if (not jets_fSubDetector1_isLoaded) {
			if (jets_fSubDetector1_branch != 0) {
				jets_fSubDetector1_branch->GetEntry(index);
			} else { 
				printf("branch jets_fSubDetector1_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector1_isLoaded = true;
		}
		return jets_fSubDetector1_;
	}
	vector<float> &jets_fSubDetector2()
	{
		if (not jets_fSubDetector2_isLoaded) {
			if (jets_fSubDetector2_branch != 0) {
				jets_fSubDetector2_branch->GetEntry(index);
			} else { 
				printf("branch jets_fSubDetector2_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector2_isLoaded = true;
		}
		return jets_fSubDetector2_;
	}
	vector<float> &jets_fSubDetector3()
	{
		if (not jets_fSubDetector3_isLoaded) {
			if (jets_fSubDetector3_branch != 0) {
				jets_fSubDetector3_branch->GetEntry(index);
			} else { 
				printf("branch jets_fSubDetector3_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector3_isLoaded = true;
		}
		return jets_fSubDetector3_;
	}
	vector<float> &jets_fSubDetector4()
	{
		if (not jets_fSubDetector4_isLoaded) {
			if (jets_fSubDetector4_branch != 0) {
				jets_fSubDetector4_branch->GetEntry(index);
			} else { 
				printf("branch jets_fSubDetector4_branch does not exist!\n");
				exit(1);
			}
			jets_fSubDetector4_isLoaded = true;
		}
		return jets_fSubDetector4_;
	}
	vector<float> &jets_n90Hits()
	{
		if (not jets_n90Hits_isLoaded) {
			if (jets_n90Hits_branch != 0) {
				jets_n90Hits_branch->GetEntry(index);
			} else { 
				printf("branch jets_n90Hits_branch does not exist!\n");
				exit(1);
			}
			jets_n90Hits_isLoaded = true;
		}
		return jets_n90Hits_;
	}
	vector<float> &jets_nECALTowers()
	{
		if (not jets_nECALTowers_isLoaded) {
			if (jets_nECALTowers_branch != 0) {
				jets_nECALTowers_branch->GetEntry(index);
			} else { 
				printf("branch jets_nECALTowers_branch does not exist!\n");
				exit(1);
			}
			jets_nECALTowers_isLoaded = true;
		}
		return jets_nECALTowers_;
	}
	vector<float> &jets_nHCALTowers()
	{
		if (not jets_nHCALTowers_isLoaded) {
			if (jets_nHCALTowers_branch != 0) {
				jets_nHCALTowers_branch->GetEntry(index);
			} else { 
				printf("branch jets_nHCALTowers_branch does not exist!\n");
				exit(1);
			}
			jets_nHCALTowers_isLoaded = true;
		}
		return jets_nHCALTowers_;
	}
	vector<float> &jets_restrictedEMF()
	{
		if (not jets_restrictedEMF_isLoaded) {
			if (jets_restrictedEMF_branch != 0) {
				jets_restrictedEMF_branch->GetEntry(index);
			} else { 
				printf("branch jets_restrictedEMF_branch does not exist!\n");
				exit(1);
			}
			jets_restrictedEMF_isLoaded = true;
		}
		return jets_restrictedEMF_;
	}
	vector<float> &jpts_emFrac()
	{
		if (not jpts_emFrac_isLoaded) {
			if (jpts_emFrac_branch != 0) {
				jpts_emFrac_branch->GetEntry(index);
			} else { 
				printf("branch jpts_emFrac_branch does not exist!\n");
				exit(1);
			}
			jpts_emFrac_isLoaded = true;
		}
		return jpts_emFrac_;
	}
	vector<float> &evt_ecalmet_etaslice()
	{
		if (not evt_ecalmet_etaslice_isLoaded) {
			if (evt_ecalmet_etaslice_branch != 0) {
				evt_ecalmet_etaslice_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalmet_etaslice_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmet_etaslice_isLoaded = true;
		}
		return evt_ecalmet_etaslice_;
	}
	vector<float> &evt_ecalmet_etaslicePhi()
	{
		if (not evt_ecalmet_etaslicePhi_isLoaded) {
			if (evt_ecalmet_etaslicePhi_branch != 0) {
				evt_ecalmet_etaslicePhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalmet_etaslicePhi_branch does not exist!\n");
				exit(1);
			}
			evt_ecalmet_etaslicePhi_isLoaded = true;
		}
		return evt_ecalmet_etaslicePhi_;
	}
	vector<float> &evt_hcalmet_etaslice()
	{
		if (not evt_hcalmet_etaslice_isLoaded) {
			if (evt_hcalmet_etaslice_branch != 0) {
				evt_hcalmet_etaslice_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalmet_etaslice_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmet_etaslice_isLoaded = true;
		}
		return evt_hcalmet_etaslice_;
	}
	vector<float> &evt_hcalmet_etaslicePhi()
	{
		if (not evt_hcalmet_etaslicePhi_isLoaded) {
			if (evt_hcalmet_etaslicePhi_branch != 0) {
				evt_hcalmet_etaslicePhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalmet_etaslicePhi_branch does not exist!\n");
				exit(1);
			}
			evt_hcalmet_etaslicePhi_isLoaded = true;
		}
		return evt_hcalmet_etaslicePhi_;
	}
	vector<float> &evt_towermet_etaslice()
	{
		if (not evt_towermet_etaslice_isLoaded) {
			if (evt_towermet_etaslice_branch != 0) {
				evt_towermet_etaslice_branch->GetEntry(index);
			} else { 
				printf("branch evt_towermet_etaslice_branch does not exist!\n");
				exit(1);
			}
			evt_towermet_etaslice_isLoaded = true;
		}
		return evt_towermet_etaslice_;
	}
	vector<float> &evt_towermet_etaslicePhi()
	{
		if (not evt_towermet_etaslicePhi_isLoaded) {
			if (evt_towermet_etaslicePhi_branch != 0) {
				evt_towermet_etaslicePhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_towermet_etaslicePhi_branch does not exist!\n");
				exit(1);
			}
			evt_towermet_etaslicePhi_isLoaded = true;
		}
		return evt_towermet_etaslicePhi_;
	}
	vector<float> &mus_met_deltax()
	{
		if (not mus_met_deltax_isLoaded) {
			if (mus_met_deltax_branch != 0) {
				mus_met_deltax_branch->GetEntry(index);
			} else { 
				printf("branch mus_met_deltax_branch does not exist!\n");
				exit(1);
			}
			mus_met_deltax_isLoaded = true;
		}
		return mus_met_deltax_;
	}
	vector<float> &mus_met_deltay()
	{
		if (not mus_met_deltay_isLoaded) {
			if (mus_met_deltay_branch != 0) {
				mus_met_deltay_branch->GetEntry(index);
			} else { 
				printf("branch mus_met_deltay_branch does not exist!\n");
				exit(1);
			}
			mus_met_deltay_isLoaded = true;
		}
		return mus_met_deltay_;
	}
	vector<float> &mus_eledr()
	{
		if (not mus_eledr_isLoaded) {
			if (mus_eledr_branch != 0) {
				mus_eledr_branch->GetEntry(index);
			} else { 
				printf("branch mus_eledr_branch does not exist!\n");
				exit(1);
			}
			mus_eledr_isLoaded = true;
		}
		return mus_eledr_;
	}
	vector<float> &mus_jetdr()
	{
		if (not mus_jetdr_isLoaded) {
			if (mus_jetdr_branch != 0) {
				mus_jetdr_branch->GetEntry(index);
			} else { 
				printf("branch mus_jetdr_branch does not exist!\n");
				exit(1);
			}
			mus_jetdr_isLoaded = true;
		}
		return mus_jetdr_;
	}
	vector<float> &mus_caloCompatibility()
	{
		if (not mus_caloCompatibility_isLoaded) {
			if (mus_caloCompatibility_branch != 0) {
				mus_caloCompatibility_branch->GetEntry(index);
			} else { 
				printf("branch mus_caloCompatibility_branch does not exist!\n");
				exit(1);
			}
			mus_caloCompatibility_isLoaded = true;
		}
		return mus_caloCompatibility_;
	}
	vector<float> &mus_chi2()
	{
		if (not mus_chi2_isLoaded) {
			if (mus_chi2_branch != 0) {
				mus_chi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_chi2_isLoaded = true;
		}
		return mus_chi2_;
	}
	vector<float> &mus_d0()
	{
		if (not mus_d0_isLoaded) {
			if (mus_d0_branch != 0) {
				mus_d0_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0_branch does not exist!\n");
				exit(1);
			}
			mus_d0_isLoaded = true;
		}
		return mus_d0_;
	}
	vector<float> &mus_d0Err()
	{
		if (not mus_d0Err_isLoaded) {
			if (mus_d0Err_branch != 0) {
				mus_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_d0Err_isLoaded = true;
		}
		return mus_d0Err_;
	}
	vector<float> &mus_d0corr()
	{
		if (not mus_d0corr_isLoaded) {
			if (mus_d0corr_branch != 0) {
				mus_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_d0corr_isLoaded = true;
		}
		return mus_d0corr_;
	}
	vector<float> &mus_e_em()
	{
		if (not mus_e_em_isLoaded) {
			if (mus_e_em_branch != 0) {
				mus_e_em_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_em_branch does not exist!\n");
				exit(1);
			}
			mus_e_em_isLoaded = true;
		}
		return mus_e_em_;
	}
	vector<float> &mus_e_emS9()
	{
		if (not mus_e_emS9_isLoaded) {
			if (mus_e_emS9_branch != 0) {
				mus_e_emS9_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_emS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_emS9_isLoaded = true;
		}
		return mus_e_emS9_;
	}
	vector<float> &mus_e_had()
	{
		if (not mus_e_had_isLoaded) {
			if (mus_e_had_branch != 0) {
				mus_e_had_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_had_branch does not exist!\n");
				exit(1);
			}
			mus_e_had_isLoaded = true;
		}
		return mus_e_had_;
	}
	vector<float> &mus_e_hadS9()
	{
		if (not mus_e_hadS9_isLoaded) {
			if (mus_e_hadS9_branch != 0) {
				mus_e_hadS9_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_hadS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_hadS9_isLoaded = true;
		}
		return mus_e_hadS9_;
	}
	vector<float> &mus_e_ho()
	{
		if (not mus_e_ho_isLoaded) {
			if (mus_e_ho_branch != 0) {
				mus_e_ho_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_ho_branch does not exist!\n");
				exit(1);
			}
			mus_e_ho_isLoaded = true;
		}
		return mus_e_ho_;
	}
	vector<float> &mus_e_hoS9()
	{
		if (not mus_e_hoS9_isLoaded) {
			if (mus_e_hoS9_branch != 0) {
				mus_e_hoS9_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_hoS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_hoS9_isLoaded = true;
		}
		return mus_e_hoS9_;
	}
	vector<float> &mus_etaErr()
	{
		if (not mus_etaErr_isLoaded) {
			if (mus_etaErr_branch != 0) {
				mus_etaErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_etaErr_branch does not exist!\n");
				exit(1);
			}
			mus_etaErr_isLoaded = true;
		}
		return mus_etaErr_;
	}
	vector<float> &mus_gfit_chi2()
	{
		if (not mus_gfit_chi2_isLoaded) {
			if (mus_gfit_chi2_branch != 0) {
				mus_gfit_chi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_chi2_isLoaded = true;
		}
		return mus_gfit_chi2_;
	}
	vector<float> &mus_gfit_d0()
	{
		if (not mus_gfit_d0_isLoaded) {
			if (mus_gfit_d0_branch != 0) {
				mus_gfit_d0_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0_isLoaded = true;
		}
		return mus_gfit_d0_;
	}
	vector<float> &mus_gfit_d0Err()
	{
		if (not mus_gfit_d0Err_isLoaded) {
			if (mus_gfit_d0Err_branch != 0) {
				mus_gfit_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0Err_isLoaded = true;
		}
		return mus_gfit_d0Err_;
	}
	vector<float> &mus_gfit_d0corr()
	{
		if (not mus_gfit_d0corr_isLoaded) {
			if (mus_gfit_d0corr_branch != 0) {
				mus_gfit_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0corr_isLoaded = true;
		}
		return mus_gfit_d0corr_;
	}
	vector<float> &mus_gfit_ndof()
	{
		if (not mus_gfit_ndof_isLoaded) {
			if (mus_gfit_ndof_branch != 0) {
				mus_gfit_ndof_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_ndof_isLoaded = true;
		}
		return mus_gfit_ndof_;
	}
	vector<float> &mus_gfit_qoverp()
	{
		if (not mus_gfit_qoverp_isLoaded) {
			if (mus_gfit_qoverp_branch != 0) {
				mus_gfit_qoverp_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_qoverp_isLoaded = true;
		}
		return mus_gfit_qoverp_;
	}
	vector<float> &mus_gfit_qoverpError()
	{
		if (not mus_gfit_qoverpError_isLoaded) {
			if (mus_gfit_qoverpError_branch != 0) {
				mus_gfit_qoverpError_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_qoverpError_isLoaded = true;
		}
		return mus_gfit_qoverpError_;
	}
	vector<float> &mus_gfit_z0()
	{
		if (not mus_gfit_z0_isLoaded) {
			if (mus_gfit_z0_branch != 0) {
				mus_gfit_z0_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_z0_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0_isLoaded = true;
		}
		return mus_gfit_z0_;
	}
	vector<float> &mus_gfit_z0Err()
	{
		if (not mus_gfit_z0Err_isLoaded) {
			if (mus_gfit_z0Err_branch != 0) {
				mus_gfit_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0Err_isLoaded = true;
		}
		return mus_gfit_z0Err_;
	}
	vector<float> &mus_gfit_z0corr()
	{
		if (not mus_gfit_z0corr_isLoaded) {
			if (mus_gfit_z0corr_branch != 0) {
				mus_gfit_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0corr_isLoaded = true;
		}
		return mus_gfit_z0corr_;
	}
	vector<float> &mus_iso03_emEt()
	{
		if (not mus_iso03_emEt_isLoaded) {
			if (mus_iso03_emEt_branch != 0) {
				mus_iso03_emEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_emEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_emEt_isLoaded = true;
		}
		return mus_iso03_emEt_;
	}
	vector<float> &mus_iso03_hadEt()
	{
		if (not mus_iso03_hadEt_isLoaded) {
			if (mus_iso03_hadEt_branch != 0) {
				mus_iso03_hadEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_hadEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_hadEt_isLoaded = true;
		}
		return mus_iso03_hadEt_;
	}
	vector<float> &mus_iso03_hoEt()
	{
		if (not mus_iso03_hoEt_isLoaded) {
			if (mus_iso03_hoEt_branch != 0) {
				mus_iso03_hoEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_hoEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_hoEt_isLoaded = true;
		}
		return mus_iso03_hoEt_;
	}
	vector<float> &mus_iso03_sumPt()
	{
		if (not mus_iso03_sumPt_isLoaded) {
			if (mus_iso03_sumPt_branch != 0) {
				mus_iso03_sumPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_sumPt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_sumPt_isLoaded = true;
		}
		return mus_iso03_sumPt_;
	}
	vector<float> &mus_iso05_emEt()
	{
		if (not mus_iso05_emEt_isLoaded) {
			if (mus_iso05_emEt_branch != 0) {
				mus_iso05_emEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_emEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_emEt_isLoaded = true;
		}
		return mus_iso05_emEt_;
	}
	vector<float> &mus_iso05_hadEt()
	{
		if (not mus_iso05_hadEt_isLoaded) {
			if (mus_iso05_hadEt_branch != 0) {
				mus_iso05_hadEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_hadEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_hadEt_isLoaded = true;
		}
		return mus_iso05_hadEt_;
	}
	vector<float> &mus_iso05_hoEt()
	{
		if (not mus_iso05_hoEt_isLoaded) {
			if (mus_iso05_hoEt_branch != 0) {
				mus_iso05_hoEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_hoEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_hoEt_isLoaded = true;
		}
		return mus_iso05_hoEt_;
	}
	vector<float> &mus_iso05_sumPt()
	{
		if (not mus_iso05_sumPt_isLoaded) {
			if (mus_iso05_sumPt_branch != 0) {
				mus_iso05_sumPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_sumPt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_sumPt_isLoaded = true;
		}
		return mus_iso05_sumPt_;
	}
	vector<float> &mus_iso_ecalvetoDep()
	{
		if (not mus_iso_ecalvetoDep_isLoaded) {
			if (mus_iso_ecalvetoDep_branch != 0) {
				mus_iso_ecalvetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_ecalvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_ecalvetoDep_isLoaded = true;
		}
		return mus_iso_ecalvetoDep_;
	}
	vector<float> &mus_iso_hcalvetoDep()
	{
		if (not mus_iso_hcalvetoDep_isLoaded) {
			if (mus_iso_hcalvetoDep_branch != 0) {
				mus_iso_hcalvetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_hcalvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_hcalvetoDep_isLoaded = true;
		}
		return mus_iso_hcalvetoDep_;
	}
	vector<float> &mus_iso_hovetoDep()
	{
		if (not mus_iso_hovetoDep_isLoaded) {
			if (mus_iso_hovetoDep_branch != 0) {
				mus_iso_hovetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_hovetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_hovetoDep_isLoaded = true;
		}
		return mus_iso_hovetoDep_;
	}
	vector<float> &mus_iso_trckvetoDep()
	{
		if (not mus_iso_trckvetoDep_isLoaded) {
			if (mus_iso_trckvetoDep_branch != 0) {
				mus_iso_trckvetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_trckvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_trckvetoDep_isLoaded = true;
		}
		return mus_iso_trckvetoDep_;
	}
	vector<float> &mus_ndof()
	{
		if (not mus_ndof_isLoaded) {
			if (mus_ndof_branch != 0) {
				mus_ndof_branch->GetEntry(index);
			} else { 
				printf("branch mus_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_ndof_isLoaded = true;
		}
		return mus_ndof_;
	}
	vector<float> &mus_phiErr()
	{
		if (not mus_phiErr_isLoaded) {
			if (mus_phiErr_branch != 0) {
				mus_phiErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_phiErr_branch does not exist!\n");
				exit(1);
			}
			mus_phiErr_isLoaded = true;
		}
		return mus_phiErr_;
	}
	vector<float> &mus_ptErr()
	{
		if (not mus_ptErr_isLoaded) {
			if (mus_ptErr_branch != 0) {
				mus_ptErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_ptErr_branch does not exist!\n");
				exit(1);
			}
			mus_ptErr_isLoaded = true;
		}
		return mus_ptErr_;
	}
	vector<float> &mus_qoverp()
	{
		if (not mus_qoverp_isLoaded) {
			if (mus_qoverp_branch != 0) {
				mus_qoverp_branch->GetEntry(index);
			} else { 
				printf("branch mus_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_qoverp_isLoaded = true;
		}
		return mus_qoverp_;
	}
	vector<float> &mus_qoverpError()
	{
		if (not mus_qoverpError_isLoaded) {
			if (mus_qoverpError_branch != 0) {
				mus_qoverpError_branch->GetEntry(index);
			} else { 
				printf("branch mus_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_qoverpError_isLoaded = true;
		}
		return mus_qoverpError_;
	}
	vector<float> &mus_sta_chi2()
	{
		if (not mus_sta_chi2_isLoaded) {
			if (mus_sta_chi2_branch != 0) {
				mus_sta_chi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_sta_chi2_isLoaded = true;
		}
		return mus_sta_chi2_;
	}
	vector<float> &mus_sta_d0()
	{
		if (not mus_sta_d0_isLoaded) {
			if (mus_sta_d0_branch != 0) {
				mus_sta_d0_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0_isLoaded = true;
		}
		return mus_sta_d0_;
	}
	vector<float> &mus_sta_d0Err()
	{
		if (not mus_sta_d0Err_isLoaded) {
			if (mus_sta_d0Err_branch != 0) {
				mus_sta_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0Err_isLoaded = true;
		}
		return mus_sta_d0Err_;
	}
	vector<float> &mus_sta_d0corr()
	{
		if (not mus_sta_d0corr_isLoaded) {
			if (mus_sta_d0corr_branch != 0) {
				mus_sta_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0corr_isLoaded = true;
		}
		return mus_sta_d0corr_;
	}
	vector<float> &mus_sta_ndof()
	{
		if (not mus_sta_ndof_isLoaded) {
			if (mus_sta_ndof_branch != 0) {
				mus_sta_ndof_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_sta_ndof_isLoaded = true;
		}
		return mus_sta_ndof_;
	}
	vector<float> &mus_sta_qoverp()
	{
		if (not mus_sta_qoverp_isLoaded) {
			if (mus_sta_qoverp_branch != 0) {
				mus_sta_qoverp_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_sta_qoverp_isLoaded = true;
		}
		return mus_sta_qoverp_;
	}
	vector<float> &mus_sta_qoverpError()
	{
		if (not mus_sta_qoverpError_isLoaded) {
			if (mus_sta_qoverpError_branch != 0) {
				mus_sta_qoverpError_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_sta_qoverpError_isLoaded = true;
		}
		return mus_sta_qoverpError_;
	}
	vector<float> &mus_sta_z0()
	{
		if (not mus_sta_z0_isLoaded) {
			if (mus_sta_z0_branch != 0) {
				mus_sta_z0_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_z0_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0_isLoaded = true;
		}
		return mus_sta_z0_;
	}
	vector<float> &mus_sta_z0Err()
	{
		if (not mus_sta_z0Err_isLoaded) {
			if (mus_sta_z0Err_branch != 0) {
				mus_sta_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0Err_isLoaded = true;
		}
		return mus_sta_z0Err_;
	}
	vector<float> &mus_sta_z0corr()
	{
		if (not mus_sta_z0corr_isLoaded) {
			if (mus_sta_z0corr_branch != 0) {
				mus_sta_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0corr_isLoaded = true;
		}
		return mus_sta_z0corr_;
	}
	vector<float> &mus_timeAtIpInOut()
	{
		if (not mus_timeAtIpInOut_isLoaded) {
			if (mus_timeAtIpInOut_branch != 0) {
				mus_timeAtIpInOut_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpInOut_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpInOut_isLoaded = true;
		}
		return mus_timeAtIpInOut_;
	}
	vector<float> &mus_timeAtIpInOutErr()
	{
		if (not mus_timeAtIpInOutErr_isLoaded) {
			if (mus_timeAtIpInOutErr_branch != 0) {
				mus_timeAtIpInOutErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpInOutErr_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpInOutErr_isLoaded = true;
		}
		return mus_timeAtIpInOutErr_;
	}
	vector<float> &mus_timeAtIpOutIn()
	{
		if (not mus_timeAtIpOutIn_isLoaded) {
			if (mus_timeAtIpOutIn_branch != 0) {
				mus_timeAtIpOutIn_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpOutIn_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpOutIn_isLoaded = true;
		}
		return mus_timeAtIpOutIn_;
	}
	vector<float> &mus_timeAtIpOutInErr()
	{
		if (not mus_timeAtIpOutInErr_isLoaded) {
			if (mus_timeAtIpOutInErr_branch != 0) {
				mus_timeAtIpOutInErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpOutInErr_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpOutInErr_isLoaded = true;
		}
		return mus_timeAtIpOutInErr_;
	}
	vector<float> &mus_vertexphi()
	{
		if (not mus_vertexphi_isLoaded) {
			if (mus_vertexphi_branch != 0) {
				mus_vertexphi_branch->GetEntry(index);
			} else { 
				printf("branch mus_vertexphi_branch does not exist!\n");
				exit(1);
			}
			mus_vertexphi_isLoaded = true;
		}
		return mus_vertexphi_;
	}
	vector<float> &mus_z0()
	{
		if (not mus_z0_isLoaded) {
			if (mus_z0_branch != 0) {
				mus_z0_branch->GetEntry(index);
			} else { 
				printf("branch mus_z0_branch does not exist!\n");
				exit(1);
			}
			mus_z0_isLoaded = true;
		}
		return mus_z0_;
	}
	vector<float> &mus_z0Err()
	{
		if (not mus_z0Err_isLoaded) {
			if (mus_z0Err_branch != 0) {
				mus_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_z0Err_isLoaded = true;
		}
		return mus_z0Err_;
	}
	vector<float> &mus_z0corr()
	{
		if (not mus_z0corr_isLoaded) {
			if (mus_z0corr_branch != 0) {
				mus_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_z0corr_isLoaded = true;
		}
		return mus_z0corr_;
	}
	vector<float> &pfjets_chargedEmE()
	{
		if (not pfjets_chargedEmE_isLoaded) {
			if (pfjets_chargedEmE_branch != 0) {
				pfjets_chargedEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_chargedEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedEmE_isLoaded = true;
		}
		return pfjets_chargedEmE_;
	}
	vector<float> &pfjets_chargedHadronE()
	{
		if (not pfjets_chargedHadronE_isLoaded) {
			if (pfjets_chargedHadronE_branch != 0) {
				pfjets_chargedHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_chargedHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedHadronE_isLoaded = true;
		}
		return pfjets_chargedHadronE_;
	}
	vector<float> &pfjets_cor()
	{
		if (not pfjets_cor_isLoaded) {
			if (pfjets_cor_branch != 0) {
				pfjets_cor_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_cor_branch does not exist!\n");
				exit(1);
			}
			pfjets_cor_isLoaded = true;
		}
		return pfjets_cor_;
	}
	vector<float> &pfjets_neutralEmE()
	{
		if (not pfjets_neutralEmE_isLoaded) {
			if (pfjets_neutralEmE_branch != 0) {
				pfjets_neutralEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_neutralEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralEmE_isLoaded = true;
		}
		return pfjets_neutralEmE_;
	}
	vector<float> &pfjets_neutralHadronE()
	{
		if (not pfjets_neutralHadronE_isLoaded) {
			if (pfjets_neutralHadronE_branch != 0) {
				pfjets_neutralHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_neutralHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralHadronE_isLoaded = true;
		}
		return pfjets_neutralHadronE_;
	}
	vector<float> &photons_e1x5()
	{
		if (not photons_e1x5_isLoaded) {
			if (photons_e1x5_branch != 0) {
				photons_e1x5_branch->GetEntry(index);
			} else { 
				printf("branch photons_e1x5_branch does not exist!\n");
				exit(1);
			}
			photons_e1x5_isLoaded = true;
		}
		return photons_e1x5_;
	}
	vector<float> &photons_e2x5Max()
	{
		if (not photons_e2x5Max_isLoaded) {
			if (photons_e2x5Max_branch != 0) {
				photons_e2x5Max_branch->GetEntry(index);
			} else { 
				printf("branch photons_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			photons_e2x5Max_isLoaded = true;
		}
		return photons_e2x5Max_;
	}
	vector<float> &photons_e3x3()
	{
		if (not photons_e3x3_isLoaded) {
			if (photons_e3x3_branch != 0) {
				photons_e3x3_branch->GetEntry(index);
			} else { 
				printf("branch photons_e3x3_branch does not exist!\n");
				exit(1);
			}
			photons_e3x3_isLoaded = true;
		}
		return photons_e3x3_;
	}
	vector<float> &photons_e5x5()
	{
		if (not photons_e5x5_isLoaded) {
			if (photons_e5x5_branch != 0) {
				photons_e5x5_branch->GetEntry(index);
			} else { 
				printf("branch photons_e5x5_branch does not exist!\n");
				exit(1);
			}
			photons_e5x5_isLoaded = true;
		}
		return photons_e5x5_;
	}
	vector<float> &photons_eMax()
	{
		if (not photons_eMax_isLoaded) {
			if (photons_eMax_branch != 0) {
				photons_eMax_branch->GetEntry(index);
			} else { 
				printf("branch photons_eMax_branch does not exist!\n");
				exit(1);
			}
			photons_eMax_isLoaded = true;
		}
		return photons_eMax_;
	}
	vector<float> &photons_eSC()
	{
		if (not photons_eSC_isLoaded) {
			if (photons_eSC_branch != 0) {
				photons_eSC_branch->GetEntry(index);
			} else { 
				printf("branch photons_eSC_branch does not exist!\n");
				exit(1);
			}
			photons_eSC_isLoaded = true;
		}
		return photons_eSC_;
	}
	vector<float> &photons_eSCPresh()
	{
		if (not photons_eSCPresh_isLoaded) {
			if (photons_eSCPresh_branch != 0) {
				photons_eSCPresh_branch->GetEntry(index);
			} else { 
				printf("branch photons_eSCPresh_branch does not exist!\n");
				exit(1);
			}
			photons_eSCPresh_isLoaded = true;
		}
		return photons_eSCPresh_;
	}
	vector<float> &photons_eSCRaw()
	{
		if (not photons_eSCRaw_isLoaded) {
			if (photons_eSCRaw_branch != 0) {
				photons_eSCRaw_branch->GetEntry(index);
			} else { 
				printf("branch photons_eSCRaw_branch does not exist!\n");
				exit(1);
			}
			photons_eSCRaw_isLoaded = true;
		}
		return photons_eSCRaw_;
	}
	vector<float> &photons_eSeed()
	{
		if (not photons_eSeed_isLoaded) {
			if (photons_eSeed_branch != 0) {
				photons_eSeed_branch->GetEntry(index);
			} else { 
				printf("branch photons_eSeed_branch does not exist!\n");
				exit(1);
			}
			photons_eSeed_isLoaded = true;
		}
		return photons_eSeed_;
	}
	vector<float> &photons_ecalIso()
	{
		if (not photons_ecalIso_isLoaded) {
			if (photons_ecalIso_branch != 0) {
				photons_ecalIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_ecalIso_branch does not exist!\n");
				exit(1);
			}
			photons_ecalIso_isLoaded = true;
		}
		return photons_ecalIso_;
	}
	vector<float> &photons_hOverE()
	{
		if (not photons_hOverE_isLoaded) {
			if (photons_hOverE_branch != 0) {
				photons_hOverE_branch->GetEntry(index);
			} else { 
				printf("branch photons_hOverE_branch does not exist!\n");
				exit(1);
			}
			photons_hOverE_isLoaded = true;
		}
		return photons_hOverE_;
	}
	vector<float> &photons_hcalIso()
	{
		if (not photons_hcalIso_isLoaded) {
			if (photons_hcalIso_branch != 0) {
				photons_hcalIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalIso_branch does not exist!\n");
				exit(1);
			}
			photons_hcalIso_isLoaded = true;
		}
		return photons_hcalIso_;
	}
	vector<float> &photons_sigmaEtaEta()
	{
		if (not photons_sigmaEtaEta_isLoaded) {
			if (photons_sigmaEtaEta_branch != 0) {
				photons_sigmaEtaEta_branch->GetEntry(index);
			} else { 
				printf("branch photons_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaEtaEta_isLoaded = true;
		}
		return photons_sigmaEtaEta_;
	}
	vector<float> &photons_sigmaIEtaIEta()
	{
		if (not photons_sigmaIEtaIEta_isLoaded) {
			if (photons_sigmaIEtaIEta_branch != 0) {
				photons_sigmaIEtaIEta_branch->GetEntry(index);
			} else { 
				printf("branch photons_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaIEtaIEta_isLoaded = true;
		}
		return photons_sigmaIEtaIEta_;
	}
	vector<float> &photons_sigmaIPhiIPhi()
	{
		if (not photons_sigmaIPhiIPhi_isLoaded) {
			if (photons_sigmaIPhiIPhi_branch != 0) {
				photons_sigmaIPhiIPhi_branch->GetEntry(index);
			} else { 
				printf("branch photons_sigmaIPhiIPhi_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaIPhiIPhi_isLoaded = true;
		}
		return photons_sigmaIPhiIPhi_;
	}
	vector<float> &photons_sigmaPhiPhi()
	{
		if (not photons_sigmaPhiPhi_isLoaded) {
			if (photons_sigmaPhiPhi_branch != 0) {
				photons_sigmaPhiPhi_branch->GetEntry(index);
			} else { 
				printf("branch photons_sigmaPhiPhi_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaPhiPhi_isLoaded = true;
		}
		return photons_sigmaPhiPhi_;
	}
	vector<float> &photons_tkIsoHollow()
	{
		if (not photons_tkIsoHollow_isLoaded) {
			if (photons_tkIsoHollow_branch != 0) {
				photons_tkIsoHollow_branch->GetEntry(index);
			} else { 
				printf("branch photons_tkIsoHollow_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoHollow_isLoaded = true;
		}
		return photons_tkIsoHollow_;
	}
	vector<float> &photons_tkIsoSolid()
	{
		if (not photons_tkIsoSolid_isLoaded) {
			if (photons_tkIsoSolid_branch != 0) {
				photons_tkIsoSolid_branch->GetEntry(index);
			} else { 
				printf("branch photons_tkIsoSolid_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoSolid_isLoaded = true;
		}
		return photons_tkIsoSolid_;
	}
	vector<float> &ran_dRClosestTower()
	{
		if (not ran_dRClosestTower_isLoaded) {
			if (ran_dRClosestTower_branch != 0) {
				ran_dRClosestTower_branch->GetEntry(index);
			} else { 
				printf("branch ran_dRClosestTower_branch does not exist!\n");
				exit(1);
			}
			ran_dRClosestTower_isLoaded = true;
		}
		return ran_dRClosestTower_;
	}
	vector<float> &ran_dRClosestTowerEmEt()
	{
		if (not ran_dRClosestTowerEmEt_isLoaded) {
			if (ran_dRClosestTowerEmEt_branch != 0) {
				ran_dRClosestTowerEmEt_branch->GetEntry(index);
			} else { 
				printf("branch ran_dRClosestTowerEmEt_branch does not exist!\n");
				exit(1);
			}
			ran_dRClosestTowerEmEt_isLoaded = true;
		}
		return ran_dRClosestTowerEmEt_;
	}
	vector<float> &ran_ecalIso03_egamma()
	{
		if (not ran_ecalIso03_egamma_isLoaded) {
			if (ran_ecalIso03_egamma_branch != 0) {
				ran_ecalIso03_egamma_branch->GetEntry(index);
			} else { 
				printf("branch ran_ecalIso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_ecalIso03_egamma_isLoaded = true;
		}
		return ran_ecalIso03_egamma_;
	}
	vector<float> &ran_ecalIso03_mu()
	{
		if (not ran_ecalIso03_mu_isLoaded) {
			if (ran_ecalIso03_mu_branch != 0) {
				ran_ecalIso03_mu_branch->GetEntry(index);
			} else { 
				printf("branch ran_ecalIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_ecalIso03_mu_isLoaded = true;
		}
		return ran_ecalIso03_mu_;
	}
	vector<float> &ran_hcalD1Iso03_egamma()
	{
		if (not ran_hcalD1Iso03_egamma_isLoaded) {
			if (ran_hcalD1Iso03_egamma_branch != 0) {
				ran_hcalD1Iso03_egamma_branch->GetEntry(index);
			} else { 
				printf("branch ran_hcalD1Iso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_hcalD1Iso03_egamma_isLoaded = true;
		}
		return ran_hcalD1Iso03_egamma_;
	}
	vector<float> &ran_hcalD2Iso03_egamma()
	{
		if (not ran_hcalD2Iso03_egamma_isLoaded) {
			if (ran_hcalD2Iso03_egamma_branch != 0) {
				ran_hcalD2Iso03_egamma_branch->GetEntry(index);
			} else { 
				printf("branch ran_hcalD2Iso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_hcalD2Iso03_egamma_isLoaded = true;
		}
		return ran_hcalD2Iso03_egamma_;
	}
	vector<float> &ran_hcalIso03_egamma()
	{
		if (not ran_hcalIso03_egamma_isLoaded) {
			if (ran_hcalIso03_egamma_branch != 0) {
				ran_hcalIso03_egamma_branch->GetEntry(index);
			} else { 
				printf("branch ran_hcalIso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_hcalIso03_egamma_isLoaded = true;
		}
		return ran_hcalIso03_egamma_;
	}
	vector<float> &ran_hcalIso03_mu()
	{
		if (not ran_hcalIso03_mu_isLoaded) {
			if (ran_hcalIso03_mu_branch != 0) {
				ran_hcalIso03_mu_branch->GetEntry(index);
			} else { 
				printf("branch ran_hcalIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_hcalIso03_mu_isLoaded = true;
		}
		return ran_hcalIso03_mu_;
	}
	vector<float> &ran_hoIso03_mu()
	{
		if (not ran_hoIso03_mu_isLoaded) {
			if (ran_hoIso03_mu_branch != 0) {
				ran_hoIso03_mu_branch->GetEntry(index);
			} else { 
				printf("branch ran_hoIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_hoIso03_mu_isLoaded = true;
		}
		return ran_hoIso03_mu_;
	}
	vector<float> &ran_towerEmEt()
	{
		if (not ran_towerEmEt_isLoaded) {
			if (ran_towerEmEt_branch != 0) {
				ran_towerEmEt_branch->GetEntry(index);
			} else { 
				printf("branch ran_towerEmEt_branch does not exist!\n");
				exit(1);
			}
			ran_towerEmEt_isLoaded = true;
		}
		return ran_towerEmEt_;
	}
	vector<float> &ran_towerHadEt()
	{
		if (not ran_towerHadEt_isLoaded) {
			if (ran_towerHadEt_branch != 0) {
				ran_towerHadEt_branch->GetEntry(index);
			} else { 
				printf("branch ran_towerHadEt_branch does not exist!\n");
				exit(1);
			}
			ran_towerHadEt_isLoaded = true;
		}
		return ran_towerHadEt_;
	}
	vector<float> &ran_trkIso03_egamma()
	{
		if (not ran_trkIso03_egamma_isLoaded) {
			if (ran_trkIso03_egamma_branch != 0) {
				ran_trkIso03_egamma_branch->GetEntry(index);
			} else { 
				printf("branch ran_trkIso03_egamma_branch does not exist!\n");
				exit(1);
			}
			ran_trkIso03_egamma_isLoaded = true;
		}
		return ran_trkIso03_egamma_;
	}
	vector<float> &ran_trkIso03_mu()
	{
		if (not ran_trkIso03_mu_isLoaded) {
			if (ran_trkIso03_mu_branch != 0) {
				ran_trkIso03_mu_branch->GetEntry(index);
			} else { 
				printf("branch ran_trkIso03_mu_branch does not exist!\n");
				exit(1);
			}
			ran_trkIso03_mu_isLoaded = true;
		}
		return ran_trkIso03_mu_;
	}
	vector<float> &scs_clustersSize()
	{
		if (not scs_clustersSize_isLoaded) {
			if (scs_clustersSize_branch != 0) {
				scs_clustersSize_branch->GetEntry(index);
			} else { 
				printf("branch scs_clustersSize_branch does not exist!\n");
				exit(1);
			}
			scs_clustersSize_isLoaded = true;
		}
		return scs_clustersSize_;
	}
	vector<float> &scs_crystalsSize()
	{
		if (not scs_crystalsSize_isLoaded) {
			if (scs_crystalsSize_branch != 0) {
				scs_crystalsSize_branch->GetEntry(index);
			} else { 
				printf("branch scs_crystalsSize_branch does not exist!\n");
				exit(1);
			}
			scs_crystalsSize_isLoaded = true;
		}
		return scs_crystalsSize_;
	}
	vector<float> &scs_e1x3()
	{
		if (not scs_e1x3_isLoaded) {
			if (scs_e1x3_branch != 0) {
				scs_e1x3_branch->GetEntry(index);
			} else { 
				printf("branch scs_e1x3_branch does not exist!\n");
				exit(1);
			}
			scs_e1x3_isLoaded = true;
		}
		return scs_e1x3_;
	}
	vector<float> &scs_e1x5()
	{
		if (not scs_e1x5_isLoaded) {
			if (scs_e1x5_branch != 0) {
				scs_e1x5_branch->GetEntry(index);
			} else { 
				printf("branch scs_e1x5_branch does not exist!\n");
				exit(1);
			}
			scs_e1x5_isLoaded = true;
		}
		return scs_e1x5_;
	}
	vector<float> &scs_e2nd()
	{
		if (not scs_e2nd_isLoaded) {
			if (scs_e2nd_branch != 0) {
				scs_e2nd_branch->GetEntry(index);
			} else { 
				printf("branch scs_e2nd_branch does not exist!\n");
				exit(1);
			}
			scs_e2nd_isLoaded = true;
		}
		return scs_e2nd_;
	}
	vector<float> &scs_e2x2()
	{
		if (not scs_e2x2_isLoaded) {
			if (scs_e2x2_branch != 0) {
				scs_e2x2_branch->GetEntry(index);
			} else { 
				printf("branch scs_e2x2_branch does not exist!\n");
				exit(1);
			}
			scs_e2x2_isLoaded = true;
		}
		return scs_e2x2_;
	}
	vector<float> &scs_e2x5Max()
	{
		if (not scs_e2x5Max_isLoaded) {
			if (scs_e2x5Max_branch != 0) {
				scs_e2x5Max_branch->GetEntry(index);
			} else { 
				printf("branch scs_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			scs_e2x5Max_isLoaded = true;
		}
		return scs_e2x5Max_;
	}
	vector<float> &scs_e3x1()
	{
		if (not scs_e3x1_isLoaded) {
			if (scs_e3x1_branch != 0) {
				scs_e3x1_branch->GetEntry(index);
			} else { 
				printf("branch scs_e3x1_branch does not exist!\n");
				exit(1);
			}
			scs_e3x1_isLoaded = true;
		}
		return scs_e3x1_;
	}
	vector<float> &scs_e3x2()
	{
		if (not scs_e3x2_isLoaded) {
			if (scs_e3x2_branch != 0) {
				scs_e3x2_branch->GetEntry(index);
			} else { 
				printf("branch scs_e3x2_branch does not exist!\n");
				exit(1);
			}
			scs_e3x2_isLoaded = true;
		}
		return scs_e3x2_;
	}
	vector<float> &scs_e3x3()
	{
		if (not scs_e3x3_isLoaded) {
			if (scs_e3x3_branch != 0) {
				scs_e3x3_branch->GetEntry(index);
			} else { 
				printf("branch scs_e3x3_branch does not exist!\n");
				exit(1);
			}
			scs_e3x3_isLoaded = true;
		}
		return scs_e3x3_;
	}
	vector<float> &scs_e4x4()
	{
		if (not scs_e4x4_isLoaded) {
			if (scs_e4x4_branch != 0) {
				scs_e4x4_branch->GetEntry(index);
			} else { 
				printf("branch scs_e4x4_branch does not exist!\n");
				exit(1);
			}
			scs_e4x4_isLoaded = true;
		}
		return scs_e4x4_;
	}
	vector<float> &scs_e5x5()
	{
		if (not scs_e5x5_isLoaded) {
			if (scs_e5x5_branch != 0) {
				scs_e5x5_branch->GetEntry(index);
			} else { 
				printf("branch scs_e5x5_branch does not exist!\n");
				exit(1);
			}
			scs_e5x5_isLoaded = true;
		}
		return scs_e5x5_;
	}
	vector<float> &scs_eMax()
	{
		if (not scs_eMax_isLoaded) {
			if (scs_eMax_branch != 0) {
				scs_eMax_branch->GetEntry(index);
			} else { 
				printf("branch scs_eMax_branch does not exist!\n");
				exit(1);
			}
			scs_eMax_isLoaded = true;
		}
		return scs_eMax_;
	}
	vector<float> &scs_eSeed()
	{
		if (not scs_eSeed_isLoaded) {
			if (scs_eSeed_branch != 0) {
				scs_eSeed_branch->GetEntry(index);
			} else { 
				printf("branch scs_eSeed_branch does not exist!\n");
				exit(1);
			}
			scs_eSeed_isLoaded = true;
		}
		return scs_eSeed_;
	}
	vector<float> &scs_energy()
	{
		if (not scs_energy_isLoaded) {
			if (scs_energy_branch != 0) {
				scs_energy_branch->GetEntry(index);
			} else { 
				printf("branch scs_energy_branch does not exist!\n");
				exit(1);
			}
			scs_energy_isLoaded = true;
		}
		return scs_energy_;
	}
	vector<float> &scs_eta()
	{
		if (not scs_eta_isLoaded) {
			if (scs_eta_branch != 0) {
				scs_eta_branch->GetEntry(index);
			} else { 
				printf("branch scs_eta_branch does not exist!\n");
				exit(1);
			}
			scs_eta_isLoaded = true;
		}
		return scs_eta_;
	}
	vector<float> &scs_hoe()
	{
		if (not scs_hoe_isLoaded) {
			if (scs_hoe_branch != 0) {
				scs_hoe_branch->GetEntry(index);
			} else { 
				printf("branch scs_hoe_branch does not exist!\n");
				exit(1);
			}
			scs_hoe_isLoaded = true;
		}
		return scs_hoe_;
	}
	vector<float> &scs_phi()
	{
		if (not scs_phi_isLoaded) {
			if (scs_phi_branch != 0) {
				scs_phi_branch->GetEntry(index);
			} else { 
				printf("branch scs_phi_branch does not exist!\n");
				exit(1);
			}
			scs_phi_isLoaded = true;
		}
		return scs_phi_;
	}
	vector<float> &scs_preshowerEnergy()
	{
		if (not scs_preshowerEnergy_isLoaded) {
			if (scs_preshowerEnergy_branch != 0) {
				scs_preshowerEnergy_branch->GetEntry(index);
			} else { 
				printf("branch scs_preshowerEnergy_branch does not exist!\n");
				exit(1);
			}
			scs_preshowerEnergy_isLoaded = true;
		}
		return scs_preshowerEnergy_;
	}
	vector<float> &scs_rawEnergy()
	{
		if (not scs_rawEnergy_isLoaded) {
			if (scs_rawEnergy_branch != 0) {
				scs_rawEnergy_branch->GetEntry(index);
			} else { 
				printf("branch scs_rawEnergy_branch does not exist!\n");
				exit(1);
			}
			scs_rawEnergy_isLoaded = true;
		}
		return scs_rawEnergy_;
	}
	vector<float> &scs_sigmaEtaEta()
	{
		if (not scs_sigmaEtaEta_isLoaded) {
			if (scs_sigmaEtaEta_branch != 0) {
				scs_sigmaEtaEta_branch->GetEntry(index);
			} else { 
				printf("branch scs_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaEtaEta_isLoaded = true;
		}
		return scs_sigmaEtaEta_;
	}
	vector<float> &scs_sigmaEtaPhi()
	{
		if (not scs_sigmaEtaPhi_isLoaded) {
			if (scs_sigmaEtaPhi_branch != 0) {
				scs_sigmaEtaPhi_branch->GetEntry(index);
			} else { 
				printf("branch scs_sigmaEtaPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaEtaPhi_isLoaded = true;
		}
		return scs_sigmaEtaPhi_;
	}
	vector<float> &scs_sigmaIEtaIEta()
	{
		if (not scs_sigmaIEtaIEta_isLoaded) {
			if (scs_sigmaIEtaIEta_branch != 0) {
				scs_sigmaIEtaIEta_branch->GetEntry(index);
			} else { 
				printf("branch scs_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaIEtaIEta_isLoaded = true;
		}
		return scs_sigmaIEtaIEta_;
	}
	vector<float> &scs_sigmaIEtaIPhi()
	{
		if (not scs_sigmaIEtaIPhi_isLoaded) {
			if (scs_sigmaIEtaIPhi_branch != 0) {
				scs_sigmaIEtaIPhi_branch->GetEntry(index);
			} else { 
				printf("branch scs_sigmaIEtaIPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaIEtaIPhi_isLoaded = true;
		}
		return scs_sigmaIEtaIPhi_;
	}
	vector<float> &scs_sigmaIPhiIPhi()
	{
		if (not scs_sigmaIPhiIPhi_isLoaded) {
			if (scs_sigmaIPhiIPhi_branch != 0) {
				scs_sigmaIPhiIPhi_branch->GetEntry(index);
			} else { 
				printf("branch scs_sigmaIPhiIPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaIPhiIPhi_isLoaded = true;
		}
		return scs_sigmaIPhiIPhi_;
	}
	vector<float> &scs_sigmaPhiPhi()
	{
		if (not scs_sigmaPhiPhi_isLoaded) {
			if (scs_sigmaPhiPhi_branch != 0) {
				scs_sigmaPhiPhi_branch->GetEntry(index);
			} else { 
				printf("branch scs_sigmaPhiPhi_branch does not exist!\n");
				exit(1);
			}
			scs_sigmaPhiPhi_isLoaded = true;
		}
		return scs_sigmaPhiPhi_;
	}
	vector<float> &scjets_cor()
	{
		if (not scjets_cor_isLoaded) {
			if (scjets_cor_branch != 0) {
				scjets_cor_branch->GetEntry(index);
			} else { 
				printf("branch scjets_cor_branch does not exist!\n");
				exit(1);
			}
			scjets_cor_isLoaded = true;
		}
		return scjets_cor_;
	}
	vector<float> &scjets_emFrac()
	{
		if (not scjets_emFrac_isLoaded) {
			if (scjets_emFrac_branch != 0) {
				scjets_emFrac_branch->GetEntry(index);
			} else { 
				printf("branch scjets_emFrac_branch does not exist!\n");
				exit(1);
			}
			scjets_emFrac_isLoaded = true;
		}
		return scjets_emFrac_;
	}
	vector<float> &scjets_fHPD()
	{
		if (not scjets_fHPD_isLoaded) {
			if (scjets_fHPD_branch != 0) {
				scjets_fHPD_branch->GetEntry(index);
			} else { 
				printf("branch scjets_fHPD_branch does not exist!\n");
				exit(1);
			}
			scjets_fHPD_isLoaded = true;
		}
		return scjets_fHPD_;
	}
	vector<float> &scjets_fRBX()
	{
		if (not scjets_fRBX_isLoaded) {
			if (scjets_fRBX_branch != 0) {
				scjets_fRBX_branch->GetEntry(index);
			} else { 
				printf("branch scjets_fRBX_branch does not exist!\n");
				exit(1);
			}
			scjets_fRBX_isLoaded = true;
		}
		return scjets_fRBX_;
	}
	vector<float> &scjets_fSubDetector1()
	{
		if (not scjets_fSubDetector1_isLoaded) {
			if (scjets_fSubDetector1_branch != 0) {
				scjets_fSubDetector1_branch->GetEntry(index);
			} else { 
				printf("branch scjets_fSubDetector1_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector1_isLoaded = true;
		}
		return scjets_fSubDetector1_;
	}
	vector<float> &scjets_fSubDetector2()
	{
		if (not scjets_fSubDetector2_isLoaded) {
			if (scjets_fSubDetector2_branch != 0) {
				scjets_fSubDetector2_branch->GetEntry(index);
			} else { 
				printf("branch scjets_fSubDetector2_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector2_isLoaded = true;
		}
		return scjets_fSubDetector2_;
	}
	vector<float> &scjets_fSubDetector3()
	{
		if (not scjets_fSubDetector3_isLoaded) {
			if (scjets_fSubDetector3_branch != 0) {
				scjets_fSubDetector3_branch->GetEntry(index);
			} else { 
				printf("branch scjets_fSubDetector3_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector3_isLoaded = true;
		}
		return scjets_fSubDetector3_;
	}
	vector<float> &scjets_fSubDetector4()
	{
		if (not scjets_fSubDetector4_isLoaded) {
			if (scjets_fSubDetector4_branch != 0) {
				scjets_fSubDetector4_branch->GetEntry(index);
			} else { 
				printf("branch scjets_fSubDetector4_branch does not exist!\n");
				exit(1);
			}
			scjets_fSubDetector4_isLoaded = true;
		}
		return scjets_fSubDetector4_;
	}
	vector<float> &scjets_n90Hits()
	{
		if (not scjets_n90Hits_isLoaded) {
			if (scjets_n90Hits_branch != 0) {
				scjets_n90Hits_branch->GetEntry(index);
			} else { 
				printf("branch scjets_n90Hits_branch does not exist!\n");
				exit(1);
			}
			scjets_n90Hits_isLoaded = true;
		}
		return scjets_n90Hits_;
	}
	vector<float> &scjets_nECALTowers()
	{
		if (not scjets_nECALTowers_isLoaded) {
			if (scjets_nECALTowers_branch != 0) {
				scjets_nECALTowers_branch->GetEntry(index);
			} else { 
				printf("branch scjets_nECALTowers_branch does not exist!\n");
				exit(1);
			}
			scjets_nECALTowers_isLoaded = true;
		}
		return scjets_nECALTowers_;
	}
	vector<float> &scjets_nHCALTowers()
	{
		if (not scjets_nHCALTowers_isLoaded) {
			if (scjets_nHCALTowers_branch != 0) {
				scjets_nHCALTowers_branch->GetEntry(index);
			} else { 
				printf("branch scjets_nHCALTowers_branch does not exist!\n");
				exit(1);
			}
			scjets_nHCALTowers_isLoaded = true;
		}
		return scjets_nHCALTowers_;
	}
	vector<float> &scjets_restrictedEMF()
	{
		if (not scjets_restrictedEMF_isLoaded) {
			if (scjets_restrictedEMF_branch != 0) {
				scjets_restrictedEMF_branch->GetEntry(index);
			} else { 
				printf("branch scjets_restrictedEMF_branch does not exist!\n");
				exit(1);
			}
			scjets_restrictedEMF_isLoaded = true;
		}
		return scjets_restrictedEMF_;
	}
	vector<float> &mus_tcmet_deltax()
	{
		if (not mus_tcmet_deltax_isLoaded) {
			if (mus_tcmet_deltax_branch != 0) {
				mus_tcmet_deltax_branch->GetEntry(index);
			} else { 
				printf("branch mus_tcmet_deltax_branch does not exist!\n");
				exit(1);
			}
			mus_tcmet_deltax_isLoaded = true;
		}
		return mus_tcmet_deltax_;
	}
	vector<float> &mus_tcmet_deltay()
	{
		if (not mus_tcmet_deltay_isLoaded) {
			if (mus_tcmet_deltay_branch != 0) {
				mus_tcmet_deltay_branch->GetEntry(index);
			} else { 
				printf("branch mus_tcmet_deltay_branch does not exist!\n");
				exit(1);
			}
			mus_tcmet_deltay_isLoaded = true;
		}
		return mus_tcmet_deltay_;
	}
	vector<float> &trks_chi2()
	{
		if (not trks_chi2_isLoaded) {
			if (trks_chi2_branch != 0) {
				trks_chi2_branch->GetEntry(index);
			} else { 
				printf("branch trks_chi2_branch does not exist!\n");
				exit(1);
			}
			trks_chi2_isLoaded = true;
		}
		return trks_chi2_;
	}
	vector<float> &trks_d0()
	{
		if (not trks_d0_isLoaded) {
			if (trks_d0_branch != 0) {
				trks_d0_branch->GetEntry(index);
			} else { 
				printf("branch trks_d0_branch does not exist!\n");
				exit(1);
			}
			trks_d0_isLoaded = true;
		}
		return trks_d0_;
	}
	vector<float> &trks_d0Err()
	{
		if (not trks_d0Err_isLoaded) {
			if (trks_d0Err_branch != 0) {
				trks_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch trks_d0Err_branch does not exist!\n");
				exit(1);
			}
			trks_d0Err_isLoaded = true;
		}
		return trks_d0Err_;
	}
	vector<float> &trks_d0corr()
	{
		if (not trks_d0corr_isLoaded) {
			if (trks_d0corr_branch != 0) {
				trks_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch trks_d0corr_branch does not exist!\n");
				exit(1);
			}
			trks_d0corr_isLoaded = true;
		}
		return trks_d0corr_;
	}
	vector<float> &trks_d0corrPhi()
	{
		if (not trks_d0corrPhi_isLoaded) {
			if (trks_d0corrPhi_branch != 0) {
				trks_d0corrPhi_branch->GetEntry(index);
			} else { 
				printf("branch trks_d0corrPhi_branch does not exist!\n");
				exit(1);
			}
			trks_d0corrPhi_isLoaded = true;
		}
		return trks_d0corrPhi_;
	}
	vector<float> &trks_etaErr()
	{
		if (not trks_etaErr_isLoaded) {
			if (trks_etaErr_branch != 0) {
				trks_etaErr_branch->GetEntry(index);
			} else { 
				printf("branch trks_etaErr_branch does not exist!\n");
				exit(1);
			}
			trks_etaErr_isLoaded = true;
		}
		return trks_etaErr_;
	}
	vector<float> &trks_layer1_charge()
	{
		if (not trks_layer1_charge_isLoaded) {
			if (trks_layer1_charge_branch != 0) {
				trks_layer1_charge_branch->GetEntry(index);
			} else { 
				printf("branch trks_layer1_charge_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_charge_isLoaded = true;
		}
		return trks_layer1_charge_;
	}
	vector<float> &trks_ndof()
	{
		if (not trks_ndof_isLoaded) {
			if (trks_ndof_branch != 0) {
				trks_ndof_branch->GetEntry(index);
			} else { 
				printf("branch trks_ndof_branch does not exist!\n");
				exit(1);
			}
			trks_ndof_isLoaded = true;
		}
		return trks_ndof_;
	}
	vector<float> &trks_phiErr()
	{
		if (not trks_phiErr_isLoaded) {
			if (trks_phiErr_branch != 0) {
				trks_phiErr_branch->GetEntry(index);
			} else { 
				printf("branch trks_phiErr_branch does not exist!\n");
				exit(1);
			}
			trks_phiErr_isLoaded = true;
		}
		return trks_phiErr_;
	}
	vector<float> &trks_ptErr()
	{
		if (not trks_ptErr_isLoaded) {
			if (trks_ptErr_branch != 0) {
				trks_ptErr_branch->GetEntry(index);
			} else { 
				printf("branch trks_ptErr_branch does not exist!\n");
				exit(1);
			}
			trks_ptErr_isLoaded = true;
		}
		return trks_ptErr_;
	}
	vector<float> &trks_z0()
	{
		if (not trks_z0_isLoaded) {
			if (trks_z0_branch != 0) {
				trks_z0_branch->GetEntry(index);
			} else { 
				printf("branch trks_z0_branch does not exist!\n");
				exit(1);
			}
			trks_z0_isLoaded = true;
		}
		return trks_z0_;
	}
	vector<float> &trks_z0Err()
	{
		if (not trks_z0Err_isLoaded) {
			if (trks_z0Err_branch != 0) {
				trks_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch trks_z0Err_branch does not exist!\n");
				exit(1);
			}
			trks_z0Err_isLoaded = true;
		}
		return trks_z0Err_;
	}
	vector<float> &trks_z0corr()
	{
		if (not trks_z0corr_isLoaded) {
			if (trks_z0corr_branch != 0) {
				trks_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch trks_z0corr_branch does not exist!\n");
				exit(1);
			}
			trks_z0corr_isLoaded = true;
		}
		return trks_z0corr_;
	}
	vector<float> &vtxs_chi2()
	{
		if (not vtxs_chi2_isLoaded) {
			if (vtxs_chi2_branch != 0) {
				vtxs_chi2_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_chi2_branch does not exist!\n");
				exit(1);
			}
			vtxs_chi2_isLoaded = true;
		}
		return vtxs_chi2_;
	}
	vector<float> &vtxs_ndof()
	{
		if (not vtxs_ndof_isLoaded) {
			if (vtxs_ndof_branch != 0) {
				vtxs_ndof_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_ndof_branch does not exist!\n");
				exit(1);
			}
			vtxs_ndof_isLoaded = true;
		}
		return vtxs_ndof_;
	}
	vector<float> &vtxs_xError()
	{
		if (not vtxs_xError_isLoaded) {
			if (vtxs_xError_branch != 0) {
				vtxs_xError_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_xError_branch does not exist!\n");
				exit(1);
			}
			vtxs_xError_isLoaded = true;
		}
		return vtxs_xError_;
	}
	vector<float> &vtxs_yError()
	{
		if (not vtxs_yError_isLoaded) {
			if (vtxs_yError_branch != 0) {
				vtxs_yError_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_yError_branch does not exist!\n");
				exit(1);
			}
			vtxs_yError_isLoaded = true;
		}
		return vtxs_yError_;
	}
	vector<float> &vtxs_zError()
	{
		if (not vtxs_zError_isLoaded) {
			if (vtxs_zError_branch != 0) {
				vtxs_zError_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_zError_branch does not exist!\n");
				exit(1);
			}
			vtxs_zError_isLoaded = true;
		}
		return vtxs_zError_;
	}
	vector<vector<float> > &vtxs_covMatrix()
	{
		if (not vtxs_covMatrix_isLoaded) {
			if (vtxs_covMatrix_branch != 0) {
				vtxs_covMatrix_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_covMatrix_branch does not exist!\n");
				exit(1);
			}
			vtxs_covMatrix_isLoaded = true;
		}
		return vtxs_covMatrix_;
	}
	int &evt_cscLooseHaloId()
	{
		if (not evt_cscLooseHaloId_isLoaded) {
			if (evt_cscLooseHaloId_branch != 0) {
				evt_cscLooseHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_cscLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_cscLooseHaloId_isLoaded = true;
		}
		return evt_cscLooseHaloId_;
	}
	int &evt_cscTightHaloId()
	{
		if (not evt_cscTightHaloId_isLoaded) {
			if (evt_cscTightHaloId_branch != 0) {
				evt_cscTightHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_cscTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_cscTightHaloId_isLoaded = true;
		}
		return evt_cscTightHaloId_;
	}
	int &evt_ecalLooseHaloId()
	{
		if (not evt_ecalLooseHaloId_isLoaded) {
			if (evt_ecalLooseHaloId_branch != 0) {
				evt_ecalLooseHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_ecalLooseHaloId_isLoaded = true;
		}
		return evt_ecalLooseHaloId_;
	}
	int &evt_ecalTightHaloId()
	{
		if (not evt_ecalTightHaloId_isLoaded) {
			if (evt_ecalTightHaloId_branch != 0) {
				evt_ecalTightHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecalTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_ecalTightHaloId_isLoaded = true;
		}
		return evt_ecalTightHaloId_;
	}
	int &evt_extremeTightHaloId()
	{
		if (not evt_extremeTightHaloId_isLoaded) {
			if (evt_extremeTightHaloId_branch != 0) {
				evt_extremeTightHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_extremeTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_extremeTightHaloId_isLoaded = true;
		}
		return evt_extremeTightHaloId_;
	}
	int &evt_globalLooseHaloId()
	{
		if (not evt_globalLooseHaloId_isLoaded) {
			if (evt_globalLooseHaloId_branch != 0) {
				evt_globalLooseHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_globalLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_globalLooseHaloId_isLoaded = true;
		}
		return evt_globalLooseHaloId_;
	}
	int &evt_globalTightHaloId()
	{
		if (not evt_globalTightHaloId_isLoaded) {
			if (evt_globalTightHaloId_branch != 0) {
				evt_globalTightHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_globalTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_globalTightHaloId_isLoaded = true;
		}
		return evt_globalTightHaloId_;
	}
	int &evt_hcalLooseHaloId()
	{
		if (not evt_hcalLooseHaloId_isLoaded) {
			if (evt_hcalLooseHaloId_branch != 0) {
				evt_hcalLooseHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalLooseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_hcalLooseHaloId_isLoaded = true;
		}
		return evt_hcalLooseHaloId_;
	}
	int &evt_hcalTightHaloId()
	{
		if (not evt_hcalTightHaloId_isLoaded) {
			if (evt_hcalTightHaloId_branch != 0) {
				evt_hcalTightHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcalTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_hcalTightHaloId_isLoaded = true;
		}
		return evt_hcalTightHaloId_;
	}
	int &evt_looseHaloId()
	{
		if (not evt_looseHaloId_isLoaded) {
			if (evt_looseHaloId_branch != 0) {
				evt_looseHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_looseHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_looseHaloId_isLoaded = true;
		}
		return evt_looseHaloId_;
	}
	int &evt_tightHaloId()
	{
		if (not evt_tightHaloId_isLoaded) {
			if (evt_tightHaloId_branch != 0) {
				evt_tightHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_tightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_tightHaloId_isLoaded = true;
		}
		return evt_tightHaloId_;
	}
	int &evt_bsType()
	{
		if (not evt_bsType_isLoaded) {
			if (evt_bsType_branch != 0) {
				evt_bsType_branch->GetEntry(index);
			} else { 
				printf("branch evt_bsType_branch does not exist!\n");
				exit(1);
			}
			evt_bsType_isLoaded = true;
		}
		return evt_bsType_;
	}
	int &evt_bunchCrossing()
	{
		if (not evt_bunchCrossing_isLoaded) {
			if (evt_bunchCrossing_branch != 0) {
				evt_bunchCrossing_branch->GetEntry(index);
			} else { 
				printf("branch evt_bunchCrossing_branch does not exist!\n");
				exit(1);
			}
			evt_bunchCrossing_isLoaded = true;
		}
		return evt_bunchCrossing_;
	}
	int &evt_experimentType()
	{
		if (not evt_experimentType_isLoaded) {
			if (evt_experimentType_branch != 0) {
				evt_experimentType_branch->GetEntry(index);
			} else { 
				printf("branch evt_experimentType_branch does not exist!\n");
				exit(1);
			}
			evt_experimentType_isLoaded = true;
		}
		return evt_experimentType_;
	}
	int &evt_orbitNumber()
	{
		if (not evt_orbitNumber_isLoaded) {
			if (evt_orbitNumber_branch != 0) {
				evt_orbitNumber_branch->GetEntry(index);
			} else { 
				printf("branch evt_orbitNumber_branch does not exist!\n");
				exit(1);
			}
			evt_orbitNumber_isLoaded = true;
		}
		return evt_orbitNumber_;
	}
	int &evt_storeNumber()
	{
		if (not evt_storeNumber_isLoaded) {
			if (evt_storeNumber_branch != 0) {
				evt_storeNumber_branch->GetEntry(index);
			} else { 
				printf("branch evt_storeNumber_branch does not exist!\n");
				exit(1);
			}
			evt_storeNumber_isLoaded = true;
		}
		return evt_storeNumber_;
	}
	int &hcalnoise_maxHPDHits()
	{
		if (not hcalnoise_maxHPDHits_isLoaded) {
			if (hcalnoise_maxHPDHits_branch != 0) {
				hcalnoise_maxHPDHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxHPDHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxHPDHits_isLoaded = true;
		}
		return hcalnoise_maxHPDHits_;
	}
	int &hcalnoise_maxRBXHits()
	{
		if (not hcalnoise_maxRBXHits_isLoaded) {
			if (hcalnoise_maxRBXHits_branch != 0) {
				hcalnoise_maxRBXHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxRBXHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxRBXHits_isLoaded = true;
		}
		return hcalnoise_maxRBXHits_;
	}
	int &hcalnoise_maxZeros()
	{
		if (not hcalnoise_maxZeros_isLoaded) {
			if (hcalnoise_maxZeros_branch != 0) {
				hcalnoise_maxZeros_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxZeros_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxZeros_isLoaded = true;
		}
		return hcalnoise_maxZeros_;
	}
	int &hcalnoise_noiseFilterStatus()
	{
		if (not hcalnoise_noiseFilterStatus_isLoaded) {
			if (hcalnoise_noiseFilterStatus_branch != 0) {
				hcalnoise_noiseFilterStatus_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_noiseFilterStatus_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_noiseFilterStatus_isLoaded = true;
		}
		return hcalnoise_noiseFilterStatus_;
	}
	int &hcalnoise_noiseType()
	{
		if (not hcalnoise_noiseType_isLoaded) {
			if (hcalnoise_noiseType_branch != 0) {
				hcalnoise_noiseType_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_noiseType_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_noiseType_isLoaded = true;
		}
		return hcalnoise_noiseType_;
	}
	int &hcalnoise_num10GeVHits()
	{
		if (not hcalnoise_num10GeVHits_isLoaded) {
			if (hcalnoise_num10GeVHits_branch != 0) {
				hcalnoise_num10GeVHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_num10GeVHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_num10GeVHits_isLoaded = true;
		}
		return hcalnoise_num10GeVHits_;
	}
	int &hcalnoise_num25GeVHits()
	{
		if (not hcalnoise_num25GeVHits_isLoaded) {
			if (hcalnoise_num25GeVHits_branch != 0) {
				hcalnoise_num25GeVHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_num25GeVHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_num25GeVHits_isLoaded = true;
		}
		return hcalnoise_num25GeVHits_;
	}
	int &hcalnoise_numProblematicRBXs()
	{
		if (not hcalnoise_numProblematicRBXs_isLoaded) {
			if (hcalnoise_numProblematicRBXs_branch != 0) {
				hcalnoise_numProblematicRBXs_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_numProblematicRBXs_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numProblematicRBXs_isLoaded = true;
		}
		return hcalnoise_numProblematicRBXs_;
	}
	int &hcalnoise_passHighLevelNoiseFilter()
	{
		if (not hcalnoise_passHighLevelNoiseFilter_isLoaded) {
			if (hcalnoise_passHighLevelNoiseFilter_branch != 0) {
				hcalnoise_passHighLevelNoiseFilter_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_passHighLevelNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passHighLevelNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passHighLevelNoiseFilter_;
	}
	int &hcalnoise_passLooseNoiseFilter()
	{
		if (not hcalnoise_passLooseNoiseFilter_isLoaded) {
			if (hcalnoise_passLooseNoiseFilter_branch != 0) {
				hcalnoise_passLooseNoiseFilter_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_passLooseNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passLooseNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passLooseNoiseFilter_;
	}
	int &hcalnoise_passTightNoiseFilter()
	{
		if (not hcalnoise_passTightNoiseFilter_isLoaded) {
			if (hcalnoise_passTightNoiseFilter_branch != 0) {
				hcalnoise_passTightNoiseFilter_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_passTightNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passTightNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passTightNoiseFilter_;
	}
	int &l1_nemiso()
	{
		if (not l1_nemiso_isLoaded) {
			if (l1_nemiso_branch != 0) {
				l1_nemiso_branch->GetEntry(index);
			} else { 
				printf("branch l1_nemiso_branch does not exist!\n");
				exit(1);
			}
			l1_nemiso_isLoaded = true;
		}
		return l1_nemiso_;
	}
	int &l1_nemnoiso()
	{
		if (not l1_nemnoiso_isLoaded) {
			if (l1_nemnoiso_branch != 0) {
				l1_nemnoiso_branch->GetEntry(index);
			} else { 
				printf("branch l1_nemnoiso_branch does not exist!\n");
				exit(1);
			}
			l1_nemnoiso_isLoaded = true;
		}
		return l1_nemnoiso_;
	}
	int &l1_njetsc()
	{
		if (not l1_njetsc_isLoaded) {
			if (l1_njetsc_branch != 0) {
				l1_njetsc_branch->GetEntry(index);
			} else { 
				printf("branch l1_njetsc_branch does not exist!\n");
				exit(1);
			}
			l1_njetsc_isLoaded = true;
		}
		return l1_njetsc_;
	}
	int &l1_njetsf()
	{
		if (not l1_njetsf_isLoaded) {
			if (l1_njetsf_branch != 0) {
				l1_njetsf_branch->GetEntry(index);
			} else { 
				printf("branch l1_njetsf_branch does not exist!\n");
				exit(1);
			}
			l1_njetsf_isLoaded = true;
		}
		return l1_njetsf_;
	}
	int &l1_njetst()
	{
		if (not l1_njetst_isLoaded) {
			if (l1_njetst_branch != 0) {
				l1_njetst_branch->GetEntry(index);
			} else { 
				printf("branch l1_njetst_branch does not exist!\n");
				exit(1);
			}
			l1_njetst_isLoaded = true;
		}
		return l1_njetst_;
	}
	int &l1_nmus()
	{
		if (not l1_nmus_isLoaded) {
			if (l1_nmus_branch != 0) {
				l1_nmus_branch->GetEntry(index);
			} else { 
				printf("branch l1_nmus_branch does not exist!\n");
				exit(1);
			}
			l1_nmus_isLoaded = true;
		}
		return l1_nmus_;
	}
	vector<int> &evt_ecaliPhiSuspects()
	{
		if (not evt_ecaliPhiSuspects_isLoaded) {
			if (evt_ecaliPhiSuspects_branch != 0) {
				evt_ecaliPhiSuspects_branch->GetEntry(index);
			} else { 
				printf("branch evt_ecaliPhiSuspects_branch does not exist!\n");
				exit(1);
			}
			evt_ecaliPhiSuspects_isLoaded = true;
		}
		return evt_ecaliPhiSuspects_;
	}
	vector<int> &evt_globaliPhiSuspects()
	{
		if (not evt_globaliPhiSuspects_isLoaded) {
			if (evt_globaliPhiSuspects_branch != 0) {
				evt_globaliPhiSuspects_branch->GetEntry(index);
			} else { 
				printf("branch evt_globaliPhiSuspects_branch does not exist!\n");
				exit(1);
			}
			evt_globaliPhiSuspects_isLoaded = true;
		}
		return evt_globaliPhiSuspects_;
	}
	vector<int> &evt_hcaliPhiSuspects()
	{
		if (not evt_hcaliPhiSuspects_isLoaded) {
			if (evt_hcaliPhiSuspects_branch != 0) {
				evt_hcaliPhiSuspects_branch->GetEntry(index);
			} else { 
				printf("branch evt_hcaliPhiSuspects_branch does not exist!\n");
				exit(1);
			}
			evt_hcaliPhiSuspects_isLoaded = true;
		}
		return evt_hcaliPhiSuspects_;
	}
	vector<int> &els_closestJet()
	{
		if (not els_closestJet_isLoaded) {
			if (els_closestJet_branch != 0) {
				els_closestJet_branch->GetEntry(index);
			} else { 
				printf("branch els_closestJet_branch does not exist!\n");
				exit(1);
			}
			els_closestJet_isLoaded = true;
		}
		return els_closestJet_;
	}
	vector<int> &els_closestMuon()
	{
		if (not els_closestMuon_isLoaded) {
			if (els_closestMuon_branch != 0) {
				els_closestMuon_branch->GetEntry(index);
			} else { 
				printf("branch els_closestMuon_branch does not exist!\n");
				exit(1);
			}
			els_closestMuon_isLoaded = true;
		}
		return els_closestMuon_;
	}
	vector<int> &els_category()
	{
		if (not els_category_isLoaded) {
			if (els_category_branch != 0) {
				els_category_branch->GetEntry(index);
			} else { 
				printf("branch els_category_branch does not exist!\n");
				exit(1);
			}
			els_category_isLoaded = true;
		}
		return els_category_;
	}
	vector<int> &els_charge()
	{
		if (not els_charge_isLoaded) {
			if (els_charge_branch != 0) {
				els_charge_branch->GetEntry(index);
			} else { 
				printf("branch els_charge_branch does not exist!\n");
				exit(1);
			}
			els_charge_isLoaded = true;
		}
		return els_charge_;
	}
	vector<int> &els_class()
	{
		if (not els_class_isLoaded) {
			if (els_class_branch != 0) {
				els_class_branch->GetEntry(index);
			} else { 
				printf("branch els_class_branch does not exist!\n");
				exit(1);
			}
			els_class_isLoaded = true;
		}
		return els_class_;
	}
	vector<int> &els_conv_tkidx()
	{
		if (not els_conv_tkidx_isLoaded) {
			if (els_conv_tkidx_branch != 0) {
				els_conv_tkidx_branch->GetEntry(index);
			} else { 
				printf("branch els_conv_tkidx_branch does not exist!\n");
				exit(1);
			}
			els_conv_tkidx_isLoaded = true;
		}
		return els_conv_tkidx_;
	}
	vector<int> &els_exp_innerlayers()
	{
		if (not els_exp_innerlayers_isLoaded) {
			if (els_exp_innerlayers_branch != 0) {
				els_exp_innerlayers_branch->GetEntry(index);
			} else { 
				printf("branch els_exp_innerlayers_branch does not exist!\n");
				exit(1);
			}
			els_exp_innerlayers_isLoaded = true;
		}
		return els_exp_innerlayers_;
	}
	vector<int> &els_exp_outerlayers()
	{
		if (not els_exp_outerlayers_isLoaded) {
			if (els_exp_outerlayers_branch != 0) {
				els_exp_outerlayers_branch->GetEntry(index);
			} else { 
				printf("branch els_exp_outerlayers_branch does not exist!\n");
				exit(1);
			}
			els_exp_outerlayers_isLoaded = true;
		}
		return els_exp_outerlayers_;
	}
	vector<int> &els_fiduciality()
	{
		if (not els_fiduciality_isLoaded) {
			if (els_fiduciality_branch != 0) {
				els_fiduciality_branch->GetEntry(index);
			} else { 
				printf("branch els_fiduciality_branch does not exist!\n");
				exit(1);
			}
			els_fiduciality_isLoaded = true;
		}
		return els_fiduciality_;
	}
	vector<int> &els_layer1_det()
	{
		if (not els_layer1_det_isLoaded) {
			if (els_layer1_det_branch != 0) {
				els_layer1_det_branch->GetEntry(index);
			} else { 
				printf("branch els_layer1_det_branch does not exist!\n");
				exit(1);
			}
			els_layer1_det_isLoaded = true;
		}
		return els_layer1_det_;
	}
	vector<int> &els_layer1_layer()
	{
		if (not els_layer1_layer_isLoaded) {
			if (els_layer1_layer_branch != 0) {
				els_layer1_layer_branch->GetEntry(index);
			} else { 
				printf("branch els_layer1_layer_branch does not exist!\n");
				exit(1);
			}
			els_layer1_layer_isLoaded = true;
		}
		return els_layer1_layer_;
	}
	vector<int> &els_layer1_sizerphi()
	{
		if (not els_layer1_sizerphi_isLoaded) {
			if (els_layer1_sizerphi_branch != 0) {
				els_layer1_sizerphi_branch->GetEntry(index);
			} else { 
				printf("branch els_layer1_sizerphi_branch does not exist!\n");
				exit(1);
			}
			els_layer1_sizerphi_isLoaded = true;
		}
		return els_layer1_sizerphi_;
	}
	vector<int> &els_layer1_sizerz()
	{
		if (not els_layer1_sizerz_isLoaded) {
			if (els_layer1_sizerz_branch != 0) {
				els_layer1_sizerz_branch->GetEntry(index);
			} else { 
				printf("branch els_layer1_sizerz_branch does not exist!\n");
				exit(1);
			}
			els_layer1_sizerz_isLoaded = true;
		}
		return els_layer1_sizerz_;
	}
	vector<int> &els_lostHits()
	{
		if (not els_lostHits_isLoaded) {
			if (els_lostHits_branch != 0) {
				els_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch els_lostHits_branch does not exist!\n");
				exit(1);
			}
			els_lostHits_isLoaded = true;
		}
		return els_lostHits_;
	}
	vector<int> &els_lost_pixelhits()
	{
		if (not els_lost_pixelhits_isLoaded) {
			if (els_lost_pixelhits_branch != 0) {
				els_lost_pixelhits_branch->GetEntry(index);
			} else { 
				printf("branch els_lost_pixelhits_branch does not exist!\n");
				exit(1);
			}
			els_lost_pixelhits_isLoaded = true;
		}
		return els_lost_pixelhits_;
	}
	vector<int> &els_nSeed()
	{
		if (not els_nSeed_isLoaded) {
			if (els_nSeed_branch != 0) {
				els_nSeed_branch->GetEntry(index);
			} else { 
				printf("branch els_nSeed_branch does not exist!\n");
				exit(1);
			}
			els_nSeed_isLoaded = true;
		}
		return els_nSeed_;
	}
	vector<int> &els_sccharge()
	{
		if (not els_sccharge_isLoaded) {
			if (els_sccharge_branch != 0) {
				els_sccharge_branch->GetEntry(index);
			} else { 
				printf("branch els_sccharge_branch does not exist!\n");
				exit(1);
			}
			els_sccharge_isLoaded = true;
		}
		return els_sccharge_;
	}
	vector<int> &els_trk_charge()
	{
		if (not els_trk_charge_isLoaded) {
			if (els_trk_charge_branch != 0) {
				els_trk_charge_branch->GetEntry(index);
			} else { 
				printf("branch els_trk_charge_branch does not exist!\n");
				exit(1);
			}
			els_trk_charge_isLoaded = true;
		}
		return els_trk_charge_;
	}
	vector<int> &els_trkidx()
	{
		if (not els_trkidx_isLoaded) {
			if (els_trkidx_branch != 0) {
				els_trkidx_branch->GetEntry(index);
			} else { 
				printf("branch els_trkidx_branch does not exist!\n");
				exit(1);
			}
			els_trkidx_isLoaded = true;
		}
		return els_trkidx_;
	}
	vector<int> &els_type()
	{
		if (not els_type_isLoaded) {
			if (els_type_branch != 0) {
				els_type_branch->GetEntry(index);
			} else { 
				printf("branch els_type_branch does not exist!\n");
				exit(1);
			}
			els_type_isLoaded = true;
		}
		return els_type_;
	}
	vector<int> &els_validHits()
	{
		if (not els_validHits_isLoaded) {
			if (els_validHits_branch != 0) {
				els_validHits_branch->GetEntry(index);
			} else { 
				printf("branch els_validHits_branch does not exist!\n");
				exit(1);
			}
			els_validHits_isLoaded = true;
		}
		return els_validHits_;
	}
	vector<int> &els_valid_pixelhits()
	{
		if (not els_valid_pixelhits_isLoaded) {
			if (els_valid_pixelhits_branch != 0) {
				els_valid_pixelhits_branch->GetEntry(index);
			} else { 
				printf("branch els_valid_pixelhits_branch does not exist!\n");
				exit(1);
			}
			els_valid_pixelhits_isLoaded = true;
		}
		return els_valid_pixelhits_;
	}
	vector<int> &jets_closestElectron()
	{
		if (not jets_closestElectron_isLoaded) {
			if (jets_closestElectron_branch != 0) {
				jets_closestElectron_branch->GetEntry(index);
			} else { 
				printf("branch jets_closestElectron_branch does not exist!\n");
				exit(1);
			}
			jets_closestElectron_isLoaded = true;
		}
		return jets_closestElectron_;
	}
	vector<int> &jets_closestMuon()
	{
		if (not jets_closestMuon_isLoaded) {
			if (jets_closestMuon_branch != 0) {
				jets_closestMuon_branch->GetEntry(index);
			} else { 
				printf("branch jets_closestMuon_branch does not exist!\n");
				exit(1);
			}
			jets_closestMuon_isLoaded = true;
		}
		return jets_closestMuon_;
	}
	vector<int> &l1_emiso_ieta()
	{
		if (not l1_emiso_ieta_isLoaded) {
			if (l1_emiso_ieta_branch != 0) {
				l1_emiso_ieta_branch->GetEntry(index);
			} else { 
				printf("branch l1_emiso_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_ieta_isLoaded = true;
		}
		return l1_emiso_ieta_;
	}
	vector<int> &l1_emiso_iphi()
	{
		if (not l1_emiso_iphi_isLoaded) {
			if (l1_emiso_iphi_branch != 0) {
				l1_emiso_iphi_branch->GetEntry(index);
			} else { 
				printf("branch l1_emiso_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_iphi_isLoaded = true;
		}
		return l1_emiso_iphi_;
	}
	vector<int> &l1_emiso_rawId()
	{
		if (not l1_emiso_rawId_isLoaded) {
			if (l1_emiso_rawId_branch != 0) {
				l1_emiso_rawId_branch->GetEntry(index);
			} else { 
				printf("branch l1_emiso_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_rawId_isLoaded = true;
		}
		return l1_emiso_rawId_;
	}
	vector<int> &l1_emiso_type()
	{
		if (not l1_emiso_type_isLoaded) {
			if (l1_emiso_type_branch != 0) {
				l1_emiso_type_branch->GetEntry(index);
			} else { 
				printf("branch l1_emiso_type_branch does not exist!\n");
				exit(1);
			}
			l1_emiso_type_isLoaded = true;
		}
		return l1_emiso_type_;
	}
	vector<int> &l1_emnoiso_ieta()
	{
		if (not l1_emnoiso_ieta_isLoaded) {
			if (l1_emnoiso_ieta_branch != 0) {
				l1_emnoiso_ieta_branch->GetEntry(index);
			} else { 
				printf("branch l1_emnoiso_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_ieta_isLoaded = true;
		}
		return l1_emnoiso_ieta_;
	}
	vector<int> &l1_emnoiso_iphi()
	{
		if (not l1_emnoiso_iphi_isLoaded) {
			if (l1_emnoiso_iphi_branch != 0) {
				l1_emnoiso_iphi_branch->GetEntry(index);
			} else { 
				printf("branch l1_emnoiso_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_iphi_isLoaded = true;
		}
		return l1_emnoiso_iphi_;
	}
	vector<int> &l1_emnoiso_rawId()
	{
		if (not l1_emnoiso_rawId_isLoaded) {
			if (l1_emnoiso_rawId_branch != 0) {
				l1_emnoiso_rawId_branch->GetEntry(index);
			} else { 
				printf("branch l1_emnoiso_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_rawId_isLoaded = true;
		}
		return l1_emnoiso_rawId_;
	}
	vector<int> &l1_emnoiso_type()
	{
		if (not l1_emnoiso_type_isLoaded) {
			if (l1_emnoiso_type_branch != 0) {
				l1_emnoiso_type_branch->GetEntry(index);
			} else { 
				printf("branch l1_emnoiso_type_branch does not exist!\n");
				exit(1);
			}
			l1_emnoiso_type_isLoaded = true;
		}
		return l1_emnoiso_type_;
	}
	vector<int> &l1_jetsc_ieta()
	{
		if (not l1_jetsc_ieta_isLoaded) {
			if (l1_jetsc_ieta_branch != 0) {
				l1_jetsc_ieta_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsc_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_ieta_isLoaded = true;
		}
		return l1_jetsc_ieta_;
	}
	vector<int> &l1_jetsc_iphi()
	{
		if (not l1_jetsc_iphi_isLoaded) {
			if (l1_jetsc_iphi_branch != 0) {
				l1_jetsc_iphi_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsc_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_iphi_isLoaded = true;
		}
		return l1_jetsc_iphi_;
	}
	vector<int> &l1_jetsc_rawId()
	{
		if (not l1_jetsc_rawId_isLoaded) {
			if (l1_jetsc_rawId_branch != 0) {
				l1_jetsc_rawId_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsc_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_rawId_isLoaded = true;
		}
		return l1_jetsc_rawId_;
	}
	vector<int> &l1_jetsc_type()
	{
		if (not l1_jetsc_type_isLoaded) {
			if (l1_jetsc_type_branch != 0) {
				l1_jetsc_type_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsc_type_branch does not exist!\n");
				exit(1);
			}
			l1_jetsc_type_isLoaded = true;
		}
		return l1_jetsc_type_;
	}
	vector<int> &l1_jetsf_ieta()
	{
		if (not l1_jetsf_ieta_isLoaded) {
			if (l1_jetsf_ieta_branch != 0) {
				l1_jetsf_ieta_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsf_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_ieta_isLoaded = true;
		}
		return l1_jetsf_ieta_;
	}
	vector<int> &l1_jetsf_iphi()
	{
		if (not l1_jetsf_iphi_isLoaded) {
			if (l1_jetsf_iphi_branch != 0) {
				l1_jetsf_iphi_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsf_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_iphi_isLoaded = true;
		}
		return l1_jetsf_iphi_;
	}
	vector<int> &l1_jetsf_rawId()
	{
		if (not l1_jetsf_rawId_isLoaded) {
			if (l1_jetsf_rawId_branch != 0) {
				l1_jetsf_rawId_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsf_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_rawId_isLoaded = true;
		}
		return l1_jetsf_rawId_;
	}
	vector<int> &l1_jetsf_type()
	{
		if (not l1_jetsf_type_isLoaded) {
			if (l1_jetsf_type_branch != 0) {
				l1_jetsf_type_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetsf_type_branch does not exist!\n");
				exit(1);
			}
			l1_jetsf_type_isLoaded = true;
		}
		return l1_jetsf_type_;
	}
	vector<int> &l1_jetst_ieta()
	{
		if (not l1_jetst_ieta_isLoaded) {
			if (l1_jetst_ieta_branch != 0) {
				l1_jetst_ieta_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetst_ieta_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_ieta_isLoaded = true;
		}
		return l1_jetst_ieta_;
	}
	vector<int> &l1_jetst_iphi()
	{
		if (not l1_jetst_iphi_isLoaded) {
			if (l1_jetst_iphi_branch != 0) {
				l1_jetst_iphi_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetst_iphi_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_iphi_isLoaded = true;
		}
		return l1_jetst_iphi_;
	}
	vector<int> &l1_jetst_rawId()
	{
		if (not l1_jetst_rawId_isLoaded) {
			if (l1_jetst_rawId_branch != 0) {
				l1_jetst_rawId_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetst_rawId_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_rawId_isLoaded = true;
		}
		return l1_jetst_rawId_;
	}
	vector<int> &l1_jetst_type()
	{
		if (not l1_jetst_type_isLoaded) {
			if (l1_jetst_type_branch != 0) {
				l1_jetst_type_branch->GetEntry(index);
			} else { 
				printf("branch l1_jetst_type_branch does not exist!\n");
				exit(1);
			}
			l1_jetst_type_isLoaded = true;
		}
		return l1_jetst_type_;
	}
	vector<int> &l1_mus_flags()
	{
		if (not l1_mus_flags_isLoaded) {
			if (l1_mus_flags_branch != 0) {
				l1_mus_flags_branch->GetEntry(index);
			} else { 
				printf("branch l1_mus_flags_branch does not exist!\n");
				exit(1);
			}
			l1_mus_flags_isLoaded = true;
		}
		return l1_mus_flags_;
	}
	vector<int> &l1_mus_q()
	{
		if (not l1_mus_q_isLoaded) {
			if (l1_mus_q_branch != 0) {
				l1_mus_q_branch->GetEntry(index);
			} else { 
				printf("branch l1_mus_q_branch does not exist!\n");
				exit(1);
			}
			l1_mus_q_isLoaded = true;
		}
		return l1_mus_q_;
	}
	vector<int> &l1_mus_qual()
	{
		if (not l1_mus_qual_isLoaded) {
			if (l1_mus_qual_branch != 0) {
				l1_mus_qual_branch->GetEntry(index);
			} else { 
				printf("branch l1_mus_qual_branch does not exist!\n");
				exit(1);
			}
			l1_mus_qual_isLoaded = true;
		}
		return l1_mus_qual_;
	}
	vector<int> &l1_mus_qualFlags()
	{
		if (not l1_mus_qualFlags_isLoaded) {
			if (l1_mus_qualFlags_branch != 0) {
				l1_mus_qualFlags_branch->GetEntry(index);
			} else { 
				printf("branch l1_mus_qualFlags_branch does not exist!\n");
				exit(1);
			}
			l1_mus_qualFlags_isLoaded = true;
		}
		return l1_mus_qualFlags_;
	}
	vector<int> &mus_met_flag()
	{
		if (not mus_met_flag_isLoaded) {
			if (mus_met_flag_branch != 0) {
				mus_met_flag_branch->GetEntry(index);
			} else { 
				printf("branch mus_met_flag_branch does not exist!\n");
				exit(1);
			}
			mus_met_flag_isLoaded = true;
		}
		return mus_met_flag_;
	}
	vector<int> &mus_closestEle()
	{
		if (not mus_closestEle_isLoaded) {
			if (mus_closestEle_branch != 0) {
				mus_closestEle_branch->GetEntry(index);
			} else { 
				printf("branch mus_closestEle_branch does not exist!\n");
				exit(1);
			}
			mus_closestEle_isLoaded = true;
		}
		return mus_closestEle_;
	}
	vector<int> &mus_closestJet()
	{
		if (not mus_closestJet_isLoaded) {
			if (mus_closestJet_branch != 0) {
				mus_closestJet_branch->GetEntry(index);
			} else { 
				printf("branch mus_closestJet_branch does not exist!\n");
				exit(1);
			}
			mus_closestJet_isLoaded = true;
		}
		return mus_closestJet_;
	}
	vector<int> &mus_charge()
	{
		if (not mus_charge_isLoaded) {
			if (mus_charge_branch != 0) {
				mus_charge_branch->GetEntry(index);
			} else { 
				printf("branch mus_charge_branch does not exist!\n");
				exit(1);
			}
			mus_charge_isLoaded = true;
		}
		return mus_charge_;
	}
	vector<int> &mus_gfit_validHits()
	{
		if (not mus_gfit_validHits_isLoaded) {
			if (mus_gfit_validHits_branch != 0) {
				mus_gfit_validHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validHits_isLoaded = true;
		}
		return mus_gfit_validHits_;
	}
	vector<int> &mus_gfit_validSTAHits()
	{
		if (not mus_gfit_validSTAHits_isLoaded) {
			if (mus_gfit_validSTAHits_branch != 0) {
				mus_gfit_validSTAHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_validSTAHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validSTAHits_isLoaded = true;
		}
		return mus_gfit_validSTAHits_;
	}
	vector<int> &mus_gfit_validSiHits()
	{
		if (not mus_gfit_validSiHits_isLoaded) {
			if (mus_gfit_validSiHits_branch != 0) {
				mus_gfit_validSiHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_validSiHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validSiHits_isLoaded = true;
		}
		return mus_gfit_validSiHits_;
	}
	vector<int> &mus_goodmask()
	{
		if (not mus_goodmask_isLoaded) {
			if (mus_goodmask_branch != 0) {
				mus_goodmask_branch->GetEntry(index);
			} else { 
				printf("branch mus_goodmask_branch does not exist!\n");
				exit(1);
			}
			mus_goodmask_isLoaded = true;
		}
		return mus_goodmask_;
	}
	vector<int> &mus_iso03_ntrk()
	{
		if (not mus_iso03_ntrk_isLoaded) {
			if (mus_iso03_ntrk_branch != 0) {
				mus_iso03_ntrk_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_ntrk_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_ntrk_isLoaded = true;
		}
		return mus_iso03_ntrk_;
	}
	vector<int> &mus_iso05_ntrk()
	{
		if (not mus_iso05_ntrk_isLoaded) {
			if (mus_iso05_ntrk_branch != 0) {
				mus_iso05_ntrk_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_ntrk_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_ntrk_isLoaded = true;
		}
		return mus_iso05_ntrk_;
	}
	vector<int> &mus_lostHits()
	{
		if (not mus_lostHits_isLoaded) {
			if (mus_lostHits_branch != 0) {
				mus_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_lostHits_branch does not exist!\n");
				exit(1);
			}
			mus_lostHits_isLoaded = true;
		}
		return mus_lostHits_;
	}
	vector<int> &mus_nmatches()
	{
		if (not mus_nmatches_isLoaded) {
			if (mus_nmatches_branch != 0) {
				mus_nmatches_branch->GetEntry(index);
			} else { 
				printf("branch mus_nmatches_branch does not exist!\n");
				exit(1);
			}
			mus_nmatches_isLoaded = true;
		}
		return mus_nmatches_;
	}
	vector<int> &mus_pid_TM2DCompatibilityLoose()
	{
		if (not mus_pid_TM2DCompatibilityLoose_isLoaded) {
			if (mus_pid_TM2DCompatibilityLoose_branch != 0) {
				mus_pid_TM2DCompatibilityLoose_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TM2DCompatibilityLoose_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TM2DCompatibilityLoose_isLoaded = true;
		}
		return mus_pid_TM2DCompatibilityLoose_;
	}
	vector<int> &mus_pid_TM2DCompatibilityTight()
	{
		if (not mus_pid_TM2DCompatibilityTight_isLoaded) {
			if (mus_pid_TM2DCompatibilityTight_branch != 0) {
				mus_pid_TM2DCompatibilityTight_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TM2DCompatibilityTight_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TM2DCompatibilityTight_isLoaded = true;
		}
		return mus_pid_TM2DCompatibilityTight_;
	}
	vector<int> &mus_pid_TMLastStationLoose()
	{
		if (not mus_pid_TMLastStationLoose_isLoaded) {
			if (mus_pid_TMLastStationLoose_branch != 0) {
				mus_pid_TMLastStationLoose_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TMLastStationLoose_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TMLastStationLoose_isLoaded = true;
		}
		return mus_pid_TMLastStationLoose_;
	}
	vector<int> &mus_pid_TMLastStationTight()
	{
		if (not mus_pid_TMLastStationTight_isLoaded) {
			if (mus_pid_TMLastStationTight_branch != 0) {
				mus_pid_TMLastStationTight_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TMLastStationTight_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TMLastStationTight_isLoaded = true;
		}
		return mus_pid_TMLastStationTight_;
	}
	vector<int> &mus_sta_validHits()
	{
		if (not mus_sta_validHits_isLoaded) {
			if (mus_sta_validHits_branch != 0) {
				mus_sta_validHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_sta_validHits_isLoaded = true;
		}
		return mus_sta_validHits_;
	}
	vector<int> &mus_timeDirection()
	{
		if (not mus_timeDirection_isLoaded) {
			if (mus_timeDirection_branch != 0) {
				mus_timeDirection_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeDirection_branch does not exist!\n");
				exit(1);
			}
			mus_timeDirection_isLoaded = true;
		}
		return mus_timeDirection_;
	}
	vector<int> &mus_timeNumStationsUsed()
	{
		if (not mus_timeNumStationsUsed_isLoaded) {
			if (mus_timeNumStationsUsed_branch != 0) {
				mus_timeNumStationsUsed_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeNumStationsUsed_branch does not exist!\n");
				exit(1);
			}
			mus_timeNumStationsUsed_isLoaded = true;
		}
		return mus_timeNumStationsUsed_;
	}
	vector<int> &mus_trk_charge()
	{
		if (not mus_trk_charge_isLoaded) {
			if (mus_trk_charge_branch != 0) {
				mus_trk_charge_branch->GetEntry(index);
			} else { 
				printf("branch mus_trk_charge_branch does not exist!\n");
				exit(1);
			}
			mus_trk_charge_isLoaded = true;
		}
		return mus_trk_charge_;
	}
	vector<int> &mus_trkidx()
	{
		if (not mus_trkidx_isLoaded) {
			if (mus_trkidx_branch != 0) {
				mus_trkidx_branch->GetEntry(index);
			} else { 
				printf("branch mus_trkidx_branch does not exist!\n");
				exit(1);
			}
			mus_trkidx_isLoaded = true;
		}
		return mus_trkidx_;
	}
	vector<int> &mus_type()
	{
		if (not mus_type_isLoaded) {
			if (mus_type_branch != 0) {
				mus_type_branch->GetEntry(index);
			} else { 
				printf("branch mus_type_branch does not exist!\n");
				exit(1);
			}
			mus_type_isLoaded = true;
		}
		return mus_type_;
	}
	vector<int> &mus_validHits()
	{
		if (not mus_validHits_isLoaded) {
			if (mus_validHits_branch != 0) {
				mus_validHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_validHits_isLoaded = true;
		}
		return mus_validHits_;
	}
	vector<int> &pfjets_chargedMultiplicity()
	{
		if (not pfjets_chargedMultiplicity_isLoaded) {
			if (pfjets_chargedMultiplicity_branch != 0) {
				pfjets_chargedMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_chargedMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedMultiplicity_isLoaded = true;
		}
		return pfjets_chargedMultiplicity_;
	}
	vector<int> &pfjets_muonMultiplicity()
	{
		if (not pfjets_muonMultiplicity_isLoaded) {
			if (pfjets_muonMultiplicity_branch != 0) {
				pfjets_muonMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_muonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_muonMultiplicity_isLoaded = true;
		}
		return pfjets_muonMultiplicity_;
	}
	vector<int> &pfjets_neutralMultiplicity()
	{
		if (not pfjets_neutralMultiplicity_isLoaded) {
			if (pfjets_neutralMultiplicity_branch != 0) {
				pfjets_neutralMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_neutralMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralMultiplicity_isLoaded = true;
		}
		return pfjets_neutralMultiplicity_;
	}
	vector<int> &photons_fiduciality()
	{
		if (not photons_fiduciality_isLoaded) {
			if (photons_fiduciality_branch != 0) {
				photons_fiduciality_branch->GetEntry(index);
			} else { 
				printf("branch photons_fiduciality_branch does not exist!\n");
				exit(1);
			}
			photons_fiduciality_isLoaded = true;
		}
		return photons_fiduciality_;
	}
	vector<int> &pxl_ndigis_pxb()
	{
		if (not pxl_ndigis_pxb_isLoaded) {
			if (pxl_ndigis_pxb_branch != 0) {
				pxl_ndigis_pxb_branch->GetEntry(index);
			} else { 
				printf("branch pxl_ndigis_pxb_branch does not exist!\n");
				exit(1);
			}
			pxl_ndigis_pxb_isLoaded = true;
		}
		return pxl_ndigis_pxb_;
	}
	vector<int> &pxl_ndigis_pxf()
	{
		if (not pxl_ndigis_pxf_isLoaded) {
			if (pxl_ndigis_pxf_branch != 0) {
				pxl_ndigis_pxf_branch->GetEntry(index);
			} else { 
				printf("branch pxl_ndigis_pxf_branch does not exist!\n");
				exit(1);
			}
			pxl_ndigis_pxf_isLoaded = true;
		}
		return pxl_ndigis_pxf_;
	}
	vector<int> &ran_srFlag()
	{
		if (not ran_srFlag_isLoaded) {
			if (ran_srFlag_branch != 0) {
				ran_srFlag_branch->GetEntry(index);
			} else { 
				printf("branch ran_srFlag_branch does not exist!\n");
				exit(1);
			}
			ran_srFlag_isLoaded = true;
		}
		return ran_srFlag_;
	}
	vector<int> &scs_elsidx()
	{
		if (not scs_elsidx_isLoaded) {
			if (scs_elsidx_branch != 0) {
				scs_elsidx_branch->GetEntry(index);
			} else { 
				printf("branch scs_elsidx_branch does not exist!\n");
				exit(1);
			}
			scs_elsidx_isLoaded = true;
		}
		return scs_elsidx_;
	}
	vector<int> &scs_severitySeed()
	{
		if (not scs_severitySeed_isLoaded) {
			if (scs_severitySeed_branch != 0) {
				scs_severitySeed_branch->GetEntry(index);
			} else { 
				printf("branch scs_severitySeed_branch does not exist!\n");
				exit(1);
			}
			scs_severitySeed_isLoaded = true;
		}
		return scs_severitySeed_;
	}
	vector<int> &mus_tcmet_flag()
	{
		if (not mus_tcmet_flag_isLoaded) {
			if (mus_tcmet_flag_branch != 0) {
				mus_tcmet_flag_branch->GetEntry(index);
			} else { 
				printf("branch mus_tcmet_flag_branch does not exist!\n");
				exit(1);
			}
			mus_tcmet_flag_isLoaded = true;
		}
		return mus_tcmet_flag_;
	}
	vector<int> &trks_algo()
	{
		if (not trks_algo_isLoaded) {
			if (trks_algo_branch != 0) {
				trks_algo_branch->GetEntry(index);
			} else { 
				printf("branch trks_algo_branch does not exist!\n");
				exit(1);
			}
			trks_algo_isLoaded = true;
		}
		return trks_algo_;
	}
	vector<int> &trks_charge()
	{
		if (not trks_charge_isLoaded) {
			if (trks_charge_branch != 0) {
				trks_charge_branch->GetEntry(index);
			} else { 
				printf("branch trks_charge_branch does not exist!\n");
				exit(1);
			}
			trks_charge_isLoaded = true;
		}
		return trks_charge_;
	}
	vector<int> &trks_exp_innerlayers()
	{
		if (not trks_exp_innerlayers_isLoaded) {
			if (trks_exp_innerlayers_branch != 0) {
				trks_exp_innerlayers_branch->GetEntry(index);
			} else { 
				printf("branch trks_exp_innerlayers_branch does not exist!\n");
				exit(1);
			}
			trks_exp_innerlayers_isLoaded = true;
		}
		return trks_exp_innerlayers_;
	}
	vector<int> &trks_exp_outerlayers()
	{
		if (not trks_exp_outerlayers_isLoaded) {
			if (trks_exp_outerlayers_branch != 0) {
				trks_exp_outerlayers_branch->GetEntry(index);
			} else { 
				printf("branch trks_exp_outerlayers_branch does not exist!\n");
				exit(1);
			}
			trks_exp_outerlayers_isLoaded = true;
		}
		return trks_exp_outerlayers_;
	}
	vector<int> &trks_layer1_det()
	{
		if (not trks_layer1_det_isLoaded) {
			if (trks_layer1_det_branch != 0) {
				trks_layer1_det_branch->GetEntry(index);
			} else { 
				printf("branch trks_layer1_det_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_det_isLoaded = true;
		}
		return trks_layer1_det_;
	}
	vector<int> &trks_layer1_layer()
	{
		if (not trks_layer1_layer_isLoaded) {
			if (trks_layer1_layer_branch != 0) {
				trks_layer1_layer_branch->GetEntry(index);
			} else { 
				printf("branch trks_layer1_layer_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_layer_isLoaded = true;
		}
		return trks_layer1_layer_;
	}
	vector<int> &trks_layer1_sizerphi()
	{
		if (not trks_layer1_sizerphi_isLoaded) {
			if (trks_layer1_sizerphi_branch != 0) {
				trks_layer1_sizerphi_branch->GetEntry(index);
			} else { 
				printf("branch trks_layer1_sizerphi_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_sizerphi_isLoaded = true;
		}
		return trks_layer1_sizerphi_;
	}
	vector<int> &trks_layer1_sizerz()
	{
		if (not trks_layer1_sizerz_isLoaded) {
			if (trks_layer1_sizerz_branch != 0) {
				trks_layer1_sizerz_branch->GetEntry(index);
			} else { 
				printf("branch trks_layer1_sizerz_branch does not exist!\n");
				exit(1);
			}
			trks_layer1_sizerz_isLoaded = true;
		}
		return trks_layer1_sizerz_;
	}
	vector<int> &trks_lostHits()
	{
		if (not trks_lostHits_isLoaded) {
			if (trks_lostHits_branch != 0) {
				trks_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch trks_lostHits_branch does not exist!\n");
				exit(1);
			}
			trks_lostHits_isLoaded = true;
		}
		return trks_lostHits_;
	}
	vector<int> &trks_lost_pixelhits()
	{
		if (not trks_lost_pixelhits_isLoaded) {
			if (trks_lost_pixelhits_branch != 0) {
				trks_lost_pixelhits_branch->GetEntry(index);
			} else { 
				printf("branch trks_lost_pixelhits_branch does not exist!\n");
				exit(1);
			}
			trks_lost_pixelhits_isLoaded = true;
		}
		return trks_lost_pixelhits_;
	}
	vector<int> &trks_nlayers()
	{
		if (not trks_nlayers_isLoaded) {
			if (trks_nlayers_branch != 0) {
				trks_nlayers_branch->GetEntry(index);
			} else { 
				printf("branch trks_nlayers_branch does not exist!\n");
				exit(1);
			}
			trks_nlayers_isLoaded = true;
		}
		return trks_nlayers_;
	}
	vector<int> &trks_nlayers3D()
	{
		if (not trks_nlayers3D_isLoaded) {
			if (trks_nlayers3D_branch != 0) {
				trks_nlayers3D_branch->GetEntry(index);
			} else { 
				printf("branch trks_nlayers3D_branch does not exist!\n");
				exit(1);
			}
			trks_nlayers3D_isLoaded = true;
		}
		return trks_nlayers3D_;
	}
	vector<int> &trks_nlayersLost()
	{
		if (not trks_nlayersLost_isLoaded) {
			if (trks_nlayersLost_branch != 0) {
				trks_nlayersLost_branch->GetEntry(index);
			} else { 
				printf("branch trks_nlayersLost_branch does not exist!\n");
				exit(1);
			}
			trks_nlayersLost_isLoaded = true;
		}
		return trks_nlayersLost_;
	}
	vector<int> &trks_qualityMask()
	{
		if (not trks_qualityMask_isLoaded) {
			if (trks_qualityMask_branch != 0) {
				trks_qualityMask_branch->GetEntry(index);
			} else { 
				printf("branch trks_qualityMask_branch does not exist!\n");
				exit(1);
			}
			trks_qualityMask_isLoaded = true;
		}
		return trks_qualityMask_;
	}
	vector<int> &trks_validHits()
	{
		if (not trks_validHits_isLoaded) {
			if (trks_validHits_branch != 0) {
				trks_validHits_branch->GetEntry(index);
			} else { 
				printf("branch trks_validHits_branch does not exist!\n");
				exit(1);
			}
			trks_validHits_isLoaded = true;
		}
		return trks_validHits_;
	}
	vector<int> &trks_valid_pixelhits()
	{
		if (not trks_valid_pixelhits_isLoaded) {
			if (trks_valid_pixelhits_branch != 0) {
				trks_valid_pixelhits_branch->GetEntry(index);
			} else { 
				printf("branch trks_valid_pixelhits_branch does not exist!\n");
				exit(1);
			}
			trks_valid_pixelhits_isLoaded = true;
		}
		return trks_valid_pixelhits_;
	}
	vector<int> &trks_elsidx()
	{
		if (not trks_elsidx_isLoaded) {
			if (trks_elsidx_branch != 0) {
				trks_elsidx_branch->GetEntry(index);
			} else { 
				printf("branch trks_elsidx_branch does not exist!\n");
				exit(1);
			}
			trks_elsidx_isLoaded = true;
		}
		return trks_elsidx_;
	}
	vector<int> &trk_musidx()
	{
		if (not trk_musidx_isLoaded) {
			if (trk_musidx_branch != 0) {
				trk_musidx_branch->GetEntry(index);
			} else { 
				printf("branch trk_musidx_branch does not exist!\n");
				exit(1);
			}
			trk_musidx_isLoaded = true;
		}
		return trk_musidx_;
	}
	vector<int> &vtxs_isFake()
	{
		if (not vtxs_isFake_isLoaded) {
			if (vtxs_isFake_branch != 0) {
				vtxs_isFake_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_isFake_branch does not exist!\n");
				exit(1);
			}
			vtxs_isFake_isLoaded = true;
		}
		return vtxs_isFake_;
	}
	vector<int> &vtxs_isValid()
	{
		if (not vtxs_isValid_isLoaded) {
			if (vtxs_isValid_branch != 0) {
				vtxs_isValid_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_isValid_branch does not exist!\n");
				exit(1);
			}
			vtxs_isValid_isLoaded = true;
		}
		return vtxs_isValid_;
	}
	vector<int> &vtxs_tracksSize()
	{
		if (not vtxs_tracksSize_isLoaded) {
			if (vtxs_tracksSize_branch != 0) {
				vtxs_tracksSize_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_tracksSize_branch does not exist!\n");
				exit(1);
			}
			vtxs_tracksSize_isLoaded = true;
		}
		return vtxs_tracksSize_;
	}
	vector<vector<int> > &hlt_trigObjs_id()
	{
		if (not hlt_trigObjs_id_isLoaded) {
			if (hlt_trigObjs_id_branch != 0) {
				hlt_trigObjs_id_branch->GetEntry(index);
			} else { 
				printf("branch hlt_trigObjs_id_branch does not exist!\n");
				exit(1);
			}
			hlt_trigObjs_id_isLoaded = true;
		}
		return hlt_trigObjs_id_;
	}
	unsigned int &evt_ntwrs()
	{
		if (not evt_ntwrs_isLoaded) {
			if (evt_ntwrs_branch != 0) {
				evt_ntwrs_branch->GetEntry(index);
			} else { 
				printf("branch evt_ntwrs_branch does not exist!\n");
				exit(1);
			}
			evt_ntwrs_isLoaded = true;
		}
		return evt_ntwrs_;
	}
	unsigned int &evt_nels()
	{
		if (not evt_nels_isLoaded) {
			if (evt_nels_branch != 0) {
				evt_nels_branch->GetEntry(index);
			} else { 
				printf("branch evt_nels_branch does not exist!\n");
				exit(1);
			}
			evt_nels_isLoaded = true;
		}
		return evt_nels_;
	}
	unsigned int &evt_event()
	{
		if (not evt_event_isLoaded) {
			if (evt_event_branch != 0) {
				evt_event_branch->GetEntry(index);
			} else { 
				printf("branch evt_event_branch does not exist!\n");
				exit(1);
			}
			evt_event_isLoaded = true;
		}
		return evt_event_;
	}
	unsigned int &evt_lumiBlock()
	{
		if (not evt_lumiBlock_isLoaded) {
			if (evt_lumiBlock_branch != 0) {
				evt_lumiBlock_branch->GetEntry(index);
			} else { 
				printf("branch evt_lumiBlock_branch does not exist!\n");
				exit(1);
			}
			evt_lumiBlock_isLoaded = true;
		}
		return evt_lumiBlock_;
	}
	unsigned int &evt_run()
	{
		if (not evt_run_isLoaded) {
			if (evt_run_branch != 0) {
				evt_run_branch->GetEntry(index);
			} else { 
				printf("branch evt_run_branch does not exist!\n");
				exit(1);
			}
			evt_run_isLoaded = true;
		}
		return evt_run_;
	}
	unsigned int &hlt_bits1()
	{
		if (not hlt_bits1_isLoaded) {
			if (hlt_bits1_branch != 0) {
				hlt_bits1_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits1_branch does not exist!\n");
				exit(1);
			}
			hlt_bits1_isLoaded = true;
		}
		return hlt_bits1_;
	}
	unsigned int &hlt_bits2()
	{
		if (not hlt_bits2_isLoaded) {
			if (hlt_bits2_branch != 0) {
				hlt_bits2_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits2_branch does not exist!\n");
				exit(1);
			}
			hlt_bits2_isLoaded = true;
		}
		return hlt_bits2_;
	}
	unsigned int &hlt_bits3()
	{
		if (not hlt_bits3_isLoaded) {
			if (hlt_bits3_branch != 0) {
				hlt_bits3_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits3_branch does not exist!\n");
				exit(1);
			}
			hlt_bits3_isLoaded = true;
		}
		return hlt_bits3_;
	}
	unsigned int &hlt_bits4()
	{
		if (not hlt_bits4_isLoaded) {
			if (hlt_bits4_branch != 0) {
				hlt_bits4_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits4_branch does not exist!\n");
				exit(1);
			}
			hlt_bits4_isLoaded = true;
		}
		return hlt_bits4_;
	}
	unsigned int &hlt_bits5()
	{
		if (not hlt_bits5_isLoaded) {
			if (hlt_bits5_branch != 0) {
				hlt_bits5_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits5_branch does not exist!\n");
				exit(1);
			}
			hlt_bits5_isLoaded = true;
		}
		return hlt_bits5_;
	}
	unsigned int &hlt_bits6()
	{
		if (not hlt_bits6_isLoaded) {
			if (hlt_bits6_branch != 0) {
				hlt_bits6_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits6_branch does not exist!\n");
				exit(1);
			}
			hlt_bits6_isLoaded = true;
		}
		return hlt_bits6_;
	}
	unsigned int &hlt_bits7()
	{
		if (not hlt_bits7_isLoaded) {
			if (hlt_bits7_branch != 0) {
				hlt_bits7_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits7_branch does not exist!\n");
				exit(1);
			}
			hlt_bits7_isLoaded = true;
		}
		return hlt_bits7_;
	}
	unsigned int &hlt_bits8()
	{
		if (not hlt_bits8_isLoaded) {
			if (hlt_bits8_branch != 0) {
				hlt_bits8_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits8_branch does not exist!\n");
				exit(1);
			}
			hlt_bits8_isLoaded = true;
		}
		return hlt_bits8_;
	}
	unsigned int &evt_njets()
	{
		if (not evt_njets_isLoaded) {
			if (evt_njets_branch != 0) {
				evt_njets_branch->GetEntry(index);
			} else { 
				printf("branch evt_njets_branch does not exist!\n");
				exit(1);
			}
			evt_njets_isLoaded = true;
		}
		return evt_njets_;
	}
	unsigned int &evt_njpts()
	{
		if (not evt_njpts_isLoaded) {
			if (evt_njpts_branch != 0) {
				evt_njpts_branch->GetEntry(index);
			} else { 
				printf("branch evt_njpts_branch does not exist!\n");
				exit(1);
			}
			evt_njpts_isLoaded = true;
		}
		return evt_njpts_;
	}
	unsigned int &l1_bits1()
	{
		if (not l1_bits1_isLoaded) {
			if (l1_bits1_branch != 0) {
				l1_bits1_branch->GetEntry(index);
			} else { 
				printf("branch l1_bits1_branch does not exist!\n");
				exit(1);
			}
			l1_bits1_isLoaded = true;
		}
		return l1_bits1_;
	}
	unsigned int &l1_bits2()
	{
		if (not l1_bits2_isLoaded) {
			if (l1_bits2_branch != 0) {
				l1_bits2_branch->GetEntry(index);
			} else { 
				printf("branch l1_bits2_branch does not exist!\n");
				exit(1);
			}
			l1_bits2_isLoaded = true;
		}
		return l1_bits2_;
	}
	unsigned int &l1_bits3()
	{
		if (not l1_bits3_isLoaded) {
			if (l1_bits3_branch != 0) {
				l1_bits3_branch->GetEntry(index);
			} else { 
				printf("branch l1_bits3_branch does not exist!\n");
				exit(1);
			}
			l1_bits3_isLoaded = true;
		}
		return l1_bits3_;
	}
	unsigned int &l1_bits4()
	{
		if (not l1_bits4_isLoaded) {
			if (l1_bits4_branch != 0) {
				l1_bits4_branch->GetEntry(index);
			} else { 
				printf("branch l1_bits4_branch does not exist!\n");
				exit(1);
			}
			l1_bits4_isLoaded = true;
		}
		return l1_bits4_;
	}
	unsigned int &l1_techbits1()
	{
		if (not l1_techbits1_isLoaded) {
			if (l1_techbits1_branch != 0) {
				l1_techbits1_branch->GetEntry(index);
			} else { 
				printf("branch l1_techbits1_branch does not exist!\n");
				exit(1);
			}
			l1_techbits1_isLoaded = true;
		}
		return l1_techbits1_;
	}
	unsigned int &l1_techbits2()
	{
		if (not l1_techbits2_isLoaded) {
			if (l1_techbits2_branch != 0) {
				l1_techbits2_branch->GetEntry(index);
			} else { 
				printf("branch l1_techbits2_branch does not exist!\n");
				exit(1);
			}
			l1_techbits2_isLoaded = true;
		}
		return l1_techbits2_;
	}
	unsigned int &evt_nphotons()
	{
		if (not evt_nphotons_isLoaded) {
			if (evt_nphotons_branch != 0) {
				evt_nphotons_branch->GetEntry(index);
			} else { 
				printf("branch evt_nphotons_branch does not exist!\n");
				exit(1);
			}
			evt_nphotons_isLoaded = true;
		}
		return evt_nphotons_;
	}
	unsigned int &evt_nscs()
	{
		if (not evt_nscs_isLoaded) {
			if (evt_nscs_branch != 0) {
				evt_nscs_branch->GetEntry(index);
			} else { 
				printf("branch evt_nscs_branch does not exist!\n");
				exit(1);
			}
			evt_nscs_isLoaded = true;
		}
		return evt_nscs_;
	}
	unsigned int &evt_nscjets()
	{
		if (not evt_nscjets_isLoaded) {
			if (evt_nscjets_branch != 0) {
				evt_nscjets_branch->GetEntry(index);
			} else { 
				printf("branch evt_nscjets_branch does not exist!\n");
				exit(1);
			}
			evt_nscjets_isLoaded = true;
		}
		return evt_nscjets_;
	}
	unsigned int &evt_ntrkjets()
	{
		if (not evt_ntrkjets_isLoaded) {
			if (evt_ntrkjets_branch != 0) {
				evt_ntrkjets_branch->GetEntry(index);
			} else { 
				printf("branch evt_ntrkjets_branch does not exist!\n");
				exit(1);
			}
			evt_ntrkjets_isLoaded = true;
		}
		return evt_ntrkjets_;
	}
	unsigned int &evt_nvtxs()
	{
		if (not evt_nvtxs_isLoaded) {
			if (evt_nvtxs_branch != 0) {
				evt_nvtxs_branch->GetEntry(index);
			} else { 
				printf("branch evt_nvtxs_branch does not exist!\n");
				exit(1);
			}
			evt_nvtxs_isLoaded = true;
		}
		return evt_nvtxs_;
	}
	vector<unsigned int> &twrs_numBadEcalCells()
	{
		if (not twrs_numBadEcalCells_isLoaded) {
			if (twrs_numBadEcalCells_branch != 0) {
				twrs_numBadEcalCells_branch->GetEntry(index);
			} else { 
				printf("branch twrs_numBadEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numBadEcalCells_isLoaded = true;
		}
		return twrs_numBadEcalCells_;
	}
	vector<unsigned int> &twrs_numBadHcalCells()
	{
		if (not twrs_numBadHcalCells_isLoaded) {
			if (twrs_numBadHcalCells_branch != 0) {
				twrs_numBadHcalCells_branch->GetEntry(index);
			} else { 
				printf("branch twrs_numBadHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numBadHcalCells_isLoaded = true;
		}
		return twrs_numBadHcalCells_;
	}
	vector<unsigned int> &twrs_numProblematicEcalCells()
	{
		if (not twrs_numProblematicEcalCells_isLoaded) {
			if (twrs_numProblematicEcalCells_branch != 0) {
				twrs_numProblematicEcalCells_branch->GetEntry(index);
			} else { 
				printf("branch twrs_numProblematicEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numProblematicEcalCells_isLoaded = true;
		}
		return twrs_numProblematicEcalCells_;
	}
	vector<unsigned int> &twrs_numProblematicHcalCells()
	{
		if (not twrs_numProblematicHcalCells_isLoaded) {
			if (twrs_numProblematicHcalCells_branch != 0) {
				twrs_numProblematicHcalCells_branch->GetEntry(index);
			} else { 
				printf("branch twrs_numProblematicHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numProblematicHcalCells_isLoaded = true;
		}
		return twrs_numProblematicHcalCells_;
	}
	vector<unsigned int> &twrs_numRecoveredEcalCells()
	{
		if (not twrs_numRecoveredEcalCells_isLoaded) {
			if (twrs_numRecoveredEcalCells_branch != 0) {
				twrs_numRecoveredEcalCells_branch->GetEntry(index);
			} else { 
				printf("branch twrs_numRecoveredEcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numRecoveredEcalCells_isLoaded = true;
		}
		return twrs_numRecoveredEcalCells_;
	}
	vector<unsigned int> &twrs_numRecoveredHcalCells()
	{
		if (not twrs_numRecoveredHcalCells_isLoaded) {
			if (twrs_numRecoveredHcalCells_branch != 0) {
				twrs_numRecoveredHcalCells_branch->GetEntry(index);
			} else { 
				printf("branch twrs_numRecoveredHcalCells_branch does not exist!\n");
				exit(1);
			}
			twrs_numRecoveredHcalCells_isLoaded = true;
		}
		return twrs_numRecoveredHcalCells_;
	}
	float &evt_scale1fb()
	{
		if (not evt_scale1fb_isLoaded) {
			if (evt_scale1fb_branch != 0) {
				evt_scale1fb_branch->GetEntry(index);
			} else { 
				printf("branch evt_scale1fb_branch does not exist!\n");
				exit(1);
			}
			evt_scale1fb_isLoaded = true;
		}
		return evt_scale1fb_;
	}
	float &evt_xsec_excl()
	{
		if (not evt_xsec_excl_isLoaded) {
			if (evt_xsec_excl_branch != 0) {
				evt_xsec_excl_branch->GetEntry(index);
			} else { 
				printf("branch evt_xsec_excl_branch does not exist!\n");
				exit(1);
			}
			evt_xsec_excl_isLoaded = true;
		}
		return evt_xsec_excl_;
	}
	float &evt_xsec_incl()
	{
		if (not evt_xsec_incl_isLoaded) {
			if (evt_xsec_incl_branch != 0) {
				evt_xsec_incl_branch->GetEntry(index);
			} else { 
				printf("branch evt_xsec_incl_branch does not exist!\n");
				exit(1);
			}
			evt_xsec_incl_isLoaded = true;
		}
		return evt_xsec_incl_;
	}
	float &evt_kfactor()
	{
		if (not evt_kfactor_isLoaded) {
			if (evt_kfactor_branch != 0) {
				evt_kfactor_branch->GetEntry(index);
			} else { 
				printf("branch evt_kfactor_branch does not exist!\n");
				exit(1);
			}
			evt_kfactor_isLoaded = true;
		}
		return evt_kfactor_;
	}
	int &evt_nEvts()
	{
		if (not evt_nEvts_isLoaded) {
			if (evt_nEvts_branch != 0) {
				evt_nEvts_branch->GetEntry(index);
			} else { 
				printf("branch evt_nEvts_branch does not exist!\n");
				exit(1);
			}
			evt_nEvts_isLoaded = true;
		}
		return evt_nEvts_;
	}
	float &evt_filt_eff()
	{
		if (not evt_filt_eff_isLoaded) {
			if (evt_filt_eff_branch != 0) {
				evt_filt_eff_branch->GetEntry(index);
			} else { 
				printf("branch evt_filt_eff_branch does not exist!\n");
				exit(1);
			}
			evt_filt_eff_isLoaded = true;
		}
		return evt_filt_eff_;
	}
	bool passHLTTrigger(TString trigName) {
		int trigIndx;
		vector<TString>::const_iterator begin_it = hlt_trigNames().begin();
		vector<TString>::const_iterator end_it = hlt_trigNames().end();
		vector<TString>::const_iterator found_it = find(begin_it, end_it, trigName);
		if(found_it != end_it)
			trigIndx = found_it - begin_it;
		else {
			cout << "Cannot find Trigger " << trigName << endl; 
			return 0;
		}

		if(trigIndx <= 31) {
			unsigned int bitmask = 1;
			bitmask <<= trigIndx;
			return hlt_bits1() & bitmask;
		}
		if(trigIndx >= 32 && trigIndx <= 63) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 32); 
			return hlt_bits2() & bitmask;
		}
		if(trigIndx >= 64 && trigIndx <= 95) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 64); 
			return hlt_bits3() & bitmask;
		}
		if(trigIndx >= 96 && trigIndx <= 127) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 96); 
			return hlt_bits4() & bitmask;
		}
		if(trigIndx >= 128 && trigIndx <= 159) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 128); 
			return hlt_bits5() & bitmask;
		}
		if(trigIndx >= 160 && trigIndx <= 191) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 160); 
			return hlt_bits6() & bitmask;
		}
		if(trigIndx >= 192 && trigIndx <= 223) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 192); 
			return hlt_bits7() & bitmask;
		}
		if(trigIndx >= 224 && trigIndx <= 255) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 224); 
			return hlt_bits8() & bitmask;
		}
	return 0;
	}
	bool passL1Trigger(TString trigName) {
		int trigIndx;
		vector<TString>::const_iterator begin_it = l1_trigNames().begin();
		vector<TString>::const_iterator end_it = l1_trigNames().end();
		vector<TString>::const_iterator found_it = find(begin_it, end_it, trigName);
		if(found_it != end_it)
			trigIndx = found_it - begin_it;
		else {
			cout << "Cannot find Trigger " << trigName << endl; 
			return 0;
		}

		if(trigIndx <= 31) {
			unsigned int bitmask = 1;
			bitmask <<= trigIndx;
			return l1_bits1() & bitmask;
		}
		if(trigIndx >= 32 && trigIndx <= 63) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 32); 
			return l1_bits2() & bitmask;
		}
		if(trigIndx >= 64 && trigIndx <= 95) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 64); 
			return l1_bits3() & bitmask;
		}
		if(trigIndx >= 96 && trigIndx <= 127) {
			unsigned int bitmask = 1;
			bitmask <<= (trigIndx - 96); 
			return l1_bits4() & bitmask;
		}
	return 0;
	}
};

#ifndef __CINT__
extern CMS2 cms2;
#endif

namespace tas {
	TString &evt_CMS2tag() { return cms2.evt_CMS2tag(); }
	TString &evt_dataset() { return cms2.evt_dataset(); }
	vector<TString> &hlt_trigNames() { return cms2.hlt_trigNames(); }
	vector<TString> &l1_trigNames() { return cms2.l1_trigNames(); }
	vector<double> &jets_closestElectron_DR() { return cms2.jets_closestElectron_DR(); }
	vector<double> &jets_closestMuon_DR() { return cms2.jets_closestMuon_DR(); }
	float &evt_bs_Xwidth() { return cms2.evt_bs_Xwidth(); }
	float &evt_bs_XwidthErr() { return cms2.evt_bs_XwidthErr(); }
	float &evt_bs_Ywidth() { return cms2.evt_bs_Ywidth(); }
	float &evt_bs_YwidthErr() { return cms2.evt_bs_YwidthErr(); }
	float &evt_bs_dxdz() { return cms2.evt_bs_dxdz(); }
	float &evt_bs_dxdzErr() { return cms2.evt_bs_dxdzErr(); }
	float &evt_bs_dydz() { return cms2.evt_bs_dydz(); }
	float &evt_bs_dydzErr() { return cms2.evt_bs_dydzErr(); }
	float &evt_bs_sigmaZ() { return cms2.evt_bs_sigmaZ(); }
	float &evt_bs_sigmaZErr() { return cms2.evt_bs_sigmaZErr(); }
	float &evt_bs_xErr() { return cms2.evt_bs_xErr(); }
	float &evt_bs_yErr() { return cms2.evt_bs_yErr(); }
	float &evt_bs_zErr() { return cms2.evt_bs_zErr(); }
	float &evt_bField() { return cms2.evt_bField(); }
	float &hcalnoise_eventChargeFraction() { return cms2.hcalnoise_eventChargeFraction(); }
	float &hcalnoise_eventEMEnergy() { return cms2.hcalnoise_eventEMEnergy(); }
	float &hcalnoise_eventEMFraction() { return cms2.hcalnoise_eventEMFraction(); }
	float &hcalnoise_eventHadEnergy() { return cms2.hcalnoise_eventHadEnergy(); }
	float &hcalnoise_eventTrackEnergy() { return cms2.hcalnoise_eventTrackEnergy(); }
	float &hcalnoise_max10GeVHitTime() { return cms2.hcalnoise_max10GeVHitTime(); }
	float &hcalnoise_max25GeVHitTime() { return cms2.hcalnoise_max25GeVHitTime(); }
	float &hcalnoise_min10GeVHitTime() { return cms2.hcalnoise_min10GeVHitTime(); }
	float &hcalnoise_min25GeVHitTime() { return cms2.hcalnoise_min25GeVHitTime(); }
	float &hcalnoise_minE10TS() { return cms2.hcalnoise_minE10TS(); }
	float &hcalnoise_minE2Over10TS() { return cms2.hcalnoise_minE2Over10TS(); }
	float &hcalnoise_minE2TS() { return cms2.hcalnoise_minE2TS(); }
	float &hcalnoise_minHPDEMF() { return cms2.hcalnoise_minHPDEMF(); }
	float &hcalnoise_minRBXEMF() { return cms2.hcalnoise_minRBXEMF(); }
	float &hcalnoise_rms10GeVHitTime() { return cms2.hcalnoise_rms10GeVHitTime(); }
	float &hcalnoise_rms25GeVHitTime() { return cms2.hcalnoise_rms25GeVHitTime(); }
	float &l1_met_etTot() { return cms2.l1_met_etTot(); }
	float &l1_met_met() { return cms2.l1_met_met(); }
	float &l1_mht_htTot() { return cms2.l1_mht_htTot(); }
	float &l1_mht_mht() { return cms2.l1_mht_mht(); }
	float &evt_ecalendcapm_met() { return cms2.evt_ecalendcapm_met(); }
	float &evt_ecalendcapm_metPhi() { return cms2.evt_ecalendcapm_metPhi(); }
	float &evt_ecalendcapp_met() { return cms2.evt_ecalendcapp_met(); }
	float &evt_ecalendcapp_metPhi() { return cms2.evt_ecalendcapp_metPhi(); }
	float &evt_ecalmet() { return cms2.evt_ecalmet(); }
	float &evt_ecalmetPhi() { return cms2.evt_ecalmetPhi(); }
	float &evt_endcapm_met() { return cms2.evt_endcapm_met(); }
	float &evt_endcapm_metPhi() { return cms2.evt_endcapm_metPhi(); }
	float &evt_endcapp_met() { return cms2.evt_endcapp_met(); }
	float &evt_endcapp_metPhi() { return cms2.evt_endcapp_metPhi(); }
	float &evt_hcalendcapm_met() { return cms2.evt_hcalendcapm_met(); }
	float &evt_hcalendcapm_metPhi() { return cms2.evt_hcalendcapm_metPhi(); }
	float &evt_hcalendcapp_met() { return cms2.evt_hcalendcapp_met(); }
	float &evt_hcalendcapp_metPhi() { return cms2.evt_hcalendcapp_metPhi(); }
	float &evt_hcalmet() { return cms2.evt_hcalmet(); }
	float &evt_hcalmetPhi() { return cms2.evt_hcalmetPhi(); }
	float &evt_met() { return cms2.evt_met(); }
	float &evt_metHO() { return cms2.evt_metHO(); }
	float &evt_metHOPhi() { return cms2.evt_metHOPhi(); }
	float &evt_metHOSig() { return cms2.evt_metHOSig(); }
	float &evt_metMuonCorr() { return cms2.evt_metMuonCorr(); }
	float &evt_metMuonCorrPhi() { return cms2.evt_metMuonCorrPhi(); }
	float &evt_metMuonCorrSig() { return cms2.evt_metMuonCorrSig(); }
	float &evt_metMuonJESCorr() { return cms2.evt_metMuonJESCorr(); }
	float &evt_metMuonJESCorrPhi() { return cms2.evt_metMuonJESCorrPhi(); }
	float &evt_metMuonJESCorrSig() { return cms2.evt_metMuonJESCorrSig(); }
	float &evt_metNoHF() { return cms2.evt_metNoHF(); }
	float &evt_metNoHFHO() { return cms2.evt_metNoHFHO(); }
	float &evt_metNoHFHOPhi() { return cms2.evt_metNoHFHOPhi(); }
	float &evt_metNoHFHOSig() { return cms2.evt_metNoHFHOSig(); }
	float &evt_metNoHFPhi() { return cms2.evt_metNoHFPhi(); }
	float &evt_metNoHFSig() { return cms2.evt_metNoHFSig(); }
	float &evt_metOpt() { return cms2.evt_metOpt(); }
	float &evt_metOptHO() { return cms2.evt_metOptHO(); }
	float &evt_metOptHOPhi() { return cms2.evt_metOptHOPhi(); }
	float &evt_metOptHOSig() { return cms2.evt_metOptHOSig(); }
	float &evt_metOptNoHF() { return cms2.evt_metOptNoHF(); }
	float &evt_metOptNoHFHO() { return cms2.evt_metOptNoHFHO(); }
	float &evt_metOptNoHFHOPhi() { return cms2.evt_metOptNoHFHOPhi(); }
	float &evt_metOptNoHFHOSig() { return cms2.evt_metOptNoHFHOSig(); }
	float &evt_metOptNoHFPhi() { return cms2.evt_metOptNoHFPhi(); }
	float &evt_metOptNoHFSig() { return cms2.evt_metOptNoHFSig(); }
	float &evt_metOptPhi() { return cms2.evt_metOptPhi(); }
	float &evt_metOptSig() { return cms2.evt_metOptSig(); }
	float &evt_metPhi() { return cms2.evt_metPhi(); }
	float &evt_metSig() { return cms2.evt_metSig(); }
	float &evt_sumet() { return cms2.evt_sumet(); }
	float &evt_sumetHO() { return cms2.evt_sumetHO(); }
	float &evt_sumetMuonCorr() { return cms2.evt_sumetMuonCorr(); }
	float &evt_sumetNoHF() { return cms2.evt_sumetNoHF(); }
	float &evt_sumetNoHFHO() { return cms2.evt_sumetNoHFHO(); }
	float &evt_sumetOpt() { return cms2.evt_sumetOpt(); }
	float &evt_sumetOptHO() { return cms2.evt_sumetOptHO(); }
	float &evt_sumetOptNoHF() { return cms2.evt_sumetOptNoHF(); }
	float &evt_sumetOptNoHFHO() { return cms2.evt_sumetOptNoHFHO(); }
	float &evt_pfmet() { return cms2.evt_pfmet(); }
	float &evt_pfmetPhi() { return cms2.evt_pfmetPhi(); }
	float &evt_pfmetSig() { return cms2.evt_pfmetSig(); }
	float &evt_pfsumet() { return cms2.evt_pfsumet(); }
	float &evt_tcmet() { return cms2.evt_tcmet(); }
	float &evt_tcmetPhi() { return cms2.evt_tcmetPhi(); }
	float &evt_tcmetSig() { return cms2.evt_tcmetSig(); }
	float &evt_tcsumet() { return cms2.evt_tcsumet(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &evt_bsp4() { return cms2.evt_bsp4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_met_p4() { return cms2.l1_met_p4(); }
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &l1_mht_p4() { return cms2.l1_mht_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_inner_position() { return cms2.els_inner_position(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_outer_position() { return cms2.els_outer_position(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4() { return cms2.els_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In() { return cms2.els_p4In(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out() { return cms2.els_p4Out(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4() { return cms2.els_trk_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4() { return cms2.els_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_p4() { return cms2.jets_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_vertex_p4() { return cms2.jets_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jpts_p4() { return cms2.jpts_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emiso_p4() { return cms2.l1_emiso_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_emnoiso_p4() { return cms2.l1_emnoiso_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsc_p4() { return cms2.l1_jetsc_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetsf_p4() { return cms2.l1_jetsf_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_jetst_p4() { return cms2.l1_jetst_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &l1_mus_p4() { return cms2.l1_mus_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitdefault_p4() { return cms2.mus_fitdefault_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitfirsthit_p4() { return cms2.mus_fitfirsthit_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fitpicky_p4() { return cms2.mus_fitpicky_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_fittev_p4() { return cms2.mus_fittev_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_outerPos_p4() { return cms2.mus_gfit_outerPos_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_p4() { return cms2.mus_gfit_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_vertex_p4() { return cms2.mus_gfit_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_p4() { return cms2.mus_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_p4() { return cms2.mus_sta_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_vertex_p4() { return cms2.mus_sta_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_trk_p4() { return cms2.mus_trk_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_vertex_p4() { return cms2.mus_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_p4() { return cms2.pfjets_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_p4() { return cms2.photons_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksecalp4() { return cms2.ran_trksecalp4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ran_trksp4() { return cms2.ran_trksp4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_p4() { return cms2.scs_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_pos_p4() { return cms2.scs_pos_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scs_vtx_p4() { return cms2.scs_vtx_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_p4() { return cms2.scjets_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &scjets_vertex_p4() { return cms2.scjets_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_inner_position() { return cms2.trks_inner_position(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_p4() { return cms2.trks_outer_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_outer_position() { return cms2.trks_outer_position(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_trk_p4() { return cms2.trks_trk_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trks_vertex_p4() { return cms2.trks_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trkjets_p4() { return cms2.trkjets_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vtxs_position() { return cms2.vtxs_position(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4() { return cms2.hlt_trigObjs_p4(); }
	vector<float> &evt_covMatrix() { return cms2.evt_covMatrix(); }
	vector<float> &twrs_ecalTime() { return cms2.twrs_ecalTime(); }
	vector<float> &twrs_emEnergy() { return cms2.twrs_emEnergy(); }
	vector<float> &twrs_emEt() { return cms2.twrs_emEt(); }
	vector<float> &twrs_emEtcorr() { return cms2.twrs_emEtcorr(); }
	vector<float> &twrs_eta() { return cms2.twrs_eta(); }
	vector<float> &twrs_etcorr() { return cms2.twrs_etcorr(); }
	vector<float> &twrs_hadEnergy() { return cms2.twrs_hadEnergy(); }
	vector<float> &twrs_hadEt() { return cms2.twrs_hadEt(); }
	vector<float> &twrs_hadEtcorr() { return cms2.twrs_hadEtcorr(); }
	vector<float> &twrs_hcalTime() { return cms2.twrs_hcalTime(); }
	vector<float> &twrs_outerEnergy() { return cms2.twrs_outerEnergy(); }
	vector<float> &twrs_outerEt() { return cms2.twrs_outerEt(); }
	vector<float> &twrs_outerEtcorr() { return cms2.twrs_outerEtcorr(); }
	vector<float> &twrs_pcorr() { return cms2.twrs_pcorr(); }
	vector<float> &twrs_phi() { return cms2.twrs_phi(); }
	vector<float> &els_ecalJuraIso() { return cms2.els_ecalJuraIso(); }
	vector<float> &els_ecalJuraTowerIso() { return cms2.els_ecalJuraTowerIso(); }
	vector<float> &els_hcalConeIso() { return cms2.els_hcalConeIso(); }
	vector<float> &els_tkJuraIso() { return cms2.els_tkJuraIso(); }
	vector<float> &els_jetdr() { return cms2.els_jetdr(); }
	vector<float> &els_musdr() { return cms2.els_musdr(); }
	vector<float> &els_hcalDepth1OverEcal() { return cms2.els_hcalDepth1OverEcal(); }
	vector<float> &els_hcalDepth1TowerSumEt() { return cms2.els_hcalDepth1TowerSumEt(); }
	vector<float> &els_hcalDepth1TowerSumEt04() { return cms2.els_hcalDepth1TowerSumEt04(); }
	vector<float> &els_hcalDepth2OverEcal() { return cms2.els_hcalDepth2OverEcal(); }
	vector<float> &els_hcalDepth2TowerSumEt() { return cms2.els_hcalDepth2TowerSumEt(); }
	vector<float> &els_hcalDepth2TowerSumEt04() { return cms2.els_hcalDepth2TowerSumEt04(); }
	vector<float> &els_chi2() { return cms2.els_chi2(); }
	vector<float> &els_conv_dcot() { return cms2.els_conv_dcot(); }
	vector<float> &els_conv_dist() { return cms2.els_conv_dist(); }
	vector<float> &els_d0() { return cms2.els_d0(); }
	vector<float> &els_d0Err() { return cms2.els_d0Err(); }
	vector<float> &els_d0corr() { return cms2.els_d0corr(); }
	vector<float> &els_dEtaIn() { return cms2.els_dEtaIn(); }
	vector<float> &els_dEtaOut() { return cms2.els_dEtaOut(); }
	vector<float> &els_dPhiIn() { return cms2.els_dPhiIn(); }
	vector<float> &els_dPhiInPhiOut() { return cms2.els_dPhiInPhiOut(); }
	vector<float> &els_dPhiOut() { return cms2.els_dPhiOut(); }
	vector<float> &els_deltaEtaEleClusterTrackAtCalo() { return cms2.els_deltaEtaEleClusterTrackAtCalo(); }
	vector<float> &els_deltaPhiEleClusterTrackAtCalo() { return cms2.els_deltaPhiEleClusterTrackAtCalo(); }
	vector<float> &els_e1x5() { return cms2.els_e1x5(); }
	vector<float> &els_e2x5Max() { return cms2.els_e2x5Max(); }
	vector<float> &els_e3x3() { return cms2.els_e3x3(); }
	vector<float> &els_e5x5() { return cms2.els_e5x5(); }
	vector<float> &els_eMax() { return cms2.els_eMax(); }
	vector<float> &els_eOverPIn() { return cms2.els_eOverPIn(); }
	vector<float> &els_eOverPOut() { return cms2.els_eOverPOut(); }
	vector<float> &els_eSC() { return cms2.els_eSC(); }
	vector<float> &els_eSCPresh() { return cms2.els_eSCPresh(); }
	vector<float> &els_eSCRaw() { return cms2.els_eSCRaw(); }
	vector<float> &els_eSeed() { return cms2.els_eSeed(); }
	vector<float> &els_eSeedOverPIn() { return cms2.els_eSeedOverPIn(); }
	vector<float> &els_eSeedOverPOut() { return cms2.els_eSeedOverPOut(); }
	vector<float> &els_ecalEnergy() { return cms2.els_ecalEnergy(); }
	vector<float> &els_ecalEnergyError() { return cms2.els_ecalEnergyError(); }
	vector<float> &els_ecalIso() { return cms2.els_ecalIso(); }
	vector<float> &els_ecalIso04() { return cms2.els_ecalIso04(); }
	vector<float> &els_egamma_looseId() { return cms2.els_egamma_looseId(); }
	vector<float> &els_egamma_robustHighEnergy() { return cms2.els_egamma_robustHighEnergy(); }
	vector<float> &els_egamma_robustLooseId() { return cms2.els_egamma_robustLooseId(); }
	vector<float> &els_egamma_robustTightId() { return cms2.els_egamma_robustTightId(); }
	vector<float> &els_egamma_tightId() { return cms2.els_egamma_tightId(); }
	vector<float> &els_electronMomentumError() { return cms2.els_electronMomentumError(); }
	vector<float> &els_etaErr() { return cms2.els_etaErr(); }
	vector<float> &els_etaSC() { return cms2.els_etaSC(); }
	vector<float> &els_fbrem() { return cms2.els_fbrem(); }
	vector<float> &els_hOverE() { return cms2.els_hOverE(); }
	vector<float> &els_hcalIso() { return cms2.els_hcalIso(); }
	vector<float> &els_hcalIso04() { return cms2.els_hcalIso04(); }
	vector<float> &els_layer1_charge() { return cms2.els_layer1_charge(); }
	vector<float> &els_ndof() { return cms2.els_ndof(); }
	vector<float> &els_phiErr() { return cms2.els_phiErr(); }
	vector<float> &els_phiSC() { return cms2.els_phiSC(); }
	vector<float> &els_ptErr() { return cms2.els_ptErr(); }
	vector<float> &els_sigmaEtaEta() { return cms2.els_sigmaEtaEta(); }
	vector<float> &els_sigmaIEtaIEta() { return cms2.els_sigmaIEtaIEta(); }
	vector<float> &els_sigmaIPhiIPhi() { return cms2.els_sigmaIPhiIPhi(); }
	vector<float> &els_sigmaPhiPhi() { return cms2.els_sigmaPhiPhi(); }
	vector<float> &els_tkIso() { return cms2.els_tkIso(); }
	vector<float> &els_tkIso04() { return cms2.els_tkIso04(); }
	vector<float> &els_trackMomentumError() { return cms2.els_trackMomentumError(); }
	vector<float> &els_trkdr() { return cms2.els_trkdr(); }
	vector<float> &els_trkshFrac() { return cms2.els_trkshFrac(); }
	vector<float> &els_z0() { return cms2.els_z0(); }
	vector<float> &els_z0Err() { return cms2.els_z0Err(); }
	vector<float> &els_z0corr() { return cms2.els_z0corr(); }
	vector<float> &jets_cor() { return cms2.jets_cor(); }
	vector<float> &jets_emFrac() { return cms2.jets_emFrac(); }
	vector<float> &jets_fHPD() { return cms2.jets_fHPD(); }
	vector<float> &jets_fRBX() { return cms2.jets_fRBX(); }
	vector<float> &jets_fSubDetector1() { return cms2.jets_fSubDetector1(); }
	vector<float> &jets_fSubDetector2() { return cms2.jets_fSubDetector2(); }
	vector<float> &jets_fSubDetector3() { return cms2.jets_fSubDetector3(); }
	vector<float> &jets_fSubDetector4() { return cms2.jets_fSubDetector4(); }
	vector<float> &jets_n90Hits() { return cms2.jets_n90Hits(); }
	vector<float> &jets_nECALTowers() { return cms2.jets_nECALTowers(); }
	vector<float> &jets_nHCALTowers() { return cms2.jets_nHCALTowers(); }
	vector<float> &jets_restrictedEMF() { return cms2.jets_restrictedEMF(); }
	vector<float> &jpts_emFrac() { return cms2.jpts_emFrac(); }
	vector<float> &evt_ecalmet_etaslice() { return cms2.evt_ecalmet_etaslice(); }
	vector<float> &evt_ecalmet_etaslicePhi() { return cms2.evt_ecalmet_etaslicePhi(); }
	vector<float> &evt_hcalmet_etaslice() { return cms2.evt_hcalmet_etaslice(); }
	vector<float> &evt_hcalmet_etaslicePhi() { return cms2.evt_hcalmet_etaslicePhi(); }
	vector<float> &evt_towermet_etaslice() { return cms2.evt_towermet_etaslice(); }
	vector<float> &evt_towermet_etaslicePhi() { return cms2.evt_towermet_etaslicePhi(); }
	vector<float> &mus_met_deltax() { return cms2.mus_met_deltax(); }
	vector<float> &mus_met_deltay() { return cms2.mus_met_deltay(); }
	vector<float> &mus_eledr() { return cms2.mus_eledr(); }
	vector<float> &mus_jetdr() { return cms2.mus_jetdr(); }
	vector<float> &mus_caloCompatibility() { return cms2.mus_caloCompatibility(); }
	vector<float> &mus_chi2() { return cms2.mus_chi2(); }
	vector<float> &mus_d0() { return cms2.mus_d0(); }
	vector<float> &mus_d0Err() { return cms2.mus_d0Err(); }
	vector<float> &mus_d0corr() { return cms2.mus_d0corr(); }
	vector<float> &mus_e_em() { return cms2.mus_e_em(); }
	vector<float> &mus_e_emS9() { return cms2.mus_e_emS9(); }
	vector<float> &mus_e_had() { return cms2.mus_e_had(); }
	vector<float> &mus_e_hadS9() { return cms2.mus_e_hadS9(); }
	vector<float> &mus_e_ho() { return cms2.mus_e_ho(); }
	vector<float> &mus_e_hoS9() { return cms2.mus_e_hoS9(); }
	vector<float> &mus_etaErr() { return cms2.mus_etaErr(); }
	vector<float> &mus_gfit_chi2() { return cms2.mus_gfit_chi2(); }
	vector<float> &mus_gfit_d0() { return cms2.mus_gfit_d0(); }
	vector<float> &mus_gfit_d0Err() { return cms2.mus_gfit_d0Err(); }
	vector<float> &mus_gfit_d0corr() { return cms2.mus_gfit_d0corr(); }
	vector<float> &mus_gfit_ndof() { return cms2.mus_gfit_ndof(); }
	vector<float> &mus_gfit_qoverp() { return cms2.mus_gfit_qoverp(); }
	vector<float> &mus_gfit_qoverpError() { return cms2.mus_gfit_qoverpError(); }
	vector<float> &mus_gfit_z0() { return cms2.mus_gfit_z0(); }
	vector<float> &mus_gfit_z0Err() { return cms2.mus_gfit_z0Err(); }
	vector<float> &mus_gfit_z0corr() { return cms2.mus_gfit_z0corr(); }
	vector<float> &mus_iso03_emEt() { return cms2.mus_iso03_emEt(); }
	vector<float> &mus_iso03_hadEt() { return cms2.mus_iso03_hadEt(); }
	vector<float> &mus_iso03_hoEt() { return cms2.mus_iso03_hoEt(); }
	vector<float> &mus_iso03_sumPt() { return cms2.mus_iso03_sumPt(); }
	vector<float> &mus_iso05_emEt() { return cms2.mus_iso05_emEt(); }
	vector<float> &mus_iso05_hadEt() { return cms2.mus_iso05_hadEt(); }
	vector<float> &mus_iso05_hoEt() { return cms2.mus_iso05_hoEt(); }
	vector<float> &mus_iso05_sumPt() { return cms2.mus_iso05_sumPt(); }
	vector<float> &mus_iso_ecalvetoDep() { return cms2.mus_iso_ecalvetoDep(); }
	vector<float> &mus_iso_hcalvetoDep() { return cms2.mus_iso_hcalvetoDep(); }
	vector<float> &mus_iso_hovetoDep() { return cms2.mus_iso_hovetoDep(); }
	vector<float> &mus_iso_trckvetoDep() { return cms2.mus_iso_trckvetoDep(); }
	vector<float> &mus_ndof() { return cms2.mus_ndof(); }
	vector<float> &mus_phiErr() { return cms2.mus_phiErr(); }
	vector<float> &mus_ptErr() { return cms2.mus_ptErr(); }
	vector<float> &mus_qoverp() { return cms2.mus_qoverp(); }
	vector<float> &mus_qoverpError() { return cms2.mus_qoverpError(); }
	vector<float> &mus_sta_chi2() { return cms2.mus_sta_chi2(); }
	vector<float> &mus_sta_d0() { return cms2.mus_sta_d0(); }
	vector<float> &mus_sta_d0Err() { return cms2.mus_sta_d0Err(); }
	vector<float> &mus_sta_d0corr() { return cms2.mus_sta_d0corr(); }
	vector<float> &mus_sta_ndof() { return cms2.mus_sta_ndof(); }
	vector<float> &mus_sta_qoverp() { return cms2.mus_sta_qoverp(); }
	vector<float> &mus_sta_qoverpError() { return cms2.mus_sta_qoverpError(); }
	vector<float> &mus_sta_z0() { return cms2.mus_sta_z0(); }
	vector<float> &mus_sta_z0Err() { return cms2.mus_sta_z0Err(); }
	vector<float> &mus_sta_z0corr() { return cms2.mus_sta_z0corr(); }
	vector<float> &mus_timeAtIpInOut() { return cms2.mus_timeAtIpInOut(); }
	vector<float> &mus_timeAtIpInOutErr() { return cms2.mus_timeAtIpInOutErr(); }
	vector<float> &mus_timeAtIpOutIn() { return cms2.mus_timeAtIpOutIn(); }
	vector<float> &mus_timeAtIpOutInErr() { return cms2.mus_timeAtIpOutInErr(); }
	vector<float> &mus_vertexphi() { return cms2.mus_vertexphi(); }
	vector<float> &mus_z0() { return cms2.mus_z0(); }
	vector<float> &mus_z0Err() { return cms2.mus_z0Err(); }
	vector<float> &mus_z0corr() { return cms2.mus_z0corr(); }
	vector<float> &pfjets_chargedEmE() { return cms2.pfjets_chargedEmE(); }
	vector<float> &pfjets_chargedHadronE() { return cms2.pfjets_chargedHadronE(); }
	vector<float> &pfjets_cor() { return cms2.pfjets_cor(); }
	vector<float> &pfjets_neutralEmE() { return cms2.pfjets_neutralEmE(); }
	vector<float> &pfjets_neutralHadronE() { return cms2.pfjets_neutralHadronE(); }
	vector<float> &photons_e1x5() { return cms2.photons_e1x5(); }
	vector<float> &photons_e2x5Max() { return cms2.photons_e2x5Max(); }
	vector<float> &photons_e3x3() { return cms2.photons_e3x3(); }
	vector<float> &photons_e5x5() { return cms2.photons_e5x5(); }
	vector<float> &photons_eMax() { return cms2.photons_eMax(); }
	vector<float> &photons_eSC() { return cms2.photons_eSC(); }
	vector<float> &photons_eSCPresh() { return cms2.photons_eSCPresh(); }
	vector<float> &photons_eSCRaw() { return cms2.photons_eSCRaw(); }
	vector<float> &photons_eSeed() { return cms2.photons_eSeed(); }
	vector<float> &photons_ecalIso() { return cms2.photons_ecalIso(); }
	vector<float> &photons_hOverE() { return cms2.photons_hOverE(); }
	vector<float> &photons_hcalIso() { return cms2.photons_hcalIso(); }
	vector<float> &photons_sigmaEtaEta() { return cms2.photons_sigmaEtaEta(); }
	vector<float> &photons_sigmaIEtaIEta() { return cms2.photons_sigmaIEtaIEta(); }
	vector<float> &photons_sigmaIPhiIPhi() { return cms2.photons_sigmaIPhiIPhi(); }
	vector<float> &photons_sigmaPhiPhi() { return cms2.photons_sigmaPhiPhi(); }
	vector<float> &photons_tkIsoHollow() { return cms2.photons_tkIsoHollow(); }
	vector<float> &photons_tkIsoSolid() { return cms2.photons_tkIsoSolid(); }
	vector<float> &ran_dRClosestTower() { return cms2.ran_dRClosestTower(); }
	vector<float> &ran_dRClosestTowerEmEt() { return cms2.ran_dRClosestTowerEmEt(); }
	vector<float> &ran_ecalIso03_egamma() { return cms2.ran_ecalIso03_egamma(); }
	vector<float> &ran_ecalIso03_mu() { return cms2.ran_ecalIso03_mu(); }
	vector<float> &ran_hcalD1Iso03_egamma() { return cms2.ran_hcalD1Iso03_egamma(); }
	vector<float> &ran_hcalD2Iso03_egamma() { return cms2.ran_hcalD2Iso03_egamma(); }
	vector<float> &ran_hcalIso03_egamma() { return cms2.ran_hcalIso03_egamma(); }
	vector<float> &ran_hcalIso03_mu() { return cms2.ran_hcalIso03_mu(); }
	vector<float> &ran_hoIso03_mu() { return cms2.ran_hoIso03_mu(); }
	vector<float> &ran_towerEmEt() { return cms2.ran_towerEmEt(); }
	vector<float> &ran_towerHadEt() { return cms2.ran_towerHadEt(); }
	vector<float> &ran_trkIso03_egamma() { return cms2.ran_trkIso03_egamma(); }
	vector<float> &ran_trkIso03_mu() { return cms2.ran_trkIso03_mu(); }
	vector<float> &scs_clustersSize() { return cms2.scs_clustersSize(); }
	vector<float> &scs_crystalsSize() { return cms2.scs_crystalsSize(); }
	vector<float> &scs_e1x3() { return cms2.scs_e1x3(); }
	vector<float> &scs_e1x5() { return cms2.scs_e1x5(); }
	vector<float> &scs_e2nd() { return cms2.scs_e2nd(); }
	vector<float> &scs_e2x2() { return cms2.scs_e2x2(); }
	vector<float> &scs_e2x5Max() { return cms2.scs_e2x5Max(); }
	vector<float> &scs_e3x1() { return cms2.scs_e3x1(); }
	vector<float> &scs_e3x2() { return cms2.scs_e3x2(); }
	vector<float> &scs_e3x3() { return cms2.scs_e3x3(); }
	vector<float> &scs_e4x4() { return cms2.scs_e4x4(); }
	vector<float> &scs_e5x5() { return cms2.scs_e5x5(); }
	vector<float> &scs_eMax() { return cms2.scs_eMax(); }
	vector<float> &scs_eSeed() { return cms2.scs_eSeed(); }
	vector<float> &scs_energy() { return cms2.scs_energy(); }
	vector<float> &scs_eta() { return cms2.scs_eta(); }
	vector<float> &scs_hoe() { return cms2.scs_hoe(); }
	vector<float> &scs_phi() { return cms2.scs_phi(); }
	vector<float> &scs_preshowerEnergy() { return cms2.scs_preshowerEnergy(); }
	vector<float> &scs_rawEnergy() { return cms2.scs_rawEnergy(); }
	vector<float> &scs_sigmaEtaEta() { return cms2.scs_sigmaEtaEta(); }
	vector<float> &scs_sigmaEtaPhi() { return cms2.scs_sigmaEtaPhi(); }
	vector<float> &scs_sigmaIEtaIEta() { return cms2.scs_sigmaIEtaIEta(); }
	vector<float> &scs_sigmaIEtaIPhi() { return cms2.scs_sigmaIEtaIPhi(); }
	vector<float> &scs_sigmaIPhiIPhi() { return cms2.scs_sigmaIPhiIPhi(); }
	vector<float> &scs_sigmaPhiPhi() { return cms2.scs_sigmaPhiPhi(); }
	vector<float> &scjets_cor() { return cms2.scjets_cor(); }
	vector<float> &scjets_emFrac() { return cms2.scjets_emFrac(); }
	vector<float> &scjets_fHPD() { return cms2.scjets_fHPD(); }
	vector<float> &scjets_fRBX() { return cms2.scjets_fRBX(); }
	vector<float> &scjets_fSubDetector1() { return cms2.scjets_fSubDetector1(); }
	vector<float> &scjets_fSubDetector2() { return cms2.scjets_fSubDetector2(); }
	vector<float> &scjets_fSubDetector3() { return cms2.scjets_fSubDetector3(); }
	vector<float> &scjets_fSubDetector4() { return cms2.scjets_fSubDetector4(); }
	vector<float> &scjets_n90Hits() { return cms2.scjets_n90Hits(); }
	vector<float> &scjets_nECALTowers() { return cms2.scjets_nECALTowers(); }
	vector<float> &scjets_nHCALTowers() { return cms2.scjets_nHCALTowers(); }
	vector<float> &scjets_restrictedEMF() { return cms2.scjets_restrictedEMF(); }
	vector<float> &mus_tcmet_deltax() { return cms2.mus_tcmet_deltax(); }
	vector<float> &mus_tcmet_deltay() { return cms2.mus_tcmet_deltay(); }
	vector<float> &trks_chi2() { return cms2.trks_chi2(); }
	vector<float> &trks_d0() { return cms2.trks_d0(); }
	vector<float> &trks_d0Err() { return cms2.trks_d0Err(); }
	vector<float> &trks_d0corr() { return cms2.trks_d0corr(); }
	vector<float> &trks_d0corrPhi() { return cms2.trks_d0corrPhi(); }
	vector<float> &trks_etaErr() { return cms2.trks_etaErr(); }
	vector<float> &trks_layer1_charge() { return cms2.trks_layer1_charge(); }
	vector<float> &trks_ndof() { return cms2.trks_ndof(); }
	vector<float> &trks_phiErr() { return cms2.trks_phiErr(); }
	vector<float> &trks_ptErr() { return cms2.trks_ptErr(); }
	vector<float> &trks_z0() { return cms2.trks_z0(); }
	vector<float> &trks_z0Err() { return cms2.trks_z0Err(); }
	vector<float> &trks_z0corr() { return cms2.trks_z0corr(); }
	vector<float> &vtxs_chi2() { return cms2.vtxs_chi2(); }
	vector<float> &vtxs_ndof() { return cms2.vtxs_ndof(); }
	vector<float> &vtxs_xError() { return cms2.vtxs_xError(); }
	vector<float> &vtxs_yError() { return cms2.vtxs_yError(); }
	vector<float> &vtxs_zError() { return cms2.vtxs_zError(); }
	vector<vector<float> > &vtxs_covMatrix() { return cms2.vtxs_covMatrix(); }
	int &evt_cscLooseHaloId() { return cms2.evt_cscLooseHaloId(); }
	int &evt_cscTightHaloId() { return cms2.evt_cscTightHaloId(); }
	int &evt_ecalLooseHaloId() { return cms2.evt_ecalLooseHaloId(); }
	int &evt_ecalTightHaloId() { return cms2.evt_ecalTightHaloId(); }
	int &evt_extremeTightHaloId() { return cms2.evt_extremeTightHaloId(); }
	int &evt_globalLooseHaloId() { return cms2.evt_globalLooseHaloId(); }
	int &evt_globalTightHaloId() { return cms2.evt_globalTightHaloId(); }
	int &evt_hcalLooseHaloId() { return cms2.evt_hcalLooseHaloId(); }
	int &evt_hcalTightHaloId() { return cms2.evt_hcalTightHaloId(); }
	int &evt_looseHaloId() { return cms2.evt_looseHaloId(); }
	int &evt_tightHaloId() { return cms2.evt_tightHaloId(); }
	int &evt_bsType() { return cms2.evt_bsType(); }
	int &evt_bunchCrossing() { return cms2.evt_bunchCrossing(); }
	int &evt_experimentType() { return cms2.evt_experimentType(); }
	int &evt_orbitNumber() { return cms2.evt_orbitNumber(); }
	int &evt_storeNumber() { return cms2.evt_storeNumber(); }
	int &hcalnoise_maxHPDHits() { return cms2.hcalnoise_maxHPDHits(); }
	int &hcalnoise_maxRBXHits() { return cms2.hcalnoise_maxRBXHits(); }
	int &hcalnoise_maxZeros() { return cms2.hcalnoise_maxZeros(); }
	int &hcalnoise_noiseFilterStatus() { return cms2.hcalnoise_noiseFilterStatus(); }
	int &hcalnoise_noiseType() { return cms2.hcalnoise_noiseType(); }
	int &hcalnoise_num10GeVHits() { return cms2.hcalnoise_num10GeVHits(); }
	int &hcalnoise_num25GeVHits() { return cms2.hcalnoise_num25GeVHits(); }
	int &hcalnoise_numProblematicRBXs() { return cms2.hcalnoise_numProblematicRBXs(); }
	int &hcalnoise_passHighLevelNoiseFilter() { return cms2.hcalnoise_passHighLevelNoiseFilter(); }
	int &hcalnoise_passLooseNoiseFilter() { return cms2.hcalnoise_passLooseNoiseFilter(); }
	int &hcalnoise_passTightNoiseFilter() { return cms2.hcalnoise_passTightNoiseFilter(); }
	int &l1_nemiso() { return cms2.l1_nemiso(); }
	int &l1_nemnoiso() { return cms2.l1_nemnoiso(); }
	int &l1_njetsc() { return cms2.l1_njetsc(); }
	int &l1_njetsf() { return cms2.l1_njetsf(); }
	int &l1_njetst() { return cms2.l1_njetst(); }
	int &l1_nmus() { return cms2.l1_nmus(); }
	vector<int> &evt_ecaliPhiSuspects() { return cms2.evt_ecaliPhiSuspects(); }
	vector<int> &evt_globaliPhiSuspects() { return cms2.evt_globaliPhiSuspects(); }
	vector<int> &evt_hcaliPhiSuspects() { return cms2.evt_hcaliPhiSuspects(); }
	vector<int> &els_closestJet() { return cms2.els_closestJet(); }
	vector<int> &els_closestMuon() { return cms2.els_closestMuon(); }
	vector<int> &els_category() { return cms2.els_category(); }
	vector<int> &els_charge() { return cms2.els_charge(); }
	vector<int> &els_class() { return cms2.els_class(); }
	vector<int> &els_conv_tkidx() { return cms2.els_conv_tkidx(); }
	vector<int> &els_exp_innerlayers() { return cms2.els_exp_innerlayers(); }
	vector<int> &els_exp_outerlayers() { return cms2.els_exp_outerlayers(); }
	vector<int> &els_fiduciality() { return cms2.els_fiduciality(); }
	vector<int> &els_layer1_det() { return cms2.els_layer1_det(); }
	vector<int> &els_layer1_layer() { return cms2.els_layer1_layer(); }
	vector<int> &els_layer1_sizerphi() { return cms2.els_layer1_sizerphi(); }
	vector<int> &els_layer1_sizerz() { return cms2.els_layer1_sizerz(); }
	vector<int> &els_lostHits() { return cms2.els_lostHits(); }
	vector<int> &els_lost_pixelhits() { return cms2.els_lost_pixelhits(); }
	vector<int> &els_nSeed() { return cms2.els_nSeed(); }
	vector<int> &els_sccharge() { return cms2.els_sccharge(); }
	vector<int> &els_trk_charge() { return cms2.els_trk_charge(); }
	vector<int> &els_trkidx() { return cms2.els_trkidx(); }
	vector<int> &els_type() { return cms2.els_type(); }
	vector<int> &els_validHits() { return cms2.els_validHits(); }
	vector<int> &els_valid_pixelhits() { return cms2.els_valid_pixelhits(); }
	vector<int> &jets_closestElectron() { return cms2.jets_closestElectron(); }
	vector<int> &jets_closestMuon() { return cms2.jets_closestMuon(); }
	vector<int> &l1_emiso_ieta() { return cms2.l1_emiso_ieta(); }
	vector<int> &l1_emiso_iphi() { return cms2.l1_emiso_iphi(); }
	vector<int> &l1_emiso_rawId() { return cms2.l1_emiso_rawId(); }
	vector<int> &l1_emiso_type() { return cms2.l1_emiso_type(); }
	vector<int> &l1_emnoiso_ieta() { return cms2.l1_emnoiso_ieta(); }
	vector<int> &l1_emnoiso_iphi() { return cms2.l1_emnoiso_iphi(); }
	vector<int> &l1_emnoiso_rawId() { return cms2.l1_emnoiso_rawId(); }
	vector<int> &l1_emnoiso_type() { return cms2.l1_emnoiso_type(); }
	vector<int> &l1_jetsc_ieta() { return cms2.l1_jetsc_ieta(); }
	vector<int> &l1_jetsc_iphi() { return cms2.l1_jetsc_iphi(); }
	vector<int> &l1_jetsc_rawId() { return cms2.l1_jetsc_rawId(); }
	vector<int> &l1_jetsc_type() { return cms2.l1_jetsc_type(); }
	vector<int> &l1_jetsf_ieta() { return cms2.l1_jetsf_ieta(); }
	vector<int> &l1_jetsf_iphi() { return cms2.l1_jetsf_iphi(); }
	vector<int> &l1_jetsf_rawId() { return cms2.l1_jetsf_rawId(); }
	vector<int> &l1_jetsf_type() { return cms2.l1_jetsf_type(); }
	vector<int> &l1_jetst_ieta() { return cms2.l1_jetst_ieta(); }
	vector<int> &l1_jetst_iphi() { return cms2.l1_jetst_iphi(); }
	vector<int> &l1_jetst_rawId() { return cms2.l1_jetst_rawId(); }
	vector<int> &l1_jetst_type() { return cms2.l1_jetst_type(); }
	vector<int> &l1_mus_flags() { return cms2.l1_mus_flags(); }
	vector<int> &l1_mus_q() { return cms2.l1_mus_q(); }
	vector<int> &l1_mus_qual() { return cms2.l1_mus_qual(); }
	vector<int> &l1_mus_qualFlags() { return cms2.l1_mus_qualFlags(); }
	vector<int> &mus_met_flag() { return cms2.mus_met_flag(); }
	vector<int> &mus_closestEle() { return cms2.mus_closestEle(); }
	vector<int> &mus_closestJet() { return cms2.mus_closestJet(); }
	vector<int> &mus_charge() { return cms2.mus_charge(); }
	vector<int> &mus_gfit_validHits() { return cms2.mus_gfit_validHits(); }
	vector<int> &mus_gfit_validSTAHits() { return cms2.mus_gfit_validSTAHits(); }
	vector<int> &mus_gfit_validSiHits() { return cms2.mus_gfit_validSiHits(); }
	vector<int> &mus_goodmask() { return cms2.mus_goodmask(); }
	vector<int> &mus_iso03_ntrk() { return cms2.mus_iso03_ntrk(); }
	vector<int> &mus_iso05_ntrk() { return cms2.mus_iso05_ntrk(); }
	vector<int> &mus_lostHits() { return cms2.mus_lostHits(); }
	vector<int> &mus_nmatches() { return cms2.mus_nmatches(); }
	vector<int> &mus_pid_TM2DCompatibilityLoose() { return cms2.mus_pid_TM2DCompatibilityLoose(); }
	vector<int> &mus_pid_TM2DCompatibilityTight() { return cms2.mus_pid_TM2DCompatibilityTight(); }
	vector<int> &mus_pid_TMLastStationLoose() { return cms2.mus_pid_TMLastStationLoose(); }
	vector<int> &mus_pid_TMLastStationTight() { return cms2.mus_pid_TMLastStationTight(); }
	vector<int> &mus_sta_validHits() { return cms2.mus_sta_validHits(); }
	vector<int> &mus_timeDirection() { return cms2.mus_timeDirection(); }
	vector<int> &mus_timeNumStationsUsed() { return cms2.mus_timeNumStationsUsed(); }
	vector<int> &mus_trk_charge() { return cms2.mus_trk_charge(); }
	vector<int> &mus_trkidx() { return cms2.mus_trkidx(); }
	vector<int> &mus_type() { return cms2.mus_type(); }
	vector<int> &mus_validHits() { return cms2.mus_validHits(); }
	vector<int> &pfjets_chargedMultiplicity() { return cms2.pfjets_chargedMultiplicity(); }
	vector<int> &pfjets_muonMultiplicity() { return cms2.pfjets_muonMultiplicity(); }
	vector<int> &pfjets_neutralMultiplicity() { return cms2.pfjets_neutralMultiplicity(); }
	vector<int> &photons_fiduciality() { return cms2.photons_fiduciality(); }
	vector<int> &pxl_ndigis_pxb() { return cms2.pxl_ndigis_pxb(); }
	vector<int> &pxl_ndigis_pxf() { return cms2.pxl_ndigis_pxf(); }
	vector<int> &ran_srFlag() { return cms2.ran_srFlag(); }
	vector<int> &scs_elsidx() { return cms2.scs_elsidx(); }
	vector<int> &scs_severitySeed() { return cms2.scs_severitySeed(); }
	vector<int> &mus_tcmet_flag() { return cms2.mus_tcmet_flag(); }
	vector<int> &trks_algo() { return cms2.trks_algo(); }
	vector<int> &trks_charge() { return cms2.trks_charge(); }
	vector<int> &trks_exp_innerlayers() { return cms2.trks_exp_innerlayers(); }
	vector<int> &trks_exp_outerlayers() { return cms2.trks_exp_outerlayers(); }
	vector<int> &trks_layer1_det() { return cms2.trks_layer1_det(); }
	vector<int> &trks_layer1_layer() { return cms2.trks_layer1_layer(); }
	vector<int> &trks_layer1_sizerphi() { return cms2.trks_layer1_sizerphi(); }
	vector<int> &trks_layer1_sizerz() { return cms2.trks_layer1_sizerz(); }
	vector<int> &trks_lostHits() { return cms2.trks_lostHits(); }
	vector<int> &trks_lost_pixelhits() { return cms2.trks_lost_pixelhits(); }
	vector<int> &trks_nlayers() { return cms2.trks_nlayers(); }
	vector<int> &trks_nlayers3D() { return cms2.trks_nlayers3D(); }
	vector<int> &trks_nlayersLost() { return cms2.trks_nlayersLost(); }
	vector<int> &trks_qualityMask() { return cms2.trks_qualityMask(); }
	vector<int> &trks_validHits() { return cms2.trks_validHits(); }
	vector<int> &trks_valid_pixelhits() { return cms2.trks_valid_pixelhits(); }
	vector<int> &trks_elsidx() { return cms2.trks_elsidx(); }
	vector<int> &trk_musidx() { return cms2.trk_musidx(); }
	vector<int> &vtxs_isFake() { return cms2.vtxs_isFake(); }
	vector<int> &vtxs_isValid() { return cms2.vtxs_isValid(); }
	vector<int> &vtxs_tracksSize() { return cms2.vtxs_tracksSize(); }
	vector<vector<int> > &hlt_trigObjs_id() { return cms2.hlt_trigObjs_id(); }
	unsigned int &evt_ntwrs() { return cms2.evt_ntwrs(); }
	unsigned int &evt_nels() { return cms2.evt_nels(); }
	unsigned int &evt_event() { return cms2.evt_event(); }
	unsigned int &evt_lumiBlock() { return cms2.evt_lumiBlock(); }
	unsigned int &evt_run() { return cms2.evt_run(); }
	unsigned int &hlt_bits1() { return cms2.hlt_bits1(); }
	unsigned int &hlt_bits2() { return cms2.hlt_bits2(); }
	unsigned int &hlt_bits3() { return cms2.hlt_bits3(); }
	unsigned int &hlt_bits4() { return cms2.hlt_bits4(); }
	unsigned int &hlt_bits5() { return cms2.hlt_bits5(); }
	unsigned int &hlt_bits6() { return cms2.hlt_bits6(); }
	unsigned int &hlt_bits7() { return cms2.hlt_bits7(); }
	unsigned int &hlt_bits8() { return cms2.hlt_bits8(); }
	unsigned int &evt_njets() { return cms2.evt_njets(); }
	unsigned int &evt_njpts() { return cms2.evt_njpts(); }
	unsigned int &l1_bits1() { return cms2.l1_bits1(); }
	unsigned int &l1_bits2() { return cms2.l1_bits2(); }
	unsigned int &l1_bits3() { return cms2.l1_bits3(); }
	unsigned int &l1_bits4() { return cms2.l1_bits4(); }
	unsigned int &l1_techbits1() { return cms2.l1_techbits1(); }
	unsigned int &l1_techbits2() { return cms2.l1_techbits2(); }
	unsigned int &evt_nphotons() { return cms2.evt_nphotons(); }
	unsigned int &evt_nscs() { return cms2.evt_nscs(); }
	unsigned int &evt_nscjets() { return cms2.evt_nscjets(); }
	unsigned int &evt_ntrkjets() { return cms2.evt_ntrkjets(); }
	unsigned int &evt_nvtxs() { return cms2.evt_nvtxs(); }
	vector<unsigned int> &twrs_numBadEcalCells() { return cms2.twrs_numBadEcalCells(); }
	vector<unsigned int> &twrs_numBadHcalCells() { return cms2.twrs_numBadHcalCells(); }
	vector<unsigned int> &twrs_numProblematicEcalCells() { return cms2.twrs_numProblematicEcalCells(); }
	vector<unsigned int> &twrs_numProblematicHcalCells() { return cms2.twrs_numProblematicHcalCells(); }
	vector<unsigned int> &twrs_numRecoveredEcalCells() { return cms2.twrs_numRecoveredEcalCells(); }
	vector<unsigned int> &twrs_numRecoveredHcalCells() { return cms2.twrs_numRecoveredHcalCells(); }
	float &evt_scale1fb() { return cms2.evt_scale1fb(); }
	float &evt_xsec_excl() { return cms2.evt_xsec_excl(); }
	float &evt_xsec_incl() { return cms2.evt_xsec_incl(); }
	float &evt_kfactor() { return cms2.evt_kfactor(); }
	int &evt_nEvts() { return cms2.evt_nEvts(); }
	float &evt_filt_eff() { return cms2.evt_filt_eff(); }
	static bool passHLTTrigger(TString trigName) { return cms2.passHLTTrigger(trigName); }
	static bool passL1Trigger(TString trigName) { return cms2.passL1Trigger(trigName); }
}
#endif
