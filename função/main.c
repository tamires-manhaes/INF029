#include <stdio.h>
#include <stdlib.h>

int somarValores();

int main(){
    int resultado;
    
    resultado = somarValores();
    
    printf("resultado: %d\n", resultado);
    
}

int somarValores(){
    int valorA, valorB, resultado;
    
    printf("valor A: ");
    scanf("%d", &valorA);
    
    printf("Valor B: ");
    scanf("%d", &valorB);
    
    resultado = valorA + valorB;
    
    return resultado;
}
