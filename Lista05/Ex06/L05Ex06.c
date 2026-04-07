#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia o salário de uma pessoa e informe se ela recebe mais de
R$ 3000,00*/
int main()
{
    float sal;

    printf("Informe o salario: ");
    scanf("%f", &sal);

    if(sal > 3000.0){
        printf("O salario e maior que R$3000,00");
    }
    else
        printf("O salario nao e maior que R$3000,00");
    return 0;
}
