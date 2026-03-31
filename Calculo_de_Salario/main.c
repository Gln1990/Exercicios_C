#include <stdio.h>
#include <stdlib.h>
/*Algoritimo
  1 - Declarar as variaveis HT, VH, PD, TD, SB, SL como float
  2 - Solicitar o totatl de horas trabalhadas e guardar na variavel HT
  3 - Solicitar o valor de hora e guardar na variavel VH
  4 - Solicitar o porcentual de desconto e guardar na variavel PD
  5 - Multiplicar o VH por HT e guardar na variavel SB
  6 - Dividir SB por 100 e multiplicar o resultado por PD e guardar na variavel TD
  7 - Subtrair TD de SB e guardar na variavel SL
  8 - Mostrar SB, TD e SL*/
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
    total_desc = (sal_bruto / 100) * porcentual_desc;
    sal_liquido = sal_bruto - total_desc;

    printf("Salario Bruto....: %.2f\n", sal_bruto);
    printf("Desconto....: %.2f\n", total_desc);
    printf("Salario Liquido....: %.2f\n", sal_liquido);

    return 0;
}
