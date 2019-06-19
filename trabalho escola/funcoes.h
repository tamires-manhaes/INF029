
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <stddef.h>

#define CADASTRADO_SUCESSO 1
#define ATUALIZADO_SUCESSO 4
#define ERRO_CADASTRO_MATRICULA 2
#define ERRO_CADASTRO_SEXO 3
#define DATA_NASCIMENTO_INVALIDA 0

struct dma {
    int dia;
    int mes;
    int ano;
} Data;

//criação struct dados dos alunos
typedef struct dados_aluno {
    int matricula;
    char nome[100];
    char sexo;
    struct dma data_nascimento;
    char cpf[12];
} Aluno;

// criação struct dados dos professores
typedef struct dados_professor {
    int matricula;
    char nome[100];
    char sexo;
    struct dma data_nascimento;
    char cpf[12];
} Professor;

// criação struct dos dados das disciplinas separados por letra e numero
typedef struct codigo {
    char letra[5];
    char numero[5];
} Codigo;

//criação struct dos dados da disciplina
typedef struct dados_disciplinas {
    char nome[53];
    struct codigo cod;
} Disciplina;

Aluno aluno; // criação do tipo Aluno
Professor professor; // criação do tipo Professor
Disciplina disciplina; // criação do tipo Disciplina

//Menu Principal
void MenuPrincipal(){
    
    printf("\n");
    printf("---------------------------------\n");
    printf("------ MENU PRINCIPAL -----------\n");
    printf(" 0 - Exit\n");
    printf(" 1 - Aluno\n");
    printf(" 2 - Professor\n");
    printf(" 3 - Disciplinas\n");
    printf(" 4 - Relatórios\n");
    printf("---------------------------------\n");
    printf("Digite opcao desejada: ");
    
}

//Menu Secundário
void MenuSecundario(){

    printf("\n");
    printf("---------------------------------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Incluir\n");
    printf(" 2 - Atualizar\n");
    printf(" 3 - Deletar\n");
    printf("---------------------------------\n");
    printf("Digite opcao desejada: ");
    
}

//Menu relatórios
void MenuRelatorio(){
    
    printf("\n");
    printf("----------------------------------\n");
    printf("---------- RELATORIOS ------------\n");
    printf(" 0 - Sair\n");
    printf(" 1 - Listar Alunos\n");
    printf(" 2 - Listar Professores\n");
    printf(" 3 - Listar Disciplinas\n");
    printf(" 4 - Listar Alunos por sexo\n");
    printf(" 5 - Listar Professores por sexo\n");
    printf("----------------------------------\n");
    printf("Digite opcao desejada: ");
    
}

int incluirAluno (Aluno lista_aluno[], int qtd_alunos) {

        printf("Matricula: ");
        scanf("%d", &lista_aluno[qtd_alunos].matricula);
        getchar();

        if(lista_aluno[qtd_alunos].matricula <= 0){
            return ERRO_CADASTRO_MATRICULA;
        }

        printf("Nome: ");
        fgets(lista_aluno[qtd_alunos].nome, 100, stdin);
        size_t ln = strlen(lista_aluno[qtd_alunos].nome) -1;
        if(lista_aluno[qtd_alunos].nome[ln] == '\n')
            lista_aluno[qtd_alunos].nome[ln] = '\0';

        printf("Sexo: ");
        scanf("%c", &lista_aluno[qtd_alunos].sexo);

        lista_aluno[qtd_alunos].sexo = toupper(lista_aluno[qtd_alunos].sexo);
        if(lista_aluno[qtd_alunos].sexo != 'M' & lista_aluno[qtd_alunos].sexo != 'F'){
            return ERRO_CADASTRO_SEXO;
        }

        printf("Data de nascimento\n ");
        printf("Dia: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.dia);

        printf("Mes: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.mes);

        printf("Ano: ");
        scanf("%d", &lista_aluno[qtd_alunos].data_nascimento.ano);
        getchar();

        if(ValidaData(lista_aluno[qtd_alunos].data_nascimento.dia, lista_aluno[qtd_alunos].data_nascimento.mes, lista_aluno[qtd_alunos].data_nascimento.ano) != 0){
            printf("Digite o CPF: ");
            fgets(lista_aluno[qtd_alunos].cpf, 12, stdin); 
            ln = strlen(lista_aluno[qtd_alunos].cpf) - 1; 
            if (lista_aluno[qtd_alunos].cpf[ln] == '\n')
            lista_aluno[qtd_alunos].cpf[ln] = '\0';
            
        } else {
            return DATA_NASCIMENTO_INVALIDA;
        }

        printf("\n");

    return CADASTRADO_SUCESSO;
}

int atualizarAluno(Aluno lista_aluno[], int qtd_aluno, int matricula){

    return ATUALIZADO_SUCESSO;
}

void excluirAluno(Aluno lista_aluno[], int qtd_aluno, int matricula){

}

void listarAlunos(Aluno lista_aluno[], int qtd_alunos){

    int a_contador;

    for(a_contador = 0; a_contador < qtd_alunos; a_contador++) {
        printf("------\n");
        printf("Matricula: %d\n", lista_aluno[a_contador].matricula);
        printf("Nome: %s\n", lista_aluno[a_contador].nome);
        printf("Sexo: %c\n", lista_aluno[a_contador].sexo);
        printf("Data Nascimento: %d/%d/%d\n", lista_aluno[a_contador].data_nascimento.dia, lista_aluno[a_contador].data_nascimento.mes, lista_aluno[a_contador].data_nascimento.ano);
        printf("CPF: %s\n", lista_aluno[a_contador].cpf);
    }

    printf("-----\n");
}


int incluirProfessor( Professor lista_prof[], int qtd_prof) {

        printf("Matricula: ");
        scanf("%d", &lista_prof[qtd_prof].matricula);
        getchar();

        if(lista_prof[qtd_prof].matricula <= 0){
            return ERRO_CADASTRO_MATRICULA;
        }

        printf("Nome: ");
        fgets(lista_prof[qtd_prof].nome, 100, stdin);
        size_t ln = strlen(lista_prof[qtd_prof].nome) -1;
        if(lista_prof[qtd_prof].nome[ln] == '\n')
            lista_prof[qtd_prof].nome[ln] = '\0';

        printf("Sexo: ");
        scanf("%c", &lista_prof[qtd_prof].sexo);

        lista_prof[qtd_prof].sexo = toupper(lista_prof[qtd_prof].sexo);
        if(lista_prof[qtd_prof].sexo != 'M' & lista_prof[qtd_prof].sexo != 'F'){
            return ERRO_CADASTRO_SEXO;
        }

        printf("Data de nascimento\n");
        printf("Dia: ");
        scanf("%d", &lista_prof[qtd_prof].data_nascimento.dia);

        printf("Mes: ");
        scanf("%d", &lista_prof[qtd_prof].data_nascimento.mes);

        printf("Ano: ");
        scanf("%d", &lista_prof[qtd_prof].data_nascimento.ano);
        getchar();

        if(ValidaData(lista_prof[qtd_prof].data_nascimento.dia, lista_prof[qtd_prof].data_nascimento.mes, lista_prof[qtd_prof].data_nascimento.ano) == 0){
            
            printf("Digite o CPF: ");
            fgets(lista_prof[qtd_prof].cpf, 12, stdin); 
            ln = strlen(lista_prof[qtd_prof].cpf) - 1; 
            if (lista_prof[qtd_prof].cpf[ln] == '\n')
            lista_prof[qtd_prof].cpf[ln] = '\0';
        } else {
            return DATA_NASCIMENTO_INVALIDA;
        }

    return CADASTRADO_SUCESSO;
}

int atualizarProfessor (Professor lista_prof[], int qtd_prof, int matricula){

    return ATUALIZADO_SUCESSO;
}

void exlcuirProfessor(Professor lista_prof[], int qtd_prof, int matricula){


}

void listarProfessor(Professor lista_prof[], int qtd_prof){

    int p_contador;

    for(p_contador = 0; p_contador < qtd_prof; p_contador++) {
        printf("------\n");
        printf("Matricula: %d\n", lista_prof[p_contador].matricula);
        printf("Nome: %s\n", lista_prof[p_contador].nome);
        printf("Sexo: %c\n", lista_prof[p_contador].sexo);
        printf("Data Nascimento: %d/%d/%d\n", lista_prof[p_contador].data_nascimento.dia, lista_prof[p_contador].data_nascimento.mes, lista_prof[p_contador].data_nascimento.ano);
        printf("CPF: %s\n", lista_prof[p_contador].cpf);
    }
    printf("-------\n");
}

int incluirDisciplina(Disciplina lista_disci[], int qtd_disciplina){

    printf("Nome: ");
    scanf("%s", &lista_disci[qtd_disciplina].nome);
    fflush(stdin);

    printf("Codigo: \n");
    printf("Letra: ");
    scanf("%s", &lista_disci[qtd_disciplina].cod.letra);
    fflush(stdin);

    printf("Numero: ");
    scanf("%s", &lista_disci[qtd_disciplina].cod.numero);
    fflush(stdin);

    return CADASTRADO_SUCESSO;
}

void listarDisciplina(Disciplina lista_disci[], int qtd_disciplina){
    int d_contador;
    for(d_contador = 0; d_contador < qtd_disciplina; d_contador++){
        printf("--------\n");
        printf("Codigo: %s%s \n", lista_disci[d_contador].cod.letra, lista_disci[d_contador].cod.numero);
        printf("Nome: %s\n", lista_disci[d_contador].nome);
    }

    printf("-------\n");
}

int ValidaData(int dia, int mes, int ano){
/* data inválida quando a variável 'validade' retorna 0*/
    int validade;

	if (mes > 12 || mes < 1 || dia < 1 || dia > 31){
		validade = 0;
	}
	else if ((dia < 1 && dia > 31) && (mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)) {
		validade = 0;
	}
	else if ((dia < 1 && dia > 30) && (mes == 4|| mes == 6 || mes == 9 || mes == 11)){
        	validade = 0;
    	}
	else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		if (mes == 2 && dia > 29) {
			validade = 0;
		}
	}
	else if (mes == 2 && dia > 28) {
		validade = 0;
	}
	return validade;
}


