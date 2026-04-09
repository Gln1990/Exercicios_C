#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que mostre todos os números pares entre 0 e 20 usando while.*/
int main()
{
    int i = 0;

    while(i <= 20){
        printf("%d\n", i);
        i+= 2;
    }
    return 0;
}
