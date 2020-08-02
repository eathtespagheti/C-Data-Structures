#include "IntegerLib.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    IntegerLib integers = newIntegerLib();

    integer n = integers.new(0);
    printf("Value now it's %d of type %d\n", integers.getInt(n),
           integers.getType(n));

    integers.setInt(n, 5);
    printf("Value now it's %d of type %d\n", integers.getInt(n),
           integers.getType(n));

    integers.setFloat(n, 8.65);
    printf("Value now it's %f of type %d\n", integers.getFloat(n),
           integers.getType(n));

    integers.setDouble(n, 8.65);
    printf("Value now it's %f of type %d\n", integers.getFloat(n),
           integers.getType(n));

    integers.free(n);

    return 0;
}
