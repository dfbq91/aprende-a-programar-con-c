#include <stdio.h>

#define say_hello(name) printf("Hello " #name "\n")
#define call_someone(name) \
    printf(#name " come here\n")
#define min(x, y) ((x) > (y) ? (y) : (x))
#define square(x) x * x // It should be (x) * (x)
#define logger(string) printf(__FILE__"--> "__DATE__":"__TIME__ " " #string "\n")


 /**
 * Preprocessor learning
 * @return 0
 * */
int main() {
    printf("Date is %s\n", __DATE__);
    printf("Time is %s\n", __TIME__);
    printf("File is %s\n", __FILE__);

    say_hello("Dani");
    call_someone("Daniel");

    printf("The min number is %d\n", min(20, 24));
    printf("Square is %d\n", square(5 + 3)); // It gives 23. Undesired behavior

    logger("Starting my application");
    return 0;
}