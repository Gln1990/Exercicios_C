#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 números inteiros e conte quantos deles são pares
usando do/while.*/
int main()
{
    int num, i=1, par;
    do{
        printf("Informe o %do numero: ", i);
        scanf("%d", &num);

        if (num % 2 == 0){
            par++;
        }
        i++;

    }while(i <= 10);
    printf("Foram digitados %d numeros pares", par);
    return 0;
}
