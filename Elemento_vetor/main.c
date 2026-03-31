#include <stdio.h>
#include <stdlib.h>
/* Soma dos elementos impares de um vetor */
int main(){
    int A[5];
    int i, soma = 0;

    printf("\nSomatorio de elementos impares\n\n");

    /* Entrada de dados */
    for(i = 0; i <= 4; i++){
        printf("Informe um valor para o elemento nr. %2d: ", i);
        scanf("%d", &A[i]);
    }

    /* Processamento elemento impar */
    for(i = 0; i <= 4; i++)
        if(A[i] % 2 != 0)
            soma += A[i];

    /* Apresentação das matrizes */
    printf("\nA soma dos elementos equivale a %4d\n\n", soma);




    return 0;
}
