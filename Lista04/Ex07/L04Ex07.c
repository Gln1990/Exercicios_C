#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia um número inteiro e mostre o resultado da expressão
lógica o número está entre 10 e 20, inclusive
*/
int main()
{
    int num, resp;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    resp = (num >= 10 && num <=20);

    printf("O resposta da expresao (numero >= 10) e (numero <= 20): %d", resp);
    return 0;
}
