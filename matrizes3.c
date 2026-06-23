#include <stdio.h>

int main()
{
    int matriz[4][4];
    int linha;
    int coluna;

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            matriz[linha][coluna] = 0;
        }
    }

    matriz[0][0] = 1;
    matriz[1][1] = 1;
    matriz[2][2] = 1;
    matriz[3][3] = 1;

    printf("Pressione ENTER para mostrar cada linha da matriz...\n");

    getchar();

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");

        if (linha < 3)
        {
            printf("Pressione ENTER para continuar...");
            getchar();
        }
    }

    return 0;
}