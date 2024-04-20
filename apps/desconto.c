#include <stdio.h>

int main()
{
    float valorDoProduto, valorDoProdutoFinal;

    printf("Informar o valor do produto!\n");
    scanf("%f", &valorDoProduto);

    valorDoProdutoFinal = valorDoProduto - (valorDoProduto * 0.1);

    printf("O Valor final do produto é: %.2f\n", valorDoProdutoFinal);
}