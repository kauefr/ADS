#ifndef CONSULTAS_H
#define CONSULTAS_H

#include <stdio.h>

#include "estruturas.h"

typedef struct _NomeSalario
{
    char nome[50];        
    float salario;
} NomeSalario;

double soma_salarios(func *vetorFunc, int tamanhoVetor);
double media_salarial(func *vetorFunc, int tamanhoVetor);
int get_departamento(depto *vetorDepto, int tamanhoVetor, char *nome);
double media_salarial_por_departamento(func *vetorFunc, int tamanhoVetor, int numeroDepartamento);
int nome_salario_por_departamento(func *vetorFunc, int tamanhoVetor, int numeroDepartamento, NomeSalario *retorno);
#endif //CONSULTAS_H
