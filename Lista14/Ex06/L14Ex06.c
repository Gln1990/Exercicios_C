#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que aloque dinamicamente um vetor de 4 inteiros usando
malloc(), leia os valores e mostre o maior elemento do vetor.*/
int main()
{
    int *v;
    int i, maior = 0;

    v = (int *) malloc(4 * sizeof(int));

    for(i = 0; i < 4; i++){
        printf("Informe o v[%d]: ", i);
        scanf("%d", &v[i]);
        if(v[i] > maior)
            maior = v[i];
    }
    printf("O maior elemento foi %d\n", maior);
    free(v);
    printf("\nHello world!\n");
    return 0;
}
