#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia dois números inteiros e troque os valores entre eles
usando ponteiros e uma variável auxiliar.*/
int main()
{
    int n1, n2, x;
    int *p1, *p2;

    p1 = &n1;
    p2 = &n2;

    printf("Informe o valor n1: ");
    scanf("%d", &n1);
    printf("Informe o valor n2: ");
    scanf("%d", &n2);

    printf("\nO valor da variavel n1 eh %d\n", *p1);
    printf("O valor da variavel n2 eh %d\n", *p2);

    x = *p1;
    *p1 = *p2;
    *p2 = x;

    printf("\nTrocando......\n\n");

    printf("O novo valor da variavel n1 eh %d\n", *p1);
    printf("O novo valor da variavel n2 eh %d\n", *p2);
    printf("\nHello world!\n");
    return 0;
}
