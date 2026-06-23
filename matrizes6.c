#include <stdio.h>

int main()
{
    int matriz[4][4];
    int transposta[4][4];
    int linha;
    int coluna;

    printf("Digite os valores da matriz 4x4:\n");

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("Posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            transposta[linha][coluna] = matriz[coluna][linha];
        }
    }

    printf("\nMatriz original:\n\n");

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    printf("\nMatriz transposta:\n\n");

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("%d ", transposta[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}