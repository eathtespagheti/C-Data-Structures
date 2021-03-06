#include "NumberFunctions.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    NumberFunctions nf = newNumberFunctions();

    Number n = nf.new(0);
    printf("Value now it's %d of type %d\n", nf.getInt(n), nf.getType(n));

    nf.setInt(n, 5);
    printf("Value now it's %d of type %d\n", nf.getInt(n), nf.getType(n));

    nf.setFloat(n, 8.65);
    printf("Value now it's %f of type %d\n", nf.getFloat(n), nf.getType(n));

    nf.setDouble(n, 8.65);
    printf("Value now it's %f of type %d\n", nf.getFloat(n), nf.getType(n));

    nf.free(n);

    return 0;
}
