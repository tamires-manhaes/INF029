#include <stdio.h>
#include "moduloFuncoes.h"

int menu(){
    int opcao; 
    printf("\n");
    printf("0 - Sair\n");
    printf("1 - questao 1\n");
    printf("\n");

    printf("Digite opcao desejada: ");
    scanf("%d", &opcao);
    return opcao;
}

int questao1(int n){
    if((n == 1) || (n == 0))
        return 1;
    else 
        return (n * questao1(n - 1));
}