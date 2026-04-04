#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia duas notas de um aluno e calcule a média ponderada,
considerando peso 2 para a primeira nota e peso 3 para a segunda
*/
int main()
{
    float n1, n2, media;
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 * 2 + n2 * 3) / 5;

    printf("A media ponderada e: %.2f", media);
    return 0;
}
