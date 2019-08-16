#include <stdio.h>

void menu(){
    printf("-----\n");
    printf("0 - Exit\n");
    printf("1 - Question 1\n");
    printf("2 - Question 2\n");
    printf("3 - Question 3\n");
    printf("4 - Question 4\n");
    printf("5 - Question 5\n");
    printf("6 - Question 6\n");
    printf("7 - Question 7\n");
    printf("8 - Question 8\n");
    printf("Type your option: ");
}

void menuQ1(){
    printf("-----\n");
    printf("1. Media aritmetica\n");
    printf("2. Media ponderada\n");
    printf("3. Sair\n");
}

float mediaAritmetica(float valor1 ,float valor2){
    float resultado;

    resultado = (valor1 + valor2) / 2;

    return resultado;
}

float mediaPonderada(float valor1, float valor2, float valor3, float peso1, float peso2, float peso3) {
    float resultado;

    resultado =  (peso1 * valor1 + peso2 * valor2 + peso3 * valor3) / (peso1 + peso2 + peso3);

    return resultado;
}

