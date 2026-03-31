#include <stdio.h>
#include <stdlib.h>
/*Looping do tipo FOR para Fatorial  */
int main()
{
    int cont, n;
    long fat = 1;
    printf("\nPrograma Fatorial\n");
    printf("\nFatorial de qual numero: ");
    scanf("%d", &n);

    for(cont = 1; cont <= n; cont++)

        fat*= cont;

    printf("\nfatorial de %d equivale a %d\n\n", n, fat);
    return 0;
}
