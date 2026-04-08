#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro de 1 a 5 e mostre a tabuada do
número escolhido para multiplicação por 1. Por exemplo:
• 3 – 3 x 1 = 3
*/
int main()
{
    int num;

    printf("Informe um numero de 1 a 5: ");
    scanf("%d", &num);

    switch(num){
    case 1:
        printf("1 x 1 = 1");
        break;
    case 2:
        printf("2 x 1 = 2");
        break;
    case 3:
        printf("3 x 1 = 3");
        break;
    case 4:
        printf("4 x 1 = 4");
        break;
    case 5:
        printf("5 x 1 = 5");
        break;
    default:
        printf("Valor Invalido");

    }
    return 0;
}
