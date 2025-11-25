#ifndef BUSCAR_ID_H
#define BUSCAR_ID_H

#include <stdio.h>

//importa a struct livro da pasta /registros
#include "../../registros/livro.h"


int buscar_id (livro *p, int id, int total_livros) {

    int i = 0;
    while(p[i].idLivro != id) {
        i++;

        if(i > total_livros) {
            printf("Livro não encontrado!\n");
            return 0;

        }

    }

    return i;

}


#endif
