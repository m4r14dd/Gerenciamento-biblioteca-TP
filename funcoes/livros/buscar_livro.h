#ifndef BUSCAR_LIVRO_H
#define BUSCAR_LIVRO_H

#include <stdio.h>
#include <string.h>

//importa a struct livro
#include "../../registros/livro.h"


int buscar_livro(livro *livros, int total_livros, char busca[]) {
    /*
    Busca um livro no vetor de livros
    passa por todos os livros, até achar um que possua o nome ou titulo condizente
    */

    int i = 0;

    while(strcmp(livros[i].titulo, busca) != 0 && strcmp(livros[i].autor, busca) != 0) {
        i++;
        if(i > total_livros) {
            //já acessou todos os livros do vetor e não encontrou
            
            printf("Livro não encontrado!\n");
            return 0;
        
        }
    }

    //printa os dados do livro encontrado
    printf("\n====Livro: %s encontrado!====\n", livros[i].titulo);
    printf("Autor: %s\n", livros[i].autor);
    printf("Lançamento: %d\n", livros[i].publicacao);

    //verifica se o livro encontrado está disponível
    if(livros[i].disponivel){
        printf("Disponivel\n");
    }
    else{
        printf("Indisponivel\n");
    }

    return 1;

}


#endif