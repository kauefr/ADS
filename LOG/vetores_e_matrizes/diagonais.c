//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    int matriz[10][10];
    int i, j;
    int principal, cima, baixo;

    //Leia os valores das diagonais
    printf("Digite a diagonal principal, superior e inferior\n");
    scanf("%d %d %d", &principal, &cima, &baixo);

    //De matriz[0][0] até matriz[9][9]...
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            //...e atribua o valor de matriz[i][j] de acordo com a posição dentro da matriz (diagonal, metade de cima, metade de baixo)
            if(i<j)
            {
                matriz[i][j] = cima;
            }
            else if(i>j)
            {
                matriz[i][j] = baixo;
            }
            else
            {
                matriz[i][j] = principal;
            }
        }
    }

    //Imprima a matriz
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
