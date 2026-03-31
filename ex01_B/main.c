#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, distancia, litros;
    int velocidade;

    printf("Informe o tempo de viagem: ");
    scanf("%f", &tempo);
    printf("Informe a velocidade media da viagem: ");
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia/12;

    printf("Quantidade de litros gastos na viagem: %.2f", litros);


    return 0;
}
