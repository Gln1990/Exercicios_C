#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número de 0 a 6 e informe a quantidade de dias
correspondente a uma semana:
• 0 – nenhum dia passado
• 1 – um dia
• ...
• 6 – seis dias
*/
int main()
{
    int num;

    printf("Informe um numero de 0 a 6: ");
    scanf("%d", &num);

    switch(num){
        case 0:
           printf("Nenhum dia passado");
           break;
        case 1:
           printf("Um dia");
           break;
        case 2:
           printf("Dois dias");
           break;
        case 3:
           printf("Tres dias");
           break;
        case 4:
           printf("Quatro dias");
           break;
        case 5:
           printf("Cinco dias");
           break;
        case 6:
           printf("Seis dias");
           break;
        default:
           printf("valor Invalido");

    }
    return 0;
}
