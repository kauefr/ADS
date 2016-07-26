//Copyright (c) 2016, Kauê Rodrigues

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int v1[1000] = {2,2,9,4,5,8,-1,1,8,8,8,0,-1,1,5,0,0,-1,-2};
    int op = -1;

    while(op != '0')
    {
        int i = 0, j = 0;
        int print[3] = {0, 0, 0};

        system("clear");
        printf("Escolha uma opcao:\n");
        printf("    1 - Conta Corrente\n");
        printf("    2 - Agencia\n");
        printf("    3 - Deposito\n");
        printf("    4 - Todos\n");
        printf("    0 - Encerrar\n");
        printf("->");

        while(isspace(op = getchar()));

        switch((char)op)
        {
            case '1':
                print[0] = 1;
                break;
            case '2':
                print[1] = 1;
                break;
            case '3':
                print[2] = 1;
                break;
            case '4':
                print[0] = 1;
                print[1] = 1;
                print[2] = 1;
                break;
            default:
                break;
        }

        printf("\n");
        while(v1[i] != -2)
        {
            if(v1[i] == -1)
            {
                if(print[j++] == 1)
                {
                    printf("\n");
                }
            }
            else if(print[j] == 1)
            {
                printf("%d", v1[i]);
            }
            i++;
        }

        printf("\nPressione Enter para continuar.\n");
        getchar();
        getchar();
    }
    return 0;
}
