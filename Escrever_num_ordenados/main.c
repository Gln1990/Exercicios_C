#include <stdio.h>
#include <stdlib.h>
/* Escrever numeros ordenados */
int main()
{
    int num[5], i, j, x;

    printf("Classificacao de elementos numericos\n\n");

    /* Entrada de dados */
    for(i = 0; i <= 4; i++){
        printf("Informe o %do. valor: \n", i+1);
        fflush(stdin); scanf("%d", &num[i]);
    }

    /* Classificacao */
    for(i = 0; i <=3; i++)
        for(j = i+1; j <= 4; j++)
        if(num[i] > num[j]){
            x = num[i];
            num[i] = num[j];
            num[j] = x;
        printf("Agora o %do. valor e: %d\n\n", i+1, num[i]);
        }
    /* Apresentacao dos dados */
    for(i = 0; i <= 4; i++);
    printf("Agora o %do. valor e: %d\n", i, num[i]);
    return 0;
}
