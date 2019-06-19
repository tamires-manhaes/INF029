#include <stdio.h>

#define CADASTRO_SUCESSO 1
#define NOME_OK 2
#define CPF_OK 3
#define SEXO_OK 4
#define DATA_OK 5

typedef struct numeros {
    int valor1;
    int valor2;
    int valor3;
    int valor4;
} Numero;

typedef struct dma {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct cliente {
    char nome[20];
    char sexo;
    char cpf[14];
    Data dma;
} Cliente;

typedef struct palavra {
    char palavra[100];
} Palavra;


Numero lista_num; 
Data data_nascimento;
Cliente pessoa;
Palavra palavra[3];

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

/* 

int questao7(Palavra palavra, int qtd_palavra){

    while(qtd_palavra <= 3){
                    
        printf("Palavra : ");
        scanf("%s", &palavra[qtd_palavra].palavra);

        qtd_palavra++;

    }
}

*/

int questao8(Cliente pessoa){

  printf("Nome: ");
  scanf("%s", &pessoa.nome);
  fflush(stdin);

  //validarNome();

  printf("Passou!\n");
  printf("Sexo: ");
  scanf("%s", &pessoa.sexo);
  fflush(stdin);

  //validarSexo();
  printf("Passou!\n");
  printf("CPF: ");
  scanf("%s", &pessoa.cpf);

  //validarCpf();
  printf("Passou!\n");
  printf("Data de nascimento\n");
  printf("Dia: ");
  scanf("%d", &pessoa.dma.dia);

  printf("Mes: ");
  scanf("%d", &pessoa.dma.mes);

  printf("Ano: ");
  scanf("%d", &pessoa.dma.ano);

 //validarData();

 return CADASTRO_SUCESSO;

}

void listarQ8(Cliente pessoa){


  printf("Nome: %s", pessoa.nome);
  printf("Data de Nascimento: %d/%d/%d", pessoa.dma.dia, pessoa.dma.mes, pessoa.dma.ano);
  printf("CPF: %s", pessoa.cpf);
  printf("Sexo: %c", pessoa.sexo);

}

int questao9(){

    int retorno;

    //retorno = cadastrarCliente(pessoa);
}

int cadastrarCliente(Cliente pessoa){

  printf("Nome: ");
  fgets(pessoa.nome, 20, stdin);

  //validarNome();

  printf("Sexo: ");
  scanf("%c", &pessoa.sexo);
  fflush(stdin);

  //validarSexo();

  printf("CPF: ");
  fgets(pessoa.cpf, 14, stdin);

  //validarCpf();

  printf("Data de nascimento\n");
  printf("Dia: ");
  scanf("%d", &pessoa.dma.dia);

  printf("Mes: ");
  scanf("%d", &pessoa.dma.mes);

  printf("Ano: ");
  scanf("%d", &pessoa.dma.ano);

 //validarData();

 return CADASTRO_SUCESSO;

}

int validarNome(Cliente pessoa) {

  printf("Validar Nome\n");

  return NOME_OK;
}

int validarCpf(Cliente pessoa){

  printf("Validar CPF\n");

  return CPF_OK;
}

int validarSexo(Cliente pessoa){

  printf("Validar Sexo\n");

  return SEXO_OK;
}

int validarData(Cliente pessoa){

  printf("Validar data\n");

  return DATA_OK;
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


