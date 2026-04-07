#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia uma nota e mostre o resultado da expressão nota maior
ou igual a 6
*/
int main()
{
    float nota;
    int resp;
    printf("Informe a nota: ");
    scanf("%f", &nota);
    resp = (nota >= 6);
    printf("O resposta da expresao (nota >= 6) e: %d", resp);
    return 0;
}
