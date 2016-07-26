//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int matriz[5][5];
    int i, j;
    int mdp, mds;

    //Leia os valores da matriz
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    //Inicializa as medias com o valor 0
    mdp = 0;
    mds = 0;
    for(i=0; i<5; i++)
    {
        //Diagonal principal são os valores [0][0], [1][1], etc
        //Diagonal secundaria são os valores [0][4], [1][3], etc
        mdp += matriz[i][i];
        mds += matriz[i][4-i];
    }
    //Divide as somas por 5, para obter as medias
    mdp /= 5;
    mds /= 5;

    //Imprime o resultado
    printf("\nMedia da diagonal principal: %d \nMedia da diagonal secundaria: %d\n", mdp, mds);

    return 0;
}
