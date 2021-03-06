import FWCore.ParameterSet.Config as cms

pfElectronMaker = cms.EDProducer(
  "PFElectronMaker",
  pfCandidatesTag     = cms.InputTag("particleFlow","electrons"),
  isoc_vm_tag         = cms.InputTag("CMS2isoValElectronWithCharged03"),
  ison_vm_tag         = cms.InputTag("CMS2isoValElectronWithNeutral03"),       
  isop_vm_tag         = cms.InputTag("CMS2isoValElectronWithPhotons03"),       
  isoc04_vm_tag       = cms.InputTag("CMS2isoValElectronWithCharged04"),
  ison04_vm_tag       = cms.InputTag("CMS2isoValElectronWithNeutral04"),       
  isop04_vm_tag       = cms.InputTag("CMS2isoValElectronWithPhotons04"),       
  pfAllElectrons_tag  = cms.InputTag("CMS2pfAllElectrons")
)
