#include <stdio.h>

/**
 * Prints the alphabet in uppercase and lowercase
 **/

void print_alphabet() {
    for (char letter='A'; letter <= 'z'; letter++) {
        if ((int)letter >= 91 && (int)letter <= 96) {
            continue;
        }
        printf("%c ", letter);
    }
    printf("\n");
}

