#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia números inteiros até que o usuário digite um valor
negativo. Ao final, mostre quantos números não negativos foram digitados.*/
int main()
{
    int num, i=0;
    do{
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num >= 0)
            i++;
    }while(num >= 0);
    printf("Foram digitados %d numeros nao negativos", i);
    return 0;
}
