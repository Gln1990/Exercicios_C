#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia 5 números inteiros e mostre a soma deles usando
do/while.*/
int main()
{
    int num, i = 1, soma;

    do{
        printf("Informe o %do numero: ", i);
        scanf("%d", &num);
        soma += num;
        i++;
    }while(i <= 5);
    printf("A soma entre os valores eh = %d", soma);
    return 0;
}
