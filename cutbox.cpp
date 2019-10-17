#include "cutbox.h"



CutBox::CutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    x1_= x1; y1_= y1; z1_= z1;
    x0_= x0; y0_= y0; z0_= z0;
}

CutBox::~CutBox(){

}

void CutBox::draw(Sculptor &des){
    int i,j,k;
    // verificação das dimensões atribuida.
    for(i = x0_; i<=x1_; i++){
        for(j = y0_; j<=y1_; j++){
            for(k = z0_; k<=z1_;k++){
                des.CutVoxel(i,j,k);
            }
        }
    }
}
