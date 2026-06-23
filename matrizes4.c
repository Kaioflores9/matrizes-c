#include <stdio.h>

int main()
{
    char m[3][3];
    int i;
    int j;
    int linha;
    int coluna;
    int ganhou;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = ' ';
        }
    }

    while (1)
    {
        printf("\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%c ", m[i][j]);
            }

            printf("\n");
        }

        printf("\nDigite a linha (0 a 2): ");
        scanf("%d", &linha);

        printf("Digite a coluna (0 a 2): ");
        scanf("%d", &coluna);

        if (m[linha][coluna] == ' ')
        {
            m[linha][coluna] = 'X';
        }
        else
        {
            printf("Posicao ocupada.\n");
            continue;
        }

        ganhou = 0;

        for (i = 0; i < 3; i++)
        {
            if (m[i][0] == 'X' &&
                m[i][1] == 'X' &&
                m[i][2] == 'X')
            {
                ganhou = 1;
            }

            if (m[0][i] == 'X' &&
                m[1][i] == 'X' &&
                m[2][i] == 'X')
            {
                ganhou = 1;
            }
        }

        if (m[0][0] == 'X' &&
            m[1][1] == 'X' &&
            m[2][2] == 'X')
        {
            ganhou = 1;
        }

        if (m[0][2] == 'X' &&
            m[1][1] == 'X' &&
            m[2][0] == 'X')
        {
            ganhou = 1;
        }

        if (ganhou == 1)
        {
            printf("\nVoce venceu!\n");
            break;
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (m[i][j] == ' ')
                {
                    m[i][j] = 'O';
                    i = 3;
                    break;
                }
            }
        }

        ganhou = 0;

        for (i = 0; i < 3; i++)
        {
            if (m[i][0] == 'O' &&
                m[i][1] == 'O' &&
                m[i][2] == 'O')
            {
                ganhou = 1;
            }

            if (m[0][i] == 'O' &&
                m[1][i] == 'O' &&
                m[2][i] == 'O')
            {
                ganhou = 1;
            }
        }

        if (m[0][0] == 'O' &&
            m[1][1] == 'O' &&
            m[2][2] == 'O')
        {
            ganhou = 1;
        }

        if (m[0][2] == 'O' &&
            m[1][1] == 'O' &&
            m[2][0] == 'O')
        {
            ganhou = 1;
        }

        if (ganhou == 1)
        {
            printf("\nComputador venceu!\n");
            break;
        }
    }

    return 0;
}