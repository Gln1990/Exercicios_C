#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 5 números inteiros em um vetor e depois leia mais um
número. Informe se esse número está ou não presente no vetor.
*/
int main()
{
    int v[5];
    int i, num;

    for(i = 0; i < 5; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("Informe o numero que deseja encontrar no vetor: ");
    scanf("%d", &num);
    for(i = 0; i < 5; i++){
        if(v[i] == num){
            printf("Valor %d encontrado\n", v[i]);
            printf("Na posicao %d v[%d]\n", i, v[i]);
        }
        if(v[i] != num){
        printf("Valor nao encontrado na posicao %d\n", i);
    }
    }



    printf("\nHello world!\n");
    return 0;
}
