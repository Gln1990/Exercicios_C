#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número inteiro positivo n e calcule a soma dos
números de 1 até n usando do/while.*/
int main()
{
    int num, i = 1, soma = 0;
    printf("Informe um numero: ");
    scanf("%d", &num);

    do{
        soma += i;
        printf("%d\n", soma);
        i++;
    }while(i <= num);
    printf("Soma = %d\n", soma);
    return 0;
}
