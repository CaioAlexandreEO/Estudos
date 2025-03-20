#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentua��o
    setlocale(LC_ALL,"");

    //Crie um algoritimo que leia 2 notas e mostre a m�dia entre elas.

    //Variaveis para adicionar o valor
    float nota1, nota2, media;

    //Definindo a primeira nota
    printf("Sua primeira nota �: ");
    scanf("%f", &nota1);

    //Definindo a segunda nota
    printf("\nSua segunda nota �: ");
    scanf("%f", &nota2);

    //Explica��o da conta
    printf("\nA suas notas s�o %.2f e %.2f",nota1,nota2);

    //Conta da m�dia
    media = (nota1+nota2)/2;

    //Valor da m�dia
    printf("\nSua m�dia � de : %.2f\n", media);

    system("pause");

}
