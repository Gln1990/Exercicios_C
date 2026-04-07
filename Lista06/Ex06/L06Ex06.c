#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia uma temperatura em graus Celsius e informe se o clima
está:
• frio, se a temperatura for menor que 18;
• agradável, se estiver entre 18 e 28;
• quente, se for maior que 28
*/
int main()
{
    float temp;

    printf("Informe a temperatura: ");
    scanf("%f", &temp);

    if(temp < 18){
        printf("O Clima esta Frio!");
    }
    else if (temp >= 18 && temp <= 28){
        printf("O Clima esta Agradavel!");
    }
    else
        printf("O Clima esta Quente!");
    return 0;
}
