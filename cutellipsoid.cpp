#include "cutellipsoid.h"
#include <cmath>

CutEllipsoid::CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    xcenter_= xcenter; ycenter_=ycenter; zcenter_ = zcenter;
       rx_=rx;ry_=ry;rz_=rz;
}

CutEllipsoid::~CutEllipsoid(){

}

void CutEllipsoid::draw(Sculptor &des){
    int i,j,k;
    for(i = xcenter_-rx_; i<xcenter_+rx_; i++){
        for(j = ycenter_-ry_; j<ycenter_+ry_; j++){
            for(k = zcenter_-rz_; k<zcenter_+rz_; k++){
                if(rx_ != 0 && ry_ != 0 && rz_ != 0){
                    if((((float)pow((i-xcenter_),2)/(float)pow(rx_,2))+((float)pow((j-ycenter_),2)/(float)pow(ry_,2))+((float)pow((k-zcenter_),2)/(float)pow(rz_,2)))<=1.0){
                        des.CutVoxel(i,j,k);
                    }
                }
            }
        }
    }
}
