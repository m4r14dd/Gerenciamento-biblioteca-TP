#ifndef LISTAR_LIVROS_H
#define LISTAR_LIVROS_H

#include "livro.h"


void listar_livros(livro *p, int atual) {
    
    printf("1 para disponível e 0 para indisponível\n");

    for(int i = 0; i < atual; i++) {
        printf("Livro: %s | Disponibilidade: %d\n", p[i].titulo, p[i].disponivel);
        
    }
}


#endif