#include <stdio.h>
#include "headersH/desconto/calcDesconto.h"

int main()
{
    float valorDoProduto, valorDoDesconto, valorDoProdutoFinal, desconto;
    char sair[10] = "sair";
    char sairDoApp[10];

    int i = 1;
    while (i == 1)
    {
        printf("\n---------- Calculando Desconto ---------\n");

        printf("\nInformar o valor do produto!\n");
        scanf("%f", &valorDoProduto);

        printf("\nDesconto em porcentagem ex 0.1 ate 1.0\n");
        scanf("%f", &valorDoDesconto);

        valorDoProdutoFinal = CalcDesconto(valorDoProduto, valorDoDesconto);

        desconto = valorDoProduto - valorDoProdutoFinal;

        printf("O Valor final do produto é: %.2f & o Desconto foi de: %.2f\n", valorDoProdutoFinal, desconto);
    }
}
