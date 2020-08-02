#ifndef INTEGERLIB_H
#define INTEGERLIB_H

// * DNT
#include "Integer.h"

typedef struct IntegerLibStruct {
    void (*setDouble)(Integer, double value);
    void (*setFloat)(Integer, float value);
    void (*setInt)(Integer, int value);
    double (*getDouble)(Integer);
    float (*getFloat)(Integer);
    int (*getInt)(Integer);
    int (*getType)(Integer);
    void (*free)(Integer);
    Integer (*new)(int type);
} IntegerLib;

// * EDNT

IntegerLib newIntegerLib();

#endif // ! INTEGERLIB_H
