#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número inteiro e informe se ele possui:
• 1 dígito, se estiver entre 0 e 9;
• 2 dígitos, se estiver entre 10 e 99;
• 3 ou mais dígitos, nos demais casos positivos.
Considere apenas números inteiros não negativos.
*/
int main()
{
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if(num >= 0 && num <=9){
        printf("O valor tem 1 Digito!");
    }
    else if(num >= 10 && num <= 99){
        printf("O valor tem 2 Digitos!");
    }
    else
        printf("O valor tem 3 ou mais Digitos!");
    return 0;
}
