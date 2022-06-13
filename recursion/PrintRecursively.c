#include <stdio.h>

/**
 * Allows to understand recursion
 * @return 0
 * */
void print_string_recursively(char *s) {
    if (!*s) { // Stop condition
        putchar('\n');
        return;
    }
    putchar(*s);
    print_string_recursively(s + 1); // Recursive call
}

int main() {
    print_string_recursively("Hello");
    return 0;
}