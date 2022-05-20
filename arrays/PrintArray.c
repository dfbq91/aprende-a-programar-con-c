#include <stdio.h>

/**
 * Prints the address and value of the elements of an array
 * @param arr: the array
 * @param size: Number of elements in the array;
 * @return void
 * */

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("The value in the array is %i and the address is %p\n", arr[i], &arr[i]);
        arr[i] = i * 3;
    }
}