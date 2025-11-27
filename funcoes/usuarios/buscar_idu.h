#ifndef BUSCAR_IDU_H
#define BUSCAR_IDU_H


#include "../../registros/usuario.h"


#include <stdio.h>


int buscar_idu(usuario *u,int id, int total_ususarios){
    int i;

    for(i = 0; i < total_ususarios && u[i].idUsuario != id; i++);

    return u[i].ativo;
}


#endif