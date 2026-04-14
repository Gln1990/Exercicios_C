#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que aloque dinamicamente uma matriz 2 × 3 usando um vetor
linear, leia os valores e depois mostre a matriz na forma de linhas e colunas.*/
int main()
{
    int *m;
    int i, j;
    int l = 2, c = 3;

    m = (int *) malloc(l * c * sizeof(int));

    if(m == NULL){
        printf("Erro de alocacao.\n");
        return 1;
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("Informe a posicao m[%d][%d]: ", i, j);
            scanf("%d", &m[i* c + j]);
        }
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d\n", m[i * c + j]);
        }
    }

    free(m);
    printf("Hello world!\n");
    return 0;
}
