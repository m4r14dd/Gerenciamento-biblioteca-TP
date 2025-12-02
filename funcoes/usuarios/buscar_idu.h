#ifndef BUSCAR_IDU_H
#define BUSCAR_IDU_H


#include "../../registros/usuario.h"


#include <stdio.h>


int buscar_idu(usuario *usuarios,int id, int total_ususarios){
    
    /*
    Busca a posição de um usuario no vetor de usuarios utilizando seu ID
    */
    
    int i;

    for(i = 0; i < total_ususarios && usuarios[i].idUsuario != id; i++);

    return usuarios[i].ativo;


}


#endif