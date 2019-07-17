#include <stdio.h>
#include <string.h>
#include "validaData.h"

void testarValidarData();

int main(){
    
    
    testarValidarData();

    return 0;
}

void testarValidarData(){
    printf("%d\n",validaData(10, 12, 1999) == 1);
    printf("%d\n",validaData(1, 2, 1921) == 1);
    printf("%d\n",validaData(30, 02, 1999) == 1);


     
}
