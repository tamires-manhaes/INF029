#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float raio, perimetro, area;

    printf("Raio: ");
    scanf("%f", &raio);

    perimetro = (2 * 3.14) * raio;

    area = 3.14 * (raio * raio);

    printf("Perimetro = %.2f", perimetro);
    printf("Area = %.2f", area);

    return 0;
}