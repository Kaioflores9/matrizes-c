#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[3][3];
    int linha = 1;
    int coluna = 1;
    int direcao

    srand(time(NULL));

    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matriz[i][j] = 0;
            }
        }

        matriz[linha][coluna] = 1;

        printf("\n");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", matriz[i][j]);
            }

            printf("\n");
        }

        direcao = rand() % 4;

        if (direcao == 0 && linha > 0)
        {
            linha--;
        }

        if (direcao == 1 && linha < 2)
        {
            linha++;
        }

        if (direcao == 2 && coluna > 0)
        {
            coluna--;
        }

        if (direcao == 3 && coluna < 2)
        {
            coluna++;
        }
    }

    return 0;
}