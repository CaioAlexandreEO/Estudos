#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 10;

    //Conectivo l�gico E (AND) Se uma compara��o for falsa n�o entra no bloco
    if(a>5 && a<15){
        printf("\n A variavel 'a' esta entre 5 e 15!");
    }

    //Conectivo l�gico OU (OR) Se uma compara��o for verdadeira, entra no bloco
    if(a>5 || a<15){
        printf("\n A variavel 'a' esta entre 5 e 15!");
    }

    //Misturando conectivos
    if((a>5 && a<15) || a == 20 ){
        printf("\n A variavel 'a' esta entre 5 e 15 ou vale 20!");
    }

    system("pause");
}
