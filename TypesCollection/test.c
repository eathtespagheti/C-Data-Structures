#include "Integer.h/IntegerLib.h"
#include "Number.h/NumberFunctions.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    NumberFunctions nf = newNumberFunctions();

    number number = nf.new(0);
    printf("Value now it's %d of type %d\n", nf.getInt(number),
           nf.getType(number));

    nf.setInt(number, 5);
    printf("Value now it's %d of type %d\n", nf.getInt(number),
           nf.getType(number));

    nf.setFloat(number, 8.65);
    printf("Value now it's %f of type %d\n", nf.getFloat(number),
           nf.getType(number));

    nf.setDouble(number, 8.65);
    printf("Value now it's %f of type %d\n", nf.getFloat(number),
           nf.getType(number));

    nf.free(number);

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
