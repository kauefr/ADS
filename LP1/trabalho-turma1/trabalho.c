//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

int ler_carros(carro *vetor, int qtd_de_carros);
void mostra_quantos(carro *vetor, int qtd_de_carros);
void lista_placas(carro *vetor, int qtd_de_carros);
void mostra_intervalo(carro *vetor, int qtd_de_carros);
void lista_todos(carro *vetor, int qtd_de_carros);
void encontra_carro(carro *vetor, int qtd_de_carros);

int main()
{
    carro carros[1000];
    int qtd_de_carros = 0;
    hora h = {1, 1};
    carro c = {"ABC-1234", "ASTRA", h, h};
    carros[0] = c;
    qtd_de_carros++;

    char buffer[40];
    int opcao = 0;
    while(opcao != (int) 's')
    {
        switch(opcao)
        {
            case 'l':
                qtd_de_carros = ler_carros(carros, qtd_de_carros);
                break;
            case 'm':
                mostra_quantos(carros, qtd_de_carros);
                break;
            case 'p':
                lista_placas(carros, qtd_de_carros);
                break;
            case 'i':
                mostra_intervalo(carros, qtd_de_carros);
                break;
            case 't':
                lista_todos(carros, qtd_de_carros);
                break;
            case 'e':
                encontra_carro(carros, qtd_de_carros);
                break;
            default:
                break;
        }
        system("clear");
        printf("Escolha a opcao:\n");
        fgets(buffer, 40, stdin);
        opcao = (int)buffer[0];
    } 
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

int ler_carros(carro *vetor, int qtd_de_carros)
{
    return qtd_de_carros;
}

void mostra_quantos(carro *vetor, int qtd_de_carros)
{
    printf("Quantidade de carros ate o momento: %d\n", qtd_de_carros);
    printf("Pressione Enter para continuar...\n");
    getchar();
}

void lista_placas(carro *vetor, int qtd_de_carros)
{
    char m[40];

    printf("Digite o modelo:\n");
    fgets(m, 40, stdin);
    m[strcspn(m, "\r\n")] = 0;
    for(int i=0; i<strcspn(m, "\0"); i++)
    {
        m[i] = (char)toupper(m[i]);
    }

    for(int i=0; i<qtd_de_carros; i++)
    {
        if(0 == strcmp(m, vetor[i].modelo))
        {
            printf("%s\n", vetor[i].placa);
        }
    }
    printf("Pressione Enter para continuar...\n");
    getchar();
}

void mostra_intervalo(carro *vetor, int qtd_de_carros)
{
}

void lista_todos(carro *vetor, int qtd_de_carros)
{
    for(int i=0; i<qtd_de_carros; i++)
    {
        printf("Carro %d:\nModelo: %s\nPlaca: %s\nHorario de Entrada: %02d:%02d\nHorario de Saida: %02d:%02d\n\n", i+1, vetor[i].modelo, vetor[i].placa, vetor[i].entrada.h, vetor[i].entrada.m, vetor[i].saida.h, vetor[i].saida.m);
    printf("Pressione Enter para continuar...\n");
    getchar();
    }
}

void encontra_carro(carro *vetor, int qtd_de_carros)
{
    char p[40];

    printf("Digite a placa:\n");
    fgets(p, 40, stdin);
    p[strcspn(p, "\r\n")] = 0;
    for(int i=0; i<strcspn(p, "\0"); i++)
    {
        p[i] = (char)toupper(p[i]);
    }

    for(int i=0; i<qtd_de_carros; i++)
    {
        if(0 == strcmp(p, vetor[i].placa))
        {
        printf("Carro %d:\nModelo: %s\nPlaca: %s\nHorario de Entrada: %02d:%02d\nHorario de Saida: %02d:%02d\n\n", i+1, vetor[i].modelo, vetor[i].placa, vetor[i].entrada.h, vetor[i].entrada.m, vetor[i].saida.h, vetor[i].saida.m);
        }
    }
    printf("Pressione Enter para continuar...\n");
    getchar();
}

