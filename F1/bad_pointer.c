#include <stdio.h>

int* get_int() {
    int i = 2;
    return &i;
}

// i will be deleted
// it's a local temporary variable
// therefore if we want to create a pointer
// we need to allocate memory with a malloc

int main() {
    int* p = get_int();
    printf("integer = %d\n", *p);
    return 0;
}


// check F1 to see some more common mistakes

