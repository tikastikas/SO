#include <stdio.h>
#include <cstdio>

void swap(int n1, int n2) {
    int temp = n1; // temp=n1
    n1 = n2; // n1=initial value of n2
    n2 = temp; // n2=initial value of temp=initial value of n1

    // FINAL SUMMARY
    // n1 = 1 ; n2 = 2
    // temp=1
    // n1=2
    // n2=1

}

int main() {
    int n1 = 1; //n1=1
    int n2 = 2; //n2=2
    swap(n1, n2);
    // SWAP:
    // n1=2
    // n2=1

    printf("n1: %d n2: %d\n", n1, n2);
    return 0;
}