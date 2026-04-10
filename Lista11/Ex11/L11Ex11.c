#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 números inteiros em um vetor e separe a quantidade
de valores positivos, negativos e zeros.*/
int main()
{
    int v[10];
    int i, posi=0, nega=0, zr=0;

    for(i = 0; i < 10; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
        if (v[i] > 0){
            posi++;
        }else if(v[i] < 0){
            nega++;
        }else{
            zr++;
        }
    }
    printf("Quantidade de numeros positivos %d\n", posi);
    printf("Quantidade de numeros negativos %d\n", nega);
    printf("Quantidade de numeros zeros %d\n", zr);
    printf("\nHello world!\n");
    return 0;
}
