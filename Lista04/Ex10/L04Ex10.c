#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia dois números inteiros e mostre o resultado da ex-
pressão lógica
(a > b) e (a != 0)
*/
int main()
{
    int a, b, resp;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &b);

    resp = (a > b && a != 0);

    printf("O resposta da expresao (a > b) e (a != 0): %d", resp);
    return 0;
}
