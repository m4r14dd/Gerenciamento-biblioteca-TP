#ifndef ATUALIZAR_LIVRO_H
#define ATUALIZAR_LIVRO_H


#include <stdio.h>
#include <string.h>


//importa a struct livro
#include "../../registros/livro.h"
#include "../menu.h"


void atualizar_livro(livro *livros, int posicao) {
    /*
    Altera os dados de um livro no vetor
    usa o inteiro posicao para acessar o livro no vetor
    */

    int opcao;

    //printa o menu com as opções para atualização do livro
    menu_atualizacao();
    scanf("%d", &opcao);

    switch(opcao) {

        case 1:
            //atualiza o título do livro
            
            printf("Informe o novo título: \n");
            scanf("%s", livros[posicao].titulo);

        break;

        case 2:
            //atualiza o autor do livro

            printf("Informe o novo autor: \n");
            scanf("%s", livros[posicao].autor);

        break;

        case 3:
            //atualiza o ano de publicação do livro

            printf("Informe o novo ano de publicação: \n");
            scanf("%d", &livros[posicao].publicacao);

        break;
    }
    
}


#endif