#ifndef INTEGERSLIB_H
#define INTEGERSLIB_H

// * DNT
#include "Integer.h"

typedef struct IntegersLibStruct {
    void (*set)(Integer, int value);
    int (*get)(Integer);
    void (*free)(Integer);
    Integer (*new)(int type);
    Integer *(*arrayConversion)(int *array, int length);
    void (*print)(Integer i);
    Integer (*parse)(char *s);
} IntegersLib;

// * EDNT

IntegersLib newIntegerLib();

#endif // ! INTEGERSLIB_H
