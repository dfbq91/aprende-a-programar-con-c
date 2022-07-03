#include <stdio.h>
#include <stdlib.h>

/**
 * Shows a malloc null validation due to unfreed memory
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
    }
}