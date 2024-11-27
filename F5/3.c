#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {
    int value = 0;

    pid_t pid = fork(); // creates a clone of current process
    if (pid == -1) { perror("fork"); exit(EXIT_FAILURE); }

    if (pid == 0) {
        /* child process */
        value = 1;
        printf("CHILD: value = %d, addr = %p\n", value, &value); // gives value and address
        exit(EXIT_SUCCESS);
    }

    else {
        /* parent process */
        int retv = waitpid(pid, NULL, 0); 
        /* waits until child process specified by PID 
        argument has changed state;
        in general, waits only for terminated children */

        if (retv == -1) { perror("waitpid"); exit(EXIT_FAILURE); }
        printf("PARENT: value = %d, addr = %p\n", value, &value);
        /* gives value and address */
        exit(EXIT_SUCCESS);
    }
}

/* Nota: a fun¸c˜ao perror() imprime a “string” indicada como argumento, seguida da “string”com
o erro correspondente ao valor da vari´avel errno cujo valor ´e fixado pelo “kernel”antes de
retornar da chamada ao sistema com resultado -1. */