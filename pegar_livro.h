#ifndef PEGAR_LIVRO_H
#define PEGAR_LIVRO_H

#include <stdio.h>
#include "livro.h"

int pegar_livro(livro *p, int atual, char titulo[]) {

    int i = 0;
    while(strcmp(p[i].titulo, titulo) != 0){
        i++;
        
        if(i > atual) {
            printf("Livro não encontrado\n");
            return 0;
        }
        
    }

    if(p[i].disponivel == false){
        printf("Livro indisponível!\n");
        return 1;
    }

    p[i].disponivel = false;
    printf("Livro %s reservado!\n", p[i].titulo);
    
    return 1;
}


#endif