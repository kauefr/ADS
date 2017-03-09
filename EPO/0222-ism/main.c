#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int atribuicoes;
    int comparacoes;
} contadores;

void rotate(int *vetor, int a, int b, contadores *cont);
void selection_sort(int *vetor, int tamanho, contadores *cont);
void insertion_sort(int *vetor, int tamanho, contadores *cont);
void merge_sort(int *vetor, int tamanho, contadores *cont);
void merge(int *vetor, int j, int tamanho, contadores *cont);
void swap(int *vetor, int a, int b, contadores *cont);

#define TAMANHO 1000

int main()
{
    contadores c = {0, 0};
    int vetor[TAMANHO];

    srand(time(NULL));

    for(int i=0; i<TAMANHO; i++)
    {
        vetor[i] = rand() % TAMANHO;
    }

    int temp[TAMANHO];
    for(int i=0; i<TAMANHO; i++)
    {
        temp[i] = vetor[i];
    }
    insertion_sort(temp, TAMANHO, &c);
    printf("Insertion sort, comparacoes = %d, atribuicoes = %d\n", c.comparacoes, c.atribuicoes);

    for(int i=0; i<TAMANHO; i++)
    {
        temp[i] = vetor[i];
    }
    selection_sort(temp, TAMANHO, &c);
    printf("Selection sort, comparacoes = %d, atribuicoes = %d\n", c.comparacoes, c.atribuicoes);

    for(int i=0; i<TAMANHO; i++)
    {
        temp[i] = vetor[i];
    }
    merge_sort(temp, TAMANHO, &c);
    printf("    Merge sort, comparacoes = %d, atribuicoes = %d\n", c.comparacoes, c.atribuicoes);

    return 0;
}

void selection_sort(int *vetor, int tamanho, contadores *cont)
{
    if(tamanho<2)
    {
        return;
    }
    for(int i=0; i<tamanho-1; i++)
    {
        int menor = i;
        for(int j=i+1; j<tamanho; j++)
        {
            cont->comparacoes++;
            if(vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        if(menor != i)
        {
            swap(vetor, menor, i, cont);
        }
    }
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
    if(tamanho < 2)
    {
        return;
    }
    int j = tamanho/2;
    merge_sort(&vetor[0], j, cont);
    merge_sort(&vetor[j], tamanho-j, cont);
    merge(vetor, j, tamanho, cont);
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

void merge(int *vetor, int j, int tamanho, contadores *cont)
{
    int i = 0;
    while(i<j && j<tamanho)
    {
        cont->comparacoes++;
        if(vetor[i] > vetor[j])
        {
            rotate(vetor, i, j, cont);
            j++;
        }
        i++;
    }
}

void swap(int *vetor, int a, int b, contadores *cont)
{
    int c = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = c;
    cont->atribuicoes += 3;
}
