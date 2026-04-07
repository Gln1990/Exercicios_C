#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia a temperatura em graus Celsius e informe se o dia está
frio ou quente, considerando frio quando a temperatura for menor que 20
*/
int main()
{
    float temp;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &temp);

    if(temp >= 20){
        printf("O tempo esta Quente");
    }
    else
        printf("O tempo esta frio");
    return 0;
}
