#include <stdio.h>
#include <stdlib.h>
#include "moduloFuncoes.h"

#define TAMANHO 4

typedef struct vetorAuxiliar{
	int *auxiliar;
	int posicao;
	int valor;
} Auxiliar;

int vetorAuxiliar[TAMANHO];

void verificaPosicao (int posicao) {
	if(posicao >= 0 && posicao <= 4) {
		printf("posicao valida!\n");
	} else {
		printf("posicao invalida\n");
	}
}

void inserirElemento (int posicao, int valor) {

	printf("posicao: %d\n", posicao);
	verificaPosicao(posicao);
	printf(" valor a ser inserido: %d\n",valor);
}

void listarVetor() {

}

void menu(){
	printf("\n\n");
	printf("0 - Sair\n");
	printf("1 - Inserir Elemento\n");
	printf("2 - Listar Elementos\n");
}