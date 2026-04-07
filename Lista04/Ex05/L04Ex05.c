#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia a idade de uma pessoa e mostre o resultado da expressão
idade maior ou igual a 18
*/
int main()
{
    int idade, maior;
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    maior = (idade >= 18);
    printf("Resultado de (idade >= 18): %d", maior);
    return 0;
}
