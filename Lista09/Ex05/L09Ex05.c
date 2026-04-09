#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número inteiro positivo n e calcule a soma dos
números de 1 até n usando while.*/
int main()
{
    int i, n, soma=0;

    printf("Informe um numero: ");
    scanf("%d", &n);

    while(i <= n){
        soma += i;
        i++;
    }
    printf("%d", soma);
    return 0;
}
