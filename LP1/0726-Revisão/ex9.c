//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v[100];
    int n;

    srand((unsigned)time(NULL));

    v[0] = rand()%201;

    for(int i=1; i<100; i++)
    {
        int k=0;
        int r=0;
        do{
            if(k==0)
            {
                r = rand()%201;
            }
            if(r == v[k])
            {
                k=0;
            }
            else
            {
                k++;
            }
        }while(k!=i);
        v[i] = r;
    }

    printf("Insira um numero inteiro entre 0 e 200:\n");
    scanf(" %d", &n);

    for(int i=0; i<100; i++)
    {
        if(v[i] == n)
        {
            printf("O numero %d esta no vetor\n", n);
            return 0;
        }
    }
    printf("O numero %d nao esta no vetor\n", n);
    return 0;
}
