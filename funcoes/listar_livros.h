//eu ainda não pesquisei pra que usar ifndef, define e endif. 
//mas tem que usar pq se não dá peteco
//eu acho que tem a ver com importar a mesma biblioteca mais de uma vez, algo assim
#ifndef LISTAR_LIVROS_H
#define LISTAR_LIVROS_H
#include <stdio.h>
#include "../registros/livro.h"


void listar_livros(livro *p, int total_livros) {
    /*
        Lista todos os livros armazenados
    */
    printf("\n");
    printf("(1 para disponível e 0 para indisponível)\n");
    printf("\n");

    for(int i = 0; i < total_livros; i++) {
        //printa os dados de cada livro achado
        printf("Livro: %s | ID: %d | Disponibilidade: %d\n", p[i].titulo, p[i].idLivro, p[i].disponivel);
        
    }
    printf("\n");
}


#endif