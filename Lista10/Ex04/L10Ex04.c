#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro positivo n e mostre os números
de 1 até n usando do/while.*/
int main()
{
    int i = 1, num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    do{
        printf("%d\n", i);
        i++;
      }while(i <= num);

    printf("Hello world!\n");
    return 0;
}
