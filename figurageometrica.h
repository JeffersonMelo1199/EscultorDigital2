#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/**
 * @brief The FiguraGeometrica class
 */

class FiguraGeometrica{
public:

    /**
        * @brief FiguraGeometrica
        */

    FiguraGeometrica();

    /**
         * @brief draw
         */

    virtual void draw(Sculptor &des)=0;
    virtual ~FiguraGeometrica();
};

#endif // FIGURAGEOMETRICA_H
