#include <stdio.h>

/**
 * Detects if a character is lowercase
 * @param c: the character to be checked
 * @return 1 if the character is lowercase, 0 if it is not.
 * */

int is_lower(int c) {
    return c >= 'a' && c <= 'z';
}