#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia a idade de uma pessoa e informe se ela é maior de idade.*/
int main()
{
    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    if (idade>= 18){
        printf("Maior de idade");
    }
    else
        printf("Menor de idade");

    return 0;
}
