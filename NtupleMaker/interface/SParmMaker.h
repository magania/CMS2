// -*- C++ -*-
//
// Package:    SParmMaker
// Class:      SParmMaker
// 
/**\class SParmMaker SParmMaker.h CMS2/NtupleMaker/interface/SParmMaker.h

   Description: copy SUSY mSUGRA parameters into the EDM event tree

   Implementation:
   - extract and fill variables
 
*/
//
// Original BenHooberman
// Created:  Wed Mar  24 12:23:38 CDT 2010
//
//
#ifndef CMS2_SPARMMAKER_H
#define CMS2_SPARMMAKER_H

// system include files
#include <memory>
#include <string>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"

//
// class declaration
//

class SParmMaker : public edm::EDProducer {
public:
    explicit SParmMaker (const edm::ParameterSet&);
    ~SParmMaker();

private:
    virtual void beginJob() ;
    virtual void produce(edm::Event&, const edm::EventSetup&);
    virtual void endJob() ;
      
    // ----------member data ---------------------------
    edm::InputTag sparm_inputTag;
    std::string aliasprefix_;
  std::vector<std::string> vsparms_;
};


#endif
