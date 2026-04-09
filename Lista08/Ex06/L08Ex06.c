#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro e mostre a tabuada desse número de
1 a 10
*/
int main()
{
    int i, num, resp;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++){
        resp = num * i;
        printf("%d x %d = %d\n", num, i, resp);
    }
    return 0;
}
