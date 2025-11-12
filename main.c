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

    int N = 1;
    livro *p;
    p = (livro *)malloc(N*sizeof(livro));
    
    int opcao;
    
    print_menu();
    
    
    int atual = 0;
    while(scanf("%d", &opcao)) {
        char titulo_busca[100];
        
        switch (opcao) {
            case 1:
                adicionar_livro(p, atual);
                
                atual++; N++;
                p = (livro *)realloc(p, N*sizeof(livro));
            break;

            case 2:
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                buscar_livro(p,atual, titulo_busca);
            break;

            case 3:
                listar_livros(p, atual);
            break;

            case 4:
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                pegar_livro(p, atual, titulo_busca);
            break;
            
            case 5:
                printf("Digite o título do livro: \n");
                scanf(" %s", titulo_busca);

                devolver_livro(p, atual, titulo_busca);
            break;

        }

        print_menu();

    }

    free(p);
    return 0;

}