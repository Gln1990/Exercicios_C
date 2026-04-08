#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número inteiro de 1 a 4 e informe a estação do ano
correspondente:
• 1 – verão
• 2 – outono
• 3 – inverno
• 4 – primavera
*/
int main()
{
    int num;

    printf("Informe um numero de 1 a 4: ");
    scanf("%d", &num);

    switch(num){
    case 1:
        printf("Verao");
        break;
    case 2:
        printf("Outono");
        break;
    case 3:
        printf("Inverno");
        break;
    case 4:
        printf("Primavera");
        break;
    default:
        printf("Valor Invalido");

    }
    return 0;
}
