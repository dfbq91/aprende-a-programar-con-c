#include <stdio.h>
#include <time.h>

/**
 * Gets factorial of a number iterating
 * @return factorial
 * */
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for(int i = 1; i <= n; ++i) {    
      fact = fact * i;    
    }
    return fact;
}

int main() {
    printf("%llu\n", factorial(10));
}