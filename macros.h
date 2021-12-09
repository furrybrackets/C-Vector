#ifndef MACROS_H
#define MACROS_H

#define VEC_INIT_CAPACITY 10


/// Vector init
#define vec_init(vec) Vec vec; vinit(&vec, VEC_INIT_CAPACITY, 1)

/// Vector add
#define vec_add(vec, val) vadd(&vec, val)

/// Vector set
#define vec_set(vec, pos, val) vset(&vec, pos, val)

/// Vector pop
#define vec_pop(vec, pos, y) vpop(&vec, pos, y)

/// Vector get
#define vec_get(vec, pos) vget(&vec, pos) 

/// Vector free
#define vec_free(vec) vfree(&vec)

/// Vector clear
#define vec_clear(vec) vclear(&vec)


#endif