//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int v[20];
    int count, i;
    count = 0;

    //Leia os valores de v
    for(i=0; i<20; i++)
    {
        scanf("%d", &v[i]);
    }

    //Para cada valor de v...
    for(i=0; i<20; i++)
    {
        //...imprima o valor e...
        printf("%d ", v[i]);
        //...se o numero for par...
        if(v[i] % 2 == 0)
        {
            //...incremente a contagem dos valores pares.
            count++;
        }
    }
    //Imprima a quantidade de valores pares
    printf("\nO vetor possui %d valores pares.\n", count);

    return 0;
}
