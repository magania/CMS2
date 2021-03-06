// -*- C++ -*-
//
// Package:    TrkMuonFilter
// Class:      TrkMuonFilter
//
/**\class TrkMuonFilter TrkMuonFilter.h CMS2/NtupleMaker/interface/TrkMuonFilter.h

Description: Produces TrkCollection after Muon subtraction

Implementation:
*/
//
//
// Original Author:  Sanjay Padhi
//         Created:  Mon Jun 23 03:57:47 CEST 2008
// $Id: TrkMuonFilter.h,v 1.5 2010/06/15 10:08:36 fgolf Exp $
//
//

#ifndef CMS2_TRKMUONFILTER_H
#define CMS2_TRKMUONFILTER_H

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

#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/MuonReco/interface/Muon.h"


class TrkMuonFilter : public edm::EDProducer {
 public:
  explicit TrkMuonFilter(const edm::ParameterSet&);
  ~TrkMuonFilter();

 private:
  virtual void beginJob() ;
  virtual void produce(edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;

  // Functions
  bool selectmuon(const reco::Track* muon);
  bool muonisolation(const reco::Muon& muon);
  bool muonID(const reco::Muon& muon);
  bool trackquality(const reco::Track* track);

  // ----------member data ---------------------------

  edm::InputTag TrackProducerTag;
  edm::InputTag MuonTag;
  bool          subMuon;
  double        muIsoFrac;
  double        muChi2N;
  double        muMinPt;
  double        muMaxEta;
};
#endif
