#ifndef REMOVER_USUARIO_H
#define REMOVER_USUARIO_H

#include <stdio.h>

#include "../../registros/usuario.h"

int remover_usuario(usuario *u, int total_usuarios, int idr){
    int I;
    
    for(int i = 0; i < total_usuarios && u[i].idUsuario != idr; i++){
        I = i;
    }
    
    for(int i = I; i < total_usuarios - 1; i++){
        u[i]= u[i+1];
    }
    
    total_usuarios--;
    
    u = (usuario *)realloc(u,(total_usuarios)+1*sizeof(usuario));

    return total_usuarios;
}

#endif