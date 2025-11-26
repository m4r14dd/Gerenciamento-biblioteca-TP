
#ifndef BUSCAR_USUARIO_H
#define BUSCAR_USUARIO_H

#include <stdio.h>

#include "../../registros/usuario.h"


int buscar_usuario(usuario *u, int total_usuarios, char busca[]) {
    /*
    Busca um nome no vetor u
    passa por todos os nomes, até achar um que possua o nome do condizente
    */

    int i = 0;
    while(strcmp(u[i].nome, busca) != 0) {
        i++;
        if(i > total_usuarios) {
            printf("Usuario não encontrado!\n");
            return 0;
        }
    }

    //printa os dados do usuario encontrado
    printf("\n====Usuario: %s encontrado!====\n", u[i].nome);
    printf("ID: %d \n", u[i].idUsuario);
    printf("Email %s \n\n", u[i].email);

    if(u[i].ativo){
      printf("Ativo\n");
    }
    else{
      printf("Inativo\n");
    }
    
    return 1;

}


#endif