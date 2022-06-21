#include <stdio.h>
#include <stdlib.h>

/**
 * Adds integer numbers from command line
 * @return 0
 * */
int main(int argc, char *argv[]) {
    int sum = 0;
    if (argc < 3) {
        printf("error: you must add at least two numbers\n");
        return EXIT_FAILURE;
    }

    while (--argc) {
        char *p = *(argv + argc); // argv[argc]
        char *endptr;
        sum += strtol(p, &endptr, 10);
        if (*endptr != '\0') {
            printf("error: %d-th argument %s must be a number\n", argc, argv[argc]);
            return EXIT_FAILURE;
        }
    }
    printf("The result of the sum is %d\n", sum);
    return 0;
}