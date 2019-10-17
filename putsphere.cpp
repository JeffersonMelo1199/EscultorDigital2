#include "putsphere.h"
#include <cmath>



PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a){
    xcenter_=xcenter; ycenter_=ycenter; zcenter_=zcenter; radius_=radius;
    r_=r; g_=g; b_=b; a_=a;
}

PutSphere::~PutSphere(){

}

void PutSphere::draw(Sculptor &des){
    int i,j,k;
    for(i = xcenter_-radius_; i<xcenter_+radius_; i++){
        for(j = ycenter_-radius_; j<ycenter_+radius_; j++){
            for(k = zcenter_-radius_; k<zcenter_+radius_; k++){
                // utilizando a equação da esfera para adicionar os voxel's
                if((pow((i-xcenter_),2)+pow((j-ycenter_),2)+pow((k-zcenter_),2))<=pow(radius_,2)){
                    des.SetColor(r_, g_, b_, a_);
                    des.PutVoxel(i,j,k);
                }
            }
        }
    }
}
