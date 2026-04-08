#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma letra representando o turno de um aluno:
• M – manhã
• T – tarde
• N – noite
Mostre o turno correspondente
*/
int main()
{
    char letra;

    printf("Informe a letra do turno: (m, t ou n): ");
    scanf("%c", &letra);

    switch(letra){
        case 'm':
        case 'M':
           printf("Manha");
           break;
        case 't':
        case 'T':
           printf("Tarde");
           break;
        case 'n':
        case 'N':
           printf("Noite");
           break;
        default:
           printf("Opcao invalida");
    }
    return 0;
}
