#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia uma matriz 3 × 3 e encontre o menor valor armazenado
nela.*/
int main()
{
    int m[3][3];
    int i, j, menor;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe o valor da posicao m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }



    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(m[i][j] < menor)
            menor = m[i][j];
        }
    }
    printf("O menor valor armazenado foi %d", menor);
    printf("\nHello world!\n");
    return 0;
}
