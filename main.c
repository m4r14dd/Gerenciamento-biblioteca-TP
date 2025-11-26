#include <stdio.h>
#include <stdlib.h>

//importa todas as structs que o programa vai usar
#include "./registros/livro.h"
#include "./registros/usuario.h" 
#include "./registros/emprestimo.h"
#include "./funcoes/menu.h"

#include "gerenciamento_livros.h"
#include "gerenciamento_emprestimos.h"
#include "gerenciamento_usuarios.h"


int main(){

    //incializa o vetor dinamico de livros
    livro *livros;
    livros = (livro *)calloc(1,sizeof(livro));
    int total_livros = 0;

    emprestimo *emprestimos;
    emprestimos = (emprestimo *)calloc(1,sizeof(livro));

    int total_emprestimos = 0;
    
    usuario *u;
    u = (usuario *)calloc(1,sizeof(usuario));
    int total_usuarios = 0;

    int opcao = 0;
    
    //printa o menu principal
    menu_principal();
    
    while(scanf("%d", &opcao)) {
        
        switch (opcao) {
            case 1:
                //printa o menu de gerenciamento de livros
                menu_de_livros();

                //chama a função que vai ler as entradas no menu de livros
                total_livros = gerenciamento_livros(livros, total_livros);
            
            break;
            
            case 2:
                //printa o menu de gerenciamento de usuarios
                menu_de_usuarios();
                
                total_usuarios = gerenciamento_usuarios(u,total_usuarios);

            break;
            
            case 3:
            //printa o menu de gerenciamento de emprestimos
                menu_de_emprestimos();
                
                total_emprestimos = gerenciamento_emprestimos(emprestimos, u, livros, total_emprestimos);
            
            break;
           
            
            /*
            case 4:
                menu_de_relatorios();
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                pegar_livro(p, atual, titulo_busca);
            break;
            
            case 5:
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                devolver_livro(p, atual, titulo_busca);
            break;
                */

            case 0:
                //libera a memória alocada e finaliza o programa
                free(livros);
                free(emprestimos);
                free(u);
                return 0;

            break;
        }

        menu_principal();

    }

}