#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia 7 números inteiros em um vetor e mostre o menor
valor armazenado.*/
int main()
{
    int v[7];
    int i, menor;
    for(i = 0; i < 7; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    menor = v[i];
    if(v[i] < menor){
        menor = v[i];
    }
    printf("O menor valor dentro do vetor eh = %d\n", menor);
    printf("\nHello world!\n");
    return 0;
}
