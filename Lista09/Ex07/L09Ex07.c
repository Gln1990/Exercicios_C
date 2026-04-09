#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia 5 números inteiros e mostre a soma deles usando
while.*/
int main()
{
    int i = 1, n, soma;
    while(i <= 5){
        printf("Informe o %do numero: ", i);
        scanf("%d", &n);
        soma += n;
        i++;
    }
    printf("A soma eh = %d", soma);

    return 0;
}
