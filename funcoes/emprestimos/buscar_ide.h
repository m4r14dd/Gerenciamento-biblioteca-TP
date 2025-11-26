#ifndef BUSCAR_IDE_H
#define BUSCAR_IDE_H
#include "../../registros/emprestimo.h"
#include "../../registros/livro.h"

int buscar_ide(emprestimo *e, livro *l, int ide, int total_emprestimos, int total_livros){
   int i,j;
   for(i = 0; i < total_emprestimos && e[i].idEmprestimo != ide; i++);
   int idl = e[i].idLivro;
   for(j = 0; j < total_livros && l[i].idLivro != idl; j++);
   
   return l[j].disponivel;
}

#endif