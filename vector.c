#include "vector.h"
#include <stdio.h>
#include <stdlib.h>
#define EXIT_FAILURE 1

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
 void vfree(Vec* v) {
     free(v->dat);
 }

/*
vinit(*Vec v, int cap, int clean)

vinit() will initialize a new vector with set cap value
and optionally clean the allocated memory of garbage.
 */
void vinit(Vec* v, int cap, int clean) {
    if (clean) {
        v->dat = calloc(cap, sizeof(void*));
    } else {
        v->dat = malloc(cap*sizeof(void*));
    };
    v->len = 0;
    v->cap = cap;
};

/* 
xrealloc() is a special reallocoation function. It's used to protect my code from dying.
*/
void* xrealloc(void *ptr, size_t size) {
    void* nptr = realloc(ptr, size);
    if (nptr) {
        return nptr;
    } else {
        printf("err: allocation of vector failed.");
        exit(EXIT_FAILURE);
    }
};

void vrealloc(Vec *v, int cap) {
    v->dat = xrealloc(v->dat, cap*sizeof(void *));
    v->cap = cap;
};

void vadd(Vec *v, void *elem) {
    if (v->len == v->cap) {
        vrealloc(v, (v->cap)*2);
    };
    v->len = v->len + 1;
    v->dat[v->len] = elem;
};

void vpop(Vec *v, int pos, int doShift) {
    if (pos >= v->len || pos < 0) {
        return;
    }
    v->dat[pos] = NULL;

    if (doShift) {
        for (int i = pos; i<v->len-1; i++) {
            v->dat[i] = v->dat[i + 1];
            v->dat[i + 1] = NULL;
            v->len = v->len - 1;
        }
    };

    if (v->len == v->cap / 4) {
        vrealloc(v, (v->cap)/2);
    };

}


