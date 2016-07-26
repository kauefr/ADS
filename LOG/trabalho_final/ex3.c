//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

#define QUANTIDADE_DE_DISCIPLINAS 3
#define QUANTIDADE_DE_ALUNOS 3

struct _aluno
{
    int prontuario;
    double nota;
    int faltas;
};

struct _disciplina
{
    int codigo;
    int prontuario_do_professor;
    int quantidade_de_aulas;
    struct _aluno alunos[QUANTIDADE_DE_ALUNOS];
};

int main()
{
    struct _disciplina disciplinas[QUANTIDADE_DE_DISCIPLINAS];

    for(int i=0; i<QUANTIDADE_DE_DISCIPLINAS; i++)
    {
        printf("Insira os dados da disciplina %d (codigo, prontuario do professor, quantidade de aulas):\n", i+1);
        scanf(" %d %d %d", &disciplinas[i].codigo, &disciplinas[i].prontuario_do_professor, &disciplinas[i].quantidade_de_aulas);
        for(int j=0; j<QUANTIDADE_DE_ALUNOS; j++)
        {
            printf("Insira os dados do aluno %d (prontuario, nota, faltas):\n", j+1);
            scanf(" %d %lf %d", &disciplinas[i].alunos[j].prontuario, &disciplinas[i].alunos[j].nota, &disciplinas[i].alunos[j].faltas);
        }
    }

    for(int i=0; i<QUANTIDADE_DE_DISCIPLINAS; i++)
    {
        printf("\nDisciplina  %d:\n", i+1);
        printf("Codigo: %d, Prontuario do Professor: %d, Quantidade de Aulas: %d\n", disciplinas[i].codigo, disciplinas[i].prontuario_do_professor, disciplinas[i].quantidade_de_aulas);
        for(int j=0; j<QUANTIDADE_DE_ALUNOS; j++)
        {
            printf("\tAluno %d:\n", j+1);
            printf("\tProntuario: %d, Nota: %lf, Faltas: %d\n", disciplinas[i].alunos[j].prontuario, disciplinas[i].alunos[j].nota, disciplinas[i].alunos[j].faltas);
        }
    }

    return 0;
}
