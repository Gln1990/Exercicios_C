#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia um número inteiro e informe se ele é positivo. */
int main()
{
    int num;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num);

    if (num > 0){
        printf("O numero %d e positivo.", num);
    }
    else
        printf("O numero %d e negativo", num);
    return 0;
}
