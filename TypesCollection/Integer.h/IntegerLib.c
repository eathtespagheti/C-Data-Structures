#include "IntegerLib.h"
#include "Integer.c"

Integer *arrayConversion(int *array, int length) {
    Integer *newArray = calloc(length, sizeof(*newArray));

    for (size_t i = 0; i < length; i++) {
        newArray[i] = Integer__new(array[i]);
    }

    return newArray;
}

IntegerLib newIntegerLib() {
    IntegerLib l;

    l.free            = &Integer__free;
    l.new             = &Integer__new;
    l.setValue        = &Integer__setValue;
    l.getValue        = &Integer__getValue;
    l.arrayConversion = &arrayConversion;

    return l;
}