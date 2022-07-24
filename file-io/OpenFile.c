#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

/**
 * Open and close a file using fopen and
 * read its text using fgets and fgetc
 * @return 0 in success
 * */
int main() {
    FILE *fptr;
    char chr;
    char buff[SIZE];

    fptr = fopen("./file-to-read.txs", "r");
    if (fptr == NULL) {
        fprintf(stderr, "Can not read the file\n");
        exit(EXIT_FAILURE); // return 1;
    }

    fgets(buff, SIZE, fptr);
    printf("%s\n", buff);

    fptr = fopen("./file-to-read.txt", "r");

    while ((chr = fgetc(fptr)) != EOF) {
        printf("%c", chr);
    }
    fclose(fptr);
    exit(EXIT_SUCCESS);
}