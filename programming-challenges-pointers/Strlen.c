#include <stdio.h>
#include <stddef.h>

/**
 * Calculates the length of the passed string
 * @param c: pointer to string
 * @return Length of the string
 * */
size_t _strlen(const char *c) {
    if (!c) return 0;

    size_t length;
    for (length = 0; *(c + length); length++);
    return length;
}