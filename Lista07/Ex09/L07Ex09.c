#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia um operador aritmético (+, -, *, /) e dois números
reais. Use switch case para realizar a operação escolhida
*/
int main()
{
    char op;
    float n1, n2, resp;

    printf("Informe qual operacao deseja realiza (+, -, *, /): ");
    scanf("%c", &op);
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo numero: ");
    scanf("%f", &n2);

    switch (op){
        case '+':
            resp = n1 + n2;
            printf("Soma entre %.2f e %.2f eh = %.2f", n1, n2, resp);
            break;
        case '-':
            resp = n1 - n2;
            printf("Subtracao entre %.2f e %.2f eh = %.2f", n1, n2, resp);
            break;
        case '*':
            resp = n1 * n2;
            printf("Multiplicacao entre %.2f e %.2f eh = %.2f", n1, n2, resp);
            break;
        case '/':
            resp = n1 / n2;
            printf("Divisao entre %.2f e %.2f eh = %.2f", n1, n2, resp);
            break;
        default:
            printf("Operacao Invalida");


    }
    return 0;
}
