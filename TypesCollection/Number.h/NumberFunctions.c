#include "NumberFunctions.h"
#include "Number.c"

NumberFunctions newNumberFunctions() {
    NumberFunctions nf;
    nf.new       = &Number__new;
    nf.getDouble = &getDoubleNumber;
    nf.getFloat  = &Number__getFloat;
    nf.getInt    = &Number__getInt;
    nf.getType   = &Number__getType;
    nf.getValue  = &Number__getValue;
    nf.setDouble = &Number__setDouble;
    nf.setFloat  = &Number__setFloat;
    nf.setInt    = &Number__setInt;
    nf.free      = &Number__free;
    return nf;
}