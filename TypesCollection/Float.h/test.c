#include "FloatLib.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    FloatLib integers = newFloatLib();

    Float n = integers.new(0);
    printf("Value now it's %f of type Float\n", integers.getValue(n));

    integers.free(n);

    return 0;
}
