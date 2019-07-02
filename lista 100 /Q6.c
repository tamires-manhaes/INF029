#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, resto;
    float quociente;

    printf("Numero 1: ");
    scanf("%d", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    quociente = num1 / num2;
    resto = num1 % num2;

    printf("Quociente: %.2f\nResto: %d\n", quociente, resto);
    
    return 0;
}