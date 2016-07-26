//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int a[10], b[10], i, j;

    //Leia o vetor a e inicialize o vetor b com '1'
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        b[i] = 1;
    }

    //Para cada valor de a...
    for(i=0; i<10; i++)
    {
        //...se ele for >= 0...
        if(a[i] >= 0)
        {
            //...b[i] torna-se o produto de 1, 2, 3, ..., a[i]...
            for(j=1; j<=a[i]; j++)
            {
                b[i] *= j;
            }
        }
        //...senão (a[i] negativo)...
        else
        {
            //...b[i] é igual a a[i].
            b[i] = a[i];
        }
    }

    //Imprime b
    for(i=0; i<10; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
