// -*- C++ -*-
//
// Package:    MVAJetIdMaker
// Class:      MVAJetIdMaker
// 
/**\class MVAJetIdMaker MVAJetIdMaker.cc temp/MVAJetIdMaker/src/MVAJetIdMaker.cc

Description: <one line class summary>

Implementation:
<Notes on implementation>
*/
//
// Original Author:  Puneeth Devanand KALAVASE
//         Created:  Tue Sep  1 22:18:18 CEST 2009
// $Id: MVAJetIdMaker.h,v 1.1 2012/04/22 15:44:11 jaehyeok Exp $
//
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "DataFormats/JetReco/interface/Jet.h"
#include "DataFormats/JetReco/interface/PFJet.h"
#include "CMGTools/External/interface/PileupJetIdAlgo.h"

//
// class decleration
//

class MVAJetIdMaker : public edm::EDProducer {
public:
  explicit MVAJetIdMaker(const edm::ParameterSet&);
  ~MVAJetIdMaker();

private:
  virtual void beginJob() ;
  virtual void produce(edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;
      
  // ----------member data ---------------------------
  edm::InputTag pfJetsInputTag_;
  edm::InputTag fVertexNameTag_;
  edm::InputTag fCorrJetName;
  edm::InputTag fUnCorrJetName;
  
  double         	pfJetPtCut_;
  PileupJetIdAlgo  *fPUJetIdAlgo;
  
  std::string aliasprefix_;
  std::string PFJetCorrectorL2L3_;
  std::string PFJetCorrectorL1L2L3_;
  std::string PFJetCorrectorL1FastL2L3_;
};