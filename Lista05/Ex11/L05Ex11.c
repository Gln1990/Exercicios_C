#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia a quantidade de gols de dois times e informe qual time
venceu. Caso tenham feito a mesma quantidade de gols, informe empate.
*/
int main()
{
    int t1, t2;

    printf("Informe a quantidade de gol(s) do primeiro time: ");
    scanf("%d", &t1);
    printf("Informe a quantidade de gol(s) do segundo time: ");
    scanf("%d", &t2);

    if(t1 > t2){
        printf("O Primeiro time Venceu!");
    }
    else if(t1 < t2){
        printf("O Segundo time Venceu!");
    }
    else
        printf("Houve Empate!");
    return 0;
}
