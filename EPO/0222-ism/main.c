#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int atribuicoes;
    int comparacoes;
} contadores;

void swap(int *vetor, int a, int b, contadores *cont);
void selection_sort(int *vetor, int tamanho, contadores *cont);
void insertion_sort(int *vetor, int tamanho, contadores *cont);
void merge_sort(int *vetor, int tamanho, contadores *cont);

int main()
{
    contadores c = {0, 0};
    int vetor[5] = {2,1,4,3,5};
    insertion_sort(vetor, 5, &c);
    for(int i=0; i<5; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
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

    cont->comparacoes++;
    if(vetor[0] > vetor[1])
    {
        swap(vetor, 0, 1, cont);
    }

    for(int i=2; i<tamanho; i++)
    {
        for(j=0; j<i; j++)
        {
            cont->comparacoes++;
            if(vetor[i])
        }
        //procura o primeiro maior "x" na range [0,i), for(j=x; j<i; j++){swap(j,i)}
    }
}

void merge_sort(int *vetor, int tamanho, contadores *cont)
{

}

void swap(int *vetor, int a, int b, contadores *cont)
{
    int c = vetor[a];
    vetor[a] = vetor[b];
    vetor[b] = c;
    cont->atribuicoes+=2;
}
