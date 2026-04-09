#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número inteiro positivo n e calcule a soma dos
números de 1 até n*/
int main()
{
    int i, n, soma = 0;
    printf("Informe um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        soma += i;
        printf("%d\n", soma);
    }
    return 0;
}
