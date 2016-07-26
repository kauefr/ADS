//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int k[30];
    int i;
    int tmp;

    //Leia o vetor k
    for(i=0; i<30; i++)
    {
        scanf("%d", &k[i]);
    }

    //Depois, para cada valor de k...
    for(i=0; i<30; i++)
    {
        //...se estiver numa posição impar, com índice par (p.e. 1ª posição -> i=0, 3ª posição -> i=2, etc)...
        if(i%2 == 0)
        {
            //...troque k[i] e k[i+1] de lugar usando tmp
            tmp = k[i];
            k[i] = k[i+1];
            k[i+1] = tmp;
        }
    }

    //Imprima k
    for(i=0; i<30; i++)
    {
        printf("%d ", k[i]);
    }
    return 0;
}
