#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The cutVoxel class
 */

class CutVoxel: public FiguraGeometrica{
protected:
    int x_, y_, z_;
public:

    /**
        * @brief cutVoxel
        */

    CutVoxel(int x, int y, int z);
    virtual ~CutVoxel();
    void draw(Sculptor &des);
};

#endif // CUTVOXEL_H
