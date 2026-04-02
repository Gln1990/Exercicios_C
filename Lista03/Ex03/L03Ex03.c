#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia dois números inteiros e mostre a multiplicação entre
eles */
int main()
{
    int num1, num2, mult;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    mult = num1 * num2;

    printf("O resultado da multiplicacao entre %d e %d e = %d", num1, num2, mult);
    return 0;
}
