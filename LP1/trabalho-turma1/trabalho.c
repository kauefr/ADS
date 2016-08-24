//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <string.h>

typedef struct _hora
{
    int h;
    int m;
} hora;

typedef struct _carro
{
    char placa[10];
    char modelo[30];
    hora entrada;
    hora saida;
} carro;

int horacmp(hora a, hora b);

int main()
{
    carro carros[1000];

    hora a = {1, 2};
    hora b = {1, 3};
    printf("%d", horacmp(a, b));
    return 0;
}

int horacmp(hora a, hora b)
{
    if(a.h > b.h)
    {
        return 1;
    }
    else if(a.h < b.h)
    {
        return -1;
    }
    else if(a.m > b.m)
    {
        return 1;
    }
    else if(a.m < b.m)
    {
        return -1;
    }
    return 0;
}
