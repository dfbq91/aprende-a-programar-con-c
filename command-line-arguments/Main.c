#include <stdio.h>
#include <string.h>

/**
 * It allows to understand command line arguments (argv, argc)
 * @return 0
 * */
int main(int argc, char **argv) {
    printf("The number of passed arguments is %d\n", argc);

    while (argc--) {
        printf("Index [%d] Value %s\n", argc, argv[argc]);
        printf("Memory address [%d] %p\n", argc, (void*)*(argv + argc));
        for (size_t i = 0; i <= strlen(argv[argc]); i++) {
            printf("Character is: %c\n", argv[argc][i]);
            printf("Character memory address is : %p\n", &(argv[argc][i]));
        }
        printf("\n");
    }
    return 0;
}