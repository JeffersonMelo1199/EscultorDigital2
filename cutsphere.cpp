#include "cutsphere.h"
#include <cmath>


 CutSphere::CutSphere(int xcenter, int ycenter, int zcenter, int radius){
    xcenter_=xcenter; ycenter_=ycenter; zcenter_=zcenter; radius_=radius;
}

CutSphere::~CutSphere(){

}

void CutSphere::draw(Sculptor &des){
    int i,j,k;
    for(i = xcenter_-radius_; i<xcenter_+radius_; i++){
        for(j = ycenter_-radius_; j<ycenter_+radius_; j++){
            for(k = zcenter_-radius_; k<zcenter_+radius_; k++){
                // utilizando a equação da esfera para adicionar os voxel's
                if((pow((i-xcenter_),2)+pow((j-ycenter_),2)+pow((k-zcenter_),2))<=pow(radius_,2)){
                    des.CutVoxel(i,j,k);
                }
            }
        }
    }
}
