#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dois números inteiros e informe qual deles é o maior.*/
int main()
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("O valor %d e maior", n1);
    }
    else
        printf("O valor %d e maior", n2);
    return 0;
}
