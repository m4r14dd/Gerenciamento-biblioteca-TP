#ifndef CADASTRAR_USUARIO_H
#define CADASTRAR USUARIO_H
#include<stdio.h>
#include "../../registros/usuario.h"

void cadastrar_usuario(usuario *u, int total_usuario){
   printf("Digite o email do usuario: \n");
    scanf("%s", u[total_usuario].email);

    printf("Informe o nome do usuario: \n");
    scanf("%s", u[total_usuario].nome);
    
    u[total_usuario].ativo = true;
    u[total_usuario].idUsuario = u[total_usuario - 1].idUsuario + 1;

}


#endif