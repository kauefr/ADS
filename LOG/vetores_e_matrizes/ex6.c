//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int v[20];
    int i;

    //Leia os valores de v
    for(i=0; i<20; i++)
    {
        scanf("%d", &v[i]);
    }

    //Para cada valor de v...
    for(i=0; i<20; i++)
    {
        //...se o valor for positivo...
        if(v[i] > 0)
        {
            //...imprima-o
            printf("%d ", v[i]);
        }
    }
    return 0;
}
