a#include "DoubleLib.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    DoubleLib integers = newDoubleLib();

    Double n = integers.new(0);
    printf("Value now it's %lf of type Double\n", integers.getValue(n));

    integers.free(n);

    return 0;
}
