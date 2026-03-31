#include <stdio.h>
#include <stdlib.h>
/*Algoritimo
  1 - Criar variavel a, b, r, resp como int
  2 - Inicializar resp com 1
  3 - Enquanto resp for igual a 1, continuar o processamento
  4 - Solicitar os valores e guardar nas variaveis a e b
  5 - Somar os dois valores e guardar na variavel r
  6 - Apresentar o valor calculado em r
  7 - Soliciatr se o usuario deseja continuar e guardar na variavel resp*/
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
        printf("\nTecle [1] para SIM ou qualquer numero para nao: ");
        scanf("%d", &resp);


    }
    return 0;
}
