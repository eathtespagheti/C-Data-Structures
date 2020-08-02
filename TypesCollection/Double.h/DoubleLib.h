#ifndef DOUBLELIB_H
#define DOUBLELIB_H

// * DNT
#include "Double.h"

typedef struct DoubleLib {
    void (*setValue)(Double, double value);
    double (*getValue)(Double);
    void (*free)(Double);
    Double (*new)(double type);
} DoubleLib;
// * EDNT

DoubleLib newDoubleLib();

#endif // ! DOUBLELIB_H
