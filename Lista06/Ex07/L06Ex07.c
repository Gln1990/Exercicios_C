#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o salário de uma pessoa e informe a faixa salarial:
• faixa 1, até R$ 2000,00;
• faixa 2, acima de R$ 2000,00 até R$ 5000,00;
• faixa 3, acima de R$ 5000,00
*/
int main()
{
    float sal;

    printf("Informe o salario: ");
    scanf("%f", &sal);

    if(sal <= 2000.00){
        printf("O Salario esta na Faixa 1!");
    }
    else if(sal > 2000.00 && sal <= 5000.00){
        printf("O Salario esta na Faixa 2!");
    }
    else
        printf("O Salario esta na Faixa 3!");
    return 0;
}
