#include "vector.h"
#include <stdio.h>

/*
struct Vec {
    void **dat; <- Start of void* array
    int len;    <- Length of vector
    int cap;    <- Max capacity of vector before vrealloc() is called
}
 */

 /* 
vfree(*Vec v);

vfree() will free up the memory stored by the struct and set len, cap to 0.
 */
 void vfree(*Vec v) {
     free(v->dat);
 }

void vinit(*Vec v, int cap, int clean) {
    if (clean) {
        v->dat = calloc(cap, sizeof(void*));
    } else {
        v->dat = malloc(cap*sizeof(void*));
    };
    v->len = 0;
    v->cap = cap;
};

