#include <stdio.h>
#include <stdlib.h>

/**
 * Allocated 3 bytes in heap
 * @return 0
 * */
int main() {
    char *ptr = malloc(3 * sizeof *ptr);
    *(ptr + 0) = 'H'; // ptr[0] = 'H'
    ptr[1] = 'E';
    ptr[2] = 'L';
    printf("First letter: %c\nSecond Letter: %c\nThird letter: %c\n", ptr[0], ptr[1], ptr[2]);
    free(ptr);
    return 0;
}