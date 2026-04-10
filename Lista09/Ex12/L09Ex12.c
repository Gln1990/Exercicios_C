#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro positivo n e mostre todos os divisores
positivos de n usando while.*/
int main()
{
    int num, i = 1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("Numeros divisores de %d sao:\n", num);

    while(i <= num){
        if (num % i == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
