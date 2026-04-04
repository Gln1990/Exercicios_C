#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia dois números inteiros e verifique se eles são iguais
*/
int main()
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if(n1 == n2){
        printf("O numero %d e igual ao numero %d", n1, n2);
    }
    else
        printf("O numero %d nao e igual ao numero %d", n1, n2);
    return 0;
}
