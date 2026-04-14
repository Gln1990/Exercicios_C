#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que use calloc() para alocar dinamicamente um vetor de 5
inteiros e mostre o conteúdo inicial desse vetor.*/
int main()
{
    int *v;
    int i;

    v = (int *) calloc(5, sizeof(int));

    /*for(i = 0; i < 5; i++){
        printf("Informe v[%d]: ", i);
        scanf("%d", &v[i]);
    }*/
    for(i = 0; i < 5; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

    free(v);

    printf("\nHello world!\n");
    return 0;
}
