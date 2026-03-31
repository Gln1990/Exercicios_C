#include <stdio.h>
#include <stdlib.h>
/*Algoritimo
  1 - declarar variaveis a, b e c como int
  2 - Solicitar os valores e guardar na variaveis a e b
  3 - Somar os valores de a e b e guardar na variavel c
  4 - Se o valor de c for maior ou igual a 10 mostra na tela o valor de c + 5, senão mostra o valor de c - 7*/

int main()
{
    int a, b, c;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    c = a + b;
    if (c >=10)
        printf("%d", c + 5);
    else
        printf("%d", c - 7);


    return 0;
}
