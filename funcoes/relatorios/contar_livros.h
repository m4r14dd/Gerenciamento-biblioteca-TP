#ifndef EMPRESTIMOS_LIVRO_H
#define EMPRESTIMOS_LIVRO_H


//importa a struct livro
#include "../../registros/livro.h"


#include <stdio.h> 


void contar_livros(livro *livros, int total_livros){

    /*
    Conta quantos livros estão disponíveis e quantos não estão
    */

    int disponiveis = 0;
    int indisponiveis = 0;

    for(int i = 0; i < total_livros; i++) {

        if(livros[i].disponivel == 0){

            disponiveis++;
        
        }else {
        
            indisponiveis++;
        
        }
    }

    //imprime a quantia de livros disponíveis e indisponíveis
    printf("%d Livros disponíveis | %d Livros indisponíveis \n", disponiveis, indisponiveis);

}

#endif