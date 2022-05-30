#include "utilities.h"

/**
 * Compares two strings by returning a number greater than 0 if
 * the ASCII code of s1 is greater than s2, or 0 if the ASCII
 * code of s1 is less than s2, or 0 if both s1 and s2 are equal.
 * @param s1: first string
 * @param s2: second string
 * @return Less than 0, equals to 0 or greater than 0
 * */
int _strcmp(const char *s1, const char *s2) {
    // Iterates through strings while they are equals
	for (; *s1 && *s1 == *s2; s1++, s2++);

    // Returns ASCII difference after cast to unsigned char
    // We need unsigned char casting because of this type has a
    // larger range, given test cases with extended ASCII characters
    // see also: https://stackoverflow.com/questions/37237042/strcmp-implementation-not-working-with-special-characters
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}