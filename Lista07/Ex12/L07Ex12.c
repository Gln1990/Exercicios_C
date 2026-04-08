#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um número inteiro de 1 a 6 e mostre a face correspondente
de um dado comum. Caso o número esteja fora desse intervalo, mostre mensagem
de erro
*/
int main()
{
    int num;

    printf("Informe um numero de 1 a 6: ");
    scanf("%d", &num);

    switch(num){
    case 1:
        printf("Face 1");
        break;
    case 2:
        printf("Face 2");
        break;
    case 3:
        printf("Face 3");
        break;
    case 4:
        printf("Face 4");
        break;
    case 5:
        printf("Face 5");
        break;
    case 6:
        printf("Face 6");
        break;
    default:
        printf("Valor Invalido");

    }
    return 0;
}
