//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
    int v[100];

    for(int i=0; i<100; i++)
    {
        v[i] = rand()%26;
    }
    for(int i=0; i<100; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}
