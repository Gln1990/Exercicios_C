#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia dois números inteiros e mostre a subtração do primeiro
pelo segundo. */
int main()
{
    int num1, num2, sub;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    sub = num1 - num2;

    printf("O resultado da subtracao entre %d e %d e = %d", num1, num2, sub);
    return 0;
}
