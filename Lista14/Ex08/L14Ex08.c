#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que aloque dinamicamente espaço para uma string de 20 carac-
teres, leia uma palavra e depois mostre essa palavra na tela.*/
int main()
{
    char *nome;

    nome = (char *) malloc(20 * sizeof(char));

    printf("Informe o nome: ");
    scanf("%s", nome);

    printf("Nome = %s\n", nome);
    free(nome);
    printf("\nHello world!\n");
    return 0;
}
