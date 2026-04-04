#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia o valor de um produto e um percentual de desconto, e
mostre o valor final a pagar.
*/
int main()
{
    float valor, desc, vlr_final;
    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Informe o porcentual de desconto do produto: ");
    scanf("%f", &desc);

    vlr_final = valor - (valor/100) * desc;

    printf("O valor final do produto e %.2f", vlr_final);
    return 0;
}
