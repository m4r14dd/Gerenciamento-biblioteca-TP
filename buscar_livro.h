#ifndef BUSCAR_LIVRO_H
#define BUSCAR_LIVRO_H

#include <stdio.h>
#include "livro.h"


int buscar_livro(livro livros[], int N, char titulo[]) {

    int i = 0;
    while(strcmp(livros[i].titulo, titulo) != 0) {
        i++;
        if(i > N) {
            printf("Livro não encontrado\n");
            return 0;
        }
    }

    printf("\n====Livro %s encontrado!====\n", livros[i].titulo);
    printf("Autor: %s\n", livros[i].autor);
    printf("Lançamento: %d\n", livros[i].publicacao);
    printf("Disponibilidade (1 para disponivel, 0 para indisponivel): %d\n", livros[i].disponivel);
    return 1;

}


#endif