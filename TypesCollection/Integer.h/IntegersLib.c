#include "IntegersLib.h"
#include "Integer.c"

Integer *arrayConversion(int *array, int length) {
    Integer *newArray = calloc(length, sizeof(*newArray));

    for (size_t i = 0; i < length; i++) {
        newArray[i] = Integer__new(array[i]);
    }

    return newArray;
}

IntegersLib newIntegerLib() {
    IntegersLib l;

    l.free            = Integer__free;
    l.new             = Integer__new;
    l.set             = Integer__set;
    l.get             = Integer__get;
    l.arrayConversion = arrayConversion;
    l.print           = Integer__print;
    l.parse           = Integer__parse;

    return l;
}