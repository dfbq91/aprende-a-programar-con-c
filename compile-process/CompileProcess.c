/**
 * Prints the result of a multiplication.
 * Used to understand the compilation process.
 * 
 * 1) Preprocessor: gcc -E MyFile.c -o MyFile.i
 * 2) Compiler: gcc -S MyFile.c -o MyFile.s
 * 3) Assembler: gcc -c MyFile.c -o MyFile.o
 * 4) Linker: gcc MyFile.c -o MyFile
*/

#include <stdio.h>
#define FIRST_NUMBER 20
#define SECOND_NUMBER 10

int main()
{
    printf("The result of the multiplication is %i\n", FIRST_NUMBER * SECOND_NUMBER);
    return 0;
}
