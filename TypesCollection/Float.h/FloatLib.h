#ifndef FLOATLIB_H
#define FLOATLIB_H

// * DNT
#include "Float.h"

typedef struct FloatLib {
    void (*setValue)(Float, float value);
    float (*getValue)(Float);
    void (*free)(Float);
    Float (*new)(float type);
} FloatLib;
// * EDNT

FloatLib newFloatLib();

#endif // ! FLOATLIB_H
