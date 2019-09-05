#define SUCESSO -1
#define SEM_ESPACO -2
#define SEM_ESTRUTURA_AUXILIAR -3
#define JA_TEM_ESTRUTURA_AUXILIAR -4
#define POSICAO_INVALIDA -5
#define SEM_ESPACO_DE_MEMORIA -6
#define TAMANHO_INVALIDO -7
#define ESTRUTURA_AUXILIAR_VAZIA -8
#define NUMERO_INEXISTENTE -9
#define NOVO_TAMANHO_INVALIDO -10

#define TAMANHO 10

typedef struct vetorPrincipal {
    int *auxiliar; //ponteiro para estrutura auxliliar
    int  tamanho; // tamanho para alocar a estrutura auxiliar
    int quantidade; //contador de elementos no vetor
}PRINCIPAL;

int criarEstruturaAuxiliar(PRINCIPAL *vetor_principal, int tamanho, int posicao); //
int inserirNumeroEmEstrutura(PRINCIPAL *vetor_principal, int valor, int posicao); //
int excluirNumeroDoFinaldaEstrutura(int posicao);
int excluirNumeroEspecificoDeEstrutura(int valor, int posicao);
int getDadosEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao);
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int auxiliar[]);
int getDadosDeTodasEstruturasAuxiliares(PRINCIPAL *vetor_principal, int vetorAux[]);
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int auxiliar[]);
int modificarTamanhoEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao, int novoTamanho);
int getQuantidadeElementosEstruturaAuxiliar(PRINCIPAL *vetor_principal, int posicao);
int ehPosicaoValida(int posicao);
void inicializar(PRINCIPAL *vetor_principal);
void finalizar(PRINCIPAL *vetor_principal);
int verificaEstrutura(PRINCIPAL *vetor_principal, int posicao);
int menu();

/*
criarEstruturaAuxiliar {vetor[posicao].auxiliar = malloc (tamanho);}
*/