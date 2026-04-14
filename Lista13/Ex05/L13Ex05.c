#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia dois números inteiros, use ponteiros para acessar esses
valores e mostre a soma deles.*/
int main()
{
    int n1, n2;
    int *p1, *p2;

    p1 = &n1;
    p2 = &n2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);

    printf("Acessando o primeiro valor usando ponterio %d\n", *p1);
    printf("Acessando o segundo valor usando ponterio %d\n", *p2);
    printf("A soma entre %d e %d eh = %d\n", *p1, *p2, (*p1 + *p2));

    printf("\nHello world!\n");
    return 0;
}
