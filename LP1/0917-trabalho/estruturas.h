#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H
struct Funcionario
{
    int numero;
    char nome[50];
    char rua[50];
    int nro;
    char cep[10];
    char estado[50];
    float salario;
    int numeroSuper;
    int numeroDepto;
};
typedef struct Funcionario func;

struct Departamento
{
    int numero;
    char nome[50];
    int numeroFuncGer;
    char dataIni[20];
};
typedef struct Departamento depto;
#endif //ESTRUTURAS_H
