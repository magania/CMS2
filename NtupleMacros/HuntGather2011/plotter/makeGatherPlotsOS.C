#include "cuts.h"

void makeGatherPlotsOS(TString prefix, const std::vector<BabySample*> &babyVector, const float &luminosity)
{

    std::cout << "Making OS plots...\n";

    //
    // Define specific cuts for OS plots
    //
    TCut os_pt2010("(pt1 > 20 && pt2 > 10) || (pt1 > 10 && pt2 > 20)");
    TCut os_dilep2("(abs(eormu1) == 11 && e1_vbtf90full) || (abs(eormu1) == 13 && mu1_muonidfull && ! mu1_cosmic)");
    TCut os_dilep3("(abs(eormu2) == 11 && e2_vbtf90full) || (abs(eormu2) == 13 && mu2_muonidfull && ! mu2_cosmic)");
    TCut os_dilep4("ntrks > 2");
    TCut os_dilep5("eormu1*eormu2<0");
    TCut os_dilep_all("base_dilep",os_pt2010+os_dilep2+os_dilep3+os_dilep4+os_dilep5);
    TCut os_zveto("(((hyp_type == 0 || hyp_type == 3) && eormu1*eormu2 < 0) && abs(mass-91.) > 15.) || ((hyp_type == 0 || hyp_type == 3) && eormu1*eormu2 > 0) || (hyp_type == 1 || hyp_type == 2)");
    TCut os_kin("njetsSS>1 && tcmet>50. && sumjetptSS>100.");
    TCut os_preselection("os_preselection",os_dilep_all+os_zveto+os_kin);

    TCut y("y","tcmet/sqrt(sumjetptSS)");
    TCut y_sig("y_sig","(tcmet/sqrt(sumjetptSS))>8.5");

    //
    // Apply preselection cuts to the samples in the baby vector
    // These preselection cuts will apply to all plots!
    //

    PreselectBabies(babyVector, os_dilep_all);

    //
    // Make the plots
    //

    DrawAll("mass",                    prefix+"_os_mass",            os_preselection, luminosity, 40, 0., 500, 0, babyVector);
    DrawAll("tcmet",                   prefix+"_os_tcmet",           os_preselection, luminosity, 40, 0., 300, 0, babyVector);
    DrawAll( y,                        prefix+"_os_y",               os_preselection, luminosity, 40, 0.,  20, 0, babyVector);
    DrawAll("sumjetptSS",              prefix+"_os_sumjetpt",        os_preselection, luminosity ,40, 0., 800, 0, babyVector);
    DrawAll("njetsSS",                 prefix+"_os_njets",           os_preselection, luminosity , 8, 0.,   8, 0, babyVector);

    DrawAll("mass",                    prefix+"_os_mass_int",        os_preselection, luminosity, 40, 0., 500, 1, babyVector);
    DrawAll("tcmet",                   prefix+"_os_tcmet_int",       os_preselection, luminosity, 40, 0., 300, 1, babyVector);
    DrawAll( y,                        prefix+"_os_y_int",           os_preselection, luminosity, 40, 0.,  20, 1, babyVector);
    DrawAll("sumjetptSS",              prefix+"_os_sumjetpt_int",    os_preselection, luminosity ,40, 0., 800, 1, babyVector);
    DrawAll("njetsSS",                 prefix+"_os_njets_int",       os_preselection, luminosity , 8, 0.,   8, 1, babyVector);

    DrawAll("hyp_type",                prefix+"_os_hyp",            os_preselection, luminosity, 3, -1.5, 4.5, 0, babyVector);
    DrawAll("hyp_type",                prefix+"_os_hyp_sig",        TCut("hyp_type {y>8.5 and HT>300}", y_sig+"sumjetptSS>300."+os_preselection), luminosity, 3, -1.5, 4.5, 0, babyVector);
    DrawAll( y,                        prefix+"_os_y_sig",          TCut("y {HT>300}", "sumjetptSS>300."+os_preselection), luminosity, 40, 0.,  20, 0, babyVector);
    DrawAll("sumjetptSS",              prefix+"_os_sumjetpt_sig",   TCut("HT {y>8.5}", y_sig+os_preselection), luminosity ,40, 0., 800, 0, babyVector);


}

