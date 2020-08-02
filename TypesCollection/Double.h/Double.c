#include "Double.h"

void Double__setValue(Double i, double value) { *i = value; }

double Double__getValue(Double i) { return (double)*i; }

Double Double__new(double value) {
    Double i = malloc(sizeof(*i));
    Double__setValue(i, value);
    return i;
}

void Double__free(Double i) { free(i); }