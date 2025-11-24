#ifndef USUARIO_H
#define USUARIO_H

#include <stdlib.h>
#include <stdbool.h>


typedef struct {

    int idUsuario;
    char nome[100];
    char email[100];
    int ativo; //1 = ativo 0 = inativo

}usuario;



#endif