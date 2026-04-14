#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que declare um vetor de 5 inteiros, associe um ponteiro ao
primeiro elemento do vetor e mostre todos os valores usando notação de ponteiro.*/
int main()
{
    int v[5];
    int *p;
    int i = 0;

    for(i = 0; i < 5; i++){
        printf("Digite o v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    p = v;// associando o primeiro elemento do vetor


    printf("\nAcessando os Enderecos Usando Notacao de Ponteiro.\n");

    for(i = 0; i < 5; i++){
        printf("%d\n", p + i);
    }

    printf("\nAcessando os Valores Usando Notacao de Ponteiro.\n");

    for(i = 0; i < 5; i++){
        printf("%d\n", *(p + i));
    }
    printf("\nHello world!\n");
    return 0;
}
