#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número inteiro em uma variável x, associe um
ponteiro a essa variável e mostre o valor lido usando o ponteiro.*/
int main()
{
    int x;
    int *p;

    p = &x;
    printf("Informe um numero: ");
    scanf("%d", &x);

    printf("O valor digitado foi %d", *p);
    printf("\nHello world!\n");
    return 0;
}
