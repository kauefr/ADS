/*contem as funcoes responsaveis para retirar os dados do arquivo de texto(HD), colocando os mesmos em um vetor de struct(RAM), assim como uma função que exibe os dados do vetor*/
#include "departamento.h"

void imprimeVetorDep(depto *vDep, int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {
        printf(" Numero: %d \n Nome: %s \n NumeroFuncGet: %d \n Data Inicio: %s\n\n",
           vDep[i].numero, vDep[i].nome, vDep[i].numeroFuncGer, vDep[i].dataIni);
        printf("\n----------------------------------------\n\n");
    }
}

void populaVetorDep(depto *vDep, int tamanho)
{
    int i=0;
    FILE *fp;
    char *tmp,buf[256];
    if((fp = fopen("departamento.csv","r")) == NULL)
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
        vDep[i].numero = atoi(tmp);//Atoi transforma um string em numero inteiro

        tmp = strtok(NULL, ";");
        strcpy(vDep[i].nome,tmp);//strcpty copia o valor de uma string em outra.

        tmp = strtok(NULL, ";");
        vDep[i].numeroFuncGer = atoi(tmp);

        tmp = strtok(NULL, ";");
        strcpy(vDep[i].dataIni,tmp);

        i++; // incrementa o i
    }

    fclose(fp);
}
