//importa as structs da pasta /registros
#include "./registros/emprestimo.h"
#include "./registros/usuario.h"
#include "./registros/livro.h"


#include "./funcoes/relatorios/contar_livros.h"
#include "./funcoes/relatorios/emprestimos_usuario.h"
#include "./funcoes/menu.h"


#include <stdlib.h>


int gerenciamento_relatorios(emprestimo *emprestimos, usuario *usuarios, livro *livros, int total_emprestimos, int total_livros) {

    int opcao;
    
    int id_usuario;
    int id_livro;
    int id_emprestimo;

    while(scanf("%d", &opcao)) {

        switch(opcao) {

            case 1:
                /*Quantidade total de livros cadastrados*/
               
                printf("Total de livros cadastrados: %d \n", total_livros);
            
            break;
            
            case 2:
                /*Quantidade de livros disponíveis e emprestados*/

                contar_livros(livros, total_livros);

            break;
            
            case 3:
                /*Usuário com mais emprestimos ativos*/

                emprestimos_usuario(emprestimos, total_emprestimos);
            break;
            
            case 4:
                /*Livro mais emprestado*/

            break;
            
            case 0:
                
                return 1;

            break;

        }

        menu_de_relatorios();
    }

}