import FWCore.ParameterSet.Config as cms

muToPFMuAssMaker = cms.EDProducer("MuToPFMuAssMaker",
                                aliasPrefix = cms.untracked.string("mus"),                                
                                minDR = cms.double(0.1),
                                musInputTag = cms.InputTag("muonMaker"),
                                pfmusInputTag = cms.InputTag("pfMuonMaker")
)


