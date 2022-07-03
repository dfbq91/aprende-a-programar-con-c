#include <stdio.h>

#define SIZE 9999999

int c = 50; // Keeps available during the whole program execution, occupying space.

void print_result(int result) { // Goes to the stack. It is the first func to go out.
    printf("The result is %d\n", result);
}

void multiply(int a, int b) { // Goes to the stack.
    int result = a * b * c;
    print_result(result);
}

int main() { // Goes to the stack.
    int a = 5;
    int b = 4;
    multiply(a, b);
    //int arr[SIZE]; // seg_fault
    int size = 5 * 3;
    int arr2[size]; // Variable length array, only from C99 standard.
    arr2[0] = 20;
    return 0;
}