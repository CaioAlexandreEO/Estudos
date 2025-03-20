#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string>
#include <iostream>
#include <windows.h>


using namespace std;

void Tempo(){
    Sleep(1500);
}

void limpaTela(){
    system("CLS");
}

int main(){
    setlocale(LC_ALL,"");

    int i, cpf, senha, nomecompleto,deposito,saldo=saldo+deposito;

       //Barra Superior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Informa��o para cadastro
    printf("\n%c                          Vamos fazer seu cadastro!                           %c\n", 177, 177);

    //Barra inferior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    Sleep(3000);
    limpaTela();

    //Barra Superior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Informa��o para cadastro
    printf("\n%c                               Cadastre seu CPF                               %c\n", 177, 177);

    //Barra inferior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Adicionando CPF a variavel
    printf("\n--->");
    scanf("%d", &cpf);

    Tempo();
    limpaTela();


 //Barra Superior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Informa��o para cadastro
    printf("\n%c                               Cadastre sua senha                             %c\n", 177, 177);

    //Barra inferior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Adicionando CPF a variavel
    printf("\n--->");
    scanf("%d", &senha);

    Tempo();
    limpaTela();


 //Barra Superior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Informa��o para cadastro
    printf("\n%c                          Digite seu Nome e Sobrenome                         %c\n", 177, 177);

    //Barra inferior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Adicionando CPF a variavel
    printf("\n--->");
    cin>>nomecompleto;

    Tempo();
    limpaTela();

    //Barra Superior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Informa��o para cadastro
    printf("\n%c                              Bem Vindo(a)                                    %c\n", 177, 177);

    //Barra inferior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    Tempo();
    limpaTela();
saldo=0;
    if(saldo==0){
    //Barra Superior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    //Informa��o para cadastro
    printf("\n%c                              Deposite um valor                                    %c\n", 177, 177);

    //Barra inferior
for(i=0; i<80; i++){
       printf("%c", 177);
}
//Adicionando VALOR a variavel
    printf("\n--->");
    cin>>deposito;
    }else{
        else//Barra Superior
for(i=0; i<80; i++){
       printf("%c", 177);
}

    printf("\n%c [1]- Saldo                                                                         %c\n", 177, 177);
    printf("\n%c [2]- Depositar                                                                     %c\n", 177, 177);
    printf("\n%c [3]- Sacar                                                                         %c\n", 177, 177);
    printf("\n%c [4]- Sair                                                                          %c\n", 177, 177);

    //Barra inferior
for(i=0; i<80; i++){
       printf("%c", 177);
}
}



return 0;
}
