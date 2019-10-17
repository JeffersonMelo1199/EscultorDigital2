#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The putSphere class
 */

class PutSphere: public FiguraGeometrica{
protected:
    int xcenter_, ycenter_, zcenter_, radius_;
    float r_, g_, b_, a_;
public:

    /**
         * @brief putSphere
         */

    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    virtual ~PutSphere();
    void draw(Sculptor &des);
};
#endif // PUTSPHERE_H
