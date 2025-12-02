#ifndef REGISTRAR_DEVOLUCAO_H
#define REGISTRAR_DEVOLUCAO_H


//importa a struct emprestimo
#include "../../registros/emprestimo.h"


#include <stdio.h>


int registrar_devolucao(emprestimo *emprestimos,int total_emprestimos, int id_emprestimo) {
    /*
    Registra a devolução de um emprestimo
    */

    for(int i = 0; i < total_emprestimos; i++){
        if(emprestimos[i].idEmprestimo == id_emprestimo){
            
            //define o estado do emprestimo como inativo
            emprestimos[i].ativo = 0;
            printf("Livro retornado com sucesso! \n");
            
            return 0;
        }

    }

    //emprestimo não foi encontrado
    printf("Emprestimo não encontrado! \n");
    return 1;

}


#endif