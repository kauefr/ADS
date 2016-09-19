#include <stdio.h>
#include "estruturas.h"
#include "funcionario.h"
#include "departamento.h"
#include "consultas.h"

int main()
{
    func vFunc[100];
    depto vDep[10];
    int tamanhoFunc=100, tamanhoDep=10;

    //Funcionario
    populaVetorFunc(vFunc,tamanhoFunc);
    imprimeVetorFunc(vFunc,tamanhoFunc);

    //Departamento
    populaVetorDep(vDep,tamanhoDep);
    imprimeVetorDep(vDep,tamanhoDep);


    //Struct para armazenar nome e salario de funcionarios de um departamento
    NomeSalario ns[100];

    //Abrir o arquivo de saída
    FILE *resultado = fopen("Resultado.txt", "w");
    if(NULL == resultado)
    {
        printf("Nao foi possivel abrir o arquivo Resultado.txt\n");
        return -1;
    }

    //Soma dos salários
    fprintf(resultado, "%lf\n", soma_salarios(vFunc, tamanhoFunc));

    //Média salarial
    fprintf(resultado, "%lf\n", media_salarial(vFunc, tamanhoFunc));

    //Nome dos funcionários do Dep Eng Software
    int numero_de_funcionarios = nome_salario_por_departamento(vFunc, tamanhoFunc, get_departamento(vDep, tamanhoDep, "Dep Eng Software"), ns);
    for(int i=0; i<numero_de_funcionarios; i++)
    {
        fprintf(resultado, "%s\n", ns[i].nome);
    }

    //Média salarial dos funcionários de 3 departamentos
    char departamentos[3][50] = {"Dep Eng Software", "Dep Computacao", "Dep IA"};
    for(int i=0; i<3; i++)
    {
        fprintf(resultado, "%lf\n", media_salarial_por_departamento(vFunc, tamanhoFunc, get_departamento(vDep, tamanhoDep, departamentos[i])));
    }

    //Nome e salário de funcionários de cada departamento
    for(int i=1; i<=10; i++)
    {
        int numero_de_funcionarios = nome_salario_por_departamento(vFunc, tamanhoFunc, i, ns);
        for(int j=0; j<numero_de_funcionarios; j++)
        {
            fprintf(resultado, "%s %f\n", ns[j].nome, ns[j].salario);
        }
    }

    fclose(resultado);
    return 0;
}
