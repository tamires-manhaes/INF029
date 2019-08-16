#include <stdio.h>
#include <stdlib.h>
//#include "funcoes.h"

int processaNumeros(int A, int B, int C, int *maior, int *menor);

int main(){
    int ladoA, ladoB, ladoC, retorno;
    int *maior, *menor;

    scanf("%d", &ladoA);
    scanf("%d", &ladoB);
    scanf("%d", &ladoC);

    retorno = processaNumeros(ladoA, ladoB, ladoC , maior, menor);

    if(retorno == 1)
        printf("Triangulo equilatero\n");
         else if( retorno == 2)
            printf("Triangulo isosceles\n");
            else
                printf("Nenhum");
            
    

    printf("Maior numero: %d\n", *maior);
    printf("Menor numero: %d\n", *menor);

    return 0;
}

int processaNumeros(int A, int B, int C, int *maior, int *menor){

    int retorno;

    if(A == B && A == C)
        retorno = 1;
        else if ((A == B) || (A == C))
            retorno = 2;
            else
                retorno = 3;
    

    if(A > B && A > C)
        *maior = A;
        else if (B > A && B > C)
            *maior = B;
            else if (C > A && C > B)
                *maior = C;
                else if (A < B && A < C)
                    *menor = A;
                    else if (B < A && B < C)
                        *menor = B;
                        else
                            *menor = C;
    

    return retorno;
}