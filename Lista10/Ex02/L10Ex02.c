#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que mostre os números de 10 até 1 em ordem decrescente usando
do/while.*/
int main()
{
    int i = 10;
    do{
        printf("%d\n", i);
        i--;
    }while(i >= 1);
    printf("Hello world!\n");
    return 0;
}
