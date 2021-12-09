#include "test.h"
#include <stdio.h>
#define MAX 10


int main(int argc, const char **argv) {
    printf("Running test 1:\n");
    vinit_test(MAX);
    printf("Running test 2:\n");
    vadd_test(MAX);
    printf("Running test 3:\n");
    vpop_test(MAX);
}