#ifndef DEVOLVER_LIVRO_H
#define DEVOLVER_LIVRO_H

#include <stdio.h>
#include "livro.h"

int devolver_livro(livro *p, int atual, char *titulo[]) {

    int i = 0;
    while(strcmp(p[i].titulo, titulo) != 0){
        i++;
        
        if(i > atual) {
            printf("Livro não encontrado\n");
            return 0;
        }
        
    }

    if(p[i].disponivel == true) {
        printf("O livro não foi reservado!\n");
        return 0;
    }

    p[i].disponivel = true;
    printf("Livro %s devolvido!\n", p[i].titulo);
    
    return 1;
}


#endif