//importa a struct emprestimo da pasta /registros
#include "./registros/emprestimo.h"
#include "./registros/usuario.h"
#include "./registros/livro.h"

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
                /*Registrar novo empréstimo*/

                printf("Informe o ID do usuário: \n");
                scanf("%d", &id_usuario);

                printf("Informe o ID do livro: \n");
                scanf("%d", &id_livro);

                registrar_emprestimo(emprestimos, usuarios, livros, id_usuario, id_livro, total_emprestimos);

                emprestimos = (emprestimo *)realloc(emprestimos, (total_emprestimos) + 1 *sizeof(emprestimo));

            break;
            
            case 2:
                /*Registrar devolução de um livro*/
            
                printf("Informe o ID do emprestimo: \n");
                scanf("%d", &id_emprestimo);

                registrar_devolucao(emprestimos, total_emprestimos, id_emprestimo);

            break;
            
            case 3:
                /*Listar todos emprestimos ativos*/

                listar_emprestimos(emprestimos, total_emprestimos);
            
            break;
            
            case 4:
                //Listar histórico de emprestimos
            
            break;
            
            case 5:
                //Mostrar todos os livros emprestados por um usuário
            
            break;
            
            case 0:
                return total_emprestimos;
            
            break;

        }

        menu_de_emprestimos();
    }

}