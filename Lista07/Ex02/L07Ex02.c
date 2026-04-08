#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número de 1 a 7 e informe o dia da semana correspondente, considerando:
• 1 – domingo
• 2 – segunda-feira
• 3 – terça-feira
• 4 – quarta-feira
• 5 – quinta-feira
• 6 – sexta-feira
• 7 – sábado
*/
int main()
{
    int num;

    printf("Informe um numero da semana: ");
    scanf("%d", &num);

    switch(num){
        case 1:
           printf("Domingo");
           break;
        case 2:
           printf("Segunda-feira");
           break;
        case 3:
           printf("Terça-feira");
           break;
        case 4:
           printf("Quarta-feira");
           break;
        case 5:
           printf("Quinta-feira");
           break;
        case 6:
           printf("Sexta-feira");
           break;
        case 7:
           printf("Sabado");
           break;
        default:
        printf("Opcao invalida.\n");
    }
    return 0;
}
