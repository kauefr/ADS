//Copyright (c) 2017, Kauê Rodrigues


//Cabeçalhos

//stdio.h para printf
#include <stdio.h>
//stdlib.h para as funções rand e srand para gerar números aleatórios para o vetor
#include <stdlib.h>
//time.h para a função time, para fazer a função rand funcionar direito 
#include <time.h>


//Declarações de funções. A linguagem C não permite que você chame uma função
//antes do compilador ter "visto" a função antes, por isso declaramos elas aqui
void inicializa_vetor(int *vetor, int tamanho);
void selection_sort(int *vetor, int tamanho, int *c, int *a);
void imprime_vetor(int *vetor, int tamanho);


//função main, só chama as outras funções na ordem correta, a "ação" toda
//acontece nas 3 funções que definimos abaixo.
int main()
{
	//declaramos o vetor e seu tamanho
	int t = 1000;
	int v[t];
	//colocamos os números aleatórios dentro dele
	inicializa_vetor(v, t);
	//imprimimos o vetor desordenado
	imprime_vetor(v, t);

	//ignore estas variáveis por enquanto, falamos delas depois
	int c=0, a=0;
	//chamamos o algoritmo em si.
	//IMPORTANTE: como queremos que a função selection_sort
	//modifique as variáveis c e a temos que passá-las por
	//ponteiro.
	selection_sort(v, t, &c, &a);
	//depois que selection_sort acaba, o vetor está ordenado
	//basta imprimí-lo
	imprime_vetor(v, t);
	//imprimimos também as variáveis c e a devidamente
	//modificadas.
	printf("Comparacoes = %d\nAtribuicoes = %d\n", c, a);
	//fim =)
	return 0;
}


//inicializa o vetor com números aleatórios entre 0 e 999.
//recebe o vetor (em forma de ponteiro) e o tamanho do vetor.
//
//a função srand é necessária para variar os números gerados por rand(), 
//senão toda vez a função rand() gera os mesmos números.
//o loop simplesmente insere um número aleatório gerado por rand() em cada
//posição do vetor.
void inicializa_vetor(int *vetor, int tamanho)
{
	srand((unsigned int) time(NULL));
	for(int i=0; i<tamanho; i++)
	{
		vetor[i] = rand() % tamanho;
	}
}


//imprime o vetor e pula uma linha.
//recebe o vetor e seu tamanho.
//
//para cada número do vetor, printa na tela e dá um espaço. no final
//pula uma linha.
void imprime_vetor(int *vetor, int tamanho)
{
	for(int i=0; i<tamanho; i++)
	{
		printf("%d ", vetor[i]);
	}
	printf("\n");
}


//ordena o vetor através do método selection sort.
//recebe 4 parametros: o vetor (para passar um vetor para uma função em C
//sempre usamos um ponteiro), o tamanho do vetor, e dois ponteiros para
//variáveis que declaramos na função main, *c e *a.
//
//Porque passamos através de ponteiros?
//Porque esta função vai MODIFICAR os valores das variáveis originais, 
//declaradas em main. se não passarmos por ponteiros estaríamos modificando
//apenas uma CÓPIA da variável original, não a variável em si.
void selection_sort(int *vetor, int tamanho, int *c, int *a)
{
	//nosso algoritmo percorre o vetor a partir da primeira posição até
	//a penúltima posição (não precisa ir até a última porque ordenar o
	//penúltimo número automaticamente coloca o último no lugar).
	for(int i=0; i<tamanho-1; i++)
	{
		//dentro deste loop nosso objetivo é encontrar o menor
		//valor no intervalo que vai do i-ésimo elemento até o
		//último elemento, chamado de intervalo [i, tamanho)
		//enquanto não sabemos qual é o menor, podemos "chutar"
		//que o menor valor é o i-ésimo.
		int menor = i;
		//vamos percorrer o vetor (do índice i até o último número)
		for(int j=i+1; j<tamanho; j++)
		{
			*c += 1; //ignore esse comando, explico depois.

			//se o número que estamos avaliando for menor que o
			//mínimo que encontramos até agora, substitua. o índice
			//do menor valor passa a ser o índice atual (j)
			if(vetor[j] < vetor[menor])
			{
				menor = j;
			}
		}
		//depois de percorrido o vetor, o índice 'menor' contém o menor
		//valor do intervalo [i, tamanho).
		//nosso objetivo agora é colocar este valor na posição i, mas
		//observe que é possível que o menor valor já esteja na posição
		//correta, por isso testamos primeiro se o índice do menor
		//valor já não é igual a i.
		if(menor != i)
		{
			//se os índices forem diferentes (o menor valor está
			//"fora do lugar") invertemos a posição dos números
			//vetor[i] e vetor[menor]. obs: a variável temp é
			//apenas auxiliar, não serve nenhum outro propósito.
			int temp = vetor[menor];
			vetor[menor] = vetor[i];
			vetor[i] = temp;
			*a += 3; //ignore este comando também, já chego lá.
		}
		//repetiremos essa busca pelo menor número do
		//intervalo [i, tamanho) até ordenar o vetor todo
	}
	//quando o programa sair do loop, teremos 3 resultados importantes:
	//1 - o vetor estará ordenado (duh)
	//2 - a variável c conterá a quantidade de comparações que fizemos
	//entre os números do vetor (por isso nós incrementamos a variável
	//*c ali em cima cada vez que fazemos a comparação dentro do if).
	//3 - a variável a conterá quantas vezes mudamos um número do vetor
	//de lugar (por isso incrementamos a variável *a 3 vezes cada vez
	//que fazemos a troca dentro do segundo if).
}


