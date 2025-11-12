#ifndef ADICIONAR_LIVRO_H
#define ADICIONAR_LIVRO_H

#include <stdio.h>
#include "livro.h"


void adicionar_livro(livro *p, int atual) {

    printf("Informe o título do livro: \n");
    scanf("%s", p[atual].titulo);

    printf("Informe o nome do Autor: \n");
    scanf("%s", p[atual].autor);

    printf("Informe o ano de publicação: \n");
    scanf("%d", &p[atual].publicacao);

    p[atual].disponivel = true;

}

#endif