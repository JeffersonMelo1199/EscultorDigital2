#include "putbox.h"



PutBox::PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float _r, float _g, float _b, float _a){
    x0_=x0;y0_=y0;z0_=z0;
    x1_=x1;y1_=y1;z1_=z1;
    r_=_r;g_=_g;b_=_b;a_=_a;
}


PutBox::~PutBox(){

}

void PutBox::draw(Sculptor &des){
    int i,j,k;
    for(i = x0_; i<=x1_; i++){
        for(j = y0_; j<=y1_; j++){
            for(k = z0_; k<=z1_;k++){
               des.SetColor(r_, g_, b_, a_);
               des.PutVoxel(i,j,k);
            }
        }
    }
}
