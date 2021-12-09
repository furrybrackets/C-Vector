#include "../vector.h"
#include <stdio.h>
#define MAX 10


int main(int argc, const char **argv) {
    Vec v;
    vinit(&v, 20, 1);

    const char hw[] = "Hello world!";

    for (int i = 1; i<14; i++) {
        vadd(&v, hw[i-1]);
    }

    for (int i = 1; i<13; i++) {
            printf("%c", (char *)vget(&v, i));
    };

    printf("\n");

    return 0;
}