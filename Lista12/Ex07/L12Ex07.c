#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia uma matriz 3 × 3 e conte quantos elementos são
pares.*/
int main()
{
    int m[3][3];
    int i, j, par = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j< 3; j++){
            printf("Informe o valor da posicao m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);

            if(m[i][j] % 2 == 0){
                par++;
            }
        }
    }
    printf("Ao todo %d elementos sao pares", par);
    printf("\nHello world!\n");
    return 0;
}
