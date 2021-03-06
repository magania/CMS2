#include "cuts.h"

void makeGatherPlotsSusyMon(TString prefix, const std::vector<BabySample*> &babyVector, const float &luminosity)
{

    std::cout << "Making SusyMon  plots...\n";

    //
    // Define specific cuts for OS plots
    //
    TCut os_pt2010("(pt1 > 30 && pt2 > 10) || (pt1 > 10 && pt2 > 30)");
    TCut os_dilep2("(abs(eormu1) == 11 && e1_vbtf90full) || (abs(eormu1) == 13 && mu1_muonidfull && ! mu1_cosmic)");
    TCut os_dilep3("(abs(eormu2) == 11 && e2_vbtf90full) || (abs(eormu2) == 13 && mu2_muonidfull && ! mu2_cosmic)");
    TCut os_dilep4("ntrks > 2");
    TCut os_dilep5("eormu1*eormu2<0");
    TCut os_dilep_all("base_dilep",os_pt2010+os_dilep2+os_dilep3+os_dilep4+os_dilep5);
    TCut os_zveto("(((hyp_type == 0 || hyp_type == 3) && eormu1*eormu2 < 0) && abs(mass-91.) > 15.) || ((hyp_type == 0 || hyp_type == 3) && eormu1*eormu2 > 0) || (hyp_type == 1 || hyp_type == 2)");
    TCut os_zmass("(hyp_type == 0 || hyp_type == 3) && mass > 76. && mass < 106.");
    TCut os_preselection("os_preselection",os_dilep_all+os_zveto);

    //
    // Apply preselection cuts to the samples in the baby vector
    // These preselection cuts will apply to all plots!
    //

    PreselectBabies(babyVector, os_dilep_all);

    //
    // Make the plots
    //

    DrawAll(TCut("dilepton_mass", "mass"), prefix+"_validation_mass_ee", os_dilep_all+ee_dilep, luminosity, 50,0., 200., 0, babyVector);
    DrawAll(TCut("dilepton_mass", "mass"), prefix+"_validation_mass_mm", os_dilep_all+mm_dilep, luminosity, 50,0., 200., 0, babyVector);

    const BabySample *data = babyVector[0]; // fix me
    Int_t run_start = 160000;
    Int_t run_end = 166000;
    Int_t n_run_bins = (run_end - run_start);
    TriggerMonitor(prefix+"_tcmetmon50", "run", os_dilep_all + os_zmass, TCut("Fraction {TCMet>50}", "tcmet > 50"), luminosity, n_run_bins, run_start, run_end, false, data);
    TriggerMonitor(prefix+"_pfmetmon50", "run", os_dilep_all + os_zmass, TCut("Fraction {PFMet>50}", "pfmet > 50"), luminosity, n_run_bins, run_start, run_end, false, data);

    DrawAll(TCut("nvtx", "nvtx"),                    prefix+"_validation_nvtx", os_dilep_all, luminosity, 20, -0.5, 19.5, 0, babyVector);
    TriggerMonitor(prefix+"_vtxmon", "run", os_dilep_all, TCut("Fraction {nvtx>5}", "nvtx>5"), luminosity, n_run_bins, run_start, run_end, false, data);

    DrawAll(TCut("dilepton_mass", "mass"), prefix+"_os_mass", TCut("ll {NJets >=2, PFMet >50, HT>100}", os_preselection+"njetsSS>1 && pfmet>50. && sumjetptSS>100."), luminosity, 40, 0., 500, 0, babyVector);
    DrawAll(TCut("pfmet", "pfmet"),    prefix+"_os_pfmet",          TCut("ll {NJets >=2, HT >100}", os_preselection+"njetsSS>1 && sumjetptSS>100."), luminosity, 40, 0., 300, 0, babyVector);
    DrawAll(TCut("ht", "sumjetptSS"),    prefix+"_os_sumjetpt",       TCut("ll {NJets >=2, PFMet >50}", os_preselection+"njetsSS>1 && pfmet>50."), luminosity ,40, 0., 800, 0, babyVector);
    DrawAll(TCut("njets", "njetsSS"), prefix+"_os_njets",          TCut("ll {PFMet >50, HT >100}", os_preselection+"pfmet>50. && sumjetptSS>100."), luminosity , 10, -0.5, 9.5, 0, babyVector);

    DrawAll(TCut("dilepton_mass", "mass"),     prefix+"_osz_mass_ee_2jets_pfmet50",     TCut("ee {NJets>=2, PFMet>50}", os_dilep_all + "njetsSS>=2 && hyp_type==3 && pfmet>50") , luminosity, 40, 0., 200, 0, babyVector);
    DrawAll(TCut("dilepton_mass", "mass"),     prefix+"_osz_mass_mm_2jets_pfmet50",     TCut("mm {NJets>=2, PFMet>50}", os_dilep_all + "njetsSS>=2 && hyp_type==0 && pfmet>50") , luminosity, 40, 0., 200, 0, babyVector);
    DrawAll(TCut("pfmet", "pfmet"),    prefix+"_osz_pfmet_ee_2jets",            TCut("ee {NJets>=2}", os_dilep_all + os_zmass + "njetsSS>=2 && hyp_type==3") , luminosity, 40, 0., 200, 0, babyVector);
    DrawAll(TCut("ptmet", "pfmet"),    prefix+"_osz_pfmet_mm_2jets",            TCut("mm {NJets>=2}", os_dilep_all + os_zmass + "njetsSS>=2 && hyp_type==0") , luminosity, 40, 0., 200, 0, babyVector);

}

