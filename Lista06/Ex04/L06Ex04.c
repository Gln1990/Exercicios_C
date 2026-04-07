#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia dois números inteiros e informe se o primeiro é maior,
o segundo é maior ou se são iguais.
*/
int main()
{
    int n1, n2;

    printf("informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("informe o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O valor %d e maior", n1);
    }
    else if(n1 < n2){
        printf("O valor %d e maior", n2);
    }
    else
        printf("Os valores sao Iguais!");
    return 0;
}
