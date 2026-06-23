#include <stdio.h>

int main()
{
    int matriz[5][5];
    int linha;
    int coluna;
    int soma = 0;

    printf("Digite os valores da matriz 5x5:\n");

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            soma = soma + matriz[linha][coluna];
        }
    }

    printf("\nA soma de todos os elementos e: %d\n", soma);

    return 0;
}