#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma matriz 3 × 3 e encontre o maior valor armazenado
nela.*/
int main()
{
    int m[3][3];
    int i, j, maior = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe o valor da posicao m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);

            if(m[i][j] > maior)
                maior = m[i][j];
        }
    }
    printf("O maior valor encontrado foi %d", maior);
    printf("\nHello world!\n");
    return 0;
}
