#include <stdio.h>

/**
 * main.c
 * */

int is_alpha(int c);
int check_number(int n);
void print_numbers(int times);
int is_lower(int c);
void fizz_buzz();

int main() {
    printf("%i\n", is_alpha('c'));
    printf("%i\n", is_alpha(96));
    printf("%i\n", is_alpha('+'));

    printf("%i\n", check_number(10));
    printf("%i\n", check_number(0));
    printf("%i\n", check_number(-8));

    print_numbers(10);
    print_numbers(0);
    print_numbers(-3);

    printf("%i\n", is_lower('c'));
    printf("%i\n", is_lower('C'));
    printf("%i\n", is_lower(105));

    fizz_buzz();
    return 0;
}