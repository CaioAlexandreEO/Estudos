#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){

    //Classificando a quantidade das variaveis dentro do vetor
    int vetor[3],cont;
    //Passando valores para vetores
    vetor[0]=5;
    vetor[1]=10;
    vetor[2]=15;


    //Adicionando 1 para cada posi��o
    for(cont = 0; cont<TAM; cont++){
        vetor[cont]=vetor[cont]+1;
    }


    //Imprimindo um vetor
    printf("\nPosi��o 0: %d", vetor[0]);
    printf("\nPosi��o 1: %d", vetor[1]);
    printf("\nPosi��o 2: %d", vetor[2]);

    //Imprimindo vetor em um la�o de repeti��o
    for(cont = 0; cont<TAM; cont++){
        printf("\nPosicao %d: %d\n", cont, vetor[cont]);
    }

    //Adicionando 1 para cada posi��o
    for(cont = 0; cont<TAM; cont++){
        scanf("\n%d", &vetor[cont]);
    }

    //Imprimindo vetor em um la�o de repeti��o
    for(cont = 0; cont<TAM; cont++){
        printf("\nPosicao %d: %d", cont, vetor[cont]);
    }



system("pause");
}
