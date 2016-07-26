//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

struct Carta { 
    int valor;
    int naipe;
};

int main()
{
    struct Carta baralho[52];
    int i;

    for(i=0; i<52; i++)
    {
        baralho[i].valor = i%13;
        baralho[i].naipe = i/13;
    }

    for(i=0; i<52; i++)
    {
        int v = baralho[i].valor;
        int n = baralho[i].naipe;
        if(v > 0 && v < 10)
        {
            printf("%d", v+1);
        }
        else if(v == 0)
        {
            printf("A");
        }
        else if(v == 10)
        {
            printf("J");
        }
        else if(v == 11)
        {
            printf("Q");
        }
        else
        {
            printf("K");
        }
        printf(" de ");
        if(n==0)
        {
            printf("Ouros\n");
        }
        else if(n==1)
        {
            printf("Espadas\n");
        }
        else if(n==2)
        {
            printf("Copas\n");
        }
        else
        {
            printf("Paus\n");
        }
    }
    return 0;
}
