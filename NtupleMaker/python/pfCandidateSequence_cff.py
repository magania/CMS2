import FWCore.ParameterSet.Config as cms

from CommonTools.ParticleFlow.Isolation.tools_cfi import *
from CommonTools.ParticleFlow.Isolation.pfElectronIsolationFromDeposits_cff import *
from CommonTools.ParticleFlow.Isolation.isoValElectronWithCharged_cfi import *
from CommonTools.ParticleFlow.Isolation.isoValElectronWithNeutral_cfi import *
from CommonTools.ParticleFlow.Isolation.isoValElectronWithPhotons_cfi import *
from CMS2.NtupleMaker.pfElectronMaker_cfi import *

CMS2isoDepElectronWithCharged   = isoDepositReplace('CMS2pfAllElectrons', 'pfAllChargedHadrons')
CMS2isoDepElectronWithNeutral   = isoDepositReplace('CMS2pfAllElectrons', 'pfAllNeutralHadrons')
CMS2isoDepElectronWithPhotons   = isoDepositReplace('CMS2pfAllElectrons', 'pfAllPhotons')
#CMS2isoDepElectronWithElectrons = isoDepositReplace('CMS2pfAllElectrons', 'CMS2pfAllElectrons')
#CMS2isoDepElectronWithMuons     = isoDepositReplace('CMS2pfAllElectrons', 'pfAllMuons')

CMS2pfElectronIsoDepositsSequence = cms.Sequence(CMS2isoDepElectronWithCharged
                                                 + CMS2isoDepElectronWithNeutral
                                                 + CMS2isoDepElectronWithPhotons)
#                                                 + CMS2isoDepElectronWithElectrons
#                                                 + CMS2isoDepElectronWithMuons)
# cone 0.3
CMS2isoValElectronWithCharged = isoValElectronWithCharged.clone()
CMS2isoValElectronWithCharged.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithCharged")
CMS2isoValElectronWithCharged.deposits[0].deltaR = cms.double(0.3)
CMS2isoValElectronWithNeutral = isoValElectronWithNeutral.clone()
CMS2isoValElectronWithNeutral.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithNeutral")
CMS2isoValElectronWithNeutral.deposits[0].deltaR = cms.double(0.3)
CMS2isoValElectronWithPhotons = isoValElectronWithPhotons.clone()
CMS2isoValElectronWithPhotons.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithPhotons")
CMS2isoValElectronWithPhotons.deposits[0].deltaR = cms.double(0.3)
#same, cone 0.4
CMS2isoValElectronWithCharged04 = isoValElectronWithCharged.clone()
CMS2isoValElectronWithCharged04.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithCharged")
CMS2isoValElectronWithCharged04.deposits[0].deltaR = cms.double(0.4)
CMS2isoValElectronWithNeutral04 = isoValElectronWithNeutral.clone()
CMS2isoValElectronWithNeutral04.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithNeutral")
CMS2isoValElectronWithNeutral04.deposits[0].deltaR = cms.double(0.4)
CMS2isoValElectronWithPhotons04 = isoValElectronWithPhotons.clone()
CMS2isoValElectronWithPhotons04.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithPhotons")
CMS2isoValElectronWithPhotons04.deposits[0].deltaR = cms.double(0.4)

#CMS2isoValElectronWithElectrons = isoValElectronWithCharged.clone()
#CMS2isoValElectronWithElectrons.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithElectrons")
#CMS2isoValElectronWithMuons = isoValElectronWithCharged.clone()
#CMS2isoValElectronWithMuons.deposits[0].src = cms.InputTag("CMS2isoDepElectronWithMuons")

CMS2pfElectronIsolationFromDepositsSequence = cms.Sequence(CMS2isoValElectronWithCharged
                                                           + CMS2isoValElectronWithNeutral
                                                           + CMS2isoValElectronWithPhotons
                                                           + CMS2isoValElectronWithCharged04
                                                           + CMS2isoValElectronWithNeutral04
                                                           + CMS2isoValElectronWithPhotons04
                                                           )
#                                                           + CMS2isoValElectronWithElectrons
#                                                           + CMS2isoValElectronWithMuons)

CMS2pfElectronIsolationSequence = cms.Sequence(CMS2pfElectronIsoDepositsSequence
                                               + CMS2pfElectronIsolationFromDepositsSequence)
