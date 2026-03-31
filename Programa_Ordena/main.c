#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, x;

    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    if (a > b){
        x = a;
        a = b;
        b = x;
    }
    printf("Os valores em ordem sao: %d e %d", a, b);
    return 0;
}
