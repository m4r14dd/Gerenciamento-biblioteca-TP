#ifndef LISTAR_HISTORICO_H
#define LISTAR_HISTORICO_H


#include "../../registros/emprestimo.h"


#include <stdio.h>


void listar_historico(emprestimo *emprestimos, int total_emprestimos) {
    
    printf("====Histórico de emprestimos ====\n");

    for(int i = 0; i < total_emprestimos; i++) {

        printf("ID do emprestimo: %d | ID do livro: %d | ID do usuario: %d \n",
        emprestimos[i].idEmprestimo, emprestimos[i].idLivro, emprestimos[i].idUsuario);

    }

    printf("\n");

}


#endif