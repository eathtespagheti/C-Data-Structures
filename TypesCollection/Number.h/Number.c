#include "Number.h"

/*
Generate a new number, type it's specified with the following parameters
0: Integer
1: Float
2: Double
*/
number newNumber(int type) {
    number n  = malloc(sizeof(*n));
    n->__TYPE = type;
    switch (type) {
        case 0: n->i = 0; break;

        case 1: n->f = 0; break;

        case 2: n->d = 0; break;

        default: break;
    }
    return n;
}

/*
Free memory allocated for number n
*/
void freeNumber(number n) {
    if (n != NULL) { free(n); }
}

int getType(number n) { return n->__TYPE; }

/*
Return number value, if unset return 0
*/
double getValue(number n) {
    switch (getType(n)) {
        case 0: return (double)n->i;

        case 1: return (double)n->f;

        case 2: return (double)n->d;

        default: return 0;
    }
}

int getInt(number n) { return (int)getValue(n); }

float getFloat(number n) { return (float)getValue(n); }

double getDouble(number n) { return (double)getValue(n); }

void setInt(number n, int value) {
    n->__TYPE = 0;
    n->i      = value;
}

void setFloat(number n, float value) {
    n->__TYPE = 1;
    n->f      = value;
}

void setDouble(number n, double value) {
    n->__TYPE = 2;
    n->d      = value;
}
