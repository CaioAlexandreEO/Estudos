#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 valores e ingorme se eles s�o iguais entre si para formarem os lados de um triangulo equil�tero

    //Definindo valores as variaveis dos lados do triangulo
    float lado1, lado2, lado3;

    //Dando valor as variaveis
    printf("Escreva as 3 medidas do seu triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    //Condi��es para um triangulo equilatero
    if ((lado1 == lado2) && (lado1==lado3)){
        printf("Seu triangulo equilatero � valido, ou seja, tem todos os lados iguais!");
    }else{
        printf("Seu triangulo n�o tem os 3 lados iguais!");
    }



    system("pause");
}
