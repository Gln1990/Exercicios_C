#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 5 números reais e calcule a média aritmética deles
usando for
*/
int main()
{
    int i;
    float n, media, soma;

    for(i = 1; i <= 5; i++){
        printf("Informe o %d numero: ", i);
        scanf("%f", &n);
        soma += n;
    }
    media = soma/5;
    printf("Media = %.2f", media);

    return 0;
}
