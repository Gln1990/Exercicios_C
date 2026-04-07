#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia o lado de um quadrado e informe:
• inválido, se o lado for menor ou igual a zero;
• quadrado pequeno, se o lado for maior que zero e menor que 5;
• quadrado grande, se o lado for 5 ou maior
*/
int main()
{
    float lado;

    printf("Informe o lado do quadrado: ");
    scanf("%f", &lado);

    if(lado <= 0){
        printf("Invalido!");
    }
    else if(lado > 0 && lado < 5){
        printf("Quadrado Pequeno!");
    }
    else
        printf("Quadrado Grande!");
    return 0;
}
