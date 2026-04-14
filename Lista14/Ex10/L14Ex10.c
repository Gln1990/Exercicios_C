#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que aloque dinamicamente um vetor de 5 números reais, leia
os valores e calcule a média dos elementos armazenados.*/
int main()
{
    float *v;
    float media = 0, soma = 0;
    int i;

    v = (float *) malloc(5 * sizeof(float));

    for(i = 0; i < 5; i++){
        printf("Informep v[%d]: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }
    media = soma / 5;

    printf("A media dos elementos eh = %.2f\n", media);
    free(v);
    printf("\nHello world!\n");
    return 0;
}
