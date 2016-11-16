/*Kauê Rodrigues - 160041-9*/
insert into departamento (codigo, nome) values
(1,"RH"),
(2,"TI"),
(3,"Finanças"),
(4,"Operações");

/*Kauê Rodrigues - 160041-9*/
insert into empregado (cpf, nome, salario, cod_departamento) values
("83677260172","João",9532,1),
("74322417364","Maria",1957,4),
("78749829395","José",7123,2),
("11285262885","Marta",1575,4),
("43441908815","Marcos",8177,1),
("94713028911","Adriana",7780,2),
("41998530379","Mateus",4200,3),
("77841457235","Carla",6795,3),
("65890005975","Carlos",1697,1),
("35185862770","Marina",7818,3),
("83948273841","Luiz",1234,4),
("34235234123","Lúcia",3421,2),
("12314514245","Jonas",4567,4);

/*Kauê Rodrigues - 160041-9*/
insert into secretario (cpf, login, senha) values
("11285262885","marta","1234"),
("43441908815","marcos","2345"),
("94713028911","adriana","3456"),
("41998530379","mateus","4567");

/*Kauê Rodrigues - 160041-9*/
insert into motorista (cpf, cnh) values
("77841457235","12341234512"),
("65890005975","38594837283");

/*Kauê Rodrigues - 160041-9*/
insert into ramo (codigo, nome) values
(1,"civil"),
(2,"mecânico");

/*Kauê Rodrigues - 160041-9*/
insert into engenheiro (cpf, crea, cod_ramo) values
("35185862770","1234567898",1),
("83948273841","4829348273",2),
("34235234123","1231239419",2),
("12314514245","3842394234",1);

/*Kauê Rodrigues - 160041-9*/
insert into projeto (codigo, nome) values
(1,"umbrella"),
(2,"capsule");

/*Kauê Rodrigues - 160041-9*/
insert into processador (codigo, nome) values
(1,"word"),
(2,"excel"),
(3,"powerpoint");

/*Kauê Rodrigues - 160041-9*/
insert into domina_sp (cpf, cod_processador) values
("11285262885",1),
("43441908815",2),
("94713028911",3),
("41998530379",1),
("11285262885",2),
("43441908815",3),
("94713028911",1),
("41998530379",2);

/*Kauê Rodrigues - 160041-9*/
insert into participa_ep (cpf, cod_projeto) values
("35185862770",1),
("83948273841",2),
("34235234123",2);
