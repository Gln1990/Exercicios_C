#include <stdio.h>
#include <stdlib.h>
/*Faça uma função que receba dois ponteiros para inteiros e troque os valores entre
as variáveis apontadas. No programa principal, leia dois números, chame a função
e mostre os valores após a troca.*/

void troca(int *p1, int *p2){
    int x;
    x = *p1;
    *p1 = *p2;
    *p2 = x;
}

int main()
{
    int n1, n2;

    printf("Informe o numero da variavel n1: ");
    scanf("%d", &n1);
    printf("Informe o numero da variavel n2: ");
    scanf("%d", &n2);

    troca(&n1, &n2);

    printf("\nTrocando....\n\n");

    printf("Novo numero da variavel n1 eh %d\n", n1);
    printf("Novo numero da variavel n2 eh %d\n", n2);

    printf("\nHello world!\n");
    return 0;
}
