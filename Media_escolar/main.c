#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    printf("Informe a quarta nota: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4) / 4;

    printf("A media das quatro notas e: %.2f", media);

    return 0;
}
