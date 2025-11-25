#ifndef ADICIONAR_LIVRO_H
#define ADICIONAR_LIVRO_H

#include <stdio.h>
#include <string.h>

//importa a struct livro da pasta /registros
#include "../../registros/livro.h"


void adicionar_livro(livro *p, int total_livros) {
    /*
    Adiciona um livro ao vetor dinâmico p
    usa a contadora de livros pra acessar a ultima posição do vetor p
    */

    printf("Informe o título do livro: \n");
    scanf("%s", p[total_livros].titulo);

    printf("Informe o nome do Autor: \n");
    scanf("%s", p[total_livros].autor);

    printf("Informe o ano de publicação: \n");
    scanf("%d", &p[total_livros].publicacao);

    p[total_livros].disponivel = true;
    
    //define o id do livro como a "posição" no vetor.
    //o i-ésimo livro tem o id do livro[i - 1] + 1
    p[total_livros].idLivro = p[total_livros - 1].idLivro + 1;

}

#endif