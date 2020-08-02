#include "IntegerLib.h"
#include "Integer.c"

IntegerLib newIntegerLib() {
    IntegerLib l;

    l.free      = &freeInt;
    l.getDouble = &getDouble;
    l.getFloat  = &getFloat;
    l.getInt    = &getInt;
    l.getType   = &getType;
    l.new       = &newInt;
    l.setDouble = &setDouble;
    l.setFloat  = &setFloat;
    l.setInt    = &setInt;

    return l;
}