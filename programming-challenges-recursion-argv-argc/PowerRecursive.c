#include <stdio.h>
#include <stdlib.h>

/**
 * Calculate positive power using recursion
 * @param n - base number
 * @param power - power number
 * @return power of base number
 * */
long int power_recursive(int base, int power) {
    if (power == 0) return 1;
    return base * power_recursive(base, power - 1);
}

int main() {
    long int result = power_recursive(5, 5);
    printf("The result is %ld\n", result);
    return 0;
}

