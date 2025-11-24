//eu ainda não pesquisei pra que usar ifndef, define e endif. 
//mas tem que usar pq se não dá peteco
//eu acho que tem a ver com importar a mesma biblioteca mais de uma vez, algo assim
#ifndef LIVRO_H
#define LIVRO_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct {

    int idLivro;
    char titulo[100];
    char autor[100];
    int publicacao;
    bool disponivel; //1 = disponivel 0 = indisponivel

} livro;

#endif 