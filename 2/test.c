#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
/* check if you have the right number of arguments */
    if ( argc != 3 ) {
        printf("usage: %s string1 string2\n", argv[0]);
        exit(EXIT_FAILURE);
    }


/* compare argv[1] and argv[2] using lexicographic order */
    int result = strcmp(argv[1], argv[2]); // returns a bool (compares two strings)
    if (result == 0) // true
        printf("the strings are the same\n");
    else if (result < 0) // 1<2
        printf("%s < %s\n", argv[1], argv[2]);
    else // 1>2
        printf("%s > %s\n", argv[1], argv[2]);

/* create a copy of argv[1] and another of argv[2] */
    char *p1 = strdup(argv[1]); // returns a pointer to a duplicate of 1
    char *p2 = strdup(argv[2]); // returns a pointer to a duplicate of 2
    printf("p1 holds:%s\n", p1);
    printf("p2 holds:%s\n", p2);

/* * this is another way of doing it */
    // strlen: calculates the length of the string pointed to by p3/p4
    char* p3 = (char*)malloc((strlen(argv[1]) + 1) * sizeof(char)); // to include '\0'
    char* p4 = (char*)malloc((strlen(argv[2]) + 1) * sizeof(char)); // to include '\0'
    strcpy(p3, argv[1]); // copies content of argv[1] to p3
    strcpy(p4, argv[2]); // copies content of argv[2] to p4
    printf("p3 holds:%s\n", p3);
    printf("p4 holds:%s\n", p4);
/* concatenate both strings, allocating space for:
all chars of argv[1],
all chars of argv[2],
the final ’\0’ */
    char* p5 = (char*)malloc((strlen(argv[1]) + strlen(argv[2]) + 1) * sizeof(char));
    strcpy(p5, p1); // copies content of p1 to p5
    strcat(p5, p2); // copies content of p2 to p5
    printf("p5 holds:%s\n", p5);
/* free allocated memory from malloc and strdup */
    free(p1); 
    free(p2);
    free(p3);
    free(p4);
    free(p5);
    exit(EXIT_SUCCESS);
}