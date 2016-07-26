//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int a;
    int v[5][5];
    int i, j;
    int cont = 0;

    //Leia o valor de a e da matriz v
    scanf("%d", &a);
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &v[i][j]);
        }
    }

    //Para cada valor de v...
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            //...se for igual a 'a'...
            if(v[i][j] == a)
            {
                //...incrementa o contador.
                cont++;
            }
        }
    }
    //Imprime o contador
    printf("%d\n", cont);
    return 0;
}
