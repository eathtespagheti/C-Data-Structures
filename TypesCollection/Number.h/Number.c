#include "Number.h"

/*
Generate a new number, type it's specified with the following parameters
0: Integer
1: Float
2: Double
*/
Number Number__new(int type) {
    Number n  = malloc(sizeof(*n));
    n->__TYPE = type;
    switch (type) {
        case 0: n->integerValue = 0; break;

        case 1: n->floatValue = 0; break;

        case 2: n->doubleValue = 0; break;

        default: break;
    }
    return n;
}

/*
Free memory allocated for number n
*/
void Number__free(Number n) {
    if (n != NULL) { free(n); }
}

int Number__getType(Number n) { return n->__TYPE; }

/*
Return number value, if unset return 0
*/
double Number__getValue(Number n) {
    switch (Number__getType(n)) {
        case 0: return (double)n->integerValue;

        case 1: return (double)n->floatValue;

        case 2: return (double)n->doubleValue;

        default: return 0;
    }
}

int Number__getInt(Number n) { return (int)Number__getValue(n); }

float Number__getFloat(Number n) { return (float)Number__getValue(n); }

double getDoubleNumber(Number n) { return (double)Number__getValue(n); }

void Number__setInt(Number n, int value) {
    n->__TYPE       = 0;
    n->integerValue = value;
}

void Number__setFloat(Number n, float value) {
    n->__TYPE     = 1;
    n->floatValue = value;
}

void Number__setDouble(Number n, double value) {
    n->__TYPE      = 2;
    n->doubleValue = value;
}
