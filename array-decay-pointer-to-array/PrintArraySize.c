#include <stdio.h>

/**
 * Prints size of passed array
 * @return void
 * */

void print_array_size(int (*my_arr)[4]) {
    printf("Array size: %li", sizeof *my_arr);
}