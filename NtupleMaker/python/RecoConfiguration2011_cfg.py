# Import Python Modules
import FWCore.ParameterSet.Config as cms
from Configuration.EventContent.EventContent_cff        import *
from JetMETCorrections.Type1MET.MetType1Corrections_cff import *

# CMS2
process = cms.Process("CMS2")

# Version Control For Python Configuration Files
process.configurationMetadata = cms.untracked.PSet(
        version    = cms.untracked.string('$Revision: 1.7 $'),
        annotation = cms.untracked.string('CMS2'),
        name       = cms.untracked.string('CMS2 test configuration')
)

# load event level configurations
process.load("Configuration.StandardSequences.Services_cff")
process.load("Configuration.StandardSequences.Reconstruction_cff")
process.load("Configuration.StandardSequences.Geometry_cff")
process.load("Configuration.StandardSequences.MagneticField_cff")
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
process.load('Configuration/EventContent/EventContent_cff')
process.load("FWCore.MessageLogger.MessageLogger_cfi")
process.load('JetMETCorrections.Configuration.DefaultJEC_cff')
process.load("RecoJets.Configuration.RecoJPTJets_cff")
process.load("TrackPropagation.SteppingHelixPropagator.SteppingHelixPropagatorAny_cfi")
process.load("TrackingTools.TrackAssociator.DetIdAssociatorESProducer_cff")
process.load("CMS2.NtupleMaker.cms2CoreSequences_cff")
process.load("CMS2.NtupleMaker.cms2GENSequence_cff")
process.load('CMS2.NtupleMaker.pixelDigiMaker_cfi')
process.load("CMS2.NtupleMaker.cms2HFCleaningSequence_cff")
process.load("CMS2.NtupleMaker.cms2HcalCleaningSequence_cff")
process.load("CMS2.NtupleMaker.cms2PFSequence_cff")
#
process.load('RecoJets.Configuration.RecoPFJets_cff') # Import the Jet RECO modules
process.kt6PFJets.doRhoFastjet  = True                # Turn-on the FastJet density calculation
process.kt6PFJets.Rho_EtaMax    = cms.double(4.5)     #
process.ak5PFJets.doAreaFastjet = True                # Turn-on the FastJet jet area calculation for your favorite algorithm
process.ak5PFJets.Rho_EtaMax    = cms.double(4.5)     #
#
process.ak5CaloL1Offset.useCondDB   = False
process.ak5CaloL1Fastjet.useCondDB  = False

process.ak5JPTL1Offset.useCondDB    = False
process.ak5JPTL1Fastjet.useCondDB   = False

process.ak5PFL1Offset.useCondDB     = False
process.ak5PFL1Fastjet.useCondDB    = False


metJESCorAK5CaloJet.inputUncorJetsLabel = cms.string("ak5CaloJets")

# Input
process.source = cms.Source("PoolSource",
    dropDescendantsOfDroppedBranches = cms.untracked.bool(False),
    skipEvents = cms.untracked.uint32(0),
    fileNames  = cms.untracked.vstring(

      'file:/nfs-3/userdata/cms2/cms2_validation/CMSSW_4_2_2/RelValProdTTbar_CMSSW_4_2_2-MC_42_V11-v1_AODSIM/70847C4B-8F6D-E011-A767-002354EF3BE6.root' # CMSSW_4_2_2 ttbar RelVal
      #'file:/nfs-3/userdata/cms2/cms2_validation/CMSSW_4_2_2/DoubleElectron/90B8D392-DF75-E011-A365-001BFCDBD160.root'                                  # CMSSW_4_2_2 DoubleElectron

    ),
    #--- Uncomment to emulate AOD with RECO --- #
    #inputCommands = process.AODEventContent.outputCommands,
)

# Speed up I/O from castor
process.AdaptorConfig = cms.Service (
  "AdaptorConfig",
  stats = cms.untracked.bool(True),
  enable = cms.untracked.bool(True),
  cacheHint = cms.untracked.string("lazy-download"),
  readHint = cms.untracked.string("auto-detect")
)

# Options
process.options                       = cms.untracked.PSet( Rethrow = cms.untracked.vstring('ProductNotFound') )
process.source.noEventSort            = cms.untracked.bool( True )
process.MessageLogger.cerr.threshold  = ''

# Number of Events to Process
process.maxEvents                     = cms.untracked.PSet( input = cms.untracked.int32(-1) )

# Hypothesis cuts
process.hypDilepMaker.TightLepton_PtCut  = cms.double(20.0)
process.hypDilepMaker.LooseLepton_PtCut  = cms.double(10.0)
process.hypTrilepMaker.TightLepton_PtCut = cms.double(20.0)
process.hypTrilepMaker.LooseLepton_PtCut = cms.double(10.0)

# Event Maker
process.eventMaker.datasetName = cms.string("")
process.eventMaker.CMS2tag     = cms.string("")

