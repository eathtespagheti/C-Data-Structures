#include "FloatLib.h"
#include "Float.c"

FloatLib newFloatLib() {
    FloatLib l;

    l.free     = &Float__free;
    l.new      = &Float__new;
    l.setValue = &Float__setValue;
    l.getValue = &Float__getValue;

    return l;
}