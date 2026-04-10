#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro positivo n e calcule o fatorial de
n usando do/while.*/
int main()
{
    int num, i=1;
    int fat = 1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    do{
        fat *= i;
        i++;
    }while(i <= num);

    printf("Fatorial de %d eh = %d\n", num, fat);

    return 0;
}
