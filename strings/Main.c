#include <stdio.h>
#include <string.h>

void modify_string(char c[]) {
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
    printf("'Hello world' are the most printed words when you are learning programming\n\n");

    /* There are different ways to declare a string */

    /* First way */
    char my_str[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
    printf("The length of my_str is %li\n", strlen(my_str));
    printf("My string my_str is %s\n\n", my_str);

    /* Second way */
    char my_str2[6];
    *my_str2 = 'H';
    my_str2[1] = 'E';
    my_str2[2] = 'L';
    *(my_str2 + 3) = 'L';
    my_str2[4] = 'O';
    my_str2[5] = '\0';
    printf("My string my_str2 is %s\n\n", my_str2);

    /* Third way */
    char my_str3[] = "HELLO";
    char *p;
    p = my_str3;
    p[0] = 'W';
    *(p + 2) = 'P';
    printf("My string my_str3 is %s\n\n", my_str3);
    modify_string(my_str3);
    printf("My modified string my_str3 is %s\n\n", my_str3);
}