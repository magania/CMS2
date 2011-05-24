// -*- C++ -*-
//
// Package:    NtupleMaker
// Class:      NtupleMaker
// 
/**\class NtupleMaker NtupleMaker.cc CMS2/NtupleMaker/src/NtupleMaker.cc

   Description: <one line class summary>

   Implementation:
   <Notes on implementation>
*/
//
// Original Author:  pts/4
//         Created:  Fri Jun  6 11:07:38 CDT 2008
// $Id: ElectronMaker.h,v 1.19 2011/05/24 15:56:17 cerati Exp $
//
//
#ifndef NTUPLEMAKER_ELECTRONMAKER_H
#define NTUPLEMAKER_ELECTRONMAKER_H

// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "DataFormats/EgammaCandidates/interface/GsfElectron.h"
#include "DataFormats/EgammaCandidates/interface/GsfElectronFwd.h"
#include "DataFormats/EgammaReco/interface/BasicClusterShapeAssociation.h"
#include "DataFormats/EcalDetId/interface/EcalSubdetector.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "DataFormats/Common/interface/ValueMap.h"
#include "DataFormats/Math/interface/Point3D.h"
#include "DataFormats/EgammaReco/interface/SuperCluster.h"
#include "DataFormats/EgammaReco/interface/SuperClusterFwd.h"
#include "DataFormats/GsfTrackReco/interface/GsfTrack.h"

#include "RecoEcal/EgammaCoreTools/interface/EcalClusterLazyTools.h"
#include "DataFormats/BeamSpot/interface/BeamSpot.h"

#include "TrackingTools/GsfTools/interface/MultiTrajectoryStateTransform.h"

#include "DataFormats/ParticleFlowCandidate/interface/PFCandidateFwd.h"
#include "DataFormats/VertexReco/interface/VertexFwd.h"

#include "Math/VectorUtil.h"

//
// class decleration
//

class ElectronMaker : public edm::EDProducer {
public:
  explicit ElectronMaker (const edm::ParameterSet&);
  ~ElectronMaker();

private:
//  virtual void beginJob() ;
  virtual void beginJob() ;
  virtual void beginRun(edm::Run&, const edm::EventSetup&) ;
  virtual void produce(edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;

  double electronIsoValuePF(const reco::GsfElectron& el, const reco::Vertex& vtx, float coner, float minptn, float dzcut,
			    float footprintdr, float gammastripveto, float elestripveto);
  
  int classify(const edm::RefToBase<reco::GsfElectron> &);
  template<typename T> const edm::ValueMap<T>& getValueMap(const edm::Event& iEvent, edm::InputTag& inputTag);
  
  // ----------member data ---------------------------
  edm::InputTag electronsInputTag_;
  edm::InputTag beamSpotInputTag_;
  edm::InputTag trksInputTag_;
  edm::InputTag gsftracksInputTag_;
  edm::InputTag eidRobustLooseTag_;
  edm::InputTag eidRobustTightTag_;
  edm::InputTag eidRobustHighEnergyTag_;
  edm::InputTag eidLooseTag_;
  edm::InputTag eidTightTag_;
  edm::InputTag cms2scsseeddetidInputTag_;
  edm::InputTag pfCandsInputTag;
  edm::InputTag vtxInputTag;

  EcalClusterLazyTools* clusterTools_;
  MultiTrajectoryStateTransform *mtsTransform_;

  double minAbsDist_;
  double minAbsDcot_;
  double minSharedFractionOfHits_;
  std::string aliasprefix_;

  edm::Handle<reco::PFCandidateCollection> pfCand_h;
  edm::Handle<reco::VertexCollection> vertexHandle;
};

#endif

