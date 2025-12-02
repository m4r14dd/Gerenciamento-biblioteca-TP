#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <stdlib.h>
#include <stdbool.h>


typedef struct{

    int idEmprestimo;
    int idUsuario;
    int idLivro;
    char dataEmprestimo[11]; //dd/mm/aaaa
    char dataDevolucao[11]; //dd/mm/aaaa
    int ativo; //1 = ativo 0 = concluido

}emprestimo;


#endif