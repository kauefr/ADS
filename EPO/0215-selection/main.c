//Copyright (c) 2017, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa_vetor(int *vetor, int tamanho);
void selection_sort(int *vetor, int tamanho, int *c, int *a);
void imprime_vetor(int *vetor, int tamanho);

int main()
{
	int t = 1000;
	int v[t];
	inicializa_vetor(v, t);
	imprime_vetor(v, t);
	int c=0, a=0;
	selection_sort(v, t, &c, &a);
	imprime_vetor(v, t);
	printf("Comparacoes = %d\nAtribuicoes = %d\n", c, a);
	return 0;
}

void inicializa_vetor(int *vetor, int tamanho)
{
	srand((unsigned int) time(NULL));
	for(int i=0; i<tamanho; i++)
	{
		vetor[i] = rand() % tamanho;
	}
}

void selection_sort(int *vetor, int tamanho, int *c, int *a)
{
	for(int i=0; i<tamanho-1; i++)
	{
		int menor = i;
		for(int j=i+1; j<tamanho; j++)
		{
			*c += 1;
			if(vetor[j] < vetor[menor])
			{
				menor = j;
			}
		}
		if(menor != i)
		{
			int temp = vetor[menor];
			vetor[menor] = vetor[i];
			vetor[i] = temp;
			*a += 3;
		}
	}
}

void imprime_vetor(int *vetor, int tamanho)
{
	for(int i=0; i<tamanho; i++)
	{
		printf("%d ", vetor[i]);
	}
	printf("\n");
}

