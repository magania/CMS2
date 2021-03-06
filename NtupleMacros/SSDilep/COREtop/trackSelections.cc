#include <math.h>
#include "CMS2.h"
#include "trackSelections.h"

// return a pair of d0, d0err with respect to a primary vertex
std::pair<double, double> trks_d0_pv (int itrk, int ipv)
{
     const double bx = cms2.vtxs_position().at(ipv).x();
     const double by = cms2.vtxs_position().at(ipv).y();
     // assume the layout of the covariance matrix is (Vxx, Vxy, Vxz)
     //						      (Vyx, Vyy, ...)
     const double vxx = cms2.vtxs_covMatrix().at(ipv).at(0);
     const double vxy = cms2.vtxs_covMatrix().at(ipv).at(1);
     const double vyy = cms2.vtxs_covMatrix().at(ipv).at(4);
     const double phi = cms2.trks_trk_p4().at(itrk).phi();
     const double d0vtx = cms2.trks_d0().at(itrk) - bx * sin(phi) + by * cos(phi);
     const double d0err = cms2.trks_d0Err().at(itrk);
     const double phierr = cms2.trks_phiErr().at(itrk);
     const double d0phicov = cms2.trks_d0phiCov().at(itrk);
     // we will let the optimizer take care of subexpression
     // elimination for this one...
     const double d0err2vtx = d0err * d0err 
	  - 2 * (bx * cos(phi) + by * sin(phi)) * d0phicov
	  + (bx * cos(phi) + by * sin(phi)) * (bx * cos(phi) + by * sin(phi)) * phierr * phierr
	  + sin(phi) * sin(phi) * vxx + cos(phi) * cos(phi) * vyy
	  - 2 * sin(phi) * cos(phi) * vxy;
     if (d0err2vtx >= 0) 
	  return std::pair<double, double>(d0vtx, sqrt(d0err2vtx));
     std::cerr << "Oh no!  sigma^2(d0corr) < 0!" << std::endl;
     return std::pair<double, double>(d0vtx, -sqrt(-d0err2vtx));
}

//----------------------------------------------------------------
// Simple function that tells you whether or not a track passed 
// a particular quality flag.
//----------------------------------------------------------------
bool isTrackQuality( int index, int cuts ) {
     return ( ( cms2.trks_qualityMask().at(index) & cuts ) == cuts );
}
