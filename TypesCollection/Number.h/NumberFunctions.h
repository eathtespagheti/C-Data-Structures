#ifndef NUMBERFUNCTIONS_H
#define NUMBERFUNCTIONS_H

// * DNT
#include "Number.h"

typedef struct NumberFunctionsStruct {
    void (*setDouble)(Number n, double value);
    void (*setFloat)(Number n, float value);
    void (*setInt)(Number n, int value);
    double (*getDouble)(Number n);
    float (*getFloat)(Number n);
    int (*getInt)(Number n);
    double (*getValue)(Number n);
    int (*getType)(Number n);
    void (*free)(Number n);
    Number (*new)(int type);
} NumberFunctions;

// * EDNT

NumberFunctions newNumberFunctions();

#endif // ! NUMBERFUNCTIONS_H
