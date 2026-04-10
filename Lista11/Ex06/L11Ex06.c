#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia 7 números inteiros em um vetor e mostre o maior valor
armazenado.*/
int main()
{
    int v[7];
    int i, maior=0;

    for(i = 0; i < 7; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
        if(v[i] > maior){
            maior = v[i];
        }
    }
    for(i = 0; i < 7; i++){
        printf("v[%d]\n", v[i]);

    }
    printf("O maior valor armazenado eh = %d", maior);
    printf("\nHello world!\n");
    return 0;
}
