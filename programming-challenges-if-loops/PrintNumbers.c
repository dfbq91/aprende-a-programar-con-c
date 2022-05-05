#include <stdio.h>

/**
 * Prints n times the numbers from 0 to 10 separated by a comma
 * 
 * @param times: the number of times to print the numbers
 * @return void
 * */

void print_numbers(int times) {
    if (times < 0) return;

    for (int i = 0; i < times; i++) {
        for (int j = 0; j <= 10; j++) {
            if (j == 10) {
                printf("%i\n", j);
                break;
            }
            printf("%i, ", j);
        }
    }
    
}