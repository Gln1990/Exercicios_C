#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 números inteiros em um vetor e conte quantos deles
são pares.*/
int main()
{
    int v[10];
    int i, par;

    for(i = 0; i < 10; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0){
            par++;
        }
    }
    for(i = 0; i < 10; i++){
        printf("v[%d]\n", v[i]);
    }
    printf("Sao %d numeros pares dentro do vetor\n", par);

    return 0;
}
