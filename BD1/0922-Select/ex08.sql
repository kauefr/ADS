select * from funcionario where salario = (select max(salario) from funcionario);
