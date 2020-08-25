#include "IntegersLib.h"
#include <stdio.h>
IntegersLib Integers;

int main(int argc, char const *argv[]) {
    Integers = newIntegerLib();

    Integer n = Integers.new(0);
    printf("Value now it's %d of type Integer\n", Integers.get(n));

    int array[]     = {1, 2, 3, 4, 5};
    Integer *array2 = Integers.arrayConversion(array, 5);

    for (size_t i = 0; i < 5; i++) {
        printf("Original value it's %d, referenced value it's %d\n", array[i],
               Integers.get(array2[i]));
    }

    for (size_t i = 0; i < 5; i++) {
        Integers.free(array2[i]);
    }
    
    free(array2);
    Integers.free(n);

    return 0;
}
