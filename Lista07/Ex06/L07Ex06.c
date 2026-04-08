#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um caractere e informe se ele representa uma vogal
minúscula:
• a, e, i, o, u
Caso contrário, mostre que não é vogal minúscula
*/
int main()
{
    char letra;

    printf("Digite um carecter: ");
    scanf("%c", &letra);

    switch(letra){
        case 'a':
           printf("Vogal minuscula");
           break;
        case 'e':
           printf("Vogal minuscula");
           break;
        case 'i':
           printf("Vogal minuscula");
           break;
        case 'o':
           printf("Vogal minuscula");
           break;
        case 'u':
           printf("Vogal minuscula");
           break;
        default:
            printf("Nao e vogal minuscula");
    }
    return 0;
}
