#include <stdio.h>
#include <stdlib.h>

/**
 * Writes text in a file using fputc, fputs, fprintf and fwrite
 * @return 0
 * */
int main() {
    FILE *fptr;
    char str[] = "This is the first line\n"; 
    char str2[] = "This is the last line\n";
    fptr = fopen("./file-to-write.txt", "w");

    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], fptr);
    }

    fputs("This is the second line\n", fptr);

    fprintf(fptr, "This is the third line\n");

    fwrite(str2, 1, sizeof(str2), fptr);

    fclose(fptr);

    return EXIT_SUCCESS;
}