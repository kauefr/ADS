//Copyright (c) 2016, Kauê Rodrigues

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//typedefs
typedef struct _hora
{
    int h;
    int m;
} hora;

typedef struct _carro
{
    char modelo[30];
    char placa[10];
    hora entrada;
} carro;

//Declarações das Funções
void leia_linha(char *buffer, int n);
int horacmp(hora a, hora b);
void print_carro(carro *vetor, int i);
int ler_carros(carro *vetor, int qtd_de_carros);
void mostra_quantos(carro *vetor, int qtd_de_carros);
void lista_placas(carro *vetor, int qtd_de_carros);
void mostra_intervalo(carro *vetor, int qtd_de_carros);
void lista_todos(carro *vetor, int qtd_de_carros);
void encontra_carro(carro *vetor, int qtd_de_carros);

//Main
int main()
{
    carro carros[1000];
    int qtd_de_carros = 0;

    char buffer[40];
    int opcao = 0;
    while(opcao != (int) 'S')
    {
        switch(opcao)
        {
            case 'L':
                qtd_de_carros = ler_carros(carros, qtd_de_carros);
                break;
            case 'M':
                mostra_quantos(carros, qtd_de_carros);
                break;
            case 'P':
                lista_placas(carros, qtd_de_carros);
                break;
            case 'I':
                mostra_intervalo(carros, qtd_de_carros);
                break;
            case 'T':
                lista_todos(carros, qtd_de_carros);
                break;
            case 'E':
                encontra_carro(carros, qtd_de_carros);
                break;
            default:
                break;
        }
        system("clear");
        printf("Escolha a opcao: \n");
        printf("(L)er Dados, (M)ostrar Quantidade, \n");
        printf("Listar (P)lacas, Buscar por (I)ntervalo, \n");
        printf("Listar (T)odos, (E)ncontrar por Placa, (S)air\n");
        leia_linha(buffer, 40);
        opcao = (int)buffer[0];
    } 
    return 0;
}

//Definições das Funções
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

void leia_linha(char *buffer, int n)
{
    fgets(buffer, n, stdin);
    buffer[strcspn(buffer, "\r\n")] = 0;
    for(int i=0; i<strcspn(buffer, "\0"); i++)
    {
        buffer[i] = (char)toupper(buffer[i]);
    }
}

void print_carro(carro *vetor, int i)
{
    printf("Carro %d:\n", i+1);
    printf("Modelo: %s\n", vetor[i].modelo);
    printf("Placa: %s\n", vetor[i].placa);
    printf("Horario de Entrada: %02d:%02d\n", vetor[i].entrada.h, vetor[i].entrada.m);
}

int ler_carros(carro *vetor, int qtd_de_carros)
{
    char buffer[40];
    int opcao = 0;
    int i = qtd_de_carros;
    do {
        printf("Digite o Modelo:\n");
        leia_linha(buffer, 40);
        buffer[29] = 0;
        strcpy(vetor[i].modelo, buffer);

        printf("Digite a Placa: \n");
        leia_linha(buffer, 40);
        buffer[9] = 0;
        strcpy(vetor[i].placa, buffer);

        printf("Digite a Hora de Entrada: (formato hh:mm)\n");
        leia_linha(buffer, 40);
        char *tmp;
        vetor[i].entrada.h = (int) strtol(buffer, &tmp, 10);
        vetor[i].entrada.m = (int) strtol(++tmp, NULL, 10);

        i++;
        printf("Continuar inserindo? (S)im (N)ao\n");
        leia_linha(buffer, 40);
        opcao = (int) buffer[0];
    } while(opcao == (int) 'S');
    
    printf("Pressione Enter para continuar...\n");
    getchar();
    return i;
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
    int total = 0;

    printf("Digite o modelo:\n");
    leia_linha(m, 40);

    for(int i=0; i<qtd_de_carros; i++)
    {
        if(0 == strcmp(m, vetor[i].modelo))
        {
            total++;
            printf("%s\n", vetor[i].placa);
        }
    }
    if(0 == total)
    {
        printf("Nenhum carro encontrado.\n");
    }
    printf("Pressione Enter para continuar...\n");
    getchar();
}

void mostra_intervalo(carro *vetor, int qtd_de_carros)
{
    hora inicio;
    hora fim;
    char buffer[40];
    int total = 0;
    char *tmp;

    printf("Digite o inicio do intervalo: (formato hh:mm)\n");
    leia_linha(buffer, 40);
    inicio.h = (int) strtol(buffer, &tmp, 10);
    inicio.m = (int) strtol(++tmp, NULL, 10);

    printf("Digite o final do intervalo: (formato hh:mm)\n");
    leia_linha(buffer, 40);
    fim.h = (int) strtol(buffer, &tmp, 10);
    fim.m = (int) strtol(++tmp, NULL, 10);

    for(int i=0; i<qtd_de_carros; i++)
    {
        if((horacmp(vetor[i].entrada, inicio) >= 0) && (horacmp(vetor[i].entrada, fim) <= 0))
        {
            total++;
        }
    }
    printf("Quantidade de carros no intervalo: %d\n", total);
    printf("Pressione Enter para continuar...\n");
    getchar();
}

void lista_todos(carro *vetor, int qtd_de_carros)
{
    for(int i=0; i<qtd_de_carros; i++)
    {
        print_carro(vetor, i);
    }
    printf("Pressione Enter para continuar...\n");
    getchar();
}

void encontra_carro(carro *vetor, int qtd_de_carros)
{
    char p[40];
    int total = 0;

    printf("Digite a placa:\n");
    leia_linha(p, 40);

    for(int i=0; i<qtd_de_carros; i++)
    {
        if(0 == strcmp(p, vetor[i].placa))
        {
            total++;
            print_carro(vetor, i);
        }
    }
    if(0 == total)
    {
        printf("Nenhum carro encontrado.\n");
    }
    printf("Pressione Enter para continuar...\n");
    getchar();
}

