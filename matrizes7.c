#include <stdio.h>

int main()
{
    int matriz1[3][3];
    int matriz2[3][3];
    int soma[3][3];
    int subtracao[3][3];
    int multiplicacao[3][3];

    int linha;
    int coluna;
    int k;

    printf("Digite os valores da primeira matriz:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("Matriz 1 [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz1[linha][coluna]);
        }
    }

    printf("\nDigite os valores da segunda matriz:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("Matriz 2 [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz2[linha][coluna]);
        }
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            soma[linha][coluna] =
                matriz1[linha][coluna] +
                matriz2[linha][coluna];

            subtracao[linha][coluna] =
                matriz1[linha][coluna] -
                matriz2[linha][coluna];
        }
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            multiplicacao[linha][coluna] = 0;

            for (k = 0; k < 3; k++)
            {
                multiplicacao[linha][coluna] =
                    multiplicacao[linha][coluna] +
                    matriz1[linha][k] * matriz2[k][coluna];
            }
        }
    }

    printf("\nSoma:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", soma[linha][coluna]);
        }

        printf("\n");
    }

    printf("\nSubtracao:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", subtracao[linha][coluna]);
        }

        printf("\n");
    }

    printf("\nMultiplicacao:\n");

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", multiplicacao[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}