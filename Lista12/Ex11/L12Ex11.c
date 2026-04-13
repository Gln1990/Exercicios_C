#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma matriz 2 × 3 e mostre sua transposta, isto é, uma
matriz 3 × 2.*/
int main()
{
    int m[2][3], n[3][2];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Informe o valor da posicao m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            n[j][i] = m[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d", n[i][j]);
        }
    }
    printf("\nHello world!\n");
    return 0;
}
