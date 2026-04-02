#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia dois números inteiros, sendo o segundo diferente de
zero, e mostre:
• a divisão inteira;
• o resto da divisão.
*/
int main()
{
    int num1, num2, div, rest_div;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero maior que 0: ");
    scanf("%d", &num2);
    div = num1 / num2;
    rest_div = num1 % num2;

    printf("O resultado da divisao inteira entre %d e %d e = %d\n", num1, num2, div);
    printf("O resultado do resto da divisao entre %d e %d e = %d", num1, num2, rest_div);
    return 0;
}
