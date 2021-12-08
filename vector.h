#ifndef VECTOR_H
#define VECTOR_H
#include <stdlib.h>
#include <stdio.h>


typedef struct Vec {
    void **dat;
    int len;
    int cap;
} Vec;

void vinit(*Vec v, int cap, int clean);

void vfree(*Vec v);


#endif