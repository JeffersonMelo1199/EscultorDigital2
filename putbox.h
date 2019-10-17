#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The putBox class
 */

class PutBox: public FiguraGeometrica{
protected:
    int x0_, x1_, y0_, y1_, z0_, z1_;
    float r_, g_, b_, a_;
public:

    /**
         * @brief putBox
         */

    PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float _r, float _g, float _b, float _a);
    virtual ~PutBox();
    void draw(Sculptor &des);
};
#endif // PUTBOX_H
