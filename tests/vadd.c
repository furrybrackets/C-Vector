#include "../vector.h"
#include <stdio.h>
#include "test.h"

void vadd_test(int max) {
    Vec v;
    vinit(&v, max+1, 1);

    // Test loop
    for (int i = 1; i<max+1; i++) {
        vadd(&v, i);
        if (i != (int *)v.dat[i]) {
            printf("err at &d\n", i);
            return;
        }
    }
    printf("success: succeded on %d cases\n", max);
}