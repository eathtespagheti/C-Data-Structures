#ifndef NUMBERFUNCTIONS_H
#define NUMBERFUNCTIONS_H

// * DNT
#include "Number.h"

typedef struct NumberFunctionsStruct {
    void (*setDouble)(number n, double value);
    void (*setFloat)(number n, float value);
    void (*setInt)(number n, int value);
    double (*getDouble)(number n);
    float (*getFloat)(number n);
    int (*getInt)(number n);
    double (*getValue)(number n);
    int (*getType)(number n);
    void (*freeNumber)(number n);
    number (*newNumber)(int type);
} NumberFunctions;

// * EDNT

NumberFunctions newNumberFunctions();

#endif // ! NUMBERFUNCTIONS_H
