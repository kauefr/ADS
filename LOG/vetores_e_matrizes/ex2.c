//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int n[20]; 
    int m, p, i;

    //Leia os valores
    for(i=0; i<20; i++)
    {
        scanf("%d", &n[i]);
    }

    //O primeiro valor é o menor, por enquanto
    m = n[0];
    p = 0;

    //Para os outros 19 valores, compare com 'm' e substitua se menor
    for(i=1; i<20; i++)
    {
        if(n[i] < m)
        {
            m = n[i];
            p = i;
        }
    }

    //Imprime o resultado
    printf("O menor elemento de N e %d e sua posicao dentro do vetor e: %d\n", m, p);
    return 0;
}
