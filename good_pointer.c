#include <stdio.h>
#include <stdlib.h>

int* get_int() {
    int* p = (int*)malloc(sizeof(int));
    *p =2;
    return p;
}


// we have to allocate memory with malloc if we want a pointer to use

int main() {
    int* p = get_int();
    printf("integer = %d\n", *p);
    return 0;
}