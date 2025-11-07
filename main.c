#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "menu.h"
#include "adicionar_livro.h"
#include "buscar_livro.h" 
#include "listar_livros.h"
#include "pegar_livro.h"
#include "devolver_livro.h"


int main(){

    int N = 100;
    livro livros[N];

    int opcao;

    print_menu();


    int atual = 0;
    while(scanf(" %d", &opcao) != 0) {
        char titulo_busca[100];
        
        switch (opcao) {
            case 1:
                adicionar_livro(livros, N, atual);
                atual++;
            break;

            case 2:
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                buscar_livro(livros,atual, titulo_busca);
            break;

            case 3:
                listar_livros(livros, atual);
            break;

            case 4:
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                pegar_livro(livros, atual, titulo_busca);
            break;
            
            case 5:
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                devolver_livro(livros, atual, titulo_busca);
            break;
        }

        print_menu();

    }


}