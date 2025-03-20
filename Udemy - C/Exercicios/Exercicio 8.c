#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Montando calculadora com numeros aleatorios ou numeros selecionados

    //Responsavel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));


    //Definindo variaveis
    int valor1, valor2, opcao, calculo;

    //Selecionando os dados
    printf("Selecione como deseja calcular valores");
    printf("\n[1] - Escolher n�meros");
    printf("\n[2] - N�meros aleat�rios (de 1 a 9)");
    printf("\n--->");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("\nSelecione dois numeros para calcular: ");
        scanf("%d %d", &valor1, &valor2);
        break;

    case 2:
        valor1 = (rand() % 9)+1;
        valor2 = (rand() % 9)+1;
        printf("\nSeus n�meros aleat�rios s�o %d e %d", valor1, valor2);
        break;

    default:
        printf("Op��o invalida!");
    }

    printf("\nAgora selecione qual opera��o deseja fazer:");
    printf("\n[1] - Somar");
    printf("\n[2] - Subtrair");
    printf("\n[3] - Dividir");
    printf("\n[4] - Multiplicar");
    printf("\n--->");
    scanf("%d", &calculo);

    switch(calculo){
    case 1:
        printf("%d + %d = %d",valor1, valor2, valor1+valor2);
        break;

    case 2:
        printf("%d - %d = %d",valor1, valor2, valor1-valor2);
        break;

    case 3:
        printf("%d / %d = %d",valor1, valor2, valor1/valor2);
        break;

    case 4:
        printf("%d * %d = %d",valor1, valor2, valor1*valor2);
        break;

    default:
        printf("Op��o invalida!");
    }


system("pause");
}

