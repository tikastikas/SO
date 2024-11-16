#include <stdio.h>

void swap(int *p1, int *p2) {
    int temp = *p1; //temp=*p1=points to what p1 is pointing
    *p1 = *p2; //p1 points to p2
    *p2 = temp; //p2=temp=points to what p1 was pointing previously

    // SUMMARY
    // temp=*p1 initial
    // *p1 final = *p2 initial
    // *p2 final = temp = *p1 initial

    // *p1 = 1
    // *p2 = 2
    // temp = 1
    // *p1 = 2
    // *p2 = 1
}

int main() {
    int n1 = 1; // n1=1
    int n2 = 2; // n2=2
    swap(&n1, &n2); // using references of n1 n2 therefore
    // *p1 = 1 (&n1)
    // *p2 = 2 (&n2)
    printf("n1: %d n2: %d\n", n1, n2);
    // using references to call n1 and n2 therefore n1 n2 values will be
    // replaced
    return 0;
}