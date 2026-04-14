#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que aloque dinamicamente espaço para n números inteiros,
sendo n informado pelo usuário. Depois leia os valores, calcule a soma e libere a
memória.*/
int main()
{
    int *v;
    int i, n, soma = 0;

    printf("Informe a quantidades de elememntos: ");
    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("Informe o v[%d]: ", i);
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("A soma dos elementos eh = %d\n", soma);

    free(v);


    printf("\nHello world!\n");
    return 0;
}
