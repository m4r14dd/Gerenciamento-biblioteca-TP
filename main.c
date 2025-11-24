#include <stdio.h>
#include <stdlib.h>

//importa todas as structs que o programa vai usar
#include "./registros/livro.h"
#include "./registros/usuario.h" 
#include "./registros/emprestimo.h"
#include "./funcoes/menu.h"

#include "gerenciamento_livros.c"s


int main(){

    //incializa o vetor dinamico de livros (calloc é pra inicializar o livro com todas as variaveis zeradas)
    livro *p;
    p = (livro *)calloc(1,sizeof(livro));
    

    int opcao = 0;
    int total_livros = 0;
    
    //printa o menu principal
    menu_principal();
    
    while(scanf("%d", &opcao)) {
        
        switch (opcao) {
            case 1:
                //printa o menu de gerenciamento de livros
                menu_de_livros();

                //chama a função que vai ler as entradas no menu de livros
                total_livros = gerenciamento_livros(p, total_livros);
            
                break;
            /*
            case 2:
                menu_de_usuarios();

                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                buscar_livro(p,atual, titulo_busca);
            break;

            case 3:
                menu_de_emprestimos();
            break;

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
                free(p);
                return 0;

            break;
        }

        menu_principal();

    }

}