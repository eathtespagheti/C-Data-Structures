#include "Integer.h"

void Integer__set(Integer i, int value) { *i = value; }

int Integer__get(Integer i) { return (int)*i; }

Integer Integer__new(int value) {
    Integer i = malloc(sizeof(*i));
    Integer__set(i, value);
    return i;
}

void Integer__free(Integer i) { free(i); }

Integer Integer__parse(char *s) {
    int i;
    sscanf(s, "%d", &i);
    return Integer__new(i);
}

void Integer__print(Integer i) { printf("%d ", Integer__get(i)); }