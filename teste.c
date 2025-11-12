#include "livro.h"
#include <stdlib.h>
#include <stdio.h>


int main(){

    livro *p;
    p = (livro *)malloc(5*sizeof(livro));


    printf("%p", &p);

    return 0;
}