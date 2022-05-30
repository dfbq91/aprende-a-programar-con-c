#include <stdio.h>

/**
 * Prints size of passed array, actually a pointer due to array decay
 * @return void
 * */

void print_pointer_size(int *my_arr) {
    printf("Pointer size: %li\n", sizeof(my_arr));
}