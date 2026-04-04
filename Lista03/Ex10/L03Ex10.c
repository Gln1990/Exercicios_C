#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa que leia o salário de uma pessoa e um percentual de aumento,
e mostre o novo salário
*/
int main()
{
    float salAtual, porcenAlmento, salNovo;

    printf("Informe o salario atual: ");
    scanf("%f", &salAtual);
    printf("Informe o porcentual de aumento: ");
    scanf("%f", &porcenAlmento);

    salNovo = salAtual + (salAtual/100) * porcenAlmento;

    printf("O novo salario e: %.2f", salNovo);
    return 0;
}
