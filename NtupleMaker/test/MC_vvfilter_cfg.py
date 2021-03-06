from CMS2.NtupleMaker.RecoConfiguration2012_cfg import *

# Global Tag
process.GlobalTag.globaltag = "START52_V9::All"

#
process.cms2WithEverything = cms.Sequence( process.ak5PFJets * process.kt6PFJets * process.cms2CoreSequence * process.cms2PFNoTauSequence * process.cms2GENSequence )

#
process.MessageLogger.cerr.FwkReport.reportEvery = 1000
process.eventMaker.isData                        = cms.bool(False)
process.luminosityMaker.isData                   = process.eventMaker.isData

# Load Filters
process.load("CMS2.NtupleMaker.wwfilter_cfi")
process.CMS2_Ele10Mu10_NoIsoIdMET = cms.Path( process.ele10mu10NoIsoIdMET * process.cms2WithEverything )
process.CMS2_Ele10Mu10_NoIsoId    = cms.Path( process.ele10mu10NoIsoId    * process.cms2WithEverything )
process.CMS2_Ele10Mu10_NoIsoIdPt45 = cms.Path( process.ele10mu10NoIsoIdPt45 * process.cms2WithEverything )
process.load("CMS2.NtupleMaker.zzfilter_cfi")
process.CMS2_4L = cms.Path( process.fourLeptons    * process.cms2WithEverything )

# Output
process.out = cms.OutputModule(
        "PoolOutputModule",
        SelectEvents = cms.untracked.PSet( SelectEvents = cms.vstring('CMS2_Ele10Mu10_NoIsoIdMET',
                                                                      'CMS2_Ele10Mu10_NoIsoId',
                                                                      'CMS2_Ele10Mu10_NoIsoIdPt45',
                                                                      'CMS2_4L') ),
        fileName     = cms.untracked.string('ntuple.root'),
)
process.outpath      = cms.EndPath(process.out)

# Branches
process.out.outputCommands = cms.untracked.vstring( 'drop *' )
process.out.outputCommands.extend(cms.untracked.vstring('keep *_*Maker*_*_CMS2*'))
process.out.outputCommands.extend(cms.untracked.vstring('keep *_ele10*_*_CMS2*'))
process.out.outputCommands.extend(cms.untracked.vstring('keep *_fourLeptons_*_CMS2*'))
process.out.outputCommands.extend(cms.untracked.vstring('drop *_cms2towerMaker*_*_CMS2*'))
process.out.outputCommands.extend(cms.untracked.vstring('drop CaloTowers*_*_*_CMS2*'))
