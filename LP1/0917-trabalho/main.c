#include <stdio.h>
#include "estruturas.h"
#include "funcionario.h"
#include "departamento.h"

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
    
    return 0;
}
