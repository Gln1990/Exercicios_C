#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que declare um vetor de 5 inteiros e use um ponteiro para mostrar
o endereço de cada elemento do vetor*/
int main()
{
    int v[5];// = {10, 20, 30, 40, 50}
    int *p;
    int i;

    for(i = 0; i < 5; i++){
        printf("Informe o v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    p = v;

    printf("Mostrando os enderecos\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", p + i);
    }
    printf("Hello world!\n %d", p);
    return 0;
}
