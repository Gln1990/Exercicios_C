#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia um número inteiro e mostre o resultado da expressão
lógica o número é menor que 0 ou maior que 100
*/
int main()
{
    int num, resp;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    resp = (num < 0 || num > 100);

    printf("O resposta da expresao (numero < 0) ou (numero > 100): %d", resp);
    return 0;
}
