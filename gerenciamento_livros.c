//importa a struct livro da pasta /registros
#include "./registros/livro.h"

//importa as funções pra gerenciar os livros
#include "./funcoes/adicionar_livro.h"
#include "./funcoes/buscar_livro.h"
#include "./funcoes/menu.h"
#include "./funcoes/listar_livros.h"

#include <stdlib.h>


int gerenciamento_livros(livro *p, int total_livros) {

    int opcao;

    while(scanf("%d", &opcao)){ 

        //string pra caso o programa vá fazer a busca de um livro
        char busca[100];

        switch (opcao) {
            case 1:
                /*Adicionar novo livro*/

                //chama a função que adiciona um livro no vetor dinamico
                adicionar_livro(p, total_livros);

                //incrementa a contadora de livros totais e aumenta o tamanho do vetor dinâmico
                total_livros++; 
                p = (livro *)realloc(p, (total_livros)+1*sizeof(livro));

            break;

            case 2:
                /*Buscar livros por título ou autor*/
                
                printf("\n");
                printf("Digite o título do livro ou nome do autor: \n");
                scanf("%s", busca);

                buscar_livro(p, total_livros, busca);

            break;
            
            case 3:
                /*listar todos os livros*/

                listar_livros(p, total_livros);
                
            break;

            case 4:
                /*Atualizar dados de um livro*/
            break;

            case 5:
                /*Remover um livro*/
            break;

            case 0:
                /*
                Retorna ao menu principal
                e retorna a contadora de livros pra o programa principal
                */
                return total_livros;

            break;

        }

        //printa o menu de opções de gerenciamento de livros
        menu_de_livros();

    }
}