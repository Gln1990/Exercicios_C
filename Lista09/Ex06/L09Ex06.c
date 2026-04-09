#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro e mostre a tabuada desse número de
1 a 10 usando while.*/
int main()
{
    int i=0, n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    while(i <= 10){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}
