#ifndef LISTAR_LIVROS_H
#define LISTAR_LIVROS_H

#include "livro.h"


void listar_livros(livro livros[], int N) {
    printf("1 para disponível e 0 para indisponível\n");

    for(int i = 0; i < N; i++) {
        printf("Livro: %s | Disponibilidade: %d\n", livros[i].titulo, livros[i].disponivel);
        
    }
}


#endif