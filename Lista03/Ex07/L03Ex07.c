#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia a base e a altura de um triângulo e calcule sua área.
Use a fórmula: area = (base * altura) / 2
*/
int main()
{
    float base, altura, area;
    printf("Informe a base: ");
    scanf("%f", &base);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area e: %.2f", area);

    return 0;
}
