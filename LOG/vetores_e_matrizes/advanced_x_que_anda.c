//Copyright (c) 2016, Kauê Rodrigues

#include <termios.h>
#include <stdio.h>
#include <stdlib.h>

char getch()
{
    int ch;
    struct termios old, new;

    tcgetattr(0, &old);
    new = old;
    new.c_lflag &= ~ICANON;
    new.c_lflag &= ~ECHO;
    tcsetattr(0, TCSANOW, &new);

    ch = getchar();

    tcsetattr(0, TCSANOW, &old);

    return (char) ch;
}

int main()
{
    int matriz[5][5];
    char sprite[2] = {' ', 'X'};
    char opcao;
    int x=2, y=2;
    int i, j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            matriz[i][j] = 0;
        }
    }
    matriz[y][x] = 1;

    do{
        system("clear");
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                printf("[%c]", sprite[matriz[i][j]]);
            }
            printf("\n");
        }
        opcao = getch();
        matriz[y][x] = 0;
        switch(opcao)
        {
            case 'w':
                y = y>0 ? y-1 : y;
                break;
            case 'a':
                x = x>0 ? x-1 : x;
                break;
            case 's':
                y = y<4 ? y+1 : y;
                break;
            case 'd':
                x = x<4 ? x+1 : x;
                break;
        }
        matriz[y][x] = 1;
    }while(opcao != '0');

    return 0;
} 
