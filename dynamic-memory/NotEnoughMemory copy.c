#include <stdio.h>
#include <stdlib.h>

/**
 * Causes a segmentation fault due to unfreed memory
 * @return 0
 * */
int main() {
    while(1) {
        int *ptr = malloc(__INT_MAX__);
        *ptr = 5;
        printf("Value is %d\n", *ptr);
    }
    return 0;
}