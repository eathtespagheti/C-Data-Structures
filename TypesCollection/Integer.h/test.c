#include "IntegerLib.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    IntegerLib integers = newIntegerLib();

    Integer n = integers.new(0);
    printf("Value now it's %d of type Integer\n", integers.getValue(n));

    integers.free(n);

    return 0;
}
