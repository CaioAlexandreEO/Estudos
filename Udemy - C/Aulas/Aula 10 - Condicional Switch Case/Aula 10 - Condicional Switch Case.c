#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    int a = 1;
    char b = 'x';

    //if / else
    if(a==1){
        printf("\nOp��o escolhida foi a 1");
    }else if(a==2){
        printf("\nOp��o escolhida foi a 2");
    }else if(a=3){
        printf("\nOp��o escolhida foi a 3");
    }else{
        printf("\nOp��o escolhida invalida");
    }

    //Switch case
    switch(a){
        case 1:
            printf("\nOp��o escolhida foi a 1");
            break;
        case 2:
            printf("\nOp��o escolhida foi a 2");
            break;
        case 3:
            printf("\nOp��o escolhida foi a 3");
            break;
        default:
            printf("\nOp��o escolhida invalida!");
            break;
    }

    //Switch case com char
    switch(b){
    case'x':
        printf("a letra � x");
        break;
    case'w':
        printf("a letra � w");
        break;
    case'y':
        printf("a letra � y");
        break;
    default:
        printf("a op��o � invalida");
        break;
    }




        system("pause");
}
