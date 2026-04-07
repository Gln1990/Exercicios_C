#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia um número inteiro e mostre o resultado da expressão
lógica o número não é igual a zero
*/
int main()
{
    int num, resp;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    resp = !(num == 0);

    printf("O resposta da expresao !(numero == 0): %d", resp);
    return 0;
}
