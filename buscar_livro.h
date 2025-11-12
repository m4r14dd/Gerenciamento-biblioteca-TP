#ifndef BUSCAR_LIVRO_H
#define BUSCAR_LIVRO_H

#include <stdio.h>
#include "livro.h"


int buscar_livro(livro *p, int atual, char titulo[]) {

    int i = 0;
    while(strcmp(p[i].titulo, titulo) != 0) {
        i++;
        if(i > atual) {
            printf("Livro não encontrado!\n");
            return 0;
        }
    }

    printf("\n====Livro %s encontrado!====\n", p[i].titulo);
    printf("Autor: %s\n", p[i].autor);
    printf("Lançamento: %d\n", p[i].publicacao);
    printf("Disponibilidade (1 para disponivel, 0 para indisponivel): %d\n", p[i].disponivel);

    return 1;

}


#endif