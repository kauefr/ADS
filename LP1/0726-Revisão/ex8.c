//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int v[100];
    int n;
    int cont=0;

    for(int i=0; i<100; i++)
    {
        v[i] = rand()%201;
    }
    printf("Digite um numero inteiro entre 0 e 200 (inclusive)\n");
    scanf(" %d", &n);
    for(int i=0; i<100; i++)
    {
        if(v[i] == n)
        {
            cont++;
        }
    }
    printf("%d Colisoes", cont);
    return 0;
}
