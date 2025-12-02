#ifndef BUSCAR_IDE_H
#define BUSCAR_IDE_H


//importa as structs emprestimo e registro
#include "../../registros/emprestimo.h"
#include "../../registros/livro.h"


int buscar_ide(emprestimo *emprestimos, livro *livros, int id_emprestimo, int total_emprestimos, int total_livros){
   
   /*
      Busca um livro e retorna se ele está disponível ou não
   */


   int i,j;
   
   //For de varredura para encontrar um emprestimo
   for(i = 0; i < total_emprestimos && emprestimos[i].idEmprestimo != id_emprestimo; i++);
   
   //Armazena o ID do livro emprestado
   int id_livro = emprestimos[i].idLivro;
   
   //For de varredura para encontrar um livro
   for(j = 0; j < total_livros && livros[i].idLivro != id_livro; j++);
   
   //retorna o estado do livro
   return livros[j].disponivel;
   
}

#endif