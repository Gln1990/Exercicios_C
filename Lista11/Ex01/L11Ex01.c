#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que declare um vetor de 5 inteiros, leia os 5 valores e depois
mostre todos eles na tela.*/
int main()
{
    int v[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Informe o valor da possicao %d: ", i);
        scanf("%d", &v[i]);

    }

    for(i = 0; i < 5; i++){
        printf("v[%d] = %d\n", i, v[i]);

    }
    return 0;
}
