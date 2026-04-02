#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia a base e a altura de um retângulo e mostre:
• a área;
• o perímetro
 */
int main()
{
    float altura, base, area, perimetro;
    printf("Informe o valor da base: ");
    scanf("%f", &base);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("A area entre os valores informados e = %.2f\n", area);
    printf("O perimetro entre os valores informados e = %.2f", perimetro);
    return 0;
}
