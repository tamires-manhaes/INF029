#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int soma(int valor1, int valor2);
int subtrai(int valor1, int valor2, int valor3);
int fatorial(int valor);
void ler3numeros( int *V, int valor1, int valor2, int valor3);

int main(){
    int sair = 0, opcao;

    while(!sair) {
        menu();
        scanf("%d", &opcao);

        switch(opcao){
            case 0: {
                sair = 1;
                printf("Finalizando...\n");
                break;
            }


            default: {
                printf("Opcão incorreta, tente novamente!\n");
                break;
            }
        }
    }
    
    return 0;
}