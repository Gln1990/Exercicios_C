#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia 6 números inteiros em um vetor e gere um segundo vetor
em que cada posição contenha o dobro do valor correspondente do primeiro vetor.*/
int main()
{
    int v[6], v2[6];
    int i;

    for(i = 0; i < 6; i++){
        printf("Informar o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
        v2[i] = v[i] * 2;

    }
    for(i = 0; i < 6; i++){
        printf("v[%d]\n", v[i]);
    }
    printf("O dobro.....\n");
    for(i = 0; i < 6; i++){
        printf("v2[%d]\n", v2[i]);
    }
    printf("Hello world!\n");
    return 0;
}
