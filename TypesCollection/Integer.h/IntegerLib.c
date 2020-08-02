#include "IntegerLib.h"
#include "Integer.c"

IntegerLib newIntegerLib() {
    IntegerLib l;

    l.free      = &Integer__free;
    l.getDouble = &Integer__getDouble;
    l.getFloat  = &Integer__getFloat;
    l.getInt    = &Integer__getInt;
    l.getType   = &Integer__getType;
    l.new       = &Integer__new;
    l.setDouble = &Integer__setDouble;
    l.setFloat  = &Integer__setFloat;
    l.setInt    = &Integer__setInt;

    return l;
}