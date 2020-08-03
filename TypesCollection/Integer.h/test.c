#include "IntegerLib.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    IntegerLib integers = newIntegerLib();

    Integer n = integers.new(0);
    printf("Value now it's %d of type Integer\n", integers.getValue(n));

    int array[]     = {1, 2, 3, 4, 5};
    Integer *array2 = integers.arrayConversion(array, 5);

    for (size_t i = 0; i < 5; i++) {
        printf("Original value it's %d, referenced value it's %d\n", array[i],
               integers.getValue(array2[i]));
    }

    for (size_t i = 0; i < 5; i++) {
        integers.free(array2[i]);
    }
    free(array2);
    integers.free(n);

    return 0;
}
