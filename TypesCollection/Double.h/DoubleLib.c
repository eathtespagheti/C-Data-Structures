#include "DoubleLib.h"
#include "Double.c"

DoubleLib newDoubleLib() {
    DoubleLib l;

    l.free     = &Double__free;
    l.new      = &Double__new;
    l.setValue = &Double__setValue;
    l.getValue = &Double__getValue;

    return l;
}