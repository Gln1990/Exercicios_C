#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro positivo n e mostre os números
de 1 até n usando for
*/
int main()
{
    int i, n;
    printf("Informe um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}
