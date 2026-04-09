#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 números inteiros e conte quantos deles são pares.*/
int main()
{
    int n, i, par;

    for (i = 0; i<= 9; i++){
        printf("Informe o %do  numero: ", i+1);
        scanf("%d", &n);
        if (n % 2 == 0){
            par += 1;
        }
    }
    printf("Total de numeros pares eh %d", par);

    return 0;
}
