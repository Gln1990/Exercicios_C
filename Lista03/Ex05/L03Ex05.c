#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia três números reais e mostre a média aritmética entre
eles.
 */
int main()
{
    float num1;
    float num2;
    float num3;
    float media;



    printf("Informe o primeiro numero real: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero real: ");
    scanf("%f", &num2);
    printf("Informe o terceiro numero real: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A media entre os valores %.2f, %.2f, e %.2f e = %.2f", num1, num2, num3, media);
    return 0;
}

