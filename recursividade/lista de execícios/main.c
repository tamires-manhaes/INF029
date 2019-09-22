#include <stdio.h>
#include <stdlib.h>
#include "moduloFuncoes.h"

int main(){
    int opcao , sair = 0;

    while(!sair){
        opcao = menu();
        switch(opcao){
            case 0 : {
                printf("Finalizando...\n");
                sair = 1;
                break;
            }

            case 1: {
                int numero, fatorial;
                printf("Digite valor: ");
                scanf("%d", &numero);

                fatorial = questao1(numero);
                printf("Fatorial de %d = %d\n", numero, fatorial);
                break;
            }
            default: {
                printf("Opcao incorreta, tente novamente");
            }
        }
    }
    return 0;
}