#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que mostre todos os números pares entre 0 e 20 usando for*/
int main()
{
    int i;
    for(i = 0; i <= 20; i = i + 2 ){
        printf("%d\n", i);
    }
    return 0;
}
