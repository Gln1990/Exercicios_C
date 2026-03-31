#include <stdio.h>
#include <stdlib.h>
/* Algoritimo
   1 - Iniciar o contador de indice, variavel I como 0 em um contador ate 10.
   2 - Ler os dez valores um aum
   3 - Verificar se o indice é par; se sim, multiplicar por 5; se nao, soma 5. Criar a matriz B
   4 - Apresentar os conteudos das duas matrizes */
int main()
{
    int A[10], B[10];
    int i;
    printf("\ncalculo de checagem de matriz\n\n");

    /* Entrada de dados */
    for(i = 0; i <= 9; i++){
        printf("Informe um valor para o elemento nr. %2d: ", i);
        scanf("%d", &A[i]);
    }

    /* Processamento Par ou Impar */
    for(i = 0; i <= 9; i++){
        if(i % 2 == 0)
            B[i] = A[i] * 5;
        else
            B[i] = A[i] + 5;
    }

    /* Apresentacao das Matrizes */
    for(i = 0; i <= 9; i++)
        printf("\nA[%2d] = %2d | B[%2d] = %2d", i+1, A[i], i+1, B[i]);
    return 0;
}
