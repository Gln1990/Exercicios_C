#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia 5 números inteiros e mostre a soma deles usando for.
*/
int main()
{
    int n, i, soma = 0;

    for(i = 1; i <= 5; i++){
        printf("Informe o %do numero: ", i);
        scanf("%d", &n);
        soma += n;
    }
    printf("A soma entre os 5 valores digitados eh: %d", soma);



    return 0;
}
