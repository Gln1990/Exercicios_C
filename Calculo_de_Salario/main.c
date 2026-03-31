#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h_trabalhada, valor_hora, porcentual_desc, total_desc, sal_bruto, sal_liquido;

    printf("Quantas horas Trabalhadas? ");
    scanf("%f", &h_trabalhada);
    printf("Qual o valor da hora trabalhada? ");
    scanf("%f", &valor_hora);
    printf("Qual o porcentual de desconto? ");
    scanf("%f", &porcentual_desc);

    sal_bruto = h_trabalhada * valor_hora;
    total_desc = (porcentual_desc/100) * sal_bruto;
    sal_liquido = sal_bruto - total_desc;

    printf("Salario Bruto....: %.2f\n", sal_bruto);
    printf("Desconto....: %.2f\n", total_desc);
    printf("Salario Liquido....: %.2f\n", sal_liquido);

    return 0;
}
