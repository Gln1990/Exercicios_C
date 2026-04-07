#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro e informe se ele é par ou ímpar.*/
int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O %d e numero PAR", num);
    }
    else
        printf("O %d e numero IMPAR", num);
    return 0;
}
