#ifndef LISTAR_EMPRESTIMOS_H
#define LISTAR_EMPRESTIMOS_H


#include "../../registros/emprestimo.h"


#include <stdio.h>


void listar_emprestimos(emprestimo *emprestimos, int total_emprestimos) {
    
    printf("====Emprestimos ativos====\n");

    for(int i = 0; i < total_emprestimos; i++) {

        if(emprestimos[i].ativo == 1){
            printf("ID do emprestimo: %d | ID do livro: %d | ID do usuario: %d \n",
            emprestimos[i].idEmprestimo, emprestimos[i].idLivro, emprestimos[i].idUsuario);

        }

    }

    printf("\n");

}


#endif