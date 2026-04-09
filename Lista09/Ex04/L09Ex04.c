#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro positivo n e mostre os números
de 1 até n usando while.*/
int main()
{
    int n, i = 1;

    printf("Informe um numero: ");
    scanf("%d", &n);

    while(i <= n){
        printf("%d\n", i);
        i++;
    }

    return 0;
}
