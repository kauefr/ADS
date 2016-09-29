select f.nome from funcionario f, departamento d where f.numero = d.numeroFuncGer and (f.nome like '_ND%' or f.nome like '_LA%');
