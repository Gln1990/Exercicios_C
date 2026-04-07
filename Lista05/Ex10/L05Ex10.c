#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dois números inteiros e informe se eles são iguais ou
diferentes.
*/
int main()
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if(n1 == n2){
        printf("Os valores sao Iguais!");
    }
    else
        printf("Os valores sao Diferentes!");
    return 0;
}
