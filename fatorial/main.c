#include <stdio.h>
#include <stdlib.h>
/*Laco do tipo while para fatorial*/
int main()
{
    int cont, n;
    long fat = 1;
    cont = 1;

    printf("Programa Fatorial\n");
    printf("\nfatorial de que numero: ");
    scanf("%d", &n);

    while(cont <= n){
        fat *= cont;
        cont++;
    }

    printf("fatorial de %d equivale a %d\n\n", n, fat);
    return 0;
}
