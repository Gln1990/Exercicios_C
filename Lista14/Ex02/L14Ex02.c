#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que aloque dinamicamente espaço para um número real, leia um
valor, mostre esse valor e depois libere a memória.*/
int main()
{
    float *p;

    p = (float *) malloc(sizeof(float));
    if (p == NULL) {
        printf("Erro de alocacao.\n");
        return 1;
    }

    printf("Digite um numero: ");
    scanf("%f", p);

    printf("O valor informado eh = %.2f\n", *p);

    free(p);
    printf("\nHello world!\n");
    return 0;
}
