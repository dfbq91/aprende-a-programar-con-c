#include <stdio.h>

/**
 * Allows to understand pointer to pointer
 * @return 0
 * */

int main() {
    int n = 30;
    int *p1 = &n;
    int **p2 = &p1;
    printf("The value of p1 is %p\n", (void*)p1);
    printf("The value of n from p1 is %d\n", *p1);
    printf("The value of p2 is %p\n", (void*)p2);
    printf("The value of p1 from p2 is %p\n", (void*)*p2);
    printf("The value of n from p2 is %d\n", **p2);
}