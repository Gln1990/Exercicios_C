#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia uma quantidade de segundos e mostre esse valor con-
vertido em horas, minutos e segundos.
Exemplo: 3665 segundos = 1 hora, 1 minuto e 5 segundos
*/
int main()
{
    int totalSeg, horas, min, seg;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSeg);

    horas = totalSeg / 3600;
    min = (totalSeg % 3600) / 60;
    seg = totalSeg % 60;

    printf("%d segundos equivalem a %d hora(s), %d minuto(s) e %d segundo(s).\n", totalSeg, horas, min, seg);
    return 0;
}
