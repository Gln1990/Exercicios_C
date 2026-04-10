#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia 6 números inteiros em um vetor e mostre esses valores
em ordem inversa.*/
int main()
{
    int v[6];
    int i, x;

    for(i = 0; i < 6; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 6; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    printf("Invertendo.....\n");

    for(i = 5; i >= 0; i--){
        printf("v[%d] = %d\n", i, v[i]);
    }

    printf("Hello world!\n");
    return 0;
}
