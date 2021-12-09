#ifndef VECTOR_H
#define VECTOR_H
#include <stdlib.h>
#include <stdio.h>


typedef struct Vector {
    void **dat;
    int len;
    int cap;
} Vec;

void vinit(Vec* v, int cap, int clean);

void vfree(Vec* v);

void vadd(Vec* v, void* elem);

void* xrealloc(void *ptr, size_t size);

void vrealloc(Vec* v, int cap);

void vpop(Vec *v, int pos, int doShift);

void* vget(Vec *v, int pos);

void vclear(Vec *v);
#endif