#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia uma matriz 2 × 3 e mostre a soma dos elementos de
cada coluna.*/
int main()
{
    int m[2][3];
    int i, j, soma = 0;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Informe o valor da posicao m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for(j = 0; j < 3; j++){
        soma = 0;
        for(i = 0; i < 2; i++){
            soma += m[i][j];
        }
    printf("%d\n", soma);
    }
    printf("\nHello world!\n");
    return 0;
}
