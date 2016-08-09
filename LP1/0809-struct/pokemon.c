//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct _pokemon
{
    char nome[31];
    int tipo;
    int poder;
} pokemon;

typedef struct _jogador
{
    pokemon pokemons[4];
} jogador;

int main()
{
    jogador eu;
    jogador adversario;

    srand((unsigned)time(NULL));

    for(int i=0; i<4; i++)
    {
        printf("Insira o nome do Pokemon:\n");
        fgets(eu.pokemons[i].nome, 30, stdin);
        strtok(eu.pokemons[i].nome, "\n");
        eu.pokemons[i].tipo = 1 + rand() % 3;
        eu.pokemons[i].poder = 2500 + rand() % 10001;
    }
    for(int i=0; i<4; i++)
    {
        printf("Insira o nome do Pokemon:\n");
        fgets(adversario.pokemons[i].nome, 30, stdin);
        strtok(adversario.pokemons[i].nome, "\n");
        adversario.pokemons[i].tipo = 1 + rand() % 3;
        adversario.pokemons[i].poder = 2500 + rand() % 10001;
    }

    printf("\nJogador 1\n");
    for(int i=0; i<4; i++)
    {
        printf("Pokemon %d: %s. Tipo: %d. Poder: %d", 1+i, eu.pokemons[i].nome, eu.pokemons[i].tipo, eu.pokemons[i].poder);
        if(eu.pokemons[i].poder > 9000)
        {
            printf(" (It's over NINE THOUSAND!!!)");
        }
        printf("\n");
    }
    printf("Jogador 2\n");
    for(int i=0; i<4; i++)
    {
        printf("Pokemon %d: %s. Tipo: %d. Poder: %d", 1+i, adversario.pokemons[i].nome, adversario.pokemons[i].tipo, adversario.pokemons[i].poder);
        if(adversario.pokemons[i].poder > 9000)
        {
            printf(" (It's over NINE THOUSAND!!!)");
        }
        printf("\n");
    }

    int pa = rand()%4;
    int pb = rand()%4;
    printf("\n\nBatalha Pokemon: %s vs %s\n", eu.pokemons[pa].nome, adversario.pokemons[pb].nome);
    if(eu.pokemons[pa].poder > adversario.pokemons[pb].poder)
    {
        printf("%s venceu!\n", eu.pokemons[pa].nome);
    }
    else if(eu.pokemons[pa].poder < adversario.pokemons[pb].poder)
    {
        printf("%s venceu!\n", adversario.pokemons[pb].nome);
    }
    else
    {
        printf("EMPATE!!!\n");
    }
    return 0;
}
