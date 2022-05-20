#include <stdio.h>

/**
 * It allows to understand pointers arithmetic
 * @return void
 * */

int main() {
    /* We declare an integer and a pointer to int. Then we assign
    the memory address of the integer to the pointer */
    int a = 3;
    int *p = &a;

    /* The memory address obtained from pointer 
    must be the same that memory address of a */
    printf("The address of a is %p\n", &a);
    printf("The address of a from p is %p\n", p);

    /* We can obtain the value of the variable our pointer
    points to through the deference '*' operator */
    printf("The value of a from p %i\n", *p); // 3

    /* We can increment our pointer. It increases in (i * sizeof(int) bytes) */
    p++;
    printf("The value of the variable pointed by p is %i\n", *p); /* Garbage value */
    printf("The value of p %p\n", p);

    /* As previous example with a, we can traverse an array
    and get its values from a pointer to the array */
    char c[3] = { 'A', 'B', 'C' };
    char *p2 = c;
    for (int i = 0; i < 3; i++) {
        printf("Memory address of c[%i] = %p\n", i, p2 + i);
        printf("Value of c[%i] = %c\n", i, *(p2 + i));
    }
}