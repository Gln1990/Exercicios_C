#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que aloque dinamicamente um vetor de 3 inteiros, leia os valores,
depois use realloc() para aumentar o vetor para 6 posições, leia os novos valores
e mostre o vetor completo.*/
int main()
{
    int *v;
    int i;

    v = (int *) malloc(3 * sizeof(int));

    for(i = 0; i < 3; i++){
        printf("Informe o v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 3; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

    v = (int *) realloc(v, 6 * sizeof(int));

    printf("Realocando a Memoria...\n");

    for(i = 0; i < 6; i++){
        printf("Informe o v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 6; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

    free(v);
    printf("\nHello world!\n");
    return 0;
}
