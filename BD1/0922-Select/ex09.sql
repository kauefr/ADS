select distinct p.nome, (select sum(fp2.horas) from participafp as fp2 where fp2.numeroproj = fp1.numeroproj) from participafp as fp1, projeto as p where fp1.numeroproj = p.numero;
