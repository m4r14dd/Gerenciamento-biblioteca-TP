#ifndef LISTAR_HISTORICO_H
#define LISTAR_HISTORICO_H


//importa a struct emprestimo
#include "../../registros/emprestimo.h"


#include <stdio.h>


void listar_historico(emprestimo *emprestimos, int total_emprestimos) {
    
    /*
    Lista todos os emprestimos já realizados
    e se estão ativos ou não
    */

    printf("====Histórico de emprestimos ====\n");

    for(int i = 0; i < total_emprestimos; i++) {

        //imrpime os dados do emprestimo
        printf("ID do emprestimo: %d | ID do livro: %d | ID do usuario: %d \n",
        emprestimos[i].idEmprestimo, emprestimos[i].idLivro, emprestimos[i].idUsuario);

    }

    printf("\n");

}


#endif