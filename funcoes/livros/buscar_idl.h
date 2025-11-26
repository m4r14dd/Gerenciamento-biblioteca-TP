#ifndef BUSCAR_IDL_H
#define BUSCAR_IDL_H

#include <stdio.h>

//importa a struct livro da pasta /registros
#include "../../registros/livro.h"


int buscar_idl (livro *p, int id, int total_livros) {

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
