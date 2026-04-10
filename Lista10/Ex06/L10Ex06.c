#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro e mostre a tabuada desse número de
1 a 10 usando do/while.*/
int main()
{
    int num, i = 1;

    printf("Informe o numero: ");
    scanf("%d", &num);

    do{
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }while(i <= 10);
    return 0;
}
