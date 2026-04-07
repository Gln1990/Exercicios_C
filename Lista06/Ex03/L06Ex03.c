#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia a idade de uma pessoa e informe se ela é:
• criança, se tiver menos de 12 anos;
• adolescente, se tiver entre 12 e 17 anos;
• adulta, se tiver 18 anos ou mais
*/
int main()
{
    int idade;

    printf("Informe a Idade: ");
    scanf("%d", &idade);

    if(idade < 12){
        printf("Crianca!");
    }
    else if(idade >= 12 && idade <= 17){
        printf("Adolecente!");
    }
    else
        printf("Adulta!");
    return 0;
}
