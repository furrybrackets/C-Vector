#include "./vector.h"
#include <stdio.h>

int main(int argc, const char** argv) {
        Vec v;
        // Test loop
        for (int i = 1; i<11; i++) {
            vinit(&v, i, 1);
            if (v.cap != i) {
                printf("err: test failed when size initialized at %d\n", i);
                return 1;
            };
            // Free up vector
            vfree(&v);
        };
        return 0;
}