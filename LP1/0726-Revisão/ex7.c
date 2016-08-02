//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int v1[1000];
    int v2[1000];
    int cont=0;

    for(int i=0; i<1000; i++)
    {
        v1[i] = rand()%1501;
        v2[i] = rand()%1501;
    }
    for(int i=0; i<1000; i++)
    {
        for(int j=0; j<1000; j++)
        {
            if(v1[i] == v2[j])
            {
                printf("v1[%d] == v2[%d] == %d\n", i, j, v1[i]);
                cont++;
                break;
            }
        }
    }
    printf("%d Colisoes", cont);
    return 0;
}
