#include <stdio.h>

/**
 * Gets fibonacci secuence
 * @return int
 * */
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
 
int main () {
    int n = 3;
    printf("%d\n", fib(n));
    return 0;
}