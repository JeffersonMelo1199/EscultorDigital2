#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The cutEllipsoid class
 */

class CutEllipsoid:public FiguraGeometrica{
protected:
    int xcenter_,ycenter_,zcenter_;
    int rx_,ry_,rz_;
public:

    /**
           * @brief cutEllipsoid
           */

    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    virtual ~CutEllipsoid();
    void draw(Sculptor &des);
};



#endif // CUTELLIPSOID_H
