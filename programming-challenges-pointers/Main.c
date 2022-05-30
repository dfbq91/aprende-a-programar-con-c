#include <stdio.h>
#include "utilities.h"

/**
 * Pointers everywhere
 * @return 0
 * */
int main() {
    char *s1 = NULL;
    char s2[] = "Awesome World";
    char s3[] = "You'll never walk alone";
    char s4[] = "1234";
    char s5[10] = "Hello";
    char s6[] = "World";

    printf("Length of '%s' is %li\n", s1, _strlen(s1));
    printf("Length of '%s' is %li\n", s2, _strlen(s2));
    printf("Length of '%s' is %li\n", s3, _strlen(s3));

    printf("Reversed string is: %s\n", reverse_str(s1));
    printf("Reversed string is: %s\n", reverse_str(s2));
    printf("Reversed string is: %s\n", reverse_str(s3));
    printf("Reversed string is: %s\n", reverse_str(s4));

    printf("Concatenated strings: %s\n", _strcat(s5, s6));
    printf("Concatenated strings: %s\n", _strcat(s5, s4));

    return 0;
}