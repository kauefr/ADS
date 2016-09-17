/*contem as funcoes responsaveis para retirar os dados do arquivo de texto(HD), colocando os mesmos em um vetor de struct(RAM), assim como uma função que exibe os dados do vetor*/
#include "funcionario.h"

void imprimeVetorFunc(func *vFunc, int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {
        printf(" Numero: %d \n Nome: %s \n Rua: %s \n Numero Res.: %d \n Cep: %s \n Estado: %s \n Salario: %f \n NumeroSuper: %d \n NumeroDepto: %d \n\n",
           vFunc[i].numero, vFunc[i].nome, vFunc[i].rua,vFunc[i].nro, vFunc[i].cep, vFunc[i].estado, vFunc[i].salario, vFunc[i].numeroSuper, vFunc[i].numeroDepto);
        printf("\n----------------------------------------\n\n");
    }
}

void populaVetorFunc(func *vFunc, int tamanho)
{
    int i=0;
    FILE *fp;
    char *tmp,buf[256];
    if((fp = fopen("funcionario.csv","r")) == NULL)
    {
        printf( "Erro na abertura/leitura do arquivo");
        exit(0); // aborta a execuчуo do programa
    }

    //Observem como eu uso o While para agir como se fosse um for
    while (fgets(buf, 255, fp) != NULL)//Le cada linha do arquivo até um max de 255 e armazena essa linha na "string" buf
    {
        if ((strlen(buf)>0) && (buf[strlen (buf) - 1] == '\n'))//Adiciona o terminador \0 (NULL) na linha caso ela seja menor q 255
            buf[strlen (buf) - 1] = '\0';

        tmp = strtok(buf, ";");//strtok divide a string de acordo com o param, no caso ';', na primeira vez q chama tem q passar uma string, nas próximas passa NULL
        vFunc[i].numero = atoi(tmp);//Atoi transforma um string em numero inteiro

        tmp = strtok(NULL, ";");
        strcpy(vFunc[i].nome,tmp);//strcpty copia o valor de uma string em outra.

        tmp = strtok(NULL, ";");
        strcpy(vFunc[i].rua,tmp);

        tmp = strtok(NULL, ";");
        vFunc[i].nro = atoi(tmp);

        tmp = strtok(NULL, ";");
        strcpy(vFunc[i].cep,tmp);

        tmp = strtok(NULL, ";");
        strcpy(vFunc[i].estado,tmp);

        tmp = strtok(NULL, ";");
        vFunc[i].salario = atoi(tmp);

        tmp = strtok(NULL, ";");
        vFunc[i].numeroSuper = atoi(tmp);

        tmp = strtok(NULL, ";");
        vFunc[i].numeroDepto = atoi(tmp);

        i++; // incrementa o i
    }

    fclose(fp);
}
