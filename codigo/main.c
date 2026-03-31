#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;

    printf("Informe o codigo: ");
    scanf("%d", &cod);

    if (cod == 1 || cod == 2 || cod == 3){
        if (cod == 1)
            printf("um\n");
        if (cod == 2)
            printf("dois\n");
        if (cod == 3)
            printf("tres\n");
    }else
        printf("Codigo Invalido");
    return 0;
}
