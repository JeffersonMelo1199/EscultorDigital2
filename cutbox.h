#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief The cutBox class
 */

class CutBox:public FiguraGeometrica{
protected:
    int x1_,y1_,z1_,x0_,y0_,z0_;
public:

    /**
         * @brief cutBox
         */

   CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
   virtual ~CutBox();

   /**
       * @brief draw
       */

   void draw(Sculptor &des);
};

#endif // CUTBOX_H
