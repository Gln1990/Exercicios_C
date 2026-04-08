#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número de 1 a 5 e mostre o conceito correspon-
dente:
• 1 – péssimo
• 2 – ruim
• 3 – regular
• 4 – bom
• 5 – ótimo
*/
int main()
{
    int num;

    printf("Informe um numero de 1 a 5: ");
    scanf("%d", &num);

    switch(num){
        case 1:
           printf("Pessimo");
           break;
        case 2:
           printf("Ruim");
           break;
        case 3:
           printf("Regular");
           break;
        case 4:
           printf("Bom");
           break;
        case 5:
           printf("Otimo");
           break;
        default:
           printf("valor Invalido");

    }
    return 0;
}
