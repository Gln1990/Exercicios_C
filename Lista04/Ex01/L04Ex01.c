#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia dois números inteiros e mostre o resultado da com-
paração o primeiro número é maior que o segundo?
*/
int main()
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O numero %d e maior que o numero %d", n1, n2);
    }
    else
        printf("O numero %d nao e maior que o numero %d", n1, n2);

    return 0;
}
