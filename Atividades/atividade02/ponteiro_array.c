#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char const *argv[]){system("color 7c");

    char string[30];//se colocar um numero menor que 30, sera puxado "lixo" para depois da frase.
    int i;

    strcpy(string, "\n!!Ponteiros são maneiros!!");setlocale(LC_ALL, "Portuguese");

    char *p = string;//será a string escrita entre aspas.

    while (*p != 0){//!= diferente de.
        printf("%c", *p);
        p++;
    } 
    return (0);
}
