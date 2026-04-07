#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia três números inteiros e verifique se o primeiro é maior
que o segundo e, ao mesmo tempo, menor que o terceiro
*/
int main()
{
    int n1, n2, n3, resp;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero inteiro: ");
    scanf("%d", &n3);

    resp = (n1 > n2 && n1 < n3);

    printf("O resposta da expresao (n1 > n2) e (n1 < n3): %d", resp);
    return 0;
}
