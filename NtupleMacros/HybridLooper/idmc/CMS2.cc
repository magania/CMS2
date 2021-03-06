#include "CMS2.h"
CMS2 cms2;
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
	float &evt_kfactor() { return cms2.evt_kfactor(); }
	float &evt_scale1fb() { return cms2.evt_scale1fb(); }
	float &evt_xsec_excl() { return cms2.evt_xsec_excl(); }
	float &evt_xsec_incl() { return cms2.evt_xsec_incl(); }
	float &gen_met() { return cms2.gen_met(); }
	float &gen_metPhi() { return cms2.gen_metPhi(); }
	float &genps_alphaQCD() { return cms2.genps_alphaQCD(); }
	float &genps_pthat() { return cms2.genps_pthat(); }
	float &genps_qScale() { return cms2.genps_qScale(); }
	float &genps_weight() { return cms2.genps_weight(); }
	float &gen_sumEt() { return cms2.gen_sumEt(); }
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
	float &pdfinfo_scale() { return cms2.pdfinfo_scale(); }
	float &pdfinfo_x1() { return cms2.pdfinfo_x1(); }
	float &pdfinfo_x2() { return cms2.pdfinfo_x2(); }
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
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_calo_p4() { return cms2.taus_calo_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_motherp4() { return cms2.els_mc_motherp4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_p4() { return cms2.els_mc_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_mc_gp_p4() { return cms2.jets_mc_gp_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &jets_mc_p4() { return cms2.jets_mc_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_motherp4() { return cms2.mus_mc_motherp4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_p4() { return cms2.mus_mc_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &trk_mcp4() { return cms2.trk_mcp4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_conv_pos_p4() { return cms2.els_conv_pos_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_inner_position() { return cms2.els_inner_position(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_outer_position() { return cms2.els_outer_position(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4() { return cms2.els_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In() { return cms2.els_p4In(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out() { return cms2.els_p4Out(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4() { return cms2.els_trk_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4() { return cms2.els_vertex_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4() { return cms2.genjets_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4() { return cms2.genps_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_prod_vtx() { return cms2.genps_prod_vtx(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_p4() { return cms2.hyp_ll_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_trk_p4() { return cms2.hyp_ll_trk_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_p4() { return cms2.hyp_lt_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_trk_p4() { return cms2.hyp_lt_trk_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_p4() { return cms2.hyp_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_FVFit_p4() { return cms2.hyp_FVFit_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_FVFit_v4() { return cms2.hyp_FVFit_v4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_mc_p4() { return cms2.hyp_ll_mc_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_mc_p4() { return cms2.hyp_lt_mc_p4(); }
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
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_chargecand_p4() { return cms2.taus_pf_lead_chargecand_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_neutrcand_p4() { return cms2.taus_pf_lead_neutrcand_p4(); }
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_p4() { return cms2.taus_pf_p4(); }
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
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &genps_lepdaughter_p4() { return cms2.genps_lepdaughter_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4() { return cms2.hlt_trigObjs_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hyp_jets_p4() { return cms2.hyp_jets_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hyp_other_jets_p4() { return cms2.hyp_other_jets_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isochargecand_p4() { return cms2.taus_pf_isochargecand_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isogammacand_p4() { return cms2.taus_pf_isogammacand_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isoneutrcand_p4() { return cms2.taus_pf_isoneutrcand_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_sigchargecand_p4() { return cms2.taus_pf_sigchargecand_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_siggammacand_p4() { return cms2.taus_pf_siggammacand_p4(); }
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_signeutrcand_p4() { return cms2.taus_pf_signeutrcand_p4(); }
	vector<float> &jets_combinedSecondaryVertexBJetTag() { return cms2.jets_combinedSecondaryVertexBJetTag(); }
	vector<float> &jets_combinedSecondaryVertexMVABJetTag() { return cms2.jets_combinedSecondaryVertexMVABJetTag(); }
	vector<float> &jets_jetBProbabilityBJetTag() { return cms2.jets_jetBProbabilityBJetTag(); }
	vector<float> &jets_jetProbabilityBJetTag() { return cms2.jets_jetProbabilityBJetTag(); }
	vector<float> &jets_simpleSecondaryVertexBJetTag() { return cms2.jets_simpleSecondaryVertexBJetTag(); }
	vector<float> &jets_softElectronByIP3dBJetTag() { return cms2.jets_softElectronByIP3dBJetTag(); }
	vector<float> &jets_softElectronByPtBJetTag() { return cms2.jets_softElectronByPtBJetTag(); }
	vector<float> &jets_softMuonBJetTag() { return cms2.jets_softMuonBJetTag(); }
	vector<float> &jets_softMuonByIP3dBJetTag() { return cms2.jets_softMuonByIP3dBJetTag(); }
	vector<float> &jets_softMuonByPtBJetTag() { return cms2.jets_softMuonByPtBJetTag(); }
	vector<float> &jets_softMuonNoIPBJetTag() { return cms2.jets_softMuonNoIPBJetTag(); }
	vector<float> &jets_trackCountingHighEffBJetTag() { return cms2.jets_trackCountingHighEffBJetTag(); }
	vector<float> &jets_trackCountingHighPurBJetTag() { return cms2.jets_trackCountingHighPurBJetTag(); }
	vector<float> &trkjets_combinedSecondaryVertexBJetTag() { return cms2.trkjets_combinedSecondaryVertexBJetTag(); }
	vector<float> &trkjets_combinedSecondaryVertexMVABJetTag() { return cms2.trkjets_combinedSecondaryVertexMVABJetTag(); }
	vector<float> &trkjets_jetBProbabilityBJetTag() { return cms2.trkjets_jetBProbabilityBJetTag(); }
	vector<float> &trkjets_jetProbabilityBJetTag() { return cms2.trkjets_jetProbabilityBJetTag(); }
	vector<float> &trkjets_simpleSecondaryVertexBJetTag() { return cms2.trkjets_simpleSecondaryVertexBJetTag(); }
	vector<float> &trkjets_softElectronByIP3dBJetTag() { return cms2.trkjets_softElectronByIP3dBJetTag(); }
	vector<float> &trkjets_softElectronByPtBJetTag() { return cms2.trkjets_softElectronByPtBJetTag(); }
	vector<float> &trkjets_softMuonBJetTag() { return cms2.trkjets_softMuonBJetTag(); }
	vector<float> &trkjets_softMuonByIP3dBJetTag() { return cms2.trkjets_softMuonByIP3dBJetTag(); }
	vector<float> &trkjets_softMuonByPtBJetTag() { return cms2.trkjets_softMuonByPtBJetTag(); }
	vector<float> &trkjets_softMuonNoIPBJetTag() { return cms2.trkjets_softMuonNoIPBJetTag(); }
	vector<float> &trkjets_trackCountingHighEffBJetTag() { return cms2.trkjets_trackCountingHighEffBJetTag(); }
	vector<float> &trkjets_trackCountingHighPurBJetTag() { return cms2.trkjets_trackCountingHighPurBJetTag(); }
	vector<float> &evt_bs_covMatrix() { return cms2.evt_bs_covMatrix(); }
	vector<float> &twrs_ecalTime() { return cms2.twrs_ecalTime(); }
	vector<float> &twrs_emEnergy() { return cms2.twrs_emEnergy(); }
	vector<float> &twrs_emEt() { return cms2.twrs_emEt(); }
	vector<float> &twrs_emEtcorr() { return cms2.twrs_emEtcorr(); }
	vector<float> &twrs_eta() { return cms2.twrs_eta(); }
	vector<float> &twrs_etacorr() { return cms2.twrs_etacorr(); }
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
	vector<float> &twrs_phicorr() { return cms2.twrs_phicorr(); }
	vector<float> &twrs_spikeEt() { return cms2.twrs_spikeEt(); }
	vector<float> &twrs_spikeR4() { return cms2.twrs_spikeR4(); }
	vector<float> &twrsUncleaned_ecalTime() { return cms2.twrsUncleaned_ecalTime(); }
	vector<float> &twrsUncleaned_emEnergy() { return cms2.twrsUncleaned_emEnergy(); }
	vector<float> &twrsUncleaned_emEt() { return cms2.twrsUncleaned_emEt(); }
	vector<float> &twrsUncleaned_emEtcorr() { return cms2.twrsUncleaned_emEtcorr(); }
	vector<float> &twrsUncleaned_eta() { return cms2.twrsUncleaned_eta(); }
	vector<float> &twrsUncleaned_etacorr() { return cms2.twrsUncleaned_etacorr(); }
	vector<float> &twrsUncleaned_etcorr() { return cms2.twrsUncleaned_etcorr(); }
	vector<float> &twrsUncleaned_hadEnergy() { return cms2.twrsUncleaned_hadEnergy(); }
	vector<float> &twrsUncleaned_hadEt() { return cms2.twrsUncleaned_hadEt(); }
	vector<float> &twrsUncleaned_hadEtcorr() { return cms2.twrsUncleaned_hadEtcorr(); }
	vector<float> &twrsUncleaned_hcalTime() { return cms2.twrsUncleaned_hcalTime(); }
	vector<float> &twrsUncleaned_outerEnergy() { return cms2.twrsUncleaned_outerEnergy(); }
	vector<float> &twrsUncleaned_outerEt() { return cms2.twrsUncleaned_outerEt(); }
	vector<float> &twrsUncleaned_outerEtcorr() { return cms2.twrsUncleaned_outerEtcorr(); }
	vector<float> &twrsUncleaned_pcorr() { return cms2.twrsUncleaned_pcorr(); }
	vector<float> &twrsUncleaned_phi() { return cms2.twrsUncleaned_phi(); }
	vector<float> &twrsUncleaned_phicorr() { return cms2.twrsUncleaned_phicorr(); }
	vector<float> &twrsUncleaned_spikeEt() { return cms2.twrsUncleaned_spikeEt(); }
	vector<float> &twrsUncleaned_spikeR4() { return cms2.twrsUncleaned_spikeR4(); }
	vector<float> &taus_calo_isolationECALhitsEtSum() { return cms2.taus_calo_isolationECALhitsEtSum(); }
	vector<float> &taus_calo_isolationtrksPtSum() { return cms2.taus_calo_isolationtrksPtSum(); }
	vector<float> &taus_calo_leadtrk_HCAL3x3hitsEtSum() { return cms2.taus_calo_leadtrk_HCAL3x3hitsEtSum(); }
	vector<float> &taus_calo_leadtrk_HCAL3x3hottesthitDEta() { return cms2.taus_calo_leadtrk_HCAL3x3hottesthitDEta(); }
	vector<float> &taus_calo_leadtrk_Signed_Sipt() { return cms2.taus_calo_leadtrk_Signed_Sipt(); }
	vector<float> &taus_calo_leadtrk_lostHits() { return cms2.taus_calo_leadtrk_lostHits(); }
	vector<float> &taus_calo_leadtrk_validHits() { return cms2.taus_calo_leadtrk_validHits(); }
	vector<float> &taus_calo_maximumHCALhitEt() { return cms2.taus_calo_maximumHCALhitEt(); }
	vector<float> &taus_calo_signaltrksInvariantMass() { return cms2.taus_calo_signaltrksInvariantMass(); }
	vector<float> &els_mc3dr() { return cms2.els_mc3dr(); }
	vector<float> &els_mcdr() { return cms2.els_mcdr(); }
	vector<float> &jets_mc3dr() { return cms2.jets_mc3dr(); }
	vector<float> &jets_mcdr() { return cms2.jets_mcdr(); }
	vector<float> &jets_mc_emEnergy() { return cms2.jets_mc_emEnergy(); }
	vector<float> &jets_mc_gpdr() { return cms2.jets_mc_gpdr(); }
	vector<float> &jets_mc_hadEnergy() { return cms2.jets_mc_hadEnergy(); }
	vector<float> &jets_mc_invEnergy() { return cms2.jets_mc_invEnergy(); }
	vector<float> &jets_mc_otherEnergy() { return cms2.jets_mc_otherEnergy(); }
	vector<float> &mus_mc3dr() { return cms2.mus_mc3dr(); }
	vector<float> &mus_mcdr() { return cms2.mus_mcdr(); }
	vector<float> &trk_mc3dr() { return cms2.trk_mc3dr(); }
	vector<float> &trk_mcdr() { return cms2.trk_mcdr(); }
	vector<float> &trks_conv_dcot() { return cms2.trks_conv_dcot(); }
	vector<float> &trks_conv_dist() { return cms2.trks_conv_dist(); }
	vector<float> &els_ecalJuraIso() { return cms2.els_ecalJuraIso(); }
	vector<float> &els_ecalJuraTowerIso() { return cms2.els_ecalJuraTowerIso(); }
	vector<float> &els_hcalConeIso() { return cms2.els_hcalConeIso(); }
	vector<float> &els_tkJuraIso() { return cms2.els_tkJuraIso(); }
	vector<float> &els_jetdr() { return cms2.els_jetdr(); }
	vector<float> &els_musdr() { return cms2.els_musdr(); }
	vector<float> &els_chi2() { return cms2.els_chi2(); }
	vector<float> &els_conv_dcot() { return cms2.els_conv_dcot(); }
	vector<float> &els_conv_dist() { return cms2.els_conv_dist(); }
	vector<float> &els_conv_radius() { return cms2.els_conv_radius(); }
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
	vector<float> &els_hcalDepth1OverEcal() { return cms2.els_hcalDepth1OverEcal(); }
	vector<float> &els_hcalDepth1TowerSumEt() { return cms2.els_hcalDepth1TowerSumEt(); }
	vector<float> &els_hcalDepth1TowerSumEt04() { return cms2.els_hcalDepth1TowerSumEt04(); }
	vector<float> &els_hcalDepth2OverEcal() { return cms2.els_hcalDepth2OverEcal(); }
	vector<float> &els_hcalDepth2TowerSumEt() { return cms2.els_hcalDepth2TowerSumEt(); }
	vector<float> &els_hcalDepth2TowerSumEt04() { return cms2.els_hcalDepth2TowerSumEt04(); }
	vector<float> &els_hcalIso() { return cms2.els_hcalIso(); }
	vector<float> &els_hcalIso04() { return cms2.els_hcalIso04(); }
	vector<float> &els_layer1_charge() { return cms2.els_layer1_charge(); }
	vector<float> &els_ndof() { return cms2.els_ndof(); }
	vector<float> &els_phiErr() { return cms2.els_phiErr(); }
	vector<float> &els_phiSC() { return cms2.els_phiSC(); }
	vector<float> &els_ptErr() { return cms2.els_ptErr(); }
	vector<float> &els_sigmaEtaEta() { return cms2.els_sigmaEtaEta(); }
	vector<float> &els_sigmaIEtaIEta() { return cms2.els_sigmaIEtaIEta(); }
	vector<float> &els_sigmaIEtaIEtaSC() { return cms2.els_sigmaIEtaIEtaSC(); }
	vector<float> &els_sigmaIPhiIPhi() { return cms2.els_sigmaIPhiIPhi(); }
	vector<float> &els_sigmaIPhiIPhiSC() { return cms2.els_sigmaIPhiIPhiSC(); }
	vector<float> &els_sigmaPhiPhi() { return cms2.els_sigmaPhiPhi(); }
	vector<float> &els_tkIso() { return cms2.els_tkIso(); }
	vector<float> &els_tkIso04() { return cms2.els_tkIso04(); }
	vector<float> &els_trackMomentumError() { return cms2.els_trackMomentumError(); }
	vector<float> &els_trkdr() { return cms2.els_trkdr(); }
	vector<float> &els_trkshFrac() { return cms2.els_trkshFrac(); }
	vector<float> &els_z0() { return cms2.els_z0(); }
	vector<float> &els_z0Err() { return cms2.els_z0Err(); }
	vector<float> &els_z0corr() { return cms2.els_z0corr(); }
	vector<float> &hyp_Ht() { return cms2.hyp_Ht(); }
	vector<float> &hyp_dPhi_nJet_metMuonJESCorr() { return cms2.hyp_dPhi_nJet_metMuonJESCorr(); }
	vector<float> &hyp_dPhi_nJet_muCorrMet() { return cms2.hyp_dPhi_nJet_muCorrMet(); }
	vector<float> &hyp_dPhi_nJet_tcMet() { return cms2.hyp_dPhi_nJet_tcMet(); }
	vector<float> &hyp_dPhi_nJet_unCorrMet() { return cms2.hyp_dPhi_nJet_unCorrMet(); }
	vector<float> &hyp_ll_chi2() { return cms2.hyp_ll_chi2(); }
	vector<float> &hyp_ll_d0() { return cms2.hyp_ll_d0(); }
	vector<float> &hyp_ll_d0Err() { return cms2.hyp_ll_d0Err(); }
	vector<float> &hyp_ll_d0corr() { return cms2.hyp_ll_d0corr(); }
	vector<float> &hyp_ll_dPhi_metMuonJESCorr() { return cms2.hyp_ll_dPhi_metMuonJESCorr(); }
	vector<float> &hyp_ll_dPhi_muCorrMet() { return cms2.hyp_ll_dPhi_muCorrMet(); }
	vector<float> &hyp_ll_dPhi_tcMet() { return cms2.hyp_ll_dPhi_tcMet(); }
	vector<float> &hyp_ll_dPhi_unCorrMet() { return cms2.hyp_ll_dPhi_unCorrMet(); }
	vector<float> &hyp_ll_etaErr() { return cms2.hyp_ll_etaErr(); }
	vector<float> &hyp_ll_ndof() { return cms2.hyp_ll_ndof(); }
	vector<float> &hyp_ll_phiErr() { return cms2.hyp_ll_phiErr(); }
	vector<float> &hyp_ll_ptErr() { return cms2.hyp_ll_ptErr(); }
	vector<float> &hyp_ll_z0() { return cms2.hyp_ll_z0(); }
	vector<float> &hyp_ll_z0Err() { return cms2.hyp_ll_z0Err(); }
	vector<float> &hyp_ll_z0corr() { return cms2.hyp_ll_z0corr(); }
	vector<float> &hyp_lt_chi2() { return cms2.hyp_lt_chi2(); }
	vector<float> &hyp_lt_d0() { return cms2.hyp_lt_d0(); }
	vector<float> &hyp_lt_d0Err() { return cms2.hyp_lt_d0Err(); }
	vector<float> &hyp_lt_d0corr() { return cms2.hyp_lt_d0corr(); }
	vector<float> &hyp_lt_dPhi_metMuonJESCorr() { return cms2.hyp_lt_dPhi_metMuonJESCorr(); }
	vector<float> &hyp_lt_dPhi_muCorrMet() { return cms2.hyp_lt_dPhi_muCorrMet(); }
	vector<float> &hyp_lt_dPhi_tcMet() { return cms2.hyp_lt_dPhi_tcMet(); }
	vector<float> &hyp_lt_dPhi_unCorrMet() { return cms2.hyp_lt_dPhi_unCorrMet(); }
	vector<float> &hyp_lt_etaErr() { return cms2.hyp_lt_etaErr(); }
	vector<float> &hyp_lt_ndof() { return cms2.hyp_lt_ndof(); }
	vector<float> &hyp_lt_phiErr() { return cms2.hyp_lt_phiErr(); }
	vector<float> &hyp_lt_ptErr() { return cms2.hyp_lt_ptErr(); }
	vector<float> &hyp_lt_z0() { return cms2.hyp_lt_z0(); }
	vector<float> &hyp_lt_z0Err() { return cms2.hyp_lt_z0Err(); }
	vector<float> &hyp_lt_z0corr() { return cms2.hyp_lt_z0corr(); }
	vector<float> &hyp_mt2_metMuonJESCorr() { return cms2.hyp_mt2_metMuonJESCorr(); }
	vector<float> &hyp_mt2_muCorrMet() { return cms2.hyp_mt2_muCorrMet(); }
	vector<float> &hyp_mt2_tcMet() { return cms2.hyp_mt2_tcMet(); }
	vector<float> &hyp_sumJetPt() { return cms2.hyp_sumJetPt(); }
	vector<float> &hyp_FVFit_chi2ndf() { return cms2.hyp_FVFit_chi2ndf(); }
	vector<float> &hyp_FVFit_prob() { return cms2.hyp_FVFit_prob(); }
	vector<float> &hyp_FVFit_v4cxx() { return cms2.hyp_FVFit_v4cxx(); }
	vector<float> &hyp_FVFit_v4cxy() { return cms2.hyp_FVFit_v4cxy(); }
	vector<float> &hyp_FVFit_v4cyy() { return cms2.hyp_FVFit_v4cyy(); }
	vector<float> &hyp_FVFit_v4czx() { return cms2.hyp_FVFit_v4czx(); }
	vector<float> &hyp_FVFit_v4czy() { return cms2.hyp_FVFit_v4czy(); }
	vector<float> &hyp_FVFit_v4czz() { return cms2.hyp_FVFit_v4czz(); }
	vector<float> &hyp_ll_ecaliso() { return cms2.hyp_ll_ecaliso(); }
	vector<float> &hyp_ll_trkiso() { return cms2.hyp_ll_trkiso(); }
	vector<float> &hyp_lt_ecaliso() { return cms2.hyp_lt_ecaliso(); }
	vector<float> &hyp_lt_trkiso() { return cms2.hyp_lt_trkiso(); }
	vector<float> &jets_approximatefHPD() { return cms2.jets_approximatefHPD(); }
	vector<float> &jets_approximatefRBX() { return cms2.jets_approximatefRBX(); }
	vector<float> &jets_cor() { return cms2.jets_cor(); }
	vector<float> &jets_emFrac() { return cms2.jets_emFrac(); }
	vector<float> &jets_fHPD() { return cms2.jets_fHPD(); }
	vector<float> &jets_fRBX() { return cms2.jets_fRBX(); }
	vector<float> &jets_fSubDetector1() { return cms2.jets_fSubDetector1(); }
	vector<float> &jets_fSubDetector2() { return cms2.jets_fSubDetector2(); }
	vector<float> &jets_fSubDetector3() { return cms2.jets_fSubDetector3(); }
	vector<float> &jets_fSubDetector4() { return cms2.jets_fSubDetector4(); }
	vector<float> &jets_hitsInN90() { return cms2.jets_hitsInN90(); }
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
	vector<float> &taus_pf_caloComp() { return cms2.taus_pf_caloComp(); }
	vector<float> &taus_pf_ecalStripSumEOverPLead() { return cms2.taus_pf_ecalStripSumEOverPLead(); }
	vector<float> &taus_pf_electronPreIDOutput() { return cms2.taus_pf_electronPreIDOutput(); }
	vector<float> &taus_pf_emf() { return cms2.taus_pf_emf(); }
	vector<float> &taus_pf_hcal3x3OverPLead() { return cms2.taus_pf_hcal3x3OverPLead(); }
	vector<float> &taus_pf_hcalMaxOverPLead() { return cms2.taus_pf_hcalMaxOverPLead(); }
	vector<float> &taus_pf_hcalTotOverPLead() { return cms2.taus_pf_hcalTotOverPLead(); }
	vector<float> &taus_pf_isolationchargecandPtSum() { return cms2.taus_pf_isolationchargecandPtSum(); }
	vector<float> &taus_pf_isolationgammacandEtSum() { return cms2.taus_pf_isolationgammacandEtSum(); }
	vector<float> &taus_pf_lead_chargecand_Signed_Sipt() { return cms2.taus_pf_lead_chargecand_Signed_Sipt(); }
	vector<float> &taus_pf_maximumHCALPFClusterEt() { return cms2.taus_pf_maximumHCALPFClusterEt(); }
	vector<float> &taus_pf_segComp() { return cms2.taus_pf_segComp(); }
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
	vector<float> &scs_sigmaIEtaIEtaSC() { return cms2.scs_sigmaIEtaIEtaSC(); }
	vector<float> &scs_sigmaIEtaIPhi() { return cms2.scs_sigmaIEtaIPhi(); }
	vector<float> &scs_sigmaIEtaIPhiSC() { return cms2.scs_sigmaIEtaIPhiSC(); }
	vector<float> &scs_sigmaIPhiIPhi() { return cms2.scs_sigmaIPhiIPhi(); }
	vector<float> &scs_sigmaIPhiIPhiSC() { return cms2.scs_sigmaIPhiIPhiSC(); }
	vector<float> &scs_sigmaPhiPhi() { return cms2.scs_sigmaPhiPhi(); }
	vector<float> &scs_timeSeed() { return cms2.scs_timeSeed(); }
	vector<float> &scjets_approximatefHPD() { return cms2.scjets_approximatefHPD(); }
	vector<float> &scjets_approximatefRBX() { return cms2.scjets_approximatefRBX(); }
	vector<float> &scjets_cor() { return cms2.scjets_cor(); }
	vector<float> &scjets_emFrac() { return cms2.scjets_emFrac(); }
	vector<float> &scjets_fHPD() { return cms2.scjets_fHPD(); }
	vector<float> &scjets_fRBX() { return cms2.scjets_fRBX(); }
	vector<float> &scjets_fSubDetector1() { return cms2.scjets_fSubDetector1(); }
	vector<float> &scjets_fSubDetector2() { return cms2.scjets_fSubDetector2(); }
	vector<float> &scjets_fSubDetector3() { return cms2.scjets_fSubDetector3(); }
	vector<float> &scjets_fSubDetector4() { return cms2.scjets_fSubDetector4(); }
	vector<float> &scjets_hitsInN90() { return cms2.scjets_hitsInN90(); }
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
	vector<float> &trks_d0phiCov() { return cms2.trks_d0phiCov(); }
	vector<float> &trks_etaErr() { return cms2.trks_etaErr(); }
	vector<float> &trks_layer1_charge() { return cms2.trks_layer1_charge(); }
	vector<float> &trks_ndof() { return cms2.trks_ndof(); }
	vector<float> &trks_phiErr() { return cms2.trks_phiErr(); }
	vector<float> &trks_ptErr() { return cms2.trks_ptErr(); }
	vector<float> &trks_z0() { return cms2.trks_z0(); }
	vector<float> &trks_z0Err() { return cms2.trks_z0Err(); }
	vector<float> &trks_z0corr() { return cms2.trks_z0corr(); }
	vector<float> &trks_d0Errvtx() { return cms2.trks_d0Errvtx(); }
	vector<float> &trks_d0vtx() { return cms2.trks_d0vtx(); }
	vector<float> &vtxs_chi2() { return cms2.vtxs_chi2(); }
	vector<float> &vtxs_ndof() { return cms2.vtxs_ndof(); }
	vector<float> &vtxs_sumpt() { return cms2.vtxs_sumpt(); }
	vector<float> &vtxs_xError() { return cms2.vtxs_xError(); }
	vector<float> &vtxs_yError() { return cms2.vtxs_yError(); }
	vector<float> &vtxs_zError() { return cms2.vtxs_zError(); }
	vector<vector<float> > &twrs_em3x3() { return cms2.twrs_em3x3(); }
	vector<vector<float> > &twrs_em5x5() { return cms2.twrs_em5x5(); }
	vector<vector<float> > &twrs_emSwiss() { return cms2.twrs_emSwiss(); }
	vector<vector<float> > &twrs_emThresh() { return cms2.twrs_emThresh(); }
	vector<vector<float> > &twrs_emThreshChi2() { return cms2.twrs_emThreshChi2(); }
	vector<vector<float> > &twrs_emThreshEta() { return cms2.twrs_emThreshEta(); }
	vector<vector<float> > &twrs_emThreshTime() { return cms2.twrs_emThreshTime(); }
	vector<vector<float> > &twrsUncleaned_em3x3() { return cms2.twrsUncleaned_em3x3(); }
	vector<vector<float> > &twrsUncleaned_em5x5() { return cms2.twrsUncleaned_em5x5(); }
	vector<vector<float> > &twrsUncleaned_emSwiss() { return cms2.twrsUncleaned_emSwiss(); }
	vector<vector<float> > &twrsUncleaned_emThresh() { return cms2.twrsUncleaned_emThresh(); }
	vector<vector<float> > &twrsUncleaned_emThreshChi2() { return cms2.twrsUncleaned_emThreshChi2(); }
	vector<vector<float> > &twrsUncleaned_emThreshEta() { return cms2.twrsUncleaned_emThreshEta(); }
	vector<vector<float> > &twrsUncleaned_emThreshTime() { return cms2.twrsUncleaned_emThreshTime(); }
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
	int &pdfinfo_id1() { return cms2.pdfinfo_id1(); }
	int &pdfinfo_id2() { return cms2.pdfinfo_id2(); }
	vector<int> &evt_ecaliPhiSuspects() { return cms2.evt_ecaliPhiSuspects(); }
	vector<int> &evt_globaliPhiSuspects() { return cms2.evt_globaliPhiSuspects(); }
	vector<int> &evt_hcaliPhiSuspects() { return cms2.evt_hcaliPhiSuspects(); }
	vector<int> &twrs_numCrystals() { return cms2.twrs_numCrystals(); }
	vector<int> &twrsUncleaned_numCrystals() { return cms2.twrsUncleaned_numCrystals(); }
	vector<int> &taus_calo_charge() { return cms2.taus_calo_charge(); }
	vector<int> &taus_calo_leadtrk_idx() { return cms2.taus_calo_leadtrk_idx(); }
	vector<int> &taus_calo_tightId() { return cms2.taus_calo_tightId(); }
	vector<int> &els_mc3_id() { return cms2.els_mc3_id(); }
	vector<int> &els_mc3idx() { return cms2.els_mc3idx(); }
	vector<int> &els_mc3_motherid() { return cms2.els_mc3_motherid(); }
	vector<int> &els_mc3_motheridx() { return cms2.els_mc3_motheridx(); }
	vector<int> &els_mc_id() { return cms2.els_mc_id(); }
	vector<int> &els_mcidx() { return cms2.els_mcidx(); }
	vector<int> &els_mc_motherid() { return cms2.els_mc_motherid(); }
	vector<int> &jets_mc3_id() { return cms2.jets_mc3_id(); }
	vector<int> &jets_mc3idx() { return cms2.jets_mc3idx(); }
	vector<int> &jets_mc_gpidx() { return cms2.jets_mc_gpidx(); }
	vector<int> &jets_mc_id() { return cms2.jets_mc_id(); }
	vector<int> &jets_mcidx() { return cms2.jets_mcidx(); }
	vector<int> &mus_mc3_id() { return cms2.mus_mc3_id(); }
	vector<int> &mus_mc3idx() { return cms2.mus_mc3idx(); }
	vector<int> &mus_mc3_motherid() { return cms2.mus_mc3_motherid(); }
	vector<int> &mus_mc3_motheridx() { return cms2.mus_mc3_motheridx(); }
	vector<int> &mus_mc_id() { return cms2.mus_mc_id(); }
	vector<int> &mus_mcidx() { return cms2.mus_mcidx(); }
	vector<int> &mus_mc_motherid() { return cms2.mus_mc_motherid(); }
	vector<int> &trk_mc3_id() { return cms2.trk_mc3_id(); }
	vector<int> &trk_mc3idx() { return cms2.trk_mc3idx(); }
	vector<int> &trk_mc3_motherid() { return cms2.trk_mc3_motherid(); }
	vector<int> &trk_mc3_motheridx() { return cms2.trk_mc3_motheridx(); }
	vector<int> &trk_mc_id() { return cms2.trk_mc_id(); }
	vector<int> &trk_mcidx() { return cms2.trk_mcidx(); }
	vector<int> &trk_mc_motherid() { return cms2.trk_mc_motherid(); }
	vector<int> &trks_conv_tkidx() { return cms2.trks_conv_tkidx(); }
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
	vector<int> &genps_id() { return cms2.genps_id(); }
	vector<int> &genps_id_mother() { return cms2.genps_id_mother(); }
	vector<int> &genps_status() { return cms2.genps_status(); }
	vector<int> &hyp_ll_charge() { return cms2.hyp_ll_charge(); }
	vector<int> &hyp_ll_id() { return cms2.hyp_ll_id(); }
	vector<int> &hyp_ll_index() { return cms2.hyp_ll_index(); }
	vector<int> &hyp_ll_lostHits() { return cms2.hyp_ll_lostHits(); }
	vector<int> &hyp_ll_validHits() { return cms2.hyp_ll_validHits(); }
	vector<int> &hyp_lt_charge() { return cms2.hyp_lt_charge(); }
	vector<int> &hyp_lt_id() { return cms2.hyp_lt_id(); }
	vector<int> &hyp_lt_index() { return cms2.hyp_lt_index(); }
	vector<int> &hyp_lt_lostHits() { return cms2.hyp_lt_lostHits(); }
	vector<int> &hyp_lt_validHits() { return cms2.hyp_lt_validHits(); }
	vector<int> &hyp_njets() { return cms2.hyp_njets(); }
	vector<int> &hyp_nojets() { return cms2.hyp_nojets(); }
	vector<int> &hyp_type() { return cms2.hyp_type(); }
	vector<int> &hyp_FVFit_ndf() { return cms2.hyp_FVFit_ndf(); }
	vector<int> &hyp_FVFit_status() { return cms2.hyp_FVFit_status(); }
	vector<int> &hyp_ll_mc_id() { return cms2.hyp_ll_mc_id(); }
	vector<int> &hyp_ll_mc_motherid() { return cms2.hyp_ll_mc_motherid(); }
	vector<int> &hyp_lt_mc_id() { return cms2.hyp_lt_mc_id(); }
	vector<int> &hyp_lt_mc_motherid() { return cms2.hyp_lt_mc_motherid(); }
	vector<int> &hyp_quadlep_first_type() { return cms2.hyp_quadlep_first_type(); }
	vector<int> &hyp_quadlep_fourth_type() { return cms2.hyp_quadlep_fourth_type(); }
	vector<int> &hyp_quadlep_second_type() { return cms2.hyp_quadlep_second_type(); }
	vector<int> &hyp_quadlep_third_type() { return cms2.hyp_quadlep_third_type(); }
	vector<int> &hyp_trilep_first_type() { return cms2.hyp_trilep_first_type(); }
	vector<int> &hyp_trilep_second_type() { return cms2.hyp_trilep_second_type(); }
	vector<int> &hyp_trilep_third_type() { return cms2.hyp_trilep_third_type(); }
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
	vector<int> &taus_pf_charge() { return cms2.taus_pf_charge(); }
	vector<int> &taus_pf_electronPreID() { return cms2.taus_pf_electronPreID(); }
	vector<int> &taus_pf_hasMuonReference() { return cms2.taus_pf_hasMuonReference(); }
	vector<int> &taus_pf_leadtrk_idx() { return cms2.taus_pf_leadtrk_idx(); }
	vector<int> &taus_pf_muonPreID() { return cms2.taus_pf_muonPreID(); }
	vector<int> &taus_pf_nmuonmatch() { return cms2.taus_pf_nmuonmatch(); }
	vector<int> &taus_pf_tightId() { return cms2.taus_pf_tightId(); }
	vector<int> &photons_fiduciality() { return cms2.photons_fiduciality(); }
	vector<int> &pxl_ndigis_pxb() { return cms2.pxl_ndigis_pxb(); }
	vector<int> &pxl_ndigis_pxf() { return cms2.pxl_ndigis_pxf(); }
	vector<int> &ran_srFlag() { return cms2.ran_srFlag(); }
	vector<int> &scs_detIdSeed() { return cms2.scs_detIdSeed(); }
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
	vector<vector<int> > &twrs_emMaxEcalMGPASampleADC() { return cms2.twrs_emMaxEcalMGPASampleADC(); }
	vector<vector<int> > &twrs_emThreshRecoFlag() { return cms2.twrs_emThreshRecoFlag(); }
	vector<vector<int> > &twrs_emThreshSevLvl() { return cms2.twrs_emThreshSevLvl(); }
	vector<vector<int> > &twrsUncleaned_emMaxEcalMGPASampleADC() { return cms2.twrsUncleaned_emMaxEcalMGPASampleADC(); }
	vector<vector<int> > &twrsUncleaned_emThreshRecoFlag() { return cms2.twrsUncleaned_emThreshRecoFlag(); }
	vector<vector<int> > &twrsUncleaned_emThreshSevLvl() { return cms2.twrsUncleaned_emThreshSevLvl(); }
	vector<vector<int> > &taus_calo_isotrk_idx() { return cms2.taus_calo_isotrk_idx(); }
	vector<vector<int> > &taus_calo_sigtrk_idx() { return cms2.taus_calo_sigtrk_idx(); }
	vector<vector<int> > &genps_lepdaughter_id() { return cms2.genps_lepdaughter_id(); }
	vector<vector<int> > &genps_lepdaughter_idx() { return cms2.genps_lepdaughter_idx(); }
	vector<vector<int> > &hlt_trigObjs_id() { return cms2.hlt_trigObjs_id(); }
	vector<vector<int> > &hyp_jets_idx() { return cms2.hyp_jets_idx(); }
	vector<vector<int> > &hyp_other_jets_idx() { return cms2.hyp_other_jets_idx(); }
	unsigned int &evt_ntwrs() { return cms2.evt_ntwrs(); }
	unsigned int &evt_nels() { return cms2.evt_nels(); }
	unsigned int &evt_detectorStatus() { return cms2.evt_detectorStatus(); }
	unsigned int &evt_event() { return cms2.evt_event(); }
	unsigned int &evt_lumiBlock() { return cms2.evt_lumiBlock(); }
	unsigned int &evt_run() { return cms2.evt_run(); }
	unsigned int &genps_flavorHistoryFilterResult() { return cms2.genps_flavorHistoryFilterResult(); }
	unsigned int &evt_ngenjets() { return cms2.evt_ngenjets(); }
	unsigned int &genps_signalProcessID() { return cms2.genps_signalProcessID(); }
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
	unsigned int &evt_ecalRecoStatus() { return cms2.evt_ecalRecoStatus(); }
	unsigned int &evt_nscs() { return cms2.evt_nscs(); }
	unsigned int &evt_nscjets() { return cms2.evt_nscjets(); }
	unsigned int &evt_ntrkjets() { return cms2.evt_ntrkjets(); }
	unsigned int &evt_nvtxs() { return cms2.evt_nvtxs(); }
	vector<unsigned int> &twrs_detid() { return cms2.twrs_detid(); }
	vector<unsigned int> &twrs_numBadEcalCells() { return cms2.twrs_numBadEcalCells(); }
	vector<unsigned int> &twrs_numBadHcalCells() { return cms2.twrs_numBadHcalCells(); }
	vector<unsigned int> &twrs_numProblematicEcalCells() { return cms2.twrs_numProblematicEcalCells(); }
	vector<unsigned int> &twrs_numProblematicHcalCells() { return cms2.twrs_numProblematicHcalCells(); }
	vector<unsigned int> &twrs_numRecoveredEcalCells() { return cms2.twrs_numRecoveredEcalCells(); }
	vector<unsigned int> &twrs_numRecoveredHcalCells() { return cms2.twrs_numRecoveredHcalCells(); }
	vector<unsigned int> &twrsUncleaned_detid() { return cms2.twrsUncleaned_detid(); }
	vector<unsigned int> &twrsUncleaned_numBadEcalCells() { return cms2.twrsUncleaned_numBadEcalCells(); }
	vector<unsigned int> &twrsUncleaned_numBadHcalCells() { return cms2.twrsUncleaned_numBadHcalCells(); }
	vector<unsigned int> &twrsUncleaned_numProblematicEcalCells() { return cms2.twrsUncleaned_numProblematicEcalCells(); }
	vector<unsigned int> &twrsUncleaned_numProblematicHcalCells() { return cms2.twrsUncleaned_numProblematicHcalCells(); }
	vector<unsigned int> &twrsUncleaned_numRecoveredEcalCells() { return cms2.twrsUncleaned_numRecoveredEcalCells(); }
	vector<unsigned int> &twrsUncleaned_numRecoveredHcalCells() { return cms2.twrsUncleaned_numRecoveredHcalCells(); }
	vector<unsigned int> &hyp_quadlep_bucket() { return cms2.hyp_quadlep_bucket(); }
	vector<unsigned int> &hyp_quadlep_first_index() { return cms2.hyp_quadlep_first_index(); }
	vector<unsigned int> &hyp_quadlep_fourth_index() { return cms2.hyp_quadlep_fourth_index(); }
	vector<unsigned int> &hyp_quadlep_second_index() { return cms2.hyp_quadlep_second_index(); }
	vector<unsigned int> &hyp_quadlep_third_index() { return cms2.hyp_quadlep_third_index(); }
	vector<unsigned int> &hyp_trilep_bucket() { return cms2.hyp_trilep_bucket(); }
	vector<unsigned int> &hyp_trilep_first_index() { return cms2.hyp_trilep_first_index(); }
	vector<unsigned int> &hyp_trilep_second_index() { return cms2.hyp_trilep_second_index(); }
	vector<unsigned int> &hyp_trilep_third_index() { return cms2.hyp_trilep_third_index(); }
	bool passHLTTrigger(TString trigName) { return cms2.passHLTTrigger(trigName); }
	bool passL1Trigger(TString trigName) { return cms2.passL1Trigger(trigName); }
}
