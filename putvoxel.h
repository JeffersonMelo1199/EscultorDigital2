#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The putVoxel class
 */

class PutVoxel: public FiguraGeometrica{
protected:
    int x_, y_, z_;
    float r_, g_, b_, a_;
public:

    /**
         * @brief putVoxel
         */

    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    virtual ~PutVoxel();
    void draw(Sculptor &des);
};


#endif // PUTVOXEL_H
