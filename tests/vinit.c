#include "../vector.h"
#include <stdio.h>
#include "test.h"

void vinit_test(int max) {
            Vec v;
        // Test loop
        for (int i = 1; i<max+1; i++) {
            vinit(&v, i, 1);
            if (v.cap != i) {
                printf("err: test failed when size initialized at %d\n", i);
                break;
            };
            // Free up vector
            vfree(&v);
        };
        printf("success: succeded on %d cases\n", max);
}