#include <stdio.h>
#include <string.h>

void modify_string(char *c) {
    c[0] = 'X';
}

/**
 * It allows to understand strings
 * @return void
 * */

int main() {

    /* These are all strings */
    printf("a\n");
    printf("Hello\n");
    printf("'Hello world' are the most printed words when you are learning programming\n");

    /* A string can be declarate in different ways */

    /* First way */
    char my_str[6] = { 'H', 'E', 'L', 'L', 'O', '\0' };
    printf("The length of the string is %li\n", strlen(my_str));
    printf("My string is %s\n", my_str);

    /* Second way */
    char my_str2[6];
    *my_str2 = 'H';
    my_str2[1] = 'E';
    my_str2[2] = 'L';
    my_str2[3] = 'L';
    *(my_str2 + 4) = 'O';
    my_str2[5] = '\0';
    printf("My second string is %s\n", my_str2);

    /* Third way */
    char my_str3[] = "Hello";
    printf("My third string is %s\n", my_str3);

    /* We can access and manipulate the string
    characters, in the same way as arrays */
    char c[6] = "Hello";
    c[3] = 'K';
    printf("Our string now is %s\n", c);
    char *p;
    p = c;
    p[0] = 'Z';
    *(p + 2) = 'W';
    printf("Our string, modified from pointer is %s\n", c);

    /* Like arrays, a string is passed as a reference in
    the function, so we can modify it from the function */
    modify_string(c);
    printf("Our string modified from the function is %s\n", c);
}