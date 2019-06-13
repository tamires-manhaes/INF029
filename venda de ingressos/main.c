#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINHA 5
#define COLUNA 4

#define FILEIRA_A 50
#define FILEIRA_B 60
#define FILEIRA_C 70
#define FILEIRA_D 80

typedef struct assento {
    int fileira;
    int coluna;
    float valor;
} Assento;

typedef struct pessoa {
    struct assento Assento;
    char nome[100];
	char telefone[50];
	char cpf[12];
	int ehEstudante;
} Pessoa;

typedef struct ingresso {
    struct assento Assento;
    struct pessoa Pessoa;
    int vendido;
} Ingresso;

void topo();
void menu();
void mostrarAssentos();

int main() {
    int opcao , sair = 0;
    while (!sair){ 
        topo();
        menu();
        scanf("%d", &opcao);

        switch (opcao){
            case 0: {
                printf("\n");
                printf("Finalizando...\n");
                sair = 1;
                break;
            }

            case 1: {
                printf("\n");
                printf("Venda de ingressos...\n");
                printf("-------------\n");
                mostrarAssentos();
                break;
            }

            case 2: {
                printf("\n");
                printf("Listar assentos disponiveis...\n");
                printf("-------------\n");
                break;
            }
            
            case 3: {
                printf("\n");
                printf("Valor total de ingressos...\n");
                printf("-------------\n");
                break;
            }

            case 4: {
                printf("\n");
                printf("Trocar de lugar...\n");
                printf("-------------\n");
                break;
            }
                
            
            default:{
                printf("Opcao incorreta, tente novamente...\n");
                break;
            }
            
        }
    }

    return 0;
}

void topo(){
    printf("\t----------------------------\n");
    printf("\t  World Cup 2014 - BRAZIL\n");
    printf("\t\tBILHETERIA\n");
    printf("\t----------------------------\n\n");
}

void menu(){
    printf("### MENU ###\n");
    printf("-------------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Venda de ingresso\n");
    printf(" 2 - Listar assentos disponiveis\n");
    printf(" 3 - Valor total de ingressos\n");
    printf(" 4 - Trocar de lugar\n");
    printf("-------------\n");
    printf("Digite opcao desejada: ");
}

void mostrarAssentos(){ 
	printf("---\n");
	printf("ASSENTOS: \n");
	printf(" A - [1][2][3][4][5][6][7][8][9][10]\n");
	printf(" B - [1][2][3][4][5][6][7][8][9][10]\n");
	printf(" C - [1][2][3][4][5][6][7][8][9][10]\n");
	printf(" D - [1][2][3][4][5][6][7][8][9][10]\n");
	printf("---\n");
}