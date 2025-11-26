#ifndef REMOVER_USUARIO_H
#define REMOVER_USUARIO_H

#include <stdio.h>

#include "../registros/usuario.h"

int remover_usuario(usuario *u, int total_usuarios, int idr){
int I;
for(int i = 0; i < total_usuarios && u[i].idUsuario != idr; i++){
I = i;
}
for(int i = I; i < total_usuarios; i++){

}

return total_usuarios;
}