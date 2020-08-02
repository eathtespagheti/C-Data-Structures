#include "Float.h"

void Float__setValue(Float i, float value) { *i = value; }

float Float__getValue(Float i) { return (float)*i; }

Float Float__new(float value) {
    Float i = malloc(sizeof(*i));
    Float__setValue(i, value);
    return i;
}

void Float__free(Float i) { free(i); }