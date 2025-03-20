#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez
    //Coloque o resultado da multiplica��o entre os 3 em uma vari�vel pr�pria
    //Depois exiba essa vari�vel

    //Dados de variaveis
    float num1 = 0 , num2 = 0 , num3 = 0;

    //Definindo os valores
    printf("Digite 3 n�meros inteiros: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

    //Multiplicando as variaveis
    float mult = num1*num2*num3;

    //Resulado das variaveis
    printf("Os 3 n�meros multiplicados resulta em: %.2f\n", mult);


    system("pause");

}
