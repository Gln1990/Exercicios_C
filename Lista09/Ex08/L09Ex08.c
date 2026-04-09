#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia números inteiros até que o usuário digite 0. Ao final,
mostre a soma dos números digitados, sem considerar o zero.*/
int main()
{
    int n, soma;

    printf("Informe um numero: ");
    scanf("%d", &n);

    while(n != 0){
        soma += n;
        printf("Informe um numero ou 0 para sair: ");
        scanf("%d", &n);

    }
    printf("A soma eh %d", soma);
    return 0;
}
