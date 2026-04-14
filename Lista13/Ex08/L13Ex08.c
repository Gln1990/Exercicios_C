#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 5 números inteiros em um vetor e calcule a soma de
seus elementos usando um ponteiro para percorrer o vetor.*/
int main()
{
    int v[5];
    int *p;
    int i, soma;

    p = v;

    for(i = 0; i < 5; i++){
        printf("Informr o v[%d]: ", i);
        scanf("%d", &v[i]);
        soma += *(p + i);
    }

    printf("Soma dos elementos eh = %d\n", soma);
    printf("\nHello world!\n");
    return 0;
}
