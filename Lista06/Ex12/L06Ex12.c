#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia o número de um mês, de 1 a 12, e informe:
• primeiro trimestre, para meses 1 a 3;
• segundo trimestre, para meses 4 a 6;
• terceiro trimestre, para meses 7 a 9;
• quarto trimestre, para meses 10 a 12.
Considere que o valor informado é válido.
*/
int main()
{
    int mes;

    printf("Informe o numero do mes: ");
    scanf("%d", &mes);

    if(mes <= 3){
        printf("Primeiro Trimestre!");
    }
    else if(mes <= 6){
        printf("Segundo Trimestre!");
    }
    else if(mes <= 9){
        printf("Terceiro Trimestre!");
    }
    else
        printf("Quarto Trimestre!");
    return 0;
}
