#include <stdio.h>

typedef struct numeros{
    int valor1;
    int valor2;
    int valor3;
    int valor4;
} Numero;

Numero lista_num; 

int questao1(int valor1, int valor2) {
    int resultado;

    resultado = valor1 + valor2;

    return resultado;
}

int questao2(int valor1, int valor2, int valor3){
    int resultado;

    resultado = valor1 - valor2 - valor3;

    return resultado;
}

int questao3(int valor){
  int fator = 1, i;

  if(valor == 0){
    printf("Não pode ser calculado!");
  } else {
    for(i = valor; i > 0; i--)
        fator *= i;
  }

  return fator;
}

int questao4(int valor1, int valor2, int valor3){
    int vetor[3], j;

    vetor[0] = valor1;
    vetor[1] = valor2;
    vetor[2] = valor3;

    return *vetor;
}

void questao5(Numero lista_num, int valor1, int valor2, int valor3, int valor4){
    
    lista_num.valor1 = valor1;
    lista_num.valor2 = valor2;
    lista_num.valor3 = valor3;
    lista_num.valor4 = valor4;

    listarQ5(lista_num);
}

void listarQ5(Numero lista_num){
    printf("%d\n", lista_num.valor1);
    printf("%d\n", lista_num.valor2);
    printf("%d\n", lista_num.valor3);
    printf("%d\n", lista_num.valor4);
}

void questao6(){
    
}

void questao7(){
    
}

void questao8(){
    
}

void questao9(){
    
}

void menu(){
    printf("\n##### LISTA DE EXERCICIOS - FUNÇÕES ######\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Questão 1\n");
    printf(" 2 - Questão 2\n");
    printf(" 3 - Questão 3\n");
    printf(" 4 - Questão 4\n");
    printf(" 5 - Questão 5\n");
    printf(" 6 - Questão 6\n");
    printf(" 7 - Questão 7\n");
    printf(" 8 - Questão 8\n");
    printf(" 9 - Questão 9\n");
    printf("\n");
    printf("Digite opcao desejada: ");
}


