#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    fork();
    fork();
    fork();
    printf("PID: %d\n", getpid());
    exit(EXIT_SUCCESS);
}

// you end up with 8 processes 
/* fork() creates a new process
if we redo that command it will create a new one*/

// processos totais: 2^n de forks