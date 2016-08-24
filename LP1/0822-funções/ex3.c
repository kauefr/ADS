//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <string.h>

typedef struct _aluno
{
    char nome[30];
    double notas[4];
} aluno;

double media(double *notas, int n)
{
    double resultado = 0.0;
    for(int i=0; i<n; i++)
    {
        resultado += notas[i];
    }
    return resultado/n;
}

void aprovado(aluno a)
{
    if(media(a.notas, 4) >= 6.0)
    {
        printf("Aluno %s APROVADO!\n", a.nome);
    }
    else
    {
        printf("Aluno %s REPROVADO!\n", a.nome);
    }
}

int main()
{
    aluno a[3];

    printf("Digite o nome e as 4 notas de cada um dos 3 alunos:\n");
    for(int i=0; i<3; i++)
    {
        fgets(a[i].nome, 30, stdin);
        a[i].nome[strcspn(a[i].nome, "\r\n")] = 0;
        strtok(a[i].nome, "\n");
        for(int j=0; j<4; j++)
        {
            scanf("%lf", &a[i].notas[j]);
            printf("li a nota %d do aluno %d = %lf\n", j, i, a[i].notas[j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        aprovado(a[i]);
    }
    return 0;
}
