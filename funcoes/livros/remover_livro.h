#ifndef REMOVER_LIVRO_H
#define REMOVER_LIVRO_H

#include <stdio.h>
#include <string.h>

//importa a struct livro da pasta /registros
#include "../../registros/livro.h"


void remover_livro(livro *p, int posicao, int total_livros) {

    /**/

    if(p == NULL) {
        printf("Erro: vetor é NULL! \n");
    
    }
    if(total_livros <= 0 ) {
        printf("Erro: não há livros na biblioteca! \n");

    }
    
    for(int i = posicao; i < total_livros - 1; i++) {
        p[i] = p[i + 1];
    
    }

    printf("Livro removido com sucesso! \n");

}


#endif