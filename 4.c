#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {
    /* fork a child process */
    pid_t pid = fork(); /*creates child*/
    if (pid == -1) {
        perror("fork"); /*error creating child*/
        exit(EXIT_FAILURE);
    }
    if (pid == 0) {
        /* child process */
        int retv = execlp(argv[1],argv[1],NULL);
        /* cria uma lista 
        faz exec do argv[1], acaba em agrv[1]
        o NULL permite-nos saber que já não é preciso mais nada */
        if (retv == -1) { perror("execlp"); exit(EXIT_FAILURE); }
    }
    else {
        /* parent process */
        int retv = waitpid(pid, NULL, 0); //espera pelo processo filho
        if (retv == -1) { perror("waitpid"); exit(EXIT_FAILURE); }
    }
    exit(EXIT_SUCCESS);
}

/* execvp: 
ex: quero fazer ls -l -a
char *args [8];
execvp(args[0], args);

define-se:
args[0]="ls";
args[1]="-l";
args[2]="-a";
args[3]=NULL
*/