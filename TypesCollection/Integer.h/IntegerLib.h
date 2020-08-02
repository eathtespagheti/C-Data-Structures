#ifndef INTEGERLIB_H
#define INTEGERLIB_H

// * DNT
#include "Integer.h"

typedef struct IntegerLibStruct {
    void (*setDouble)(integer, double value);
    void (*setFloat)(integer, float value);
    void (*setInt)(integer, int value);
    double (*getDouble)(integer);
    float (*getFloat)(integer);
    int (*getInt)(integer);
    int (*getType)(integer);
    void (*free)(integer);
    integer (*new)(int type);
} IntegerLib;

// * EDNT

IntegerLib newIntegerLib();

#endif // ! INTEGERLIB_H
