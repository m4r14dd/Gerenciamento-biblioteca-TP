#ifndef ATUALIZAR_LIVRO_H
#define ATUALIZAR_LIVRO_H

#include <stdio.h>
#include <string.h>

//importa a struct livro da pasta /registros
#include "../../registros/livro.h"


void menu() {

    printf("====INFORME O DADO A SER ATUALIZADO===\n");
    printf("1. Atualizar título\n");
    printf("2. Atualizar autor\n");
    printf("3. Atualizar ano de publicação\n");

}


void atualizar_livro(livro *p, int posicao) {

    /**/

    int opcao;

    menu();
    scanf("%d", &opcao);

    switch(opcao) {

        case 1:

            printf("Informe o novo título: \n");
            scanf("%s", p[posicao].titulo);

        break;

        case 2:

            printf("Informe o novo autor: \n");
            scanf("%s", p[posicao].autor);

        break;

        case 3:

            printf("Informe o novo ano de publicação: \n");
            scanf("%d", &p[posicao].publicacao);

        break;
    }
    
}


#endif