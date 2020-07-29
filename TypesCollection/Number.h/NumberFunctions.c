#include "NumberFunctions.h"
#include "Number.c"

NumberFunctions newNumberFunctions() {
    NumberFunctions nf;
    nf.freeNumber = &freeNumber;
    nf.getDouble  = &getDouble;
    nf.getFloat   = &getFloat;
    nf.getInt     = &getInt;
    nf.getType    = &getType;
    nf.getValue   = &getValue;
    nf.newNumber  = &newNumber;
    nf.setDouble  = &setDouble;
    nf.setFloat   = &setFloat;
    nf.setInt     = &setInt;
    return nf;
}