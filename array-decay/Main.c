#include <stdio.h>

/**
 * Allows to understand array decay
 * @return void
 * */

void print_pointer_size(int my_arr[4]);
void print_array_size(int (*arr)[4]);

int main() {
    int arr[4] = {8,3,1,4};
    printf("The memory address of arr is %p\n", arr); // int (*)
    printf("The size of arr is %li\n\n", sizeof arr);

    printf("The memory address of &arr is %p\n", &arr); // int (*)[4]
    printf("The size of &arr is %li\n\n", sizeof &arr);

    printf("The memory address of &arr[0] is %p\n", &arr[0]); // int (*)
    printf("The size of &arr[0] is %li\n\n", sizeof &arr[0]);

    print_pointer_size(arr);
    print_array_size(&arr);
    return 0;
}