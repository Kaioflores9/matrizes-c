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
    matriz[3][3] = 1

    printf("Matriz:\n");

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
