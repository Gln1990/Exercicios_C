#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro positivo n e calcule o fatorial de
n usando for.*/
int main()
{
    int n, i, fat=1;

    printf("Informe o numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fat *= i;
    }
    printf("O fatorial de %d eh %d", n, fat);
    return 0;
}
