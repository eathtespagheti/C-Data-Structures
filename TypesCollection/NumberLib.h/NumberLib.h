#ifndef NUMBERLIB_H
#define NUMBERLIB_H

// * DNT
typedef struct NumberLibStruct {
    void (*setDouble)(void* n, double value);
    void (*setFloat)(void* n, float value);
    void (*setInt)(void* n, int value);
    double (*getDouble)(void* n);
    float (*getFloat)(void* n);
    int (*getInt)(void* n);
    int (*getType)(void* n);
    void (*free)(void* n);
    void* (*new)(int type);
} NumberLib;

// * EDNT

#endif // ! NUMBERLIB_H
