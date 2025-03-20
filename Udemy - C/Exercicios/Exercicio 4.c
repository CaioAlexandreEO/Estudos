#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 4 notas e calcule a m�dia entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado
    //Se n�o, foi reprovado


    //Definindo variaveis dos bimestres
    float bimestre1 = 0, bimestre2 = 0, bimestre3 = 0, bimestre4 = 0;

    //Adicionando valores as variaveis
    printf("Vamos adicionar suas notas no boletim!\nA nota do seu 1� bimestre �: ");
    scanf("%f", &bimestre1);

    printf("A nota do seu 2� bimestre �: ");
    scanf("%f", &bimestre2);

    printf("A nota do seu 3� bimestre �: ");
    scanf("%f", &bimestre3);

    printf("A nota do seu 4� bimestre �: ");
    scanf("%f", &bimestre4);

    //Calculo de m�dia
    float media=(bimestre1 + bimestre2 + bimestre3 + bimestre4)/4;

    //Aprova��o final
    if(media>=7){
        printf("Voc� foi aprovado!\n");
    }else{
        printf("Voc� foi reprovado!\n");
    }



    system("pause");
}
