#include <stdio.h>
#include <stdlib.h>
/* Matriz de 8 alunos com 4 notas */
int main()
{
    float MD[8][4], num;
    int i, j;

    printf("znLeitura e apresentacao de notas\n");

    /* Entrada das notas */
    for(i = 0; i <= 7; i++){
        printf("\nInforme as notas do %do. aluno: \n\n", i+1);
        for(j = 0; j <= 3; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &num);
            MD[i][j] = num;
        }
    }

    /* Saida das notas */
    for(i = 0; i <= 7; i++){
        printf("\nAs notas do aluno %d sao: \n\n", i+1);
        for(j = 0; j <= 3; j++)
            printf("Notas %d: %.2f\n", j+1, MD[i][j]);
    }
    return 0;
}
