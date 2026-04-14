#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que declare uma variável inteira x, um ponteiro para inteiro
p, faça p apontar para x e mostre:
• o valor de x;
• o endereço de x;
• o valor armazenado em p;
• o valor apontado por p.*/
int main()
{
    int x = 10;
    int *p;

    p = &x;
    printf("Valor de x = %d\n", x);

    printf("Endereco de x = %p\n", (void*)&x);

    printf("Valor armazenado em p = %p\n", (void*)p);

    printf("Valor apontado por p = %d\n", *p);

    printf("\nHello world!\n");
    return 0;
}
