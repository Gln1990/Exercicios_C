#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia duas matrizes 2 × 2 e gere uma terceira matriz
contendo a soma das duas.*/
int main()
{
    int m1[2][2], m2[2][2], soma[2][2];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Informe o valor da posicao m[%d][%d] da primeira matriz: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Informe o valor da posicao m[%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            soma[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d\n", soma[i][j]);
        }
    }



    printf("\nHello world!\n");
    return 0;
}
