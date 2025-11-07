#ifndef PEGAR_LIVRO_H
#define PEGAR_LIVRO_H

#include <stdio.h>
#include "livro.h"

int pegar_livro(livro livros[], int N, char titulo[]) {

    int i = 0;
    while(strcmp(livros[i].titulo, titulo) != 0){
        i++;
        
        if(i >= N) {
            printf("Livro não encontrado\n");
            return 0;
        }
        
    }

    livros[i].disponivel = false;
    
    printf("Livro %s pego!\n", livros[i].titulo);
    return 1;
}


#endif