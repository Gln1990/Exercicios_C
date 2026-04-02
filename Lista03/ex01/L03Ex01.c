#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia dois números inteiros e mostre a soma entre eles */
int main()
{
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma entre %d e %d e = %d", num1, num2, soma);
    return 0;
}
