#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número de 1 a 4 e mostre o trimestre correspondente:
• 1 – primeiro trimestre
• 2 – segundo trimestre
• 3 – terceiro trimestre
• 4 – quarto trimestre
*/
int main()
{
    int num;

    printf("Informe um numero entre 1 e 4: ");
    scanf("%d", &num);

    switch(num){
        case 1:
           printf("Primeiro Trimestre");
           break;
        case 2:
           printf("Segundo Trimestre");
           break;
        case 3:
           printf("Terceiro Trimestre");
           break;
        case 4:
           printf("Quarto Trimestre");
           break;
        default:
        printf("Opcao invalida.\n");
    }
    return 0;
}
