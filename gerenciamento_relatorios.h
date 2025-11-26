//importa as structs da pasta /registros
#include "./registros/emprestimo.h"
#include "./registros/usuario.h"
#include "./registros/livro.h"


#include "./funcoes/relatorios/emprestimos_livro.h"
#include "./funcoes/relatorios/emprestimos_usuario.h"
#include "./funcoes/relatorios/livros_cadastrados.h"
#include "./funcoes/relatorios/livros_disponiveis.h"
#include "./funcoes/menu.h"


#include <stdlib.h>


int gerenciamento_emprestimos(emprestimo *emprestimos, usuario *usuarios, livro *livros, int total_emprestimos) {

    int opcao;
    
    int id_usuario;
    int id_livro;
    int id_emprestimo;

    while(scanf("%d", &opcao)) {

        switch(opcao) {

            case 1:
                

            break;
            
            case 2:


            break;
            
            case 3:
            
            break;
            
            case 4:
            
            break;
            
            case 5:
                
            break;
            
            case 0:

                return total_emprestimos;
            
            break;

        }

        menu_de_emprestimos();
    }

}