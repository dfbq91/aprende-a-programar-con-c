#include <stdio.h>
#include <stdlib.h>

/**
 * Allocates space in dynamic memory using calloc
 * @return 0
 * */

int main() {
    int n = 5;
    int *ptr = calloc(n, sizeof *ptr);
    if (ptr == NULL) {
        return (EXIT_FAILURE);
    }

    for (int i = 1; i < n; i++) {
        printf("%d", ptr[i]); // 0 0 0 0
        ptr[i] = i;
        printf("%d", ptr[i]); // 1 2 3 4
    }

    printf("\n");
    free(ptr);
}