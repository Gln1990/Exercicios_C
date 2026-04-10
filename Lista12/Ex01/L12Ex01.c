#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que declare uma matriz 2×2, leia seus valores e depois mostre
a matriz na tela.*/
int main()
{
    int m[2][2];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("m[%d] \n", m[i][j]);
        }
    }
    printf("\nHello world!\n");
    return 0;
}
