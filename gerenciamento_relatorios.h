//importa todas structs para o gerenciamento de relatorios
#include "./registros/emprestimo.h"
#include "./registros/usuario.h"
#include "./registros/livro.h"


//importa todas as funções para o gerenciamento de relatorios
#include "./funcoes/relatorios/contar_livros.h"
#include "./funcoes/relatorios/emprestimos_usuario.h"
#include "./funcoes/relatorios/emprestimos_livro.h"
#include "./funcoes/menu.h"


#include <stdlib.h>


int gerenciamento_relatorios(emprestimo *emprestimos, usuario *usuarios, 
    livro *livros, int total_emprestimos, int total_livros, int total_usuarios) {

    int opcao;

    while(scanf("%d", &opcao)) {

        switch(opcao) {

            case 1:
                /*Quantidade total de livros cadastrados*/
               
                //printa o total de livros existentes
                printf("Total de livros cadastrados: %d \n", total_livros);
            
            break;
            
            case 2:
                /*Quantidade de livros disponíveis e emprestados*/

                //printa a quantia de livros disponíveis e indisponíveis
                contar_livros(livros, total_livros);

            break;
            
            case 3:
                /*Usuário com mais emprestimos ativos*/

                //printa o nome do usuário com mais emprestimos ativos
                emprestimos_usuario(emprestimos, total_emprestimos, total_usuarios);
            break;
            
            case 4:
                /*Livro mais emprestado*/

                //AAAAAAAAAAAA

            break;
            
            case 0:
                /*Retorna ao menu principal*/

                //limpa o terminal antes de retornar ao menu principal
                limpar_tela();

                return 1;

            break;

        }

        //printa o menu de relatórios após cada iteração
        

        menu_de_relatorios();

    }

}