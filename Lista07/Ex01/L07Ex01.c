#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero de 1 a 3: ");
    scanf("%d", &num);
    switch (num) {
        case 1:
        printf("um\n");
        break;
        case 2:
        printf("dois\n");
        break;
        case 3:
        printf("tres\n");
        break;
        default:
        printf("Opcao invalida.\n");
    }
    return 0;
}
