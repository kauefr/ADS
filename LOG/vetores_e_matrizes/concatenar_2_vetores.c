//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    //Declaração dos vetores:
    //a tem tamanho 3
    //b tem tamanho 2
    //c tem tamanho 3+2=5
    int a[3] = {10, 20, 30};
    int b[2] = {40, 50};
    int c[5];
    int i;

    //Copie os 3 valores de a para as 3 primeiras posições de c (c[0], c[1], c[2])
    for(i=0; i<3; i++)
    {
        c[i] = a[i];
    }

    //Copie os valores de b para a 4ª e 5ª posições de c (c[3], c[4])
    for(i=0; i<2; i++)
    {
        c[i+3] = b[i];
    }

    //Imprima c
    for(i=0; i<5; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
