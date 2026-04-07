#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia dois números inteiros e mostre o resultado da expressão
lógica: (a == b) ou (a > 100)
*/
int main()
{
    int a, b, resp;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &b);

    resp = (a == b || a > 100);

    printf("O resposta da expresao (a == b) ou (a > 100): %d", resp);
    return 0;
}
