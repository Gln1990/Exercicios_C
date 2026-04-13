#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia uma matriz 3×3 e informe se ela é uma matriz identidade
simples, isto é, com 1 na diagonal principal e 0 nas demais posições.*/
int main()
{
    int m[3][3];
    int i, j, identidade = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                if (m[i][j] != 1) {
                    identidade = 0;
                }
            } else {
                if (m[i][j] != 0) {
                    identidade = 0;
                }
            }
        }
    }

    if (identidade == 1) {
        printf("A matriz eh identidade.\n");
    } else {
        printf("A matriz nao eh identidade.\n");
    }

    printf("\nHello world!\n");
    return 0;
}
