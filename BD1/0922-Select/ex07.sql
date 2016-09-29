select f.numero, f.nome, f.salario, d.dataIni from funcionario f, departamento d where f.numero = d.numeroFuncGer and f.salario > 6000 and d.dataIni < date_sub(curdate(), interval 3 year);
