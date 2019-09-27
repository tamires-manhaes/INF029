#include <stdio.h>

int questao1(int n){
    if((n == 1) || (n == 0))
        return 1;
    else 
        return (n * questao1(n - 1));
}

int questao2 (int n){
    if(n == 1 || n == 2)
        return 1;
    else 
        return questao2(n-1) + questao2(n-2);
}

int questao3 (int n){
    if(n == 0)
      return n;
    else {
	printf("%d", n % 10);
	n = n / 10;
	return invert(n);
    }
}

int questao4 (int *v, int tamanho){
 if (tamanho == 1)
      return v[0];
   else 
	return v[tamanho - 1] + questao4(v, tamanho - 1); 
}

int questao12 (int n) {
	if(n < 0) {
		return 0;
	}
	naturaisCresc(n - 1);
	printf("%d ", n);
}

int questao13 (int n) {
	if(n == 0) {
		return 0;
	}
	printf("%d ", n);
	naturaisDec(n - 1);
}

int questao14 (int n){
	if(n < 0) {
		return 0;
	}
	2 + naturaisPares(n - 2);
	printf("%d ", n);
}

