#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma nota e informe se o aluno foi aprovado ou reprovado,
considerando aprovação para nota maior ou igual a 6*/
int main()
{
    float nota;

    printf("Informe a nota: ");
    scanf("%f", &nota);

    if(nota >= 6){
        printf("Aluno aprovado");
    }
    else
        printf("Aluno reprovado");
    return 0;
}
