#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if(n1 != n2){
        printf("O numero %d e diferente do numero %d", n1, n2);
    }
    else
        printf("O numero %d nao e diferente do numero %d", n1, n2);
    return 0;
}
