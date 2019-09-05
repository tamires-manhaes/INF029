#include <stdio.h> 
#include <stdlib.h>
#include "EstruturaVetores.h"

/*TO DO LIST: 
- Inicializar vetor principal apontando tudo pra NULL ou 0
- Criar Validação de Posição do vetor principal
- Criar validação de quantidade de posições a ser alocada
- Criar função de alocação 
- Criar função de inserção de elemento
  - Varrer para procurar posição válida no principal e primeira vazia no auxiliar
- Criar função de remoção de elemento
- Criar função de listagem das listas auxiliares por posição no vetor principal
- Criar função de listagem de todas as listas auxiliares
- Criar função de realocação
- Criar função de liberação de memória
*/

int main(){
    int op;
    int sair = 0;
    int ret;

    PRINCIPAL vetor_principal[TAMANHO];

    while (!sair){
        op = menu();
        switch (op){
            case 0:{
                sair =1;
                finalizar(vetor_principal);
                break;
            }
            case 1:{ //inserir
                //TODO
                int posicao;
                int uservalue;
                int insercao_retorno;
                int aux_tamanho;
                int retorno_criar;
                int insercao ;

                printf("Digite posicao desejada: \n");
                scanf("%d", &posicao);
                ret = verificaEstrutura(vetor_principal, posicao);
                if(ret == JA_TEM_ESTRUTURA_AUXILIAR){
                    
                    printf("Digite valor desejado: \n");
                    scanf("%d", &uservalue);
                    insercao_retorno = inserirNumeroEmEstrutura(vetor_principal, uservalue, posicao);
                    if(insercao_retorno == SUCESSO){
                        printf("valor inserido com sucesso!\n");
                    } else if(insercao_retorno == SEM_ESPACO){
                        printf("Sem espaço\n");
                    } else {
                        printf("\n");
                    }
                } else {
                        printf("Sem estrutura auxiliar! \n");
                        printf("Digite tamanho do auxiliar: \n");
                        scanf("%d", &aux_tamanho);

                        retorno_criar = criarEstruturaAuxiliar(vetor_principal, aux_tamanho, posicao);
                        if(retorno_criar == POSICAO_INVALIDA){
                            printf("POSICAO INVALIDA, TENTE OUTRA POSICAO!\n");
                        } else if(retorno_criar == SUCESSO){
                            printf("Estrutura criada com sucesso!\n");
                            insercao = inserirNumeroEmEstrutura(vetor_principal,uservalue, posicao);
                            if(insercao == SUCESSO){
                                printf("Inserido com sucesso!\n");
                            } else {
                                printf("\n");
                            }
                        }
                    }
                break;
            }

            case 2:{ //excluir
                //TODO
                break;
            }

            case 3:{ //recuperar dados estrutura auxiliar
                int posicao, retorno;
                printf("Qual a estrutura a ser listada (1..10)?");
                scanf("%d", &posicao);
                
                int qtd =  getQuantidadeElementosEstruturaAuxiliar(vetor_principal, posicao);
                
                if (qtd == POSICAO_INVALIDA){
                    printf ("Posição inválida");
                }else{ // existe elemento
                    int vetorAux[qtd];
                
                    retorno = getDadosEstruturaAuxiliar(vetor_principal,posicao);
                    
                    if (retorno == SUCESSO){
                        //imprimir para os dados para o usuário
                        int i = 0;
                        for (; i < qtd; i++){
                            printf ("%d", vetorAux[i]);
                            
                        }
                    }                        
                }
                break;
            }

            case 4: {
                int posicao, novo_tamanho;
                printf("digite novo tamanho\n");
                scanf("%d", &novo_tamanho);
                printf("DIgite posicao desejada\n");
                scanf("%d", &posicao);

                if (posicao == POSICAO_INVALIDA){
                    printf ("Posição inválida");
                }else{ // existe elemento
                    int retorno = modificarTamanhoEstruturaAuxiliar(vetor_principal, posicao, novo_tamanho);
                    if(retorno == SUCESSO){
                        printf("realocado com sucesso\n");
                    } else {
                        printf("Novo tamanho inválido!\n");
                    }
                }
                break;
            }
            
            default: {
                printf("Opcao invalida, tente novamente...\n");
                break;
            }
        }
        
    }
    
    return 0;
    
}