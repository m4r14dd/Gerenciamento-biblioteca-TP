#ifndef EMPRESTIMOS_USUARIO_H
#define EMPRESTIMOS_UUARIO_H


#include "../../registros/emprestimo.h"


#include <stdlib.h>
#include <stdio.h>


int emprestimos_usuario(emprestimo *emprestimos, int total_emprestimos, int total_usuarios) {

    /*
    Encontra o usuário com maior número de emprestios ativos
    */

    if(total_usuarios == 0) {

        printf("Não há usuários no sistema! \n");
        return 0;

    }

    int valor_maximo = 0;

    for(int i = 0; i < total_emprestimos; i++) {

        if(emprestimos[i].idUsuario > valor_maximo && emprestimos[i].ativo == 1){
            
            //encontra o maior ID de usuário com emprestimo ativo
            valor_maximo = emprestimos[i].idUsuario;
        
        }

    }

    //vetor dinamico que armazena as frequencias de cada ID no vetor emprestimos
    int *frequencia;
    frequencia = (int *)calloc(valor_maximo + 1 , sizeof(int));

    for(int i = 0; i < total_emprestimos; i++){

        //aumenta a contagem de frequencia de emprestimos de um usuario
        frequencia[emprestimos[i].idUsuario]++;

    }

    //variavel para manter contagem da maior frequencia
    int maior_frequencia = 0;
    int usuario = 0;

    for(int i = 0; i <= valor_maximo; i++) {

        if(frequencia[i] > maior_frequencia) {

            maior_frequencia = frequencia[i];
            usuario = i;

        }

    }

    //libera a memoria alocada pelo vetor frequencia
    free(frequencia);

    printf("ID do usuario com mais emprestimos: %d \n", usuario);
    return 1;

}


#endif