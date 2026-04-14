#include <stdio.h>
#include <stdlib.h>
/*Faça uma função que receba a quantidade n, aloque dinamicamente um vetor de
inteiros com n posições, leia os valores e retorne o ponteiro para o vetor. No
programa principal, mostre os valores e libere a memória.*/

int* vetor(int n) {
    int *v;
    int i;

    v = (int*) malloc(n * sizeof(int));

    if (v == NULL) {
    return NULL;
    }

    for (i = 0; i < n; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    return v;
}
int main()
{
    int *v;
    int i, n;

    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    v = vetor(n);

    for(i = 0; i < n; i++){
        printf("V[%d] = %d\n", i, v[i]);
    }

    free(v);
    printf("\nHello world!\n");
    return 0;
}
