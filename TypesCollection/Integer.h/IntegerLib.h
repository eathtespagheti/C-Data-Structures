#ifndef INTEGERLIB_H
#define INTEGERLIB_H

// * DNT
#include "Integer.h"

typedef struct IntegerLibStruct {
    void (*setValue)(Integer, int value);
    int (*getValue)(Integer);
    void (*free)(Integer);
    Integer (*new)(int type);
} IntegerLib;

// * EDNT

IntegerLib newIntegerLib();

#endif // ! INTEGERLIB_H
