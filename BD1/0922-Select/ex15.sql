select f.numero, f.nome from funcionario f where not exists (select * from departamento d where f.numero = d.numeroFuncGer);
