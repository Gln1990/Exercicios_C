#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que mostre os quadrados dos números de 1 até 10. Exemplo: 3
ao quadrado = 9
*/
int main()
{
    int i;

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, i, i*i);

    }

    return 0;
}
