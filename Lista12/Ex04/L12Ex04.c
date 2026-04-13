#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia uma matriz 3 × 3 de inteiros e mostre apenas os
elementos da diagonal secundária.*/
int main()
{
    int m[5][5];
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Informe m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", m[i][4 - i]);
    }
    /*int m[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        printf("%d\n", m[i][2 - i]);
    }*/
    printf("\nHello world!\n");
    return 0;
}
