#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The putEllipsoid class
 */

class PutEllipsoid: public FiguraGeometrica{
protected:
    int xcenter_,  ycenter_,  zcenter_, rx_, ry_, rz_;
    float r_, g_, b_, a_;
public:

    /**
        * @brief putEllipsoid
        */

    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    virtual ~PutEllipsoid();
    void draw(Sculptor &des);

};

#endif // PUTELLIPSOID_H
