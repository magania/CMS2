// -*- C++ -*-
//Add includes for your classes here
#include <vector>
#include "TString.h"
#include "DataFormats/Math/interface/LorentzVector.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "TBits.h"

namespace {
   struct dictionary {
      std::vector<std::vector<int> > vi2d;
      edm::Wrapper<std::vector<std::vector<int> > > wvi2d;
	
      std::vector<std::vector<std::vector<int> > > vi3d;
      edm::Wrapper<std::vector<std::vector<std::vector<int> > > > wvi3d;
      
      std::vector<std::vector<float> > vf2d;
      edm::Wrapper<std::vector<std::vector<float> > > wvf2d;
      
      std::vector<std::vector<std::vector<float> > > vf3d;
      edm::Wrapper<std::vector<std::vector<std::vector<float> > > > wvf3d;
      
      std::vector<std::vector<math::XYZTLorentzVectorF> > vp2d;
      edm::Wrapper<std::vector<std::vector<math::XYZTLorentzVectorF> > > wvp2d;
      
      std::vector<std::vector<std::vector<math::XYZTLorentzVectorF> > > vp3d;
      edm::Wrapper<std::vector<std::vector<std::vector<math::XYZTLorentzVectorF> > > > wvp3d;
      
      TString s;
      edm::Wrapper<TString> ws;
      
      std::vector<TString> vs;
      edm::Wrapper<std::vector<TString> > wvs;

      TBits bits1;
      edm::Wrapper<TBits> wbits1;
   };
}
