#include <stdio.h>

/**
 * Prints the value and indexes of the elements of an array with a defined size
 * @param arr: the array
 * @return void
 * */

void print_multidimensional_array(int arr[2][4]) {
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 4; col++) {
            printf("[%i][%i] Value: %i\n", row, col, arr[row][col]);
        }
    }   
}