#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int atribuicoes;
    int comparacoes;
} contadores;

void rotate(int *vetor, int a, int b, contadores *cont);
void selection_sort(int *vetor, int tamanho, contadores *cont);
void insertion_sort(int *vetor, int tamanho, contadores *cont);
void merge_sort(int *vetor, int tamanho, contadores *cont);

#define TAMANHO 10

int main()
{
    contadores c = {0, 0};
    int vetor[TAMANHO] = {9, 0, 7, 6, 5, 4, 3, 2, 1, 0};
    insertion_sort(vetor, TAMANHO, &c);
    for(int i=0; i<TAMANHO; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("%d atribuicoes %d comparacoes\n", c.atribuicoes, c.comparacoes);
    return 0;
}

void selection_sort(int *vetor, int tamanho, contadores *cont)
{

}

void insertion_sort(int *vetor, int tamanho, contadores *cont)
{
    if(tamanho<2)
    {
        return;
    }

    for(int i=1; i<tamanho; i++)
    {
        for(int j=0; j<i; j++)
        {
		cont->comparacoes++;
		if(vetor[i]<vetor[j])
		{
			rotate(vetor, j, i, cont);
			break;
		}
        }
    }
}

void merge_sort(int *vetor, int tamanho, contadores *cont)
{

}

void rotate(int *vetor, int a, int b, contadores *cont)
{
    int c = vetor[b];
    for(int i=b-1; i>=a; i--)
    {
	    vetor[i+1] = vetor[i];
    }
    vetor[a] = c;
    cont->atribuicoes+=(b-a)+2;
}
