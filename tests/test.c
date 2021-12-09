#include "../vector.h"
#include <stdio.h>
#define MAX 10


int main(int argc, const char **argv) {
    Vec v;
    vinit(&v, 20, 1);

    vadd(&v, "Hi!");

    printf("%s\n", (char *)vget(&v, 1));
}