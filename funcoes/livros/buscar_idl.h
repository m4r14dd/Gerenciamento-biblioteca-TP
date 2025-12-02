#ifndef BUSCAR_IDL_H
#define BUSCAR_IDL_H


#include <stdio.h>


//importa a struct livro
#include "../../registros/livro.h"


int buscar_idl (livro *livros, int id, int total_livros) {
    /*
    Varre o vetor de livros em busca de um ID igual
    */


    int i = 0;

    while(livros[i].idLivro != id) {
        i++;

        if(i > total_livros) {
            //já acessou todos os livros do vetor e não encontrou

            printf("Livro não encontrado!\n");
            return 0;

        }

    }

    //retorna a posição do livro desejado
    return i;

}


#endif
