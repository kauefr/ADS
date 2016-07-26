//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int a[10], b[10], c[10];
    int i;

    //Leia o vetor a
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    //Leia o vetor b
    for(i=0; i<10; i++)
    {
        scanf("%d", &b[i]);
    }

    //Calcule cada valor do vetor c
    for(i=0; i<10; i++)
    {
        c[i] = a[i] * b[i];
    }

    //Imprima c
    for(i=0; i<10; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
