#include "IntegerLib.h"
#include "Integer.c"

IntegerLib newIntegerLib() {
    IntegerLib l;

    l.free     = &Integer__free;
    l.new      = &Integer__new;
    l.setValue = &Integer__setValue;
    l.getValue = &Integer__getValue;

    return l;
}