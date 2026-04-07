#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro e informe se ele pertence ao intervalo
de 1 a 100
*/
int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num >= 1 && num <= 100){
        printf("O numero informado esta no intervalo de 1 a 100!");
    }
    else
        printf("O numero informado nao esta no intervalo de 1 a 100!");
    return 0;
}
