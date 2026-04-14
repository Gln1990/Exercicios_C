#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que declare uma string simples, associe um ponteiro do tipo
char ao primeiro caractere e mostre:
• a string completa;
• o primeiro caractere usando o ponteiro*/
int main()
{
    char nome[] = "Gleyson";
    char *p;

    p = nome;

    printf("Nome: %s\n", nome);
    printf("O primeiro caracter eh %c\n", *p);
    printf("\nHello world!\n");
    return 0;
}
