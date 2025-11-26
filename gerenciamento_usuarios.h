#include "./registros/usuario.h"


#include "./funcoes/usuarios/cadastrar_usuario.h"
#include "./funcoes/usuarios/buscar_usuario.h"
#include "./funcoes/usuarios/listar_usuarios.h"
#include "./funcoes/usuarios/remover_usuario.h"
#include "./funcoes/menu.h"


#include <stdlib.h>
#include <stdio.h>


int gerenciamento_usuarios(usuario *u, int total_usuarios) {

    int opcao;

    while(scanf("%d", &opcao)){ 

        char busca[100];

        switch (opcao) {
            case 1:
                cadastrar_usuario(u, total_usuarios);
                total_usuarios++; 
                u = (usuario *)realloc(u, (total_usuarios)+1*sizeof(usuario));

            break;

            case 2:
                printf("\n");
                printf("Digite o nome do usuario: \n");
                scanf("%s", busca);

                buscar_usuario(u, total_usuarios, busca);

            break;
            
            case 3:
               listar_usuarios(u, total_usuarios);
            break;

            case 4:
               printf("Digite o ID do usuario no qual voce quer remover\n");
               int idr;
               scanf("%d", &idr);
               remover_usuario(u,total_usuarios,idr);
            break;

            case 0:
                return total_usuarios;

            break;

        }

        menu_de_usuarios();

    }
}