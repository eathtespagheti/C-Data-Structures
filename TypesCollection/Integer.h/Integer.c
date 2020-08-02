#include "Integer.h"

void Integer__setInt(Integer i, int value) { *i = value; }

void Integer__setDouble(Integer i, double value) { *i = (int)value; }

void Integer__setFloat(Integer i, float value) { *i = (int)value; }

int Integer__getInt(Integer i) { return (int)*i; }

double Integer__getDouble(Integer i) { return (double)Integer__getInt(i); }
float Integer__getFloat(Integer i) { return (float)Integer__getInt(i); }
int Integer__getValue(Integer i) { return Integer__getInt(i); }

int Integer__getType() { return 0; }

Integer Integer__new(int value) {
    Integer i = malloc(sizeof(*i));
    Integer__setInt(i, value);
    return i;
}

void Integer__free(Integer i) { free(i); }