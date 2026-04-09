#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro positivo n e mostre todos os divisores
positivos de n usando for.*/
int main()
{
    int n, i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Divisores de %d:\n", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
