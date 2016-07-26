//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int m[3][3];

    printf("Digite 9 numeros inteiros:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf(" %d", &m[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
