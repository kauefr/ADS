//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>

int main()
{
    //matriz de caracteres, pode conter ' ' ou 'X'
    char matriz[5][5];
    //x e y armazenam a posição atual do 'X' na matriz
    int x=2, y=2;
    //opcao que o usuario digita
    char opcao = '?';
    //variaveis temporarias usadas nos loops
    int i, j;

    //Primeiro, inicialize a matriz com espaços
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            matriz[i][j] = ' ';
        }
    }
    //Coloque o 'X' no local correto, lembrando que a primeira coordenada é o y e a segunda é o x
    matriz[y][x] = 'X';

    //Loop principal, vamos repetir até o usuario digitar '0'
    while(opcao != '0')
    {
        //Imprima a matriz, pulando uma linha (\n) a cada 5 elementos
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                printf("[%c]", matriz[i][j]);
            }
            printf("\n");
        }
        //Imprima as instruções
        printf("Digite a opcao desejada: 4-Esquerda, 6-Direita, 8-Sobe, 2-Desce, 0-Sair\n");

        //Leia um caractere que não seja enter (\n)
        while((opcao = getchar()) == '\n')
        {
            //Loop vazio, se o caractere for enter não fazemos nada, apenas lemos outro caractere. O programa só vai sair deste loop quando o usuario digitar algo diferente de enter
        }

        //Para atualizar a posição do 'X', primeiro apagamos ele de sua posição atual
        matriz[y][x] = ' ';

        //Depois verificamos a opção escolhida pelo usuario e atualizamos a coordenada correspondente, atentando para não deixar o 'X' sair dos limites da nossa matriz (0 <= x <= 4 e 0 <= y <= 4)
        if(opcao == '4' && x > 0)
        {
            x--;
        }
        else if(opcao == '6' && x < 4)
        {
            x++;
        }
        else if(opcao == '2' && y < 4)
        {
            y++;
        }
        else if(opcao == '8' && y > 0)
        {
            y--;
        }  

        //Por fim, reescrevemos o 'X' na posição correta da matriz
        matriz[y][x] = 'X';
    }
    return 0;
} 
