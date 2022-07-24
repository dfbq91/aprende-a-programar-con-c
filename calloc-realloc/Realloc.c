#include <stdio.h>
#include <stdlib.h>

/**
 * Allocates space in dynamic memory using realloc
 * @return 0
 * */

int main() {
    int n = 5;
    int *ptr = malloc(n * sizeof *ptr); // 20 bytes
    // if (ptr == NULL) {
    //     return (EXIT_FAILURE);
    // }
    // // for (int i = 0; i < n; i++) {
    // //     ptr[i] = i;
    // //     printf("%d", ptr[i]);
    // // }
    // printf("\n");
    printf("First memory address is: %p\n", (void*)ptr);
    int *ptr2 = realloc(ptr, 2 * n * sizeof *ptr); // 40 bytes
    printf("First2 memory address is: %p\n", (void*)ptr);
    if (ptr == NULL) {
        return (EXIT_FAILURE);
    }
    for (int i = 0; i < 2 * n; i++) {
        printf("%d", *(ptr2 + i));
    }
    printf("\n");
    printf("Second memory address is: %p\n", (void*)ptr2);

}