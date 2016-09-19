#include "consultas.h"

#include <string.h>

double soma_salarios(func *vetorFunc, int tamanhoVetor)
{
    double soma = 0.0;
    for(int i=0; i<tamanhoVetor; i++)
    {
        soma += vetorFunc[i].salario;
    }
    return soma;
}

double media_salarial(func *vetorFunc, int tamanhoVetor)
{
    return soma_salarios(vetorFunc, tamanhoVetor) / (double) tamanhoVetor;
}

int get_departamento(depto *vetorDepto, int tamanhoVetor, char *nome)
{
    for(int i=0; i<tamanhoVetor; i++)
    {
        if(!strcmp(nome, vetorDepto[i].nome))
        {
            return vetorDepto[i].numero;
        }
    }
    return 0;
}

double media_salarial_por_departamento(func *vetorFunc, int tamanhoVetor, int numeroDepartamento)
{
    double soma = 0.0;
    int numero_de_funcionarios = 0;
    for(int i=0; i<tamanhoVetor; i++)
    {
        if(vetorFunc[i].numeroDepto == numeroDepartamento)
        {
            soma += vetorFunc[i].salario;
            numero_de_funcionarios++;
        }
    }
    return soma / (double)numero_de_funcionarios;
}

int nome_salario_por_departamento(func *vetorFunc, int tamanhoVetor, int numeroDepartamento, NomeSalario *retorno)
{
    int numero_de_funcionarios = 0;

    for(int i=0; i<tamanhoVetor; i++)
    {
        if(vetorFunc[i].numeroDepto == numeroDepartamento)
        {
            strcpy(retorno[numero_de_funcionarios].nome, vetorFunc[i].nome);
            retorno[numero_de_funcionarios].salario = vetorFunc[i].salario;
            numero_de_funcionarios++;
        }
    }
    return numero_de_funcionarios;
}

