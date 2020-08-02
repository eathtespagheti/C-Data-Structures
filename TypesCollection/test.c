#include "Integer.h/IntegerLib.h"
#include "Number.h/NumberFunctions.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    NumberFunctions nf = newNumberFunctions();

    Number Number = nf.new(0);
    printf("Value now it's %d of type %d\n", nf.getInt(Number),
           nf.getType(Number));

    nf.setInt(Number, 5);
    printf("Value now it's %d of type %d\n", nf.getInt(Number),
           nf.getType(Number));

    nf.setFloat(Number, 8.65);
    printf("Value now it's %f of type %d\n", nf.getFloat(Number),
           nf.getType(Number));

    nf.setDouble(Number, 8.65);
    printf("Value now it's %f of type %d\n", nf.getFloat(Number),
           nf.getType(Number));

    nf.free(Number);

    IntegerLib integers = newIntegerLib();

    Integer n = integers.new(0);
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
