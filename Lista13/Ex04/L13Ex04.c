#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que declare uma variável do tipo float, associe um ponteiro
a ela e mostre o valor da variável e o valor acessado pelo ponteiro.*/
int main()
{
    float x = 5.50;
    float *p;

    p = &x;
    printf("Valor de x eh = %.2f\n", x);
    printf("Valor apontado pelo ponteiro eh %.2f\n", *p);
    printf("\nHello world!\n");
    return 0;
}
