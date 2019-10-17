#include "putvoxel.h"



PutVoxel::PutVoxel(int x, int y, int z, float _r, float _g, float _b, float _a){
    x_=x; y_=y; z_=z;
    r_=_r; g_=_g; b_=_b; a_=_a;
}

PutVoxel::~PutVoxel(){

}

void PutVoxel :: draw(Sculptor &des){
    des.SetColor(r_, g_, b_, a_);
    des.PutVoxel(x_, y_, z_);
}


