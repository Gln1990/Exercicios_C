#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia 5 números inteiros em um vetor e depois mostre apenas
os elementos localizados em índices pares.*/
int main()
{
    int v[5];
    int i, par;

    for(i = 0; i < 5; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 5; i = i + 2){
        printf("posicao %d valor %d\n", i, v[i]);
    }

    printf("Hello world!\n");
    return 0;
}
