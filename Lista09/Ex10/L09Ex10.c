#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro positivo n e calcule o fatorial de
n usando while.*/
int main()
{
    int num, i = 1;
    int fat = 1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    while(i <= num){
        fat *= i;
        i++;
    }

    printf("Fatorial de %d eh %d", num, fat);
    return 0;
}
