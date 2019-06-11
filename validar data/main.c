#include <stdio.h>
#include <stdlib.h>

/*  ###### VALIDADOR DE DATA ######
    Autor : Tamires Pimenta Manhães
    Github : github.com/tamires-manhaes ]
    Salvador 11 de Junho de 2019
*/

int ValidaData(int dia, int mes, int ano);

int main(){
    int dia, mes, ano;
    int resultado;

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Mes: ");
    scanf("%d", &mes);

    printf("Ano: ");
    scanf("%d", &ano);

    /* Data é inválida quando o valor da variável 'resultado' for igual a 0 */
    /* Data é válida quando o valor da variável 'resultado' for diferente de 0 */
    resultado = ValidaData(dia, mes, ano);
    if(resultado != 0){
        printf("Data valida!\n");
    } else {
        printf("Data invalida!\n");
    }

}

int ValidaData(int dia, int mes, int ano){

    int validade;

	if (mes > 12 || mes < 1 || dia < 1 || dia > 31){
		validade = 0; //data invalida
	}
	else if ((dia < 1 && dia > 31) && (mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)) {
		validade = 0; // data invalida
	}
	else if ((dia < 1 && dia > 30) && (mes == 4|| mes == 6 || mes == 9 || mes == 11)){
        validade = 0; // data invalida
    }
	else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		if (mes == 2 && dia > 29) {
			validade = 0; // data invalida
		}
	}
	else if (mes == 2 && dia > 28) {
		validade = 0; //data invalida
	}

	return validade;
}