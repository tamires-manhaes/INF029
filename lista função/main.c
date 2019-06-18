#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void menu();
int questao1(int valor1, int valor2);
int questao2(int valor1, int valor2, int valor3);
int questao3(int valor);
int questao4(int valor1, int valor2, int valor3);
void questao5(Numero lista_num, int valor1, int valor2, int valor3, int valor4);
void listarQ5(Numero lista_num);
void questao6();
void questao7();
void questao8();
void questao8();

int main(){ 
    int valor1Q1, valor2Q1, resultadoQ1; //questão 1
    int valor1Q2, valor2Q2, valor3Q2, resultadoQ2; // questão 2
    int valor1Q3, resultadoQ3; //questão 3
    int valor1Q4, valor2Q4, valor3Q4, valor4Q, vetor[3]; //questão 4
    int valor1Q5, valor2Q5, valor3Q5, valor4Q5;
    //Numero lista_num; // questão 5

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
                /*Crie um programa que tenha uma função soma e a função main. A função main deve ler dois valores, enviar para a função soma.
                 A função soma deve realizar a soma e retornar o valor. A Função main deve imprimir o resultado da soma. */
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
                /*Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três valores, enviar para a função subtrai.
                 A função subtrai deve realizar a subtração dos três valores (primeiro menos o segundo menos o terceiro) e retornar o valor.
                 A Função main deve imprimir o resultado da subtração. */
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
                printf("Questao 3\n");
                /*Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número. 
                Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma retornar para a main que deu
                 algum erro. A função main deve solicitar o valor do usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial. */
                printf("Digite valor: ");
                scanf("%d", &valor1Q3);

                resultadoQ3 = questao3(valor1Q3);

                printf("Resultado = %d\n", resultadoQ3);

                break;
            }

            case 4: {
                printf("Questao 4\n");
                /*Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do usuário e retornar os três números.
                A função main deve imprimir esses três números. Utilize vetor para fazer o retorno. */
                printf("Digite valor 1: ");
                scanf("%d", &valor1Q4);

                printf("Digite valor 2: ");
                scanf("%d", &valor2Q4);

                printf("Digite valor 3: ");
                scanf("%d", &valor3Q4);

                vetor[3] = questao4 (valor1Q4, valor2Q4, valor3Q4);

                printf("Retorno: ");
                for (int i = 0; i < 3; i++){
                    printf("%d", vetor[i]);
                }
                

                break;
            }

            case 5: {
                printf("Questao 5\n");
                /*Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. 
                A função main deve imprimir esses três números. Utilize struct para fazer o retorno. */
                printf("Digite valor 1:");
                scanf("%d", &valor1Q5);

                printf("Digite valor 2:");
                scanf("%d", &valor2Q5);

                printf("Digite valor 3:");
                scanf("%d", &valor3Q5);

                printf("Digite valor 4:");
                scanf("%d", &valor4Q5);

                questao5(lista_num, valor1Q5, valor2Q5, valor3Q5, valor4Q5);

                break;
            }

            case 6: {
                printf("Questao 6\n");
                /*Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário e retornar as três letras. 
                A função main deve imprimir essas três letras. */
                break;
            }

            case 7: {
                printf("Questao 7\n");
                /*Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras. 
                A função main deve imprimir essas três palavras. */
                break;
            }

            case 8: {
                printf("Questao 8\n");
                /*Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do cliente (nome, dataNascimento, cpf, sexo)
                 e retornar os dados do cliente. A função main deve imprimir os dados do cliente. */
                break;
            }

            case 9: {
                printf("Questao 9\n");
                /*Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados. Cada validação deve ser feita em uma função 
                diferente, conforme lista abaixo. A função cadastrarCliente deve chamar cada uma dessas funções. A função main deve imprimir se o cadastro 
                foi realizado com sucesso ou se houve erro, informando onde foi o erro: 
                
                • função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;
                • função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para masculino; f e F para feminino,
                  o e O para outro).
                • função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
                • função validarNacimento: recebe o data digitada, e valida é uma data válida.*/
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

