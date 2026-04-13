#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia uma matriz 3×3 de inteiros e mostre apenas os elementos
da diagonal principal.*/
int main()
{

    int m[5][5];
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Informe o valor da posicao m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        printf("%d\n", m[i][i]);//acessa os dados onde a linha e coluna estao na mesma possicao do indice m[0][0], m[1][1], m[2][2]
    }
    printf("\nHello world!\n");
    return 0;
}
