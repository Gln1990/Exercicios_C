#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;

    printf("Informe o temperatura em Celsius: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("A convercao de %.2f graus Celsius para Fahrenheit e %.2f", c, f);
    return 0;
}
