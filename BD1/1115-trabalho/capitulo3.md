#entidades
Departamento: nome codigo empregado
Empregado: nome cpf salario
secretario: processadores de texto login senha
processadores de texto: nome codigo
motorista: cnh
engenheiro: crea ramo projetos
ramo: codigo nome
projetos: nome codigo

#relacionamentos
dep 1 – lotado – n funcionário
secretario n – sabe – n processadores de texto
engenheiro n – atua – 1 ramo
engenheiro n - participa - n projeto

#tabelas
departamento = {_codigo, nome}
empregado = {_cpf, nome, salario, cod-departamento}
processador = {_codigo, nome}
ramo = {_codigo, nome}
projeto = {_codigo, nome}
motorista = {_cpf, cnh}
secretario = {_cpf, login, senha}
engenheiro = {_cpf, crea, cod-ramo}
projeto = {_codigo, nome}

secretario_processador = {_cpf, _cod-processador}
engenheiro-projeto = {_cpf, _cod-projeto}
