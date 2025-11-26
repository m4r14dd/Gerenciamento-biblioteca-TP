#ifndef REGISTRAR_DEVOLUCAO_H
#define REGISTRAR_DEVOLUCAO_H

#include "./registros/emprestimo.h"


#include <stdio.h>


int registrar_devolucao(emprestimo *emprestimos,int total_emprestimos, int id_emprestimo) {
    /*
    */

    for(int i = 0; i < total_emprestimos; i++){
        if(emprestimos[i].idEmprestimo == id_emprestimo){
            
            emprestimos[i].idEmprestimo = 0;
            printf("Livro retornado com sucesso! \n");
            
            return 0;
        }

    }

    printf("Emprestimo não encontrado! \n");
    return 1;

}


#endif