#ifndef DEVOLVER_LIVRO_H
#define DEVOLVER_LIVRO_H

#include <stdio.h>
#include "livro.h"

int devolver_livro(livro livros[], int N, char *titulo[]) {

    int i = 0;
    while(strcmp(livros[i].titulo, titulo) != 0){
        i++;
        
        if(i >= N) {
            printf("Livro não encontrado\n");
            return 0;
        }
        
    }

    livros[i].disponivel = true;
    
    printf("Livro %s devolvido!\n", livros[i].titulo);
    return 1;
}


#endif