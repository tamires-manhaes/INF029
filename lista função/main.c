#include <stdio.h>
#include <stdlib.h>

void menu();
int questao1(int valor1, int valor2);
int questao2(int valor1, int valor2, int valor3);
void questao3();
void questao4();
void questao5();
void questao6();
void questao7();
void questao8();
void questao8();

int main(){ 
    int valor1Q1, valor2Q1, resultadoQ1; //questão 1
    int valor1Q2, valor2Q2, valor3Q2, resultadoQ2; // questão 2


    int opcao, sair = 0;
     while (!sair){
         menu();
         scanf("%d", &opcao);

         switch (opcao){
            case 0:{
                sair = 1;
                printf("Finalizando...\n");
                break;
            }

            case 1: {
                printf("Questao 1\n\n");

                printf("Digite valor 1: ");
                scanf("%d", &valor1Q1);
                printf("Digite valor 2: ");
                scanf("%d", &valor2Q1);

                resultadoQ1 = questao1(valor1Q1, valor2Q1);
                printf("Resultado = %d\n", resultadoQ1);
                break;
            }

            case 2: {
                printf("Questao 2\n\n");

                printf("Digite valor 1: ");
                scanf("%d", &valor1Q2);
                printf("Digite valor 2: ");
                scanf("%d", &valor2Q2);
                printf("Digite valor 3: ");
                scanf("%d", &valor3Q2);

                resultadoQ2 = questao2(valor1Q2, valor2Q2, valor3Q2);

                printf("Resultado = %d\n", resultadoQ2);

                break;
            }

            case 3: {
                printf("Questao 4\n");
                break;
            }

            case 4: {
                printf("Questao 5\n");
                break;
            }

            case 5: {
                printf("Questao 5\n");
                break;
            }

            case 6: {
                printf("Questao 6\n");
                break;
            }

            case 7: {
                printf("Questao 6\n");
                break;
            }

            case 8: {
                printf("Questao 8\n");
                break;
            }

            case 9: {
                printf("Questao 9\n");
                break;
            }
                
            default:
                break;
            }
        }
     
    

    return 0;
}

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

void questao3(){
    
}

void questao4(){
    
}

void questao5(){
    
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