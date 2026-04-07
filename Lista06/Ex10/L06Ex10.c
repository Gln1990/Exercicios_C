#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia a média final de um aluno e informe o conceito:
• A, para média maior ou igual a 9;
• B, para média maior ou igual a 7 e menor que 9;
• C, para média maior ou igual a 5 e menor que 7;
• D, para média menor que 5
*/
int main()
{
    float nota;

    printf("Informe a nota: ");
    scanf("%f", &nota);

    if(nota >= 9){
        printf("Conceito A!");
    }
    else if(nota >= 7 && nota < 9){
        printf("Conceito B!");
    }
    else if(nota >= 5 && nota < 7){
        printf("Conceito C!");
    }
    else
        printf("Conceito D!");
    return 0;
}
