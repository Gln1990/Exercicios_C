#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um ano e informe se ele é bissexto, considerando apenas
a regra simplificada: ano divisível por 4
*/
int main()
{
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0){
        printf("Ano Bissexto!");
    }
    else
        printf("O Ano nao e Bissexto!");
    return 0;
}
