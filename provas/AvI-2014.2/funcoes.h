#include <stdio.h>

void menu(){
    printf(" Laboratório de Programação - Avaliacao 1 : 2014.2\n");
    printf(" 0 - sair\n");
    printf(" 1 - questao 1\n");
    printf(" 2 - questao 3\n");
    printf(" 3 - questao 3\n");
    printf("\n");
    printf("Digite opcao desejada:");
}

void questao1(){
    printf("\n");
    printf("Enunciado...\n");
    printf("Defina modulariazação no contexto de software. Apresente seu objetivo e suas vantagens.\n");
    printf("Resposta: \n");
    printf("Modularização é uma técnica de organização de algoritmo, onde seu objetivo é dividir o código por blocos módulos que possuem apenas uma \n resposabillidade tendo assim como vantagem a facilitação de compreensão do que ele faz e possiblita a manutenção de forma produtiva sem \n precisar reestruturar todo o programa para alterar algo.\n");
    printf("\n");
}

int multiplica( int valorA, int valorB){
    int resultado;

    resultado = valorA * valorB;

    return resultado;
}

int soma(int valorA, int valorB){
    int resultado;

    resultado = valorA + valorB;

    return resultado;

}

void questao2(){

    int A, B, C, D, resultadoSoma, resultadoMulti1, resultadoMulti2;

    printf(" (Valor 3.0) Faça um programa em C que contenha:");
    printf(" (A). uma função 'multiplica' que receba como parâmetros \n dois números inteiros e retorne o resultado da multiplicação;\n");
    printf("\n");
    printf(" (B). uma função 'soma' que receba como parâmetros dois números inteiros e retorne o resultado da soma;\n");
    printf("\n");
    printf(" (C). A função main deve fazer o seguinte: solicitar quatro valores inteiros A, B, C e D.\n Chamar a função de multiplicação duas vezes, com 'A, B' e com 'C, D'. Depois chame a função 'soma' para somar os dois resultados retornados pela \n função 'multiplica'. No final apresente o resultado do retorno da soma.\n");
    printf("\n");

    printf("Valor A: ");
    scanf("%d", &A);
    printf("Valor B: ");
    scanf("%d", &B);
    printf("Valor C: ");
    scanf("%d", &C);
    printf("Valor D: ");
    scanf("%d", &D);

    resultadoMulti1 = multiplica(A, B);

    resultadoMulti2 = multiplica(C, D);

    resultadoSoma = soma(resultadoMulti1, resultadoMulti2);

    printf("resultado: %d\n", resultadoSoma);
    printf("-----\n");
}