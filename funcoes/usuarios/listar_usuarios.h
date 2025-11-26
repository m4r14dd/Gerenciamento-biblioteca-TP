#ifndef LISTAR_USUARIO_H
#define LISTAR_USUARIO_H
#include<stdio.h>
#include "../../registros/usuario.h"


void listar_usuarios(usuario *u, int total_usuarios) {

    printf("\n");

    for(int i = 0; i < total_usuarios; i++) {
        printf("Nome: %s | ID: %d | Email: %s | ", u[i].nome, u[i].idUsuario, u[i].email);
    if(u[i].ativo){
      printf("Ativo\n");
    }
    else{
      printf("Inativo\n");
    }
    }
    printf("\n");
}


#endif