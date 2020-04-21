#include <stdio.h>
#include <stdlib.h>

struct s_aluno {
    char nome[30];
    int matricula;
    float media;
    };
main(int argc, char const *argv[]){system("color 7c");

    fflush(stdout);
    //stdout é como um nome de variável constante.
    struct s_aluno aluno, *ptr = &aluno;
    
puts("DESCRICAO:\n");
    aluno.media = 9.0;
    aluno.matricula = 1922082019;
    strcpy(aluno.nome, "Edinilson");
    printf("%s\n", ptr->nome);
    printf("%d\n", ptr->matricula);
    printf("%.2f\n", ptr->media);

    return EXIT_SUCCESS;
}


