#include <stdio.h>

/**
 * Prints the addresses of the elements of an array with a defined size.
 * @param arr: the array
 * @return void
 * */

void print_addresses(int arr[5]) {
    printf("The address of first element in the array is %p\n", &arr[0]);
    printf("The address of second element in the array is %p\n", &arr[1]);
    printf("The address of third element in the array is %p\n", &arr[2]);
    printf("The address of fourth element in the array is %p\n", &arr[3]);
    printf("The address of last element in the array is %p\n", &arr[4]);
}