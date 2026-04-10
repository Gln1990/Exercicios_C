#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que mostre todos os números pares entre 0 e 20 usando
do/while.*/
int main()
{
    int num, i = 0;

    do{
        if(i % 2 == 0)
            printf("%d\n", i);
            i++;
    }while(i <= 20);
    printf("Hello world!\n");
    return 0;
}
