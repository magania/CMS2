// -*- C++ -*-
//
// Package:    TrackMaker
// Class:      TrackMaker
// 
/**\class TrackMaker TrackMaker.cc CMS2/TrackMaker/src/TrackMaker.cc

   Description: <one line class summary>

   Implementation:
   <Notes on implementation>
*/
//
// Original Author:  pts/4
//         Created:  Fri Jun  6 11:07:38 CDT 2008
// $Id: TrackMaker.cc,v 1.35 2012/07/19 22:49:07 dbarge Exp $
//
//

// system include files
#include <memory>
#include "Math/VectorUtil.h"

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "CMS2/NtupleMaker/interface/TrackMaker.h"

#include "DataFormats/Math/interface/LorentzVector.h"
#include "DataFormats/Math/interface/Point3D.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackExtra.h"


#include "DataFormats/VertexReco/interface/VertexFwd.h"
#include "DataFormats/VertexReco/interface/Vertex.h"

// Propagator specific include files
#include "TrackingTools/TrajectoryState/interface/TrajectoryStateOnSurface.h"
#include "DataFormats/GeometrySurface/interface/Plane.h"
#include "DataFormats/GeometrySurface/interface/Cylinder.h"
#include "TrackingTools/GeomPropagators/interface/AnalyticalPropagator.h"
#include "MagneticField/Engine/interface/MagneticField.h"
#include "MagneticField/Records/interface/IdealMagneticFieldRecord.h"
#include "DataFormats/GeometryVector/interface/GlobalPoint.h"
#include "DataFormats/GeometryVector/interface/GlobalVector.h"

#include "Geometry/TrackerGeometryBuilder/interface/TrackerGeometry.h"
#include "Geometry/Records/interface/TrackerDigiGeometryRecord.h"
#include "Geometry/CommonDetUnit/interface/GeomDet.h"
#include "CondFormats/AlignmentRecord/interface/GlobalPositionRcd.h"

#include "DataFormats/TrackReco/interface/HitPattern.h"
#include "DataFormats/TrackingRecHit/interface/TrackingRecHitFwd.h"
#include "DataFormats/TrackingRecHit/interface/TrackingRecHit.h"
#include "DataFormats/TrackerRecHit2D/interface/SiStripRecHit2D.h"
#include "DataFormats/TrackerRecHit2D/interface/SiStripRecHit1D.h"

#include "DataFormats/TrackerRecHit2D/interface/SiPixelRecHit.h"
#include "DataFormats/SiStripCluster/interface/SiStripCluster.h"
#include "DataFormats/SiPixelCluster/interface/SiPixelCluster.h"

typedef math::XYZTLorentzVectorF LorentzVector;
using std::vector;
using reco::Track;
using reco::TrackBase;

//
// class decleration
//

//
// constructors and destructor
//
TrackMaker::TrackMaker(const edm::ParameterSet& iConfig) {
       
  aliasprefix_            = iConfig.getUntrackedParameter<std::string>("aliasPrefix");

  produces<vector<LorentzVector> >	("trkstrkp4"	  ).setBranchAlias("trks_trk_p4"     );	// track p4						
  produces<vector<LorentzVector> >	("trksvertexp4"	  ).setBranchAlias("trks_vertex_p4"  );	// track p4
  produces<vector<LorentzVector> >      ("trksouterp4"    ).setBranchAlias("trks_outer_p4"   );    // p4 at the outermost point of the tracker

  produces<vector<float> >		("trksd0"	  ).setBranchAlias("trks_d0"         );	// impact parameter at the point of closest approach	
  produces<vector<float> >		("trksd0corr"	  ).setBranchAlias("trks_d0corr"     );	// impact parameter at the point of closest approach corrected for the beamSpot
  produces<vector<float> >		("trksd0corrPhi"  ).setBranchAlias("trks_d0corrPhi"  );	// angle of impact parameter corrected for beamSpot
  produces<vector<float> >		("trksz0"	  ).setBranchAlias("trks_z0"         );	// z position of the point of closest approach		
  produces<vector<float> >		("trksz0corr"	  ).setBranchAlias("trks_z0corr"     );	// z position of the point of closest approach corrected for the the beamSpot
  produces<vector<float> >		("trkschi2"	  ).setBranchAlias("trks_chi2"       );	// chi2 of the silicon tracker fit			
  produces<vector<float> >		("trksndof"	  ).setBranchAlias("trks_ndof"       );	// number of degrees of freedom of the fit		
  produces<vector<int> >		("trksvalidHits"  ).setBranchAlias("trks_validHits"  );	// number of used hits in the fit			
  produces<vector<int> >		("trkslostHits"	  ).setBranchAlias("trks_lostHits"   );	// number of lost hits in the fit			
  produces<vector<float> >		("trksd0Err"	  ).setBranchAlias("trks_d0Err"      );	// error on the impact parameter			
  produces<vector<float> >		("trksz0Err"	  ).setBranchAlias("trks_z0Err"      );	// error on z position of the point of closest approach	
  produces<vector<float> >		("trksptErr"	  ).setBranchAlias("trks_ptErr"      );	// track Pt error					
  produces<vector<float> >		("trksetaErr"	  ).setBranchAlias("trks_etaErr"     );	// track eta error					
  produces<vector<float> >		("trksphiErr"	  ).setBranchAlias("trks_phiErr"     );	// track phi error					
  produces<vector<float> >		("trksd0phiCov"	  ).setBranchAlias("trks_d0phiCov"   ); // track cov(d0, phi) 
  produces<vector<int> >		("trkscharge"	  ).setBranchAlias("trks_charge"     );	// charge						
  produces<vector<int> >                ("trksqualityMask").setBranchAlias("trks_qualityMask"); // mask of quality flags
  produces<vector<int> >                ("trksalgo"       ).setBranchAlias("trks_algo"       );
  
  produces<vector<int> >                ("trksnlayers"    ).setBranchAlias("trks_nlayers"    );
  produces<vector<int> >                ("trksnlayers3D"  ).setBranchAlias("trks_nlayers3D"  );
  produces<vector<int> >                ("trksnlayersLost").setBranchAlias("trks_nlayersLost");

   //Hit Pattern information

  produces<vector<LorentzVector> >  ("trksinnerposition"           ).setBranchAlias("trks_inner_position"         );
  produces<vector<LorentzVector> >  ("trksouterposition"           ).setBranchAlias("trks_outer_position"         );
  produces<vector<int> >            ("trksvalidpixelhits"          ).setBranchAlias("trks_valid_pixelhits"        );
  produces<vector<int> >            ("trkslostpixelhits"           ).setBranchAlias("trks_lost_pixelhits"         );
  produces<vector<int> >            ("trkslayer1sizerphi"          ).setBranchAlias("trks_layer1_sizerphi"        ); 
  produces<vector<int> >            ("trkslayer1sizerz"            ).setBranchAlias("trks_layer1_sizerz"          ); 
  produces<vector<float> >          ("trkslayer1charge"            ).setBranchAlias("trks_layer1_charge"          ); 
  produces<vector<int> >            ("trkslayer1det"               ).setBranchAlias("trks_layer1_det"             );
  produces<vector<int> >            ("trkslayer1layer"             ).setBranchAlias("trks_layer1_layer"           ); 
  produces<vector<int> >            ("trksexpinnerlayers"          ).setBranchAlias("trks_exp_innerlayers"        );
  produces<vector<int> >            ("trksexpouterlayers"          ).setBranchAlias("trks_exp_outerlayers"        );   
  produces<vector<float> >           ("trksvalidFraction"           ).setBranchAlias("trks_validFraction"          );

  produces<vector<int> >            ("trkspvidx0"                  ).setBranchAlias("trks_pvidx0"        );
  produces<vector<int> >            ("trkspvidx1"                  ).setBranchAlias("trks_pvidx1"        );
  
  produces<vector<int> >            ("trksnLoops"                  ).setBranchAlias("trks_nLoops"        );

  tracksInputTag = iConfig.getParameter<edm::InputTag>("tracksInputTag");
  beamSpotTag    = iConfig.getParameter<edm::InputTag>("beamSpotInputTag");
  primaryVertexInputTag_ = iConfig.getParameter<edm::InputTag>("primaryVertexInputTag");

  dRConeMin_   = iConfig.getParameter<double>("trkIsolationdRConeMin"  );
  dRConeMax_   = iConfig.getParameter<double>("trkIsolationdRConeMax"  );
  vtxDiffZMax_ = iConfig.getParameter<double>("trkIsolationVtxDiffZMax");
  tkVtxDMax_   = iConfig.getParameter<double>("trkIsolationTkVtxDMax"  );
  ptMin_       = iConfig.getParameter<double>("trkIsolationPtMin"      );
  nHits_       = iConfig.getParameter<int>   ("trkIsolationNHits"      );
}

void TrackMaker::produce(edm::Event& iEvent, const edm::EventSetup& iSetup)
{
  using namespace edm;

  std::auto_ptr<vector<LorentzVector> >	vector_trks_trk_p4	(new vector<LorentzVector>	);
  std::auto_ptr<vector<LorentzVector> >	vector_trks_vertex_p4	(new vector<LorentzVector>	);
  std::auto_ptr<vector<LorentzVector> > vector_trks_outer_p4    (new vector<LorentzVector>      );
  std::auto_ptr<vector<float> >		vector_trks_d0		(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_d0corr      (new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_d0corrPhi   (new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_z0		(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_z0corr	(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_chi2	(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_ndof	(new vector<float>		);      
  std::auto_ptr<vector<int> >		vector_trks_validHits	(new vector<int>		);        
  std::auto_ptr<vector<int> >		vector_trks_lostHits	(new vector<int>		);        
  std::auto_ptr<vector<float> >		vector_trks_d0Err	(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_z0Err	(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_ptErr	(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_etaErr	(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_phiErr	(new vector<float>		);      
  std::auto_ptr<vector<float> >		vector_trks_d0phiCov	(new vector<float>		);      
  std::auto_ptr<vector<int> >		vector_trks_charge	(new vector<int>		);        
  std::auto_ptr<vector<int> >           vector_trks_qualityMask (new vector<int>                );
  std::auto_ptr<vector<int> >           vector_trks_algo        (new vector<int>                );

   //HitPattern information
  //
  std::auto_ptr<vector<LorentzVector> >trks_inner_position          (new vector<LorentzVector>  );
  std::auto_ptr<vector<LorentzVector> >trks_outer_position          (new vector<LorentzVector>  );
  std::auto_ptr<vector<int> >	       trks_valid_pixelhits         (new vector<int>	        ); 
  std::auto_ptr<vector<int> >	       trks_lost_pixelhits          (new vector<int>        	); 
  std::auto_ptr<vector<int> >	       trks_layer1_sizerphi         (new vector<int>	        ); 
  std::auto_ptr<vector<int> >	       trks_layer1_sizerz           (new vector<int>	        ); 
  std::auto_ptr<vector<float> >	       trks_layer1_charge           (new vector<float>	        );
  std::auto_ptr<vector<int> >	       trks_layer1_det              (new vector<int>	        );
  std::auto_ptr<vector<int> >	       trks_layer1_layer            (new vector<int>            );
  std::auto_ptr<vector<int> >	       trks_exp_innerlayers         (new vector<int>		); 
  std::auto_ptr<vector<int> >	       trks_exp_outerlayers         (new vector<int>		); 

  std::auto_ptr<vector<int> > vector_trks_nlayers     (new vector<int> );
  std::auto_ptr<vector<int> > vector_trks_nlayers3D   (new vector<int> );
  std::auto_ptr<vector<int> > vector_trks_nlayersLost (new vector<int> );
  std::auto_ptr<vector<float> > vector_trks_validFraction (new vector<float> );

  //indeces to the pvs
  std::auto_ptr<vector<int> > vector_trks_pvidx0    (new vector<int> );
  std::auto_ptr<vector<int> > vector_trks_pvidx1    (new vector<int> );

  std::auto_ptr<vector<int> > vector_trks_nLoops    (new vector<int> );



  ////////////////
  // Get Tracks //
  ////////////////

  Handle<View<reco::Track> > track_h;
  iEvent.getByLabel(tracksInputTag, track_h);
  if( !track_h.isValid() ) {
    LogInfo("OutputInfo") << " failed to retrieve track collection";
    LogInfo("OutputInfo") << " TrackMaker cannot continue...!";
    return;
  }


  /////////////////
  // Get B Field //
  /////////////////

  ESHandle<MagneticField> theMagField;
  iSetup.get<IdealMagneticFieldRecord>().get(theMagField);
  if( !theMagField.isValid() ) {
    LogInfo("OutputInfo") << " failed to retrieve the magnetic field";
    LogInfo("OutputInfo") << " TrackMaker cannot continue...!";
    return;
  }
  const MagneticField* bf = theMagField.product();
  
  
  ///////////////////
  // Get Beam Spot //
  ///////////////////

  Handle<LorentzVector> beamSpotH;
  iEvent.getByLabel(beamSpotTag, beamSpotH);
  const Point beamSpot = beamSpotH.isValid() ? Point(beamSpotH->x(), beamSpotH->y(), beamSpotH->z()) : Point(0, 0, 0);
  

  //////////////////////////
  // Get Tracker Geometry //
  //////////////////////////  
                                                                                                                                                                  
  ESHandle<TrackerGeometry> theG;
  iSetup.get<TrackerDigiGeometryRecord>().get(theG);
  
  //////////////////////////////
  // Get the primary vertices //
  //////////////////////////////

  Handle<reco::VertexCollection> vertexHandle;
  try {
    iEvent.getByLabel(primaryVertexInputTag_, vertexHandle);
  }
  catch ( cms::Exception& ex ) {
    LogError("VertexMakerError") << "Error! can't get the primary vertex";
  }
  const reco::VertexCollection *vertexCollection = vertexHandle.product();


  //////////////////////
  // Loop over Tracks //
  //////////////////////

  View<reco::Track>::const_iterator tracks_end = track_h->end();
  unsigned int iTIndex=-1;
  for (View<reco::Track>::const_iterator i = track_h->begin(); i != tracks_end; ++i) {

    iTIndex++;

    double corrd0    = beamSpotH.isValid() ? -1 * ( i->dxy(beamSpot) ) : i->d0();		           
    double corrd0phi = atan2( -1 * corrd0 * sin( i->phi() ), corrd0 * cos( i->phi() ) );           
    double corrz0    = beamSpotH.isValid() ? i->dz(beamSpot) : i->dz();			           

    vector_trks_trk_p4       ->push_back( LorentzVector( i->px(), i->py(), i->pz(), i->p() )       );
    vector_trks_vertex_p4    ->push_back( LorentzVector(i->vx(),i->vy(), i->vz(), 0.)              );
    vector_trks_d0           ->push_back( i->d0()                                                  );
    vector_trks_z0           ->push_back( i->dz()                                                  );
    vector_trks_d0corr       ->push_back( corrd0                                                   );
    vector_trks_d0corrPhi    ->push_back( corrd0phi                                                );
    vector_trks_z0corr       ->push_back( corrz0                                                   );
    vector_trks_chi2         ->push_back( i->chi2()                                                );
    vector_trks_ndof         ->push_back( i->ndof()                                                );
    vector_trks_validHits    ->push_back( i->numberOfValidHits()                                   );
    vector_trks_lostHits     ->push_back( i->numberOfLostHits()                                    );
    vector_trks_d0Err        ->push_back( i->d0Error()                                             );
    vector_trks_z0Err        ->push_back( i->dzError()                                             );
    vector_trks_ptErr        ->push_back( i->ptError()                                             );
    vector_trks_etaErr       ->push_back( i->etaError()                                            );
    vector_trks_phiErr       ->push_back( i->phiError()                                            );
    vector_trks_d0phiCov     ->push_back( -i->covariance(TrackBase::i_phi, TrackBase::i_dxy)	     );  // minus sign because we want cov(d0, phi) = cov(-dxy, phi)
    vector_trks_charge       ->push_back( i->charge()                                              );
    vector_trks_qualityMask  ->push_back( i->qualityMask()                                         );
    vector_trks_algo         ->push_back( i->algo()                                                );
    //vector_trks_validFraction->push_back( i->validFraction());
    
    vector_trks_nLoops       ->push_back( i->nLoops()                                              );



    //
    GlobalPoint  tpVertex   ( i->vx(), i->vy(), i->vz() );
    GlobalVector tpMomentum ( i->px(), i->py(), i->pz() );
    int tpCharge ( i->charge() );
    
    FreeTrajectoryState fts ( tpVertex, tpMomentum, tpCharge, bf);

    const float zdist  = 314.;
    const float radius = 130.;
    const float corner = 1.479;

    Plane::PlanePointer lendcap      = Plane::build( Plane::PositionType (0, 0, -zdist), Plane::RotationType () );    
    Plane::PlanePointer rendcap      = Plane::build( Plane::PositionType (0, 0,  zdist), Plane::RotationType () );
    Cylinder::CylinderPointer barrel = Cylinder::build( Cylinder::PositionType (0, 0, 0), Cylinder::RotationType (), radius);
    AnalyticalPropagator myAP (bf, alongMomentum, 2*M_PI);
    TrajectoryStateOnSurface tsos;    
        
    /*
    Trajectory State is at intersection of cylinder and track, 
      not state at the last hit on the track fit. Shouldn't matter that much.
      Not sure what happens for loopers. Caveat emptor!
    */
	  
    if( i->eta() < -corner ) {
      tsos = myAP.propagate( fts, *lendcap);
    }
    else if( fabs(i->eta()) < corner ) {
      tsos = myAP.propagate( fts, *barrel);
    }
    else if( i->eta() > corner ) {
      tsos = myAP.propagate( fts, *rendcap);
    }
    
    if(tsos.isValid()) {
      vector_trks_outer_p4->push_back( LorentzVector( tsos.globalMomentum().x(),
						      tsos.globalMomentum().y(),
						      tsos.globalMomentum().z(),
						      tsos.globalMomentum().mag() ) );
    }
    else {
      vector_trks_outer_p4->push_back( LorentzVector( 999., 0., 22004439., 22004440.) );
   }


    /////hit pattern
    if(i->extra().isAvailable()) {
      trks_inner_position ->push_back(LorentzVector(i->innerPosition().x(), i->innerPosition().y() , i->innerPosition().z(), 0 ));
      trks_outer_position ->push_back(LorentzVector(i->outerPosition().x(), i->outerPosition().y() , i->outerPosition().z(), 0 ));
    } else {
      trks_inner_position->push_back(LorentzVector(-9999., -9999., -9999., -9999.));    
      trks_outer_position->push_back(LorentzVector(-9999., -9999., -9999., -9999.));
    }
    
    const reco::HitPattern& pattern = i->hitPattern();    
    const reco::HitPattern& p_inner = i->trackerExpectedHitsInner();
    const reco::HitPattern& p_outer = i->trackerExpectedHitsOuter();
    trks_exp_innerlayers    -> push_back(p_inner.numberOfHits());
    trks_exp_outerlayers    -> push_back(p_outer.numberOfHits());   
    trks_valid_pixelhits ->push_back(pattern.numberOfValidPixelHits());
      trks_lost_pixelhits ->push_back(pattern.numberOfLostPixelHits());

      
    if(i->extra().isAvailable()) {
      bool valid_hit      = false;
      uint32_t hit_pattern; 
      int i_layer       = 1;
      int side = -1;
      bool pixel_hit   = false;
      bool strip_hit   = false;

      //int pixel_size;
      int pixel_sizeX;
      int pixel_sizeY;
      float pixel_charge;
      int det;
      int layer;

      typedef Ref<edmNew::DetSetVector<SiStripCluster>,SiStripCluster > ClusterRef;
      typedef Ref<edmNew::DetSetVector<SiPixelCluster>, SiPixelCluster > pixel_ClusterRef;


      for(trackingRecHit_iterator ihit = i->recHitsBegin(); 
	  ihit != i->recHitsEnd(); ++ihit){
	if(i_layer > 1) break;
	int k = ihit-i->recHitsBegin();
	hit_pattern = pattern.getHitPattern(k);
	valid_hit = pattern.validHitFilter(hit_pattern);
	pixel_hit = pattern.pixelHitFilter(hit_pattern);
	strip_hit = pattern.stripHitFilter(hit_pattern);
	side      = (int)pattern.getSide(hit_pattern);
	det       = (int)pattern.getSubStructure(hit_pattern);
	layer     = (int)pattern.getLayer(hit_pattern);
	if(!valid_hit) continue;
	if(pixel_hit){
	  const SiPixelRecHit *pixel_hit_cast = dynamic_cast<const SiPixelRecHit*>(&(**ihit));
	  assert(pixel_hit_cast != 0);
	  pixel_ClusterRef const& pixel_cluster = pixel_hit_cast->cluster();
	  //pixel_size   = (int)pixel_cluster->size(); 
	  pixel_sizeX  = (int)pixel_cluster->sizeX(); 
	  pixel_sizeY  = (int)pixel_cluster->sizeY(); 
	  pixel_charge = (float)pixel_cluster->charge();
	  if(i_layer == 1){
	    trks_layer1_sizerphi ->push_back(pixel_sizeX);
	    trks_layer1_sizerz   ->push_back(pixel_sizeY);
	    trks_layer1_charge   ->push_back(pixel_charge);
	    trks_layer1_det      ->push_back(det);
	    trks_layer1_layer    ->push_back(layer);
	    i_layer++;

	  }
	}
	else if (strip_hit){
	  const SiStripRecHit1D *strip_hit_cast = dynamic_cast<const SiStripRecHit1D*>(&(**ihit));
	  const SiStripRecHit2D *strip2d_hit_cast = dynamic_cast<const SiStripRecHit2D*>(&(**ihit));
	  ClusterRef cluster;
	  if(strip_hit_cast == NULL)
	    cluster = strip2d_hit_cast->cluster();
	  else 
	    cluster = strip_hit_cast->cluster();
	  int cluster_size   = (int)cluster->amplitudes().size();
	  int cluster_charge = 0;
	  double   cluster_weight_size = 0.0;
	  int max_strip_i = std::max_element(cluster->amplitudes().begin(),cluster->amplitudes().end())-cluster->amplitudes().begin();
	  for(int istrip = 0; istrip < cluster_size; istrip++){
	    cluster_charge += (int)cluster->amplitudes().at(istrip);
	    cluster_weight_size += (istrip-max_strip_i)*(istrip-max_strip_i)*(cluster->amplitudes().at(istrip));
	  }
	  cluster_weight_size = sqrt(cluster_weight_size/cluster_charge);
	  if(i_layer == 1){
	    if(side==0) 
	      {
		trks_layer1_sizerphi ->push_back(cluster_size);
		trks_layer1_sizerz   ->push_back(0);
	      }

	    else
	      {
		trks_layer1_sizerphi ->push_back(0);
		trks_layer1_sizerz   ->push_back(cluster_size);
	      } 
	    trks_layer1_charge   ->push_back(cluster_charge);
	    trks_layer1_det      ->push_back(det);
	    trks_layer1_layer    ->push_back(layer);
	    i_layer++;
	  }
	}
      }
      
    

    } else {
      
      trks_layer1_sizerphi->push_back(-9999);
      trks_layer1_sizerz   ->push_back(-9999);
      trks_layer1_charge   ->push_back(-9999);
      trks_layer1_det      ->push_back(-9999);
      trks_layer1_layer    ->push_back(-9999);

    }
    

    
    // *****************************************************
     vector_trks_nlayers    ->push_back( i->hitPattern().trackerLayersWithMeasurement() );
     vector_trks_nlayers3D  ->push_back( i->hitPattern().pixelLayersWithMeasurement() + i->hitPattern().numberOfValidStripLayersWithMonoAndStereo() );
     vector_trks_nlayersLost->push_back( i->hitPattern().trackerLayersWithoutMeasurement() );

     int iPV0 = -9999;
     int iPV1 = -9999;
     float wPV0 = -1;
     float wPV1 = -1;
     int ivIndex = -1;
     reco::TrackBaseRef trackBaseRef = track_h->refAt(iTIndex);
     if (trackBaseRef->px() != i->px()){
       LogError("WrongTrackRefMade")<<"Wrong conversion to track base ref";
     }
     //pick and fill the vertex with the highest and the second highest weight for the track
     for (reco::VertexCollection::const_iterator iV = vertexCollection->begin(); iV!= vertexCollection->end(); ++iV){
       ivIndex++;
       for(reco::Vertex::trackRef_iterator iT = iV->tracks_begin(); iT != iV->tracks_end(); ++iT){
	 const reco::TrackBaseRef& baseRef = *iT;
	 if (baseRef.key() == trackBaseRef.key()){
	   float wT = iV->trackWeight(baseRef);
	   //	   if (baseRef->px() != i->px()){
	   //	     LogError("WrongTrackRefMade")<<"Wrong conversion to track base ref from vtx";
	   //	   }
	   if (wT > wPV0){
	     wPV1 = wPV0;
	     iPV1 = iPV0;
	     wPV0 = wT;
	     iPV0 = ivIndex;
	   }
	   if (wT > wPV1 && wT != wPV0){
	     wPV1 = wT;
	     iPV1 = ivIndex;
	   }
	 }
       }
     }
     vector_trks_pvidx0->push_back(iPV0);
     vector_trks_pvidx1->push_back(iPV1);


  } // End loop on tracks

  // store vectors
  iEvent.put(vector_trks_trk_p4       , "trkstrkp4"             );
  iEvent.put(vector_trks_vertex_p4    , "trksvertexp4"          );
  iEvent.put(vector_trks_outer_p4     , "trksouterp4"           );
  iEvent.put(vector_trks_d0           , "trksd0"                );
  iEvent.put(vector_trks_d0corr       , "trksd0corr"            );
  iEvent.put(vector_trks_d0corrPhi    , "trksd0corrPhi"         );
  iEvent.put(vector_trks_z0           , "trksz0"                );
  iEvent.put(vector_trks_z0corr       , "trksz0corr"            );
  iEvent.put(vector_trks_chi2         , "trkschi2"              );
  iEvent.put(vector_trks_ndof         , "trksndof"              );
  iEvent.put(vector_trks_validHits    , "trksvalidHits"         );
  iEvent.put(vector_trks_lostHits     , "trkslostHits"          );
  iEvent.put(vector_trks_d0Err        , "trksd0Err"             );
  iEvent.put(vector_trks_z0Err        , "trksz0Err"             );
  iEvent.put(vector_trks_ptErr        , "trksptErr"             );
  iEvent.put(vector_trks_etaErr       , "trksetaErr"            );
  iEvent.put(vector_trks_phiErr       , "trksphiErr"            );
  iEvent.put(vector_trks_d0phiCov     , "trksd0phiCov"          );
  iEvent.put(vector_trks_charge       , "trkscharge"            );
  iEvent.put(vector_trks_algo         , "trksalgo"              );

  iEvent.put(vector_trks_qualityMask  , "trksqualityMask"       );

  iEvent.put(vector_trks_nlayers    , "trksnlayers"    );
  iEvent.put(vector_trks_nlayers3D  , "trksnlayers3D"  );
  iEvent.put(vector_trks_nlayersLost, "trksnlayersLost");

  //Hit Pattern Information

  iEvent.put(trks_inner_position  , "trksinnerposition"  );
  iEvent.put(trks_outer_position  , "trksouterposition"  );
  iEvent.put(trks_valid_pixelhits , "trksvalidpixelhits" );
  iEvent.put(trks_lost_pixelhits  , "trkslostpixelhits"  );
  iEvent.put(trks_layer1_layer    , "trkslayer1layer"    );
  iEvent.put(trks_layer1_sizerphi , "trkslayer1sizerphi" );
  iEvent.put(trks_layer1_sizerz   , "trkslayer1sizerz"   );
  iEvent.put(trks_layer1_charge   , "trkslayer1charge"   );
  iEvent.put(trks_layer1_det      , "trkslayer1det"      );
  iEvent.put(trks_exp_innerlayers , "trksexpinnerlayers" );
  iEvent.put(trks_exp_outerlayers , "trksexpouterlayers" );
  iEvent.put(vector_trks_validFraction, "trksvalidFraction");  

  iEvent.put(vector_trks_pvidx0, "trkspvidx0");
  iEvent.put(vector_trks_pvidx1, "trkspvidx1");

  iEvent.put(vector_trks_nLoops, "trksnLoops");

}

// ------------ method called once each job just before starting event loop  ------------
void TrackMaker::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void TrackMaker::endJob() {
}

double TrackMaker::calculateTrkIsolation(const edm::View<reco::Track> *tracks, const reco::Track &input, const Point& beamSpot) {
  //
  // calculate track isolation following electron isolation definition in ElectronMaker.cc
  //
  // sum up all track.pt around track if track fulfills:
  // dR < 0.3
  // dR > 0.01
  // d0 < 0.1
  // dZ < 0.5
  // pT >= 1.0
  // nHits > 7

  double sumPt = 0;

  edm::View<reco::Track>::const_iterator tracks_end = tracks->end();

  for ( edm::View<reco::Track>::const_iterator i = tracks->begin(); i != tracks_end; ++i) {

    double corrz0 = i->dz(beamSpot);
    if ( corrz0 > tkVtxDMax_ ) continue;

    double pt = i->pt();
    if (  pt < ptMin_ ) continue;

    if ( i->numberOfValidHits() <= nHits_ ) continue;

    LorentzVector loopTrack( i->px(), i->py(), i->pz(), i->p() );
    LorentzVector inputTrack( input.px(), input.py(), input.pz(), input.p() );
    double dR = ROOT::Math::VectorUtil::DeltaR(loopTrack, inputTrack);
    if (dR < dRConeMin_ ) continue;
    if (dR > dRConeMax_ ) continue;

    double inputCorrz0 = input.dz(beamSpot);
    double dZ          = fabs( corrz0 - inputCorrz0 );
    if ( dZ >= vtxDiffZMax_) continue;
    sumPt += pt;
  }
  
  return sumPt;
}

//define this as a plug-in
DEFINE_FWK_MODULE(TrackMaker);
