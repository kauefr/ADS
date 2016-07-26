//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int a, b, c;
    for(a = 1; a<11; a++)
    {
        printf("A%d\n", a);
        for(b=1; b<11; b++)
        {
            printf("B%d\n", b);
            for(c=1; c<11; c++)
            {
                printf("C%d ", c);
            }
            printf("\n");
        }
    }
    return 0;
}
