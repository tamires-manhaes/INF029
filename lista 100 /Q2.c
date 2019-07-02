#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float lado, perimetro, area;

    printf("Lado: ");
    scanf("%f", &lado);

    perimetro = 4 * lado;

    area = lado * lado;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    return 0;
}