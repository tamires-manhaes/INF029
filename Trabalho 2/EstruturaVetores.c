#include <stdio.h>
#include <stdlib.h>
#include "EstruturaVetores.h"

int menu(){
    int op;
    printf("Digite as opção desejada\n");
    printf("0 - Sair\n");
    printf("1 - Inserir\n");
    printf("2 - Excluir\n");
    printf("3 - Listar\n");
    printf("4 - Redimensionar Espaço\n");
    printf("5 - Lista Vetor Auxiliar Ordenado\n");
    printf("6 - Lista todos os elementos ordenados\n");
    printf("5 - \n");
    printf("DIGITE OPCAO DESEJADA:\n");
    scanf("%d", &op);
    return op;
}

/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'
Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho tem inteiro maior ou igual a 1
*/
int criarEstruturaAuxiliar(PRINCIPAL *vetor_principal, int tamanho, int posicao){
    int maximo = 100;

    int retorno = 0;
    // a posicao pode já existir estrutura auxiliar
    if (vetor_principal[posicao].auxiliar != NULL){
        retorno = JA_TEM_ESTRUTURA_AUXILIAR;
    } else if(posicao < 1 && posicao > 10){
    // se posição é um valor válido {entre 1 e 10}
        retorno = POSICAO_INVALIDA;
    }
    // o tamanho ser muito grande
        // retorno = SEM_ESPACO_DE_MEMORIA;
    else if(posicao < 1){
    // o tamanho nao pode ser menor que 1
        retorno = TAMANHO_INVALIDO;
    }else{
    // deu tudo certo, crie
        if(ehPosicaoValida(posicao) == SUCESSO){
            vetor_principal[posicao].auxiliar = (int*)malloc(tamanho * sizeof(int));
            vetor_principal[posicao].tamanho = tamanho;
            retorno = SUCESSO;
        } else {
            printf("OPS, algo deu errado...\n");
        }
    }

    return retorno;
}

/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/
int inserirNumeroEmEstrutura(PRINCIPAL *vetor_principal, int valor, int posicao){

    int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    int temEspaco = 0;
    int posicao_invalida = 0;
    int tam = TAMANHO;
    int alocar_auxiliar = 0;
    int tamanho_auxiliar;



    if (posicao < 0 && posicao > tam){
        retorno = POSICAO_INVALIDA;
    } else {
        existeEstruturaAuxiliar = verificaEstrutura(vetor_principal, posicao);
        if(existeEstruturaAuxiliar == SEM_ESTRUTURA_AUXILIAR){
            printf("Tamanho do auxiliar\n");
            scanf("%d", &tamanho_auxiliar);
            alocar_auxiliar = criarEstruturaAuxiliar(vetor_principal, tamanho_auxiliar, posicao);
            if(alocar_auxiliar != TAMANHO_INVALIDO){
                retorno = SUCESSO;
            } else {
                retorno = TAMANHO_INVALIDO;
            }
        } else {
            for (int i = 0; i < TAMANHO; i++){
                if(vetor_principal[posicao].quantidade < vetor_principal[posicao].tamanho){
                    vetor_principal[posicao].auxiliar[vetor_principal[posicao].quantidade] = valor;
                    vetor_principal[posicao].quantidade++;
                    retorno = SUCESSO;
                    break;
                } else {
                    retorno = SEM_ESPACO;
                    break;
                }
            }
        }
    }

  return retorno;

}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao){
  int retorno = SUCESSO;
  return retorno;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroEspecificoDeEstrutura(int valor, int posicao){
  int retorno = SUCESSO;
  return retorno;
}

// se posição é um valor válido {entre 1 e 10}
int ehPosicaoValida(int posicao){
    int retorno = 0;
    if (posicao < 1 || posicao > 10){
        retorno = POSICAO_INVALIDA;
    }else retorno = SUCESSO;

    return retorno;
}
/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao){
    int retorno = 0;
    int cont, jcont;

    if(ehPosicaoValida(posicao) == SUCESSO){
        for(cont = 0; cont < TAMANHO; cont++){
            if(vetor_principal[posicao].tamanho == SEM_ESTRUTURA_AUXILIAR){
                retorno = SEM_ESTRUTURA_AUXILIAR;
            } else {
                for(jcont= 0; jcont < vetor_principal[posicao].tamanho; jcont++){
                    printf(" posicao <%d> : %d\n", jcont, vetor_principal[posicao].auxiliar[jcont]);
                }
                retorno = SUCESSO;
            }
        }
    }
  
    return retorno;
}


/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[]){

    int retorno = 0;


    return retorno;

}

/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosDeTodasEstruturasAuxiliares(PRINCIPAL *vetor_principal, int vetorAux[]){

    int retorno = 0;
    int cont, jcont;

    return retorno;

}

/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[]){

    int retorno = 0;
    return retorno;

}

/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao, int novoTamanho){

    int retorno = 0;
    posicao = posicao - 1;
    int verifica_auxiliar = 0;

    verifica_auxiliar = verificaEstrutura(vetor_principal, posicao);
    if(verifica_auxiliar == SEM_ESTRUTURA_AUXILIAR){
        retorno = SEM_ESTRUTURA_AUXILIAR;
    } else {
        if(novoTamanho > 0){
            vetor_principal[posicao].auxiliar = (int*)realloc(vetor_principal[posicao].auxiliar, (vetor_principal[posicao].tamanho + novoTamanho) * sizeof(int));
            vetor_principal[posicao].tamanho = vetor_principal[posicao].tamanho + novoTamanho;
            retorno = SUCESSO;
        } else {
            retorno = NOVO_TAMANHO_INVALIDO;
        }
    }

    return retorno;

}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/
int getQuantidadeElementosEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao){

    int retorno = 0;
    int jcont;
    for(jcont = 0; jcont < vetor_principal[posicao].tamanho; jcont++){
        retorno = retorno + jcont;
    }

    return retorno;

}

/*
Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 
*/

void inicializar(PRINCIPAL *vetor_principal){
    int cont;

    for (cont = 0; cont < TAMANHO ; cont++){
        vetor_principal[cont].auxiliar = NULL;
        vetor_principal[cont].tamanho = 0;
        vetor_principal[cont].quantidade = 0;
    } 
}

/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.
*/

void finalizar(PRINCIPAL *vetor_principal){
    int jcont;
    for(jcont = 0; jcont < TAMANHO; jcont++){
        if(vetor_principal[jcont].auxiliar != NULL){
            free(vetor_principal[jcont].auxiliar);
        }
    }
}

int verificaEstrutura(PRINCIPAL *vetor_principal, int posicao){
    if(vetor_principal[posicao].auxiliar != NULL){
        return JA_TEM_ESTRUTURA_AUXILIAR;
    } else {
        return SEM_ESTRUTURA_AUXILIAR;
    }
}
