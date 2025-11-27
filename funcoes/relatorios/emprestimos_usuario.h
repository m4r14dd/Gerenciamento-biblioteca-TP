#ifndef EMPRESTIMOS_USUARIO_H
#define EMPRESTIMOS_UUARIO_H


#include "../../registros/emprestimo.h"


#include <stdlib.h>
#include <stdio.h>


void emprestimos_usuario(emprestimo *emprestimos, int total_emprestimos) {

    /*
    */

    int valor_maximo = 0;

    for(int i = 0; i < total_emprestimos; i++) {

        if(emprestimos[i].idUsuario > valor_maximo && emprestimos[i].ativo == 1){
            valor_maximo = emprestimos[i].idUsuario;
        
        }

    }

    int *frequencia;
    frequencia = (int *)calloc(valor_maximo + 1 , sizeof(int));

    for(int i = 0; i < total_emprestimos; i++){
        frequencia[emprestimos[i].idUsuario]++;

    }

    int maior_frequencia = 0;
    int usuario = 0;

    for(int i = 0; i <= valor_maximo; i++) {

        if(frequencia[i] > maior_frequencia) {
            maior_frequencia = frequencia[i];
            usuario = i;
        }

    }

    free(frequencia);

    printf("ID do usuario com mais emprestimos: %d \n", usuario);

}

#endif