#include "Integer.h"

void setInt(integer i, int value) { *i = value; }

void setDouble(integer i, double value) { *i = (int)value; }

void setFloat(integer i, float value) { *i = (int)value; }

int getInt(integer i) { return (int)*i; }

double getDouble(integer i) { return (double)getInt(i); }
float getFloat(integer i) { return (float)getInt(i); }
int getValue(integer i) { return getInt(i); }

int getType() { return 0; }

integer newInt(int value) {
    integer i = malloc(sizeof(*i));
    setInt(i, value);
    return i;
}

void freeInt(integer i) { free(i); }