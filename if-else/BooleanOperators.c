#include <stdio.h>

/**
 * Evaluates condition showing whether it is true or false
 * 
 */

int main() {
    // printf("Result of the evaluated condition is %i\n", 1 || 0);
    // printf("Result of the evaluated condition is %i\n", 0 && 0);
    // printf("Result of the evaluated condition is %i\n", 1 && 1);
    // printf("Result of the evaluated condition is %i\n", 0 && (1 || 1));
    // printf("Result of the evaluated condition is %i\n", (1 || 0) && 1);
    // printf("Result of the evaluated condition is %i\n", !((1 || 1) && 0));
    printf("Result of the evaluated condition is %i\n", 5 > 3 || (1 && !(1 || 0)));
                                                           
}

