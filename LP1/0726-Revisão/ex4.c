//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int v[5];

    printf("Digite 5 numeros inteiros:\n");
    for(int i=0; i<5; i++)
    {
        scanf(" %d", v+i);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
