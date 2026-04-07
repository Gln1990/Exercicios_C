#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia o horário atual em formato de hora inteira e informe:
• bom dia, para horas entre 0 e 11;
• boa tarde, para horas entre 12 e 17;
• boa noite, para horas entre 18 e 23
*/
int main()
{
    int hora;

    printf("Informe a Hora atual: ");
    scanf("%d", &hora);

    if(hora >= 0 && hora <= 11){
        printf("Bom Dia!");
    }
    else if(hora >= 12 && hora <= 17){
        printf("Boa Tarde!");
    }
    else
        printf("Boa Noite!");
    return 0;
}
