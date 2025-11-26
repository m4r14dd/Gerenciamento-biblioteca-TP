#ifndef BUSCAR_LIVRO_H
#define BUSCAR_LIVRO_H

#include <stdio.h>
#include <string.h>

//importa a struct livro da pasta /registros
#include "../../registros/livro.h"


int buscar_livro(livro *p, int total_livros, char busca[]) {
    /*
    Busca um livro no vetor p
    passa por todos os livros, até achar um que possua o nome ou titulo condizente
    */

    int i = 0;
    while(strcmp(p[i].titulo, busca) != 0 && strcmp(p[i].autor, busca) != 0) {
        i++;
        if(i > total_livros) {
            printf("Livro não encontrado!\n");
            return 0;
        }
    }

    //printa os dados do livro encontrado
    printf("\n====Livro: %s encontrado!====\n", p[i].titulo);
    printf("Autor: %s\n", p[i].autor);
    printf("Lançamento: %d\n", p[i].publicacao);
        if(p[i].disponivel){
            printf("Disponivel\n");
        }
        else{
            printf("Indisponivel\n");
        }

    return 1;

}


#endif