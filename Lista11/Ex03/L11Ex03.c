#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia 8 números reais em um vetor e calcule a média dos
valores armazenados.*/
int main()
{
    float v[8];
    float  media, soma;
    int i;

    for(i = 0; i < 8; i++){
        printf("Informe o valor da possicao %d: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
        media = soma / 8;
    }
    printf("A media dos valores armazenados eh = %.2f", media);
    return 0;
}
