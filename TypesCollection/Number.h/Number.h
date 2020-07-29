#ifndef NUMBER_H
#define NUMBER_H

// * DNT
#include <stdlib.h>

typedef struct Number {
    union {
        int i;
        float f;
        double d;
    };

    int __TYPE;
} * number;

// * EDNT

#endif // ! NUMBER_H
