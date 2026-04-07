#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia a nota de um aluno e informe:
• aprovado, se a nota for maior ou igual a 6;
• em recuperação, se a nota for maior ou igual a 4 e menor que 6;
• reprovado, nos demais casos
*/
int main()
{
    float nota;

    printf("Informe a nota: ");
    scanf("%f", &nota);

    if(nota >= 6){
        printf("Aluno Aprovado!");
    }
    else if(nota >= 4 && nota < 6){
        printf("Aluno em Recuperacao!");
    }
    else
        printf("Aluno Reprovado!");

    return 0;
}
