#include <stdio.h>
#include <time.h>

/**
 * Gets factorial of a number using recursion
 * @return factorial
 * */
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    printf("%llu\n", factorial(10));
}
