#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma matriz 3 × 3 de inteiros e calcule a soma de todos
os seus elementos.*/
int main()
{
    int m[3][3];
    int i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
    }
    printf("%d", soma);
    printf("\nHello world!\n");
    return 0;
}
