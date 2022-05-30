#include <stdio.h>
#include "utilities.h"

/**
 * Appends src string to dest string
 * @param dest: pointer to string with all strings concatenated
 * @param src: constant pointer to string to be appended to dest
 * @return pointer to concatenated string
 * */
char *_strcat(char *dest, const char *src) {
    if (dest ==  NULL || src == NULL) return dest;

    size_t length = _strlen(dest);
    size_t i = 0;

    for (; src[i] != '\0'; i++) {
        dest[length + i] = src[i];
    }

    dest[length + i] = '\0';
    return dest;
}