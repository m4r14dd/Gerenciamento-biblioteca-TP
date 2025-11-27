//importa as structs da pasta /registros
#include "./registros/emprestimo.h"
#include "./registros/usuario.h"
#include "./registros/livro.h"


#include "./funcoes/emprestimos/listar_historico.h"
#include "./funcoes/emprestimos/listar_registros.h"
#include "./funcoes/emprestimos/registrar_emprestimo.h"
#include "./funcoes/emprestimos/registrar_devolucao.h"
#include "./funcoes/emprestimos/buscar_ide.h"
#include "./funcoes/usuarios/buscar_idu.h"
#include "./funcoes/menu.h"


#include <stdlib.h>


int gerenciamento_emprestimos(emprestimo *emprestimos, usuario *usuarios, 
    livro *livros, int total_emprestimos, int total_livros, int total_usuarios) {

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

                int pid = buscar_idl(livros,id_livro,total_livros);
                int uid = buscar_idu(usuarios, id_usuario, total_usuarios);
                if(livros[pid].idLivro && uid){

                    registrar_emprestimo(emprestimos, usuarios, livros, id_usuario, id_livro, total_emprestimos);
                    livros[pid].idLivro = false;
                    emprestimos = (emprestimo *)realloc(emprestimos, (total_emprestimos) + 1 *sizeof(emprestimo));

                }
                else{
                printf("Nao sera possivel fazer este emprestimo : usuario inativo ou livro indisponivel\n");
                }
            break;
            
            case 2:
                /*Registrar devolução de um livro*/
            
                printf("Informe o ID do emprestimo: \n");
                scanf("%d", &id_emprestimo);

                if(buscar_ide(emprestimos,livros,id_emprestimo,total_emprestimos,total_livros)){

                registrar_devolucao(emprestimos, total_emprestimos, id_emprestimo);

                }
                else{
                printf("Este livro nao foi emprestado\n");
                }

            break;
            
            case 3:
                /*Listar todos emprestimos ativos*/

                listar_emprestimos(emprestimos, total_emprestimos);
            
            break;
            
            case 4:
                /*Listar histórico de emprestimos*/

                listar_historico(emprestimos, total_emprestimos);
            
            break;
            
            case 5:
                /*Mostrar todos os livros emprestados por um usuário */

                printf("Informe o ID do usuario: \n");

                

            break;
            
            case 0:

                return total_emprestimos;
            
            break;

        }

        menu_de_emprestimos();
    }

}