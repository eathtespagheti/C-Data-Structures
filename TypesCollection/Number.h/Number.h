#ifndef NUMBER_H
#define NUMBER_H

// * DNT
#include <stdlib.h>

typedef struct Number {
    union {
        int integerValue;
        float floatValue;
        double doubleValue;
    };

    int __TYPE;
} * Number;

// * EDNT

#endif // ! NUMBER_H
