#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Informe o primeiro lado: ");
    scanf("%f", &a);
    printf("Informe o segundo lado: ");
    scanf("%f", &b);
    printf("Informe o terceiro lado: ");
    scanf("%f", &c);
    printf("\n");

    if (a + b > c && a + c > b && b + c > a)
        if (a == b && b == c)
        printf("Triangulo Equilatero!");
        else
            if (a == b || a == c || c == b)
                printf("Triagulo Isosceles!");
            else
                printf("Triangulo Escaleno!");
    else
        printf("Os valores fornecidos não formam um triagulo!");

    return 0;
}
