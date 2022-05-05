#include <stdio.h>

/**
 * Prints the numbers from 1 to 10
 **/

void print_numbers() {
    int i = 1;

    while (i <= 10) {
        printf("%i ", i);
        ++i;
    }
    printf("\n");
}