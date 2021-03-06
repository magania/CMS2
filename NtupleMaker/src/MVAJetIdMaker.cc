#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "DataFormats/Math/interface/LorentzVector.h"
#include "CMS2/NtupleMaker/interface/MVAJetIdMaker.h"
#include "DataFormats/JetReco/interface/PFJet.h"
#include "JetMETCorrections/Objects/interface/JetCorrector.h"
#include "DataFormats/ParticleFlowCandidate/interface/PFCandidateFwd.h"
#include "DataFormats/ParticleFlowCandidate/interface/PFCandidate.h"

#include "RecoMET/METAlgorithms/interface/PFSpecificAlgo.h"
#include "DataFormats/VertexReco/interface/Vertex.h"
#include "DataFormats/VertexReco/interface/VertexFwd.h"
#include "FWCore/Utilities/interface/Exception.h"

typedef math::XYZTLorentzVectorF LorentzVector;


// Constructor
MVAJetIdMaker::MVAJetIdMaker(const edm::ParameterSet& iConfig){
  using namespace std;
  using namespace edm;

  //
  fVertexNameTag_   = iConfig.getParameter<InputTag>	( "VertexName" 		);
  fCorrJetNameData  = iConfig.getParameter<InputTag>	( "CorrJetNameData"	);
  fCorrJetNameMC    = iConfig.getParameter<InputTag>	( "CorrJetNameMC"	);
  fUnCorrJetName    = iConfig.getParameter<InputTag>	( "JetName"		);
  fJetPtMin         = iConfig.getParameter<double>      ( "JetPtMin"            );
  // 
  fPUJetIdAlgo      = new PileupJetIdAlgo(iConfig); 

  label_            = iConfig.getParameter<std::string>      ( "label"               );

  // product of this EDProducer
  if(label_.find("philv1")==0)  produces<vector<float> >         ( "pfjetsmvavalue" ).setBranchAlias( "pfjets_mvavalue"	);
  if(label_.find("full5x")==0) produces<vector<float> >         ( "pfjetsfull5xmvavalue" ).setBranchAlias( "pfjets_full5xmvavalue"	);

  if(label_.find("full53x")==0) {
    produces<vector<float> >         ( "pfjetsfull53xmvavalue" ).setBranchAlias( "pfjets_full53xmvavalue"	);  

    produces<vector<float> >         ( "pfjetsfull53xmvanvtx" ).setBranchAlias( "pfjets_full53xmva_nvtx"	);
    produces<vector<float> >         ( "pfjetsfull53xmvad0" ).setBranchAlias( "pfjets_full53xmva_d0"	);
    produces<vector<float> >         ( "pfjetsfull53xmvadZ" ).setBranchAlias( "pfjets_full53xmva_dZ"	);
    produces<vector<float> >         ( "pfjetsfull53xmvabeta" ).setBranchAlias( "pfjets_full53xmva_beta"	);
    produces<vector<float> >         ( "pfjetsfull53xmvabetaStar" ).setBranchAlias( "pfjets_full53xmva_betaStar"	);
    produces<vector<float> >         ( "pfjetsfull53xmvanCharged" ).setBranchAlias( "pfjets_full53xmva_nCharged"	);
    produces<vector<float> >         ( "pfjetsfull53xmvanNeutrals" ).setBranchAlias( "pfjets_full53xmva_nNeutrals"	);
    produces<vector<float> >         ( "pfjetsfull53xmvadRMean" ).setBranchAlias( "pfjets_full53xmva_dRMean"	);
    produces<vector<float> >         ( "pfjetsfull53xmvafrac01" ).setBranchAlias( "pfjets_full53xmva_frac01"	);
    produces<vector<float> >         ( "pfjetsfull53xmvafrac02" ).setBranchAlias( "pfjets_full53xmva_frac02"	);
    produces<vector<float> >         ( "pfjetsfull53xmvafrac03" ).setBranchAlias( "pfjets_full53xmva_frac03"	);
    produces<vector<float> >         ( "pfjetsfull53xmvafrac04" ).setBranchAlias( "pfjets_full53xmva_frac04"	);
    produces<vector<float> >         ( "pfjetsfull53xmvafrac05" ).setBranchAlias( "pfjets_full53xmva_frac05"	);
  }

}

// Destructor
MVAJetIdMaker::~MVAJetIdMaker(){}

// ------------ method called once each job just before starting event loop  ------------
void MVAJetIdMaker::beginJob() {}

// ------------ method called once each job just after ending the event loop  ------------
void MVAJetIdMaker::endJob() {}

// ------------ method called to produce the data  ------------
void MVAJetIdMaker::produce(edm::Event& iEvent, const edm::EventSetup& iSetup){

  using namespace std;
  using namespace edm;
  using namespace reco;

  //  cout << " ==> run " << iEvent.run() << " lumi" << iEvent.luminosityBlock() << " event " <<  iEvent.id() << " label " << label_ << endl; 

  // create containers
  auto_ptr<vector<float> >         pfjets_mvavalue                (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full5xmvavalue                (new vector<float>          );
  
  auto_ptr<vector<float> >         pfjets_full53xmvavalue                (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_nvtx       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_d0       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_dZ       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_beta       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_betaStar       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_nCharged       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_nNeutrals       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_dRMean       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_frac01       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_frac02       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_frac03       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_frac04       (new vector<float>          );
  auto_ptr<vector<float> >         pfjets_full53xmva_frac05       (new vector<float>          );
  
  
  //Uncorrected Jets
  Handle<PFJetCollection>       lHUCJets;
  iEvent.getByLabel(fUnCorrJetName, lHUCJets);
  PFJetCollection               lUCJets = *lHUCJets;

  //Corrected Jets
  Handle<PFJetCollection>       lHCJets;
  if(iEvent.isRealData()) iEvent.getByLabel(fCorrJetNameData  , lHCJets);
  else iEvent.getByLabel(fCorrJetNameMC  , lHCJets);
  PFJetCollection               lCJets = *lHCJets;

  // vertices    
  Handle<reco::VertexCollection> lHVertices;
  iEvent.getByLabel(fVertexNameTag_      , lHVertices); 
  VertexCollection lVertices = *lHVertices;


  // select good vertices 
  // make new collection to put into computeIdVariables(...)
  VertexCollection lGoodVertices;
  for(int ivtx    = 0; ivtx < (int)lVertices.size(); ivtx++)
  {
	  const Vertex       *vtx = &(lVertices.at(ivtx));
	  if( vtx->isFake()               		)  continue;
	  if( vtx->ndof()<=4              		)  continue;
	  if( vtx->position().Rho()>2.0   		)  continue;
	  if( fabs(vtx->position().Z())>24.0    )  continue;
	  lGoodVertices.push_back(*vtx);
  }

  // loop over jets 
  for(int i0   = 0; i0 < (int) lUCJets.size(); i0++) {   // uncorrecte jets collection                                           
	  const PFJet       *pUCJet = &(lUCJets.at(i0));
	  for(int i1 = 0; i1 < (int) lCJets.size(); i1++) {   // corrected jets collection                                         
		  const PFJet     *pCJet  = &(lCJets.at(i1));


		  if( pUCJet->jetArea() != pCJet->jetArea()                  	) continue;
		  if( fabs(pUCJet->eta() - pCJet->eta())         > 0.01         ) continue;
      	  if( pUCJet->pt()                               < fJetPtMin    ) continue;
//		  if( !passPFLooseId(pUCJet)                                    ) continue;
		  double lJec = pCJet ->pt()/pUCJet->pt();

		  // calculate mva value only when there are good vertices 
		  // otherwise store -999
		  if( lGoodVertices.size()>0 ) 
		  {
		  	PileupJetIdentifier lPUJetId =  fPUJetIdAlgo->computeIdVariables(pCJet,lJec,&lGoodVertices[0],lGoodVertices,true);

		   	if(label_.find("philv1")==0) pfjets_mvavalue              	->push_back( lPUJetId.mva()              );
                        if(label_.find("full5x")==0) pfjets_full5xmvavalue             ->push_back( lPUJetId.mva()              );

		  
			if(label_.find("full53x")==0) pfjets_full53xmvavalue             ->push_back( lPUJetId.mva()              );
			if(label_.find("full53x")==0) pfjets_full53xmva_nvtx        ->push_back( lPUJetId.nvtx() );
			if(label_.find("full53x")==0) pfjets_full53xmva_d0        ->push_back( lPUJetId.d0() );
			if(label_.find("full53x")==0) pfjets_full53xmva_dZ        ->push_back( lPUJetId.dZ() );
			if(label_.find("full53x")==0) pfjets_full53xmva_beta        ->push_back( lPUJetId.beta() );
			if(label_.find("full53x")==0) pfjets_full53xmva_betaStar        ->push_back( lPUJetId.betaStar() );
			if(label_.find("full53x")==0) pfjets_full53xmva_nCharged        ->push_back( lPUJetId.nCharged() );
			if(label_.find("full53x")==0) pfjets_full53xmva_nNeutrals        ->push_back( lPUJetId.nNeutrals() );
			if(label_.find("full53x")==0) pfjets_full53xmva_dRMean        ->push_back( lPUJetId.dRMean() );
			if(label_.find("full53x")==0) pfjets_full53xmva_frac01        ->push_back( lPUJetId.frac01() );
			if(label_.find("full53x")==0) pfjets_full53xmva_frac02        ->push_back( lPUJetId.frac02() );
			if(label_.find("full53x")==0) pfjets_full53xmva_frac03        ->push_back( lPUJetId.frac03() );
			if(label_.find("full53x")==0) pfjets_full53xmva_frac04        ->push_back( lPUJetId.frac04() );
			if(label_.find("full53x")==0) pfjets_full53xmva_frac05        ->push_back( lPUJetId.frac05() );


			// print out MVA inputs 
			if(0)
			{
				std::cout << setprecision(5)
					<< "Debug Jet MVA : "
				 	<< iEvent.id() 			<< " : "
					<< lPUJetId.nvtx()      << " "
					<< pCJet->pt()         	<< " "
					<< lPUJetId.jetEta()    << " "
					<< lPUJetId.jetPhi()    << " "
					<< lPUJetId.d0()        << " "
					<< lPUJetId.dZ()        << " "
					<< lPUJetId.beta()      << " "
					<< lPUJetId.betaStar()  << " "
					<< lPUJetId.nCharged()  << " "
					<< lPUJetId.nNeutrals() << " "
					<< lPUJetId.dRMean()    << " "
					<< lPUJetId.frac01()    << " "
					<< lPUJetId.frac02()    << " "
					<< lPUJetId.frac03()    << " "
					<< lPUJetId.frac04()    << " "
					<< lPUJetId.frac05()
					<< " === : === "; 
				cout << lPUJetId.mva() << endl;
			}

		  }

		  else {

		    if(label_.find("philv1")==0) pfjets_mvavalue                  ->push_back( -999. );
  		    if(label_.find("full5x")==0) pfjets_full5xmvavalue            ->push_back( -999. );
  		    if(label_.find("full53x")==0) pfjets_full53xmvavalue          ->push_back( -999. );
		  
		    if(label_.find("full53x")==0) pfjets_full53xmva_nvtx          ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_d0            ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_dZ            ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_beta          ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_betaStar      ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_nCharged      ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_nNeutrals     ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_dRMean        ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_frac01        ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_frac02        ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_frac03        ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_frac04        ->push_back( -999. );
		    if(label_.find("full53x")==0) pfjets_full53xmva_frac05        ->push_back( -999. );
		    
		  }
		    
		  //		  break;

	  } // lCJets
  } // lUCJets

  // 

  if(label_.find("philv1")==0)   iEvent.put(pfjets_mvavalue,             	  "pfjetsmvavalue"             );
  if(label_.find("full5x")==0)   iEvent.put(pfjets_full5xmvavalue,               "pfjetsfull5xmvavalue"       );

  if(label_.find("full53x")==0) {
    iEvent.put(pfjets_full53xmvavalue,         "pfjetsfull53xmvavalue"    );
    
    iEvent.put(pfjets_full53xmva_nvtx,         "pfjetsfull53xmvanvtx"     );
    iEvent.put(pfjets_full53xmva_d0,           "pfjetsfull53xmvad0"       );
    iEvent.put(pfjets_full53xmva_dZ,           "pfjetsfull53xmvadZ"       );
    iEvent.put(pfjets_full53xmva_beta,         "pfjetsfull53xmvabeta"     );
    iEvent.put(pfjets_full53xmva_betaStar,     "pfjetsfull53xmvabetaStar" );
    iEvent.put(pfjets_full53xmva_nCharged,     "pfjetsfull53xmvanCharged" );
    iEvent.put(pfjets_full53xmva_nNeutrals,    "pfjetsfull53xmvanNeutrals");
    iEvent.put(pfjets_full53xmva_dRMean,       "pfjetsfull53xmvadRMean"   );
    
    iEvent.put(pfjets_full53xmva_frac01,       "pfjetsfull53xmvafrac01"   );
    iEvent.put(pfjets_full53xmva_frac02,       "pfjetsfull53xmvafrac02"   );
    iEvent.put(pfjets_full53xmva_frac03,       "pfjetsfull53xmvafrac03"   );
    iEvent.put(pfjets_full53xmva_frac04,       "pfjetsfull53xmvafrac04"   );
    iEvent.put(pfjets_full53xmva_frac05,       "pfjetsfull53xmvafrac05"   );
  }

}

bool MVAJetIdMaker::passPFLooseId(const reco::PFJet *iJet) {
	if(iJet->energy()== 0)                                  return false;
	if(iJet->neutralHadronEnergy()/iJet->energy() > 0.99)   return false;
	if(iJet->neutralEmEnergy()/iJet->energy()     > 0.99)   return false;
	if(iJet->nConstituents() <  2)                          return false;
	if(iJet->chargedHadronEnergy()/iJet->energy() <= 0 && fabs(iJet->eta()) < 2.4 ) return false;
	if(iJet->chargedEmEnergy()/iJet->energy() >  0.99  && fabs(iJet->eta()) < 2.4 ) return false;
	if(iJet->chargedMultiplicity()            < 1      && fabs(iJet->eta()) < 2.4 ) return false;
	return true;
}


//define this as a plug-in
DEFINE_FWK_MODULE(MVAJetIdMaker);
