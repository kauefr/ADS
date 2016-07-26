//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int v2[5];
    int v3[5];
    int i, j=0, k=0;

    for(i=0; i<10; i++)
    {
        if(v1[i] % 2 == 0)
        {
            v2[j++] = v1[i];
        }
        else
        {
            v3[k++] = v1[i];
        }
    }

    printf("pares = ");
    for(i=0; i<5; i++)
    {
        printf("%d ", v2[i]);
    }

    printf("\nimpares = ");
    for(i=0; i<5; i++)
    {
        printf("%d ", v3[i]);
    }

    return 0;
}
