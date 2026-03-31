#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Entre com um numero entre 0 e 9: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 9)
        printf("Valor Valido");
    else
        printf("valor Invalido");
    return 0;
}
