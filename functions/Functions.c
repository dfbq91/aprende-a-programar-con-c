#include <stdio.h>

void print_multiplication(int a, int b); 
void print_sum(long a, int b);

int main() {
    print_multiplication(3, 5);
    print_sum(2147483647, 5);
}

void print_multiplication(int a, int b) {
    printf("The result of the multiplication is %i\n", a * b);
}

void print_sum(long a, int b) {
    printf("The result of sum is %li", a + b);
}





