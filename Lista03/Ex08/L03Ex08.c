#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia uma temperatura em graus Celsius e converta para
Fahrenheit.
Use a fórmula: f = (9*c)/5 + 32
*/
int main()
{
    float c, f;
    printf("Informe a temperatura em grau Celsius: ");
    scanf("%f", &c);

    f = ((9 * c) / 5) + 32;

    printf("A conversao de %.2f graus Celsius para Fahrenheit e = %.2f F", c, f);

    return 0;
}
