#include <stdio.h>
#include <stdlib.h>

int main()
{
    float MD[8];
    float media, soma = 0;
    int i;

    printf("\nCalculo da media escolar\n\n");
    for (i = 0; i <= 7; i++){
        printf("Informe a %da nota: ", i+1);
        scanf("%f", &MD[i]);
        soma += MD[i];
    }

    media = soma / 8;

    printf("\nA media do grupo e: %.2f\n\n", media);

    return 0;
}
