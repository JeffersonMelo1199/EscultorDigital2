#include "cutvoxel.h"


CutVoxel::CutVoxel(int x, int y, int z){
    x_=x; y_=y; z_=z;
}

CutVoxel::~CutVoxel(){

}

void CutVoxel::draw(Sculptor &des){
    des.CutVoxel(x_, y_, z_);
}
