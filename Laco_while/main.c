#include <stdio.h>
#include <stdlib.h>
/*Algoritimo
  1 - Criar variavel para servir como contador com valor inicial 1
  2 - Enquanto o valor do contador for menor ou igual a 5, procesar os passos 3, 4 e 5
  3 - Ler os dois valores
  4 - Efetuar o calculo, e guardando o resultado na varial R
  5 - Apresentar o valor calculado em R
  6 - Acrescentar ao contador 1
  7 - Quando o contador for maior que 5, encerrar o processamento*/
int main()
{
    int a, b, r, resp;
    resp = 1;
    while(resp == 1){
        printf("\nInforme o primeiro valor: ");
        scanf("%d", &a);
        printf("Informe o segundo valor: ");
        scanf("%d", &b);
        r = a + b;
        printf("\nA soma entre %d e %d e: %d\n", a, b, r);
        printf("\nDeseja contunuar?");
        printf("\nTecle [1] para SIM / [2] para NAO: ");
        scanf("%d", &resp);
    }
    return 0;
}
