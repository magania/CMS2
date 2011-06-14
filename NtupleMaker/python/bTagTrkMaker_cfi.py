import FWCore.ParameterSet.Config as cms

bTagTrkMaker = cms.EDProducer(
        "BTagMaker",
        AliasPrefix                           = cms.string("trkjets"),
	cms2CaloJetsTag                       = cms.InputTag("prunedUncorrectedCMS2Jets", "trkjet"),        
        referenceCaloJetsTag                  = cms.InputTag("ak5TrackJets"),
        combinedSecondaryVertexBJetTags       = cms.InputTag("CMS2TrkCombinedSecondaryVertexBJetTags"),
	combinedSecondaryVertexMVABJetTags    = cms.InputTag("CMS2TrkCombinedSecondaryVertexMVABJetTags"),
#        ghostTrackBJetTags                    = cms.InputTag("CMS2ghostTrackBJetTags"),
        jetBProbabilityBJetTags               = cms.InputTag("CMS2TrkJetBProbabilityBJetTags"),
	jetProbabilityBJetTags                = cms.InputTag("CMS2TrkJetProbabilityBJetTags"),
        simpleSecondaryVertexBJetTags         = cms.InputTag("CMS2TrkSimpleSecondaryVertexBJetTags"),
        simpleSecondaryVertexHighEffBJetTags  = cms.InputTag("CMS2TrkSimpleSecondaryVertexHighEffBJetTags"),
        simpleSecondaryVertexHighPurBJetTags  = cms.InputTag("CMS2TrkSimpleSecondaryVertexHighPurBJetTags"),  
        softElectronTags                      = cms.InputTag("CMS2TrkSoftElectronBJetTags"),
        softElectronByIP3dBJetTags            = cms.InputTag("CMS2TrkSoftElectronByIP3dBJetTags"),
        softElectronByPtBJetTags              = cms.InputTag("CMS2TrkSoftElectronByPtBJetTags"),
	softMuonBJetTags                      = cms.InputTag("CMS2TrkSoftMuonBJetTags"),
        softMuonByIP3dBJetTags                = cms.InputTag("CMS2TrkSoftMuonByIP3dBJetTags"),
        softMuonByPtBJetTags                  = cms.InputTag("CMS2TrkSoftMuonByPtBJetTags"),
	trackCountingHighEffBJetTags          = cms.InputTag("CMS2TrkTrackCountingHighEffBJetTags"),
	trackCountingHighPurBJetTags          = cms.InputTag("CMS2TrkTrackCountingHighPurBJetTags")
)

