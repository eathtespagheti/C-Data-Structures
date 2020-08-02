#include "Integer.h"

void Integer__setInt(integer i, int value) { *i = value; }

void Integer__setDouble(integer i, double value) { *i = (int)value; }

void Integer__setFloat(integer i, float value) { *i = (int)value; }

int Integer__getInt(integer i) { return (int)*i; }

double Integer__getDouble(integer i) { return (double)Integer__getInt(i); }
float Integer__getFloat(integer i) { return (float)Integer__getInt(i); }
int Integer__getValue(integer i) { return Integer__getInt(i); }

int Integer__getType() { return 0; }

integer Integer__new(int value) {
    integer i = malloc(sizeof(*i));
    Integer__setInt(i, value);
    return i;
}

void Integer__free(integer i) { free(i); }