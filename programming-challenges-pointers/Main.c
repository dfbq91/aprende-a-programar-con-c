#include <stdio.h>
#include "utilities.h"
#include <string.h>

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

    printf("String before being copied %s\n", s2);
    printf("Copied string: %s\n", _strcpy(s2, s3));
    printf("Copied string: %s\n", _strcpy(s2, ""));
    printf("Copied string: %s\n", _strcpy(NULL, ""));

    printf("Compared strings: %i\n", _strcmp("", " "));
    printf("Compared strings: %i\n", _strcmp("A", "A"));
    printf("Compared strings: %i\n", _strcmp("", "\0"));
    printf("Compared strings: %i\n", _strcmp("\0", "a"));
    printf("Compared strings: %i\n", _strcmp("foobar\0b", "foobar\0a"));
    printf("Compared strings: %i\n", _strcmp("■", "!"));
    

    return 0;
}