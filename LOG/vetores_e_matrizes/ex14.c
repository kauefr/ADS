//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int matriz[5][5];
    int sl[5] = {0, 0, 0, 0, 0};
    int sc[5] = {0, 0, 0, 0, 0};
    int i, j;

    //Leia os valores da matriz
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            //Lembrando que 'i' é o número da linha e 'j' é o número da coluna
            scanf("%d", &matriz[i][j]);
        }
    }

    //Para cada elemento de matriz...
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            //...some no elemento apropriado de sl e sc.
            sl[i] += matriz[i][j];
            sc[j] += matriz[i][j];
        }
    }

    //Imprime a matriz
    printf("\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    //Imprime os vetores
    printf("\nSoma das linhas:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", sl[i]);
    }

    printf("\nSoma das colunas:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", sc[i]);
    }

    return 0;
}
