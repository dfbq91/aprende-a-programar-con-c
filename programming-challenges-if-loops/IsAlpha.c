#include <stdio.h>

/**
 * Detects if a character is alphanumeric
 * @param c: the character to be checked
 * @return 1 if the character is alphanumeric, 0 if it is not.
 * */

int is_alpha(int c) {
    int is_lower = c >= 'a' && c <= 'z';
    int is_upper = c >= 'A' && c <= 'Z';
    return is_lower || is_upper;
}