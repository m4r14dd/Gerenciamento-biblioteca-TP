#ifndef LISTAR_USUARIO_H
#define LISTAR_USUARIO_H


#include<stdio.h>


//importa a struct usuario
#include "../../registros/usuario.h"


void listar_usuarios(usuario *usuarios, int total_usuarios) {

  /*
  Lista todos os usuários cadastrados
  */

  printf("\n");

  for(int i = 0; i < total_usuarios; i++) {
    
    //imprime os dados de cada usuário no vetor
    printf("Nome: %s | ID: %d | Email: %s | ", usuarios[i].nome, usuarios[i].idUsuario, usuarios[i].email);
      
    if(usuarios[i].ativo){
      printf("Ativo\n");
    }
    else{
      printf("Inativo\n");
    }

  }

  printf("\n");

}


#endif