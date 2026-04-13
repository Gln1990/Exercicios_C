#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma matriz 2 × 3 e mostre a soma dos elementos de
cada linha.*/
int main()
{
    int m[2][3];
    int i, j, soma = 0;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
           printf("Informe a posicao m[%d][%d]: ", i, j);
           scanf("%d", &m[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
    soma = 0;
        for(j = 0; j < 3; j++){
            soma += m[i][j];

        }
    printf("%d\n", soma);
    }


    /*int m[2][3];
    int i, j, somaLinha;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
    somaLinha = 0;
        for (j = 0; j < 3; j++) {
            somaLinha = somaLinha + m[i][j];
        }
    printf("Soma da linha %d = %d\n", i, somaLinha);
    }*/
    printf("\nHello world!\n");
    return 0;
}
