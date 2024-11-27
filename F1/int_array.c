#include <stdio.h>

int main() {
    int i;
    int primes[] = {2, 3, 5, 7, 11};
    for (i = 0; i < 5; i++){
        printf("%p: %d <--> %p: %d\n",
                    &(primes[i]), primes[i], primes + i, *(primes + i));
    }
    return 0;
}


// primes variable was behaving like a string
// each increment is i*int size = 4 bytes