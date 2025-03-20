#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//Biblioteca importada para permitir usar acentos

void main(){
    setlocale(LC_ALL,"");//Usa as regras de linguagem padr�o do computador
    printf("Ol� \n");

    //Formas de Escreves na tela

    //Escrever padr�o
    printf("Oi Caio! \n");

    //Escrever o valor de uma vari�vel (a)
    int a = 5;
    printf("%d \n",a);
        //%d para numeros inteiros

    //Escrever a soma de duas variaveis (b+c)
    int b = 50;
    int c = 7;
    printf("%d \n", b+c);

    //Escrever um texto com variavel (texto+d)
    int d = 89;
    printf("O valor da variavel d �: %d \n", d);
    //Scannear um valor para a variavel (&= Endere�o na mem�ria)
    scanf("%d", &a); //lembra input em python
    printf("O valor de a mudou com scanf para %d \n", a);

    float e = 5.5;
    //Para float o %d se torna %f para numeros com decimais
    printf("O valor de e � = %f \n", e);
    scanf("%f", &e);
    printf("O valor de e mudou com scanf para %.2f \n", e); //.2f para duas casas decimais

    //Lendo variaveis letras
    char g = 't';
    printf("O valor de g � = %c \n", g);
    //Limpar o buffer
    fflush(stdin);
    scanf(" %c", &g);//Adicionar um espa�o antes do %c para ter espa�o para a informa��o
    printf("O valor de g agora � %c", g);
}
