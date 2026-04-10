#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 números inteiros e conte quantos deles são pares
usando while.*/
int main()
{
    int num, i = 1, par = 0;

    while(i <= 10){
        printf("Informe um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0){
            par++;
        }
        i++;
    }
    printf("Foram digitados %d numeros pares", par);

    return 0;
}
