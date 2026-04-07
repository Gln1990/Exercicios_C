#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro e informe se ele é positivo, negativo
ou zero
*/
int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num > 0){
        printf("O numero e Positivo!");
    }
    else if(num == 0){
        printf("O numero e igual a Zero!");
    }
    else
        printf("O numero e Negativo");
    return 0;
}
