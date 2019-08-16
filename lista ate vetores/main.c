#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void menu();
void menuQ1();
float mediaAritmetica(float valor1 ,float valor2);
float mediaPonderada(float peso1, float valor1, float peso2, float valor2, float peso3, float valor3);

int main(){
    int option, exit = 0;

    while(!exit) {
        menu();
        scanf("%d", &option);

        switch(option) {
            case 0: {
                exit = 1;
                printf("Exiting...\n");
                break;
            }

            case 1: {
                printf("Question 1: \n");
                int op, exit2 = 0;

                while(!exit2){
                    menuQ1();
                    scanf("%d", &op);

                    switch(op){
                        case 1: {
                            printf("Média Aritmética: \n\n");
                            float MAvalor1, MAvalor2, MAresultado;

                            printf("Valor 1: ");
                            scanf("%f", &MAvalor1);

                            printf("Valor 2: ");
                            scanf("%f", &MAvalor2);

                            MAresultado = mediaAritmetica(MAvalor1, MAvalor2);

                            printf("Média = %.2f\n\n", MAresultado);
                            break;
                        }

                        case 2: {
                            printf("Média Ponderada: \n\n");

                            float MPvalor1, MPvalor2, MPvalor3, MPpeso1, MPpeso2, MPpeso3, MPresultado;

                            printf("peso 1: ");
                            scanf("%f", &MPpeso1);

                            printf("valor 1: ");
                            scanf("%f", &MPvalor1);

                            printf("peso 2: ");
                            scanf("%f", &MPpeso2);

                            printf("valor 2: ");
                            scanf("%f", &MPvalor2);

                            printf("peso 3: ");
                            scanf("%f", &MPpeso3);

                            printf("valor 3: ");
                            scanf("%f", &MPvalor3);

                            MPresultado =  mediaPonderada(MPvalor1, MPvalor2, MPvalor3, MPpeso1, MPpeso2, MPpeso3);

                            printf("Media Ponderada = %.2f\n\n", MPresultado);

                            break;
                        }

                        case 3: {
                            exit2 = 1;
                            printf("Exiting...\n");
                            break;
                        }

                        default: {
                            printf("Wrong option, try again...\n");
                            break;
                        }
                    }

                }

               

                break;
            }

            case 2: {
                printf("Question 2: \n");
                char option;
                float compras[15];
                int cont;
                break;
            }

            case 3: {
                printf("Question 3: \n");
                break;
            }

            case 4: {
                printf("Question 4: \n");
                break;

            }

            case 5: {
                printf("Question 5: \n");
                break;

            }

            case 6: {
                printf("Question 6: \n");
                break;

            }

            case 7: {
                printf("Question 7: \n");
                break;
            }

            case 8: {
                printf("QUestion 8: \n");
                break;
            }
             
            default: {
                printf("Wrong option, try again...\n");
                break;
            }
        }
    }

    return 0;
}