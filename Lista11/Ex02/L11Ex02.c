#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 números inteiros em um vetor e mostre a soma de
todos os elementos.*/
int main()
{
    int v[10];
    int soma, i;

    for(i = 0; i < 10; i++){
        printf("Informe o valor da possicao %d: ", i);
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("A soma dos elementos eh = %d\n", soma);
    printf("Hello world!\n");
    return 0;
}
