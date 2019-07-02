#include <stdio.h>

void menu(){

    printf("-----------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Questão 1\n");
    printf(" 2 = Questão 2\n");
    printf(" 3 - Questão 3\n");
    printf(" 4 - Questão 4\n");
    printf(" 5 - Questão 5\n");
    printf(" 6 - Questão 6\n");
    printf(" 7 - Questão 7\n");
    printf(" 8 - Questão 8\n");
    printf(" 9 - Questão 9\n");
    printf("\n");
    printf("Digite opção desejada: ");
}

int soma(int valor1, int valor2){
    int resultado;

    resultado = valor1 + valor2;

    return resultado;
}

int subtrai(int valor1, int valor2, int valor3){
  int resultado;

  resultado = valor1 - valor2 - valor3;

  return resultado;
}

int fatorial(int valor){
  int fat = 1, i;

  if(valor == 0){
    printf("Não pode ser calculado!");
  } else {
    for(i = valor; i > 0; i--)
        fat *= i;
  }

  return fat;
}

void ler3numeros( int *vetor, int valor1, int valor2, int valor3){
    vetor[0] = valor1;
    vetor[1] = valor2;
    vetor[2] = valor3;
}