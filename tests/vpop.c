#include "test.h"
#include "../vector.h"
#include <stdio.h>

void vpop_test(int max) {
    Vec v;
    vinit(&v, max+1, 0);

    for (int k = 1; k<max; k++) {
        vadd(&v, k); // > nice
    };
    vpop(&v, 1, 1);
    printf("%d\n", v.dat[2]);
}