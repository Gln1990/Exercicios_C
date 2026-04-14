#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que aloque dinamicamente espaço para um número inteiro,
leia um valor para esse inteiro, mostre o valor armazenado e depois libere a memória.*/
int main()
{
    int *p;

    p = (int *) malloc(sizeof(int));

    if(p == NULL){
        printf("Erro de Alocacao.\n");
        return 1;
    }

    printf("Digite um numero: ");
    scanf("%d", p);

    printf("Valor amarzenado na variavel p usando ponteiro = %d\n", *p);
    printf("Endereco da variavel p eh = %d\n", p);

    free(p);
    printf("\nLiberando Memoria....\n");
    printf("Apos a liberacao de Memoria  nao existe mais valor dentro da variavel p apenas o endereco\nEndereco %d", *p);
    printf("\nHello world!\n");
    return 0;
}
