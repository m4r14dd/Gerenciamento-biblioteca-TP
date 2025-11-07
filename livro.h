#ifndef LIVRO_H
#define LIVRO_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct {

    char titulo[100];
    char autor[100];
    int publicacao;
    bool disponivel;

} livro;

#endif 