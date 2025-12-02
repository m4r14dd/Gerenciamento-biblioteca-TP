#ifndef LIVRO_H
#define LIVRO_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct {

    int idLivro;
    char titulo[100];
    char autor[100];
    int publicacao;
    int disponivel; //1 = disponivel 0 = indisponivel

} livro;

#endif 