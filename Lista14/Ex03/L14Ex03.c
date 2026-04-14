#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que aloque dinamicamente espaço para 5 números inteiros, leia
os valores, mostre todos eles e depois libere a memória.*/
int main()
{
    int *v;
    int i;

    v = (int *) malloc(5 * sizeof(int));

    if(v == NULL){
        printf("Erro de Alocacao.\n");
    }

    for(i = 0; i < 5; i++){
        printf("Informe o valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("mostrando os valores....\n");

    for(i = 0; i < 5; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    free(v);

    printf("Liberando a memoria....\n");
    for(i = 0; i < 5; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

    printf("\nHello world!\n");
    return 0;
}
