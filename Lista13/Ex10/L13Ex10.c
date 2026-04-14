#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função que receba um ponteiro para inteiro e some 1 ao valor apontado.
No programa principal, leia um número, chame a função e mostre o valor atualizado.*/

//(int *p) O * aqui no cabeçalho da função indica que a função somar não recebe um número inteiro comum, mas sim um ponteiro. Ela espera receber um endereço de memória.
void somar(int *p){
       //*p (lado direito): "Vá até o endereço guardado em p, veja qual valor está lá."
    *p = *p + 1;//+ 1: "Some 1 a esse valor."
  //*p = (lado esquerdo): "Pegue esse novo resultado e guarde-o de volta exatamente no mesmo endereço."
}


int main()
{
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    somar(&num);

    printf("Novo valor usando funcao de somar 1 ao valor digitado eh = %d\n", num);

    printf("\nHello world!\n");
    return 0;
}
