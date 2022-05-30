#include "utilities.h"

/**
 * Copy src string into dest string
 * @param dest: pointer to string to be replaced with src string
 * @param src: string to be copied
 * @return pointer to copied string
 * */
char *_strcpy(char* dest, const char* src) {
    // Validates if dest is null
    if (dest == NULL) return dest;

    // As we going to increment using pointers, we have to
    // return a pointer to the begginning of dest
    char *p = dest;

    // Copy string pointed by src into dest as long as the
    // accessed character is different from NULL character
    for (; *src != '\0'; dest++, src++) {
        *dest = *src;
    }

    // We are in the last position of dest. We add '\0'
    *dest = '\0';

    return p;
}