#include <stdio.h>

/**
 * Compares a number with an upper and lower limit
 **/

#define UPPER_LIMIT 100
#define LOWER_LIMIT 50

int main() {
    const int my_num = 101;
    if (my_num > UPPER_LIMIT) {
        printf("The number is greather than upper limit\n");
    } else if (my_num <= UPPER_LIMIT && my_num > LOWER_LIMIT) {
        printf("The number is in the middle\n");
    } else {
        printf("The number is less than lower limit\n");
    }
    return 0;
}