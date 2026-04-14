#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que aloque dinamicamente um vetor de 6 inteiros, leia os
valores e mostre apenas os números pares armazenados.*/
int main()
{
    int *v;
    int i, par;

    v = (int *) calloc(6, sizeof(int));

    for(i = 0; i < 6; i++){
        printf("Informeo v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 6; i++){
        if(v[i] % 2 == 0)
            printf("Elemento par esta na possicao %d valor %d\n", i, v[i]);
    }
    free(v);
    printf("Hello world!\n");
    return 0;
}
