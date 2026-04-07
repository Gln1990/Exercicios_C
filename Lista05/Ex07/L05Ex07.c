#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro e informe se ele é múltiplo de 5*/
int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num % 5 == 0){
        printf("O valor e multiplo de 5");
    }
    else
        printf("O valor nao e multiplo de 5");
    return 0;
}
