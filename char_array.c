#include <stdio.h>

int main() {
    int i;
    char msg[] = "Hello World";
    for (i = 0; i < 12; i++)
        printf("%p: %c <--> %p: %c\n",
                    &(msg[i]), msg[i], msg + i, *(msg + i));
    return 0;
}

// charmsg can't have sizeof(msg) 
// it was behaving like a string and not a char
// replace 'sizeof(msg)' by '12' 
// the size is 12 because of the '\0' character since it ends the string

// H e l l o   W o r l d \0 
 
// every i increment is by 4 bytes

// &(msg[i]) - endereço de memoria de msg[i], vai ser colocado em %p (pointer format string) na string
//msg[i] - valor de msg[i], vai ser colocado em %c (char format string) na string
//msg + i - endereço de memoria de msg + i, que é equivalente a &msg[i]. vai ser colocado em %p na string
//*(msg + i) - valor de msg + i, equivalente a msg[i]. vai ser colocado em %c na string

// char only has 1 byte therefore msg+i works because of that