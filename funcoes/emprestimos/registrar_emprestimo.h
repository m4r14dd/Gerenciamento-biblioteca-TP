#ifndef REGISTRAR_EMPRESTIMO_H
#define REGISTRAR_EMPRESTIMO_H


#include "../registros/emprestimo.h"
#include "../registros/usuario.h"
#include "../registros/livro.h"


#include <stdio.h>
#include <string.h>


void registrar_emprestimo(emprestimo *emprestimos, usuario *usuarios, livro *livros, int id_livro, int id_usuario, int emprestimo_atual) {

    /*
    */

    emprestimos[emprestimo_atual].idEmprestimo = emprestimos[emprestimo_atual - 1].idEmprestimo + 1; 
    
    emprestimos[emprestimo_atual].idLivro = id_livro;
    emprestimos[emprestimo_atual].idUsuario = id_usuario;

    char data_emprestimo[11]; // formato: "dd/mm/aaaa"
    printf("Insira a data do emprestimo: \n");
    scanf("%s", data_emprestimo);

    emprestimos[emprestimo_atual].dataEmprestimo = data_emprestimo;

    emprestimos[emprestimo_atual].ativo = 1;

}

#endif