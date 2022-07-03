#include <stdio.h>
#include <stdlib.h>

/**
 * Prints an int value from heap
 * @return 0
 * */
int main() {
    while(1) {
        int *ptr = malloc(__INT_MAX__);
        if (ptr == NULL) {
            printf("Can't allocate memory\n");
            return EXIT_FAILURE;
        }
        *ptr = 5;
        printf("Value is %d\n", *ptr);
        free(ptr);
    }
}