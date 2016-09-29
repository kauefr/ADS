select f1.nome, f2.nome from funcionario as f1, funcionario as f2, departamento as d where f2.numero = d.numeroFuncGer and d.numero = f1.numerodepto order by f1.nome;
