#ifndef ADICIONAR_LIVRO_H
#define ADICIONAR_LIVRO_H

#include <stdio.h>
#include "livro.h"


void adicionar_livro(livro livros[], int N, int atual) {

    printf("Informe o título do livro: \n");
    scanf("%s", livros[atual].titulo);

    printf("Informe o nome do Autor: \n");
    scanf("%s", livros[atual].autor);

    printf("Informe o ano de publicação: \n");
    scanf("%d", &livros[atual].publicacao);


}

#endif