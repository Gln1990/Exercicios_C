#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia 8 números inteiros em um vetor e mostre a posição
do maior valor encontrado.*/
int main()
{
    int v[8];
    int i, maior, pos;

    for(i = 0; i < 8; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
        if(v[i] > maior){
            maior = v[i];
            pos = i;

        }

    }
    printf("O maior numero eh %d\n", maior);
    printf("Esta na posica %d\n", pos);
    printf("\nHello world!\n");
    return 0;
}
