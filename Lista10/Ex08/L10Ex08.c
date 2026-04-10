#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia números inteiros até que o usuário digite 0. Ao final,
mostre a soma dos números digitados, sem considerar o zero.*/
int main()
{
    int num, soma=0, i;
    do{
        printf("Informe o %do numero: ", i+1);
        scanf("%d", &num);

        if(num != 0){
            soma += num;
            i++;
        }

    }while(num != 0);
    printf("A soma dos %d digitados eh = %d", i, soma);
    return 0;
}
