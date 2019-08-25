#include <stdio.h>
#include <stdlib.h>
#include "moduloFuncoes.h"

int main() {
	int opcao, sair = 0;

	while(!sair) {
		menu();
		printf("Digite opcao desejada: ");
		scanf("%d", &opcao);
		switch(opcao) {
			case 0: {
				printf("Finalizando...\n");
				sair = 1;
				break;
			}

			case 1: {
				int posicao, valor;

				printf("Inserir Elemento\n");

				printf("Digite posicao: \n");
				scanf("%d", &posicao);
				printf("Digite valor: \n");
				scanf("%d", &valor);

				
				inserirElemento(posicao, valor);

				break;
			}

			case 2: {
				printf("Listar Elemento\n");
				break;
			}

			default: {
				printf("Opcao incorreta, tente novamente...\n");
				break;
			}
		}
	}

	return 0;
}
