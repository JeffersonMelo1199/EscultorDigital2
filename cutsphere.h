#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The cutSphere class
 */

class CutSphere: public FiguraGeometrica{
protected:
    int xcenter_, ycenter_, zcenter_, radius_;
public:

    /**
        * @brief cutSphere
        */

    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    virtual ~CutSphere();
    void draw(Sculptor &des);
};

#endif // CUTSPHERE_H
