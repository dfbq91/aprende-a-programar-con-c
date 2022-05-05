#include <stdio.h>

/**
 * Prints number from 1 to 100 replacing any divisible number by three with
 * the word "fizz" and any divisible number by five with the word "buzz"
 * and any divisible number by three and five with the word "fizzbuzz"
 * @return void
 * */

void fizz_buzz() {
    int i = 1;

    while (i <= 100) {
        if (i % 15 == 0) printf ("FizzBuzz ");
        else if (i % 5 == 0) printf ("Buzz ");
        else if (i % 3 == 0) printf ("Fizz ");
        else printf("%i ", i);
        i++;
    }
}