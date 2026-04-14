#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que declare uma variável inteira x, associe um ponteiro a ela e
depois altere o valor de x usando o ponteiro.*/
int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("Valor de x eh = %d\n", x);

    *p = 20;

    printf("O novo valor de x eh = %d\n", x);

    printf("\nHello world!\n");
    return 0;
}
