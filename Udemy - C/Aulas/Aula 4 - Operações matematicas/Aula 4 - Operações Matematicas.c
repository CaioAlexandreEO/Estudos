#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL,"");

    //Definindo variaveis
    int a = 6, b = 3;

    //Soma
    printf("\nA soma de a e b � = %d", a + b);
    //Ou
    printf("\nA soma de a = %d e b = %d � igual a :%d", a, b, a+b);

    //Subtra��o
    printf("\nA subtra��o de a e b � = %d", a - b);
    //Ou
    printf("\nA subtra��o de a =%d e b = %d � igual a =%d", a, b,a-b);

    //Divis�o
    printf("\nA divis�o de a e b � =%d", a/b);
    //Ou
    printf("\nA divis�o de a = %d e b = %d e =%d", a, b, a/b);

    //Multiplica��o
    printf("\nA multiplica��o de a e b � = %d", a*b);
    //Ou
    printf("\nA multiplica��o de a = %d e b = %d � = %d", a, b, a*b);

    //Resto da divis�o
    printf("\nO resto da divis�o de a e b � = %d", a % b);

    //Valor absoluto
    printf("\nO valor absoluto de -3 � de = %d", abs(-3));

    system("pause");


}
