#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, sucessor;

    printf("Numero: ");
    scanf("%d", &numero);

    sucessor = numero + 1;

    printf("Sucessor: %d\n", sucessor);

    return 0;
}