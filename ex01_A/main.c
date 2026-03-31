#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    printf("Informe o terceiro numero: ");
    scanf("%d", &c);
    printf("Informe o quarto numero: ");
    scanf("%d", &d);

    printf("\nA soma entre %d e %d e: %d\n", a, b, a+b);
    printf("A multiplicacao entre %d e %d e: %d\n\n", a, b, a*b);
    printf("A soma entre %d e %d e: %d\n", a, c, a+c);
    printf("A multiplicacao entre %d e %d e: %d\n\n", a, c, a*c);
    printf("A soma entre %d e %d e: %d\n", a, d, a+d);
    printf("A multiplicacao entre %d e %d e: %d\n\n", a, d, a*d);

    printf("A soma entre %d e %d e: %d\n", b, c, b+c);
    printf("A multiplicacao entre %d e %d e: %d\n\n", b, c, b*c);
    printf("A soma entre %d e %d e: %d\n", b, d, b+d);
    printf("A multiplicacao entre %d e %d e: %d\n\n", b, d, b*d);

    printf("A soma entre %d e %d e: %d\n", c, d, c+d);
    printf("A multiplicacao entre %d e %d e: %d\n", c, d, c*d);

    return 0;
}
