#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float lado1, lado2, lado3, perimetro;

    printf("Lado A: ");
    scanf("%f", &lado1);

    printf("Lado B: ");
    scanf("%f", &lado2); 

    printf("Lado C: ");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("Perimetro = %.2f\n", perimetro);

    return 0;
}