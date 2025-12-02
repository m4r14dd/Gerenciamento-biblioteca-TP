#ifndef REGISTRAR_DEVOLUCAO_H
#define REGISTRAR_DEVOLUCAO_H


//importa a struct emprestimo
#include "../../registros/emprestimo.h"
#include "../../registros/livro.h"


//importa função para encontrar o livro
#include "../livros/buscar_idl.h"


#include <stdio.h>


int registrar_devolucao(emprestimo *emprestimos, livro *livros, int total_emprestimos, int id_emprestimo, int total_livros) {
    /*
    Registra a devolução de um emprestimo
    */

    for(int i = 0; i < total_emprestimos; i++){
        if(emprestimos[i].idEmprestimo == id_emprestimo){
            
            //define o estado do emprestimo como inativo
            emprestimos[i].ativo = 0;
            printf("Livro retornado com sucesso! \n");

            //definir o estado do livro como disponível:
            int posicao_livro = buscar_idl(livros, emprestimos[i].idLivro, total_livros);
            livros[posicao_livro].disponivel = 1;
            
            return 0;
        }

    }

    //emprestimo não foi encontrado
    printf("Emprestimo não encontrado! \n");
    return 1;

}


#endif