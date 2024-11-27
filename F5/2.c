#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    for (int i = 0; i < 4; i++)
        fork();
    printf("PID: %d \n", getpid());    
    exit(EXIT_SUCCESS);
}

// 16 processes in total
// why?

// processos totais: 2^n de forks