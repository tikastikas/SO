#include <stdio.h>

int main() {
    int i, j, *p, *q; 
    i = 5; // i=5
    p = &i; // p=memory address of i
    *p = 7; // i=7
    j = 3; // j=3
    p = &j; // p=memory address of j
    q = p; // q=p=memory address of j
    p = &i; // p=memory address of i
    *q = 2; // j=2 (q is pointing to what p was pointing before i, therefore it's j)
    
    printf("i=%d, j=%d, p=%p, q=%p\n", i, j, p, q);
    return 0;
}
