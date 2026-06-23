#include <stdio.h>

int main()
{
    float nota;
    float soma;
    float media;
    int turma;
    int aluno;

    for (turma = 1; turma <= 3; turma++)
    {
        soma = 0;

        printf("\nTurma %d\n", turma);

        for (aluno = 1; aluno <= 5; aluno++)
        {
            printf("Digite a nota do aluno %d: ", aluno);
            scanf("%f", &nota);

            soma = soma + nota;
        }

        media = soma / 5;

        printf("Media da turma %d = %.2f\n", turma, media);
    }

    return 0;
}