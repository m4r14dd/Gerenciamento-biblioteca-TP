#include <stdio.h>
#include <stdlib.h>

//importa todas as structs que o programa vai usar
#include "./registros/livro.h"
#include "./registros/usuario.h" 
#include "./registros/emprestimo.h"

//importa todas as funções para gerenciamento da biblioteca
#include "gerenciamento_livros.h"
#include "gerenciamento_emprestimos.h"
#include "gerenciamento_usuarios.h"
#include "gerenciamento_relatorios.h"
#include "./funcoes/menu.h"


int main(){

    //incialização dos vetores dinamicos
    livro *livros;
    usuario *usuarios;
    emprestimo *emprestimos;
    
    livros = (livro *)calloc(2,sizeof(livro));
    usuarios = (usuario *)calloc(2,sizeof(usuario));
    emprestimos = (emprestimo *)calloc(2,sizeof(emprestimo));
    
    //variaveis para manter contagem dos dados
    int total_livros = 1;
    int total_usuarios = 1;
    int total_emprestimos = 1;
    
    int opcao = 0;
    
    //printa o menu principal pela primeira vez
    menu_principal();
    
    while(scanf("%d", &opcao)) {
        
        switch (opcao) {
            case 1:
                /*gerenciamento de livros*/

                //printa o menu de livros
                menu_de_livros();

                //chama a função que vai ler as entradas no menu de livros
                total_livros = gerenciamento_livros(livros, total_livros);
                
            break;
            
            case 2:
                /*gerenciamento de usuarios*/

                //printa o menu de usuarios
                menu_de_usuarios();
                
                //chama a funcao que vai ler as entradas no menu de usuarios
                total_usuarios = gerenciamento_usuarios(usuarios, total_usuarios);

            break;
            
            case 3:
                /*gerenciamento de emprestimos*/

                //printa o menu de emprestimos
                menu_de_emprestimos();
                
                //chama a funcao que vai ler as entradas no menu de emprestimos
                total_emprestimos = gerenciamento_emprestimos(emprestimos, usuarios, livros, total_emprestimos, total_livros, total_usuarios);
            
            break;
           
            case 4:
                /*gerenciamento de relatorios*/

                //printa o menu de relatorios
                menu_de_relatorios();

                //chama a funcao que vai ler as entradas no menu de relatorios
                gerenciamento_relatorios(emprestimos, usuarios, livros, total_emprestimos, total_livros,total_usuarios);
            

            break; 

            case 0:
                //libera a memória alocada
                free(livros);
                free(emprestimos);
                free(usuarios);

                return 0;

            break;
        }
        
        //printa o menu principal após cada iteração
        menu_principal();

    }

}