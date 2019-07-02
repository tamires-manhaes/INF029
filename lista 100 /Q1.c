#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float base, altura, perimetro, area;

    printf("Base: ");
    scanf("%f", &base);

    printf("Altura: ");
    scanf("%f", &altura);

    perimetro = (2 * base) + (2 * altura);

    area = base * altura;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    return 0;
}