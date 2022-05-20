#include <stdio.h>

/**
 * main.c
 * */

void print_addresses(int arr[5]);
void print_array(int new_arr[], int size);
void print_multidimensional_array(int a[2][4]);

int main() {
    int arr[5];
    int new_arr[] = {1, 2, 3, 4, 5};

    print_addresses(arr);
    print_array(new_arr, 5); // It will change values of new_arr (pass by reference)

    for (int i = 0; i < 5; i++) {
        printf("\nThe value in the array from main is %i and the address is %p", new_arr[i], &new_arr[i]);
    }

    // Multidimensional arrays
    int a[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    print_multidimensional_array(a);

}