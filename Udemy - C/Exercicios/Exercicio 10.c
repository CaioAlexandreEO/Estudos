#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que informe se o valor lido � primo ou n�o
    int i, valor, aux = 0;

    printf("Digite um valor para saber se ele � primo:");
    scanf("%d", &valor);

    for(i = 1; i <= valor ; i++){

        //Conferindo quantas vezes houve divisibilidade
        if(valor % i == 0){
            aux++;
        }

        //Exibe o resto da divis�o na tela
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
     }

     if(aux == 2){
        printf("O n�mero � primo!");
    }else{
        printf("O n�mero n�o � primo! Pois ele tem %d divisores", aux);
    }
}
