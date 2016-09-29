select f.numero, f.nome from funcionario f, dependente d where d.numerofunc = f.numero and d.dataniver < date_sub(curdate(), interval 18 year) and d.parentesco like 'Filho';
