#include <stdio.h>

(1)


...

void g(int* ptr) {
    *ptr = 42; // Changes the value of x to 42
    printf("%d\n", *ptr); // Prints the value of x
}

void f() {
    int x; // instancia-se uma variavel x (ex: 5)
    g(&x); // manda para a funçao g o valor por referencia de x
    // para que seja utilizado posteriormente como pointer
}

...


(2)


...
int* f() {
    int x; // instancia uma variavel x
    return &x; // da return ao valor da referencia x
    // pode ser utilizada esta funcao
    // na funçao g previamente definida ou seja
    // podemos fazer g(f(5))
}
...


(3)


...
int* f() {
    int* x = (int*)malloc(sizeof(int));
    // aloca-se memoria pelo malloc
    // define-se um pointer
    return x; // retorna um pointer a apontar para o valor de x
}
...


(4)


...
int g(int (*h)(int), int y) {
    return h(y + 2);
}

int f(int x) {
    return x*x; // retorna x ao quadrado
}

int main() {
    printf("value: %d\n", g(f,2));
    return 0;
}