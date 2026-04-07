#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um número inteiro e informe se ele é:
• múltiplo de 2;
• múltiplo de 3;
• ou não é múltiplo nem de 2 nem de 3.
Considere a prioridade nessa ordem
*/
int main()
{
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O valor informado e multiplo de 2!\n");
    }
    else if(num % 3 == 0){
        printf("O valor informado e multiplo de 3!\n");
    }
    else
        printf("O valor informado e nao multiplo de 2 e nem de 3!\n");

    return 0;
}
