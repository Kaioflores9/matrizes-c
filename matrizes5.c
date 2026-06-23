#include <stdio.h>

int main()
{
    int matriz[10][10];
    int linha;
    int coluna;
    int posicao;

    for (posicao = 0; posicao < 9; posicao++)
    {
        for (linha = 0; linha < 10; linha++)
        {
            for (coluna = 0; coluna < 10; coluna++)
            {
                matriz[linha][coluna] = 0;
            }
        }

        matriz[posicao][4] = 1;
        matriz[posicao][5] = 1;
        matriz[posicao + 1][4] = 1;
        matriz[posicao + 1][5] = 1;

        printf("\n");

        for (linha = 0; linha < 10; linha++)
        {
            for (coluna = 0; coluna < 10; coluna++)
            {
                printf("%d ", matriz[linha][coluna]);
            }

            printf("\n");
        }

        printf("\nAperte ENTER para descer a peca...");
        getchar();
        getchar();
    }

    printf("\nFim do jogo.\n");

    return 0;
}