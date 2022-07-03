#include <stdio.h>
#include <stdlib.h>

/**
 * Prints an int value from heap and does not free memory
 * @return 0
 * */
int *ptr = NULL;

int main() {
    for (int i = 0; i < 10; i++) {
        ptr = malloc(sizeof *ptr);
    }
    free(ptr); // Only four bytes are freed
    return 0;
}