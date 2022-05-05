#include <stdio.h>

/**
 * Checks whether a number is greater than 0, is 0 or is less than 0
 * @param number: the number to be checked
 * @return 1 if the number is greater than 0,
 * 0 if it is 0 or -1 if it is loss than 0
 * */

int check_number(int number) {
    if (number > 0) return 1;
    if (number == 0) return 0;
    return -1;
}