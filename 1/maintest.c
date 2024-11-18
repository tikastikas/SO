#include <stdio.h>

int main (int argc, char* argv[]) {
    // argc = number of args + program file name
    printf("# arguments = %d\n", argc - 1); // removes one digit from argc 
    printf("the command arguments are: %s\n", argv[0]); // prints file name
    for (int i = 1; i < argc ; i++)
        printf("argv[%d]=%s\n", i, argv[i]); // prints each argument position and its value
    return 0;
}