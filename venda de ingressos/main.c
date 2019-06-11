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
}Assento;

typedef struct pessoa {
    struct assento Assento;
    char nome[100];
	char telefone[50];
	char cpf[12];
	int ehEstudante;
}Pessoa;

typedef struct ingresso {
    struct assento Assento;
    struct pessoa Pessoa;
    int vendido;
}Ingresso;

int main() {

    printf("oi, eu iniciei e finalizei com sucesso\n");

    return 0;
}