/*Kauê Rodrigues - 160041-9*/
create database empresa;
use empresa;

/*Kauê Rodrigues - 160041-9*/
create table departamento (
	codigo integer not null unique,
	nome varchar(50),

	primary key (codigo)
);

/*Kauê Rodrigues - 160041-9*/
create table empregado (
	cpf char(11) not null unique,
	nome varchar(50),
	salario integer,
	cod_departamento integer,

	primary key (cpf),
	foreign key (cod_departamento) references departamento(codigo)
);

/*Kauê Rodrigues - 160041-9*/
create table processador (
	codigo integer not null unique,
	nome varchar(50),

	primary key (codigo)
);

/*Kauê Rodrigues - 160041-9*/
create table ramo (
	codigo integer not null unique,
	nome varchar(50),

	primary key (codigo)
);

/*Kauê Rodrigues - 160041-9*/
create table projeto (
	codigo integer not null unique,
	nome varchar(50),

	primary key (codigo)
);

/*Kauê Rodrigues - 160041-9*/
create table motorista (
	cpf char(11),
	cnh char(11),

	primary key (cpf),
	foreign key (cpf) references empregado (cpf)
);

/*Kauê Rodrigues - 160041-9*/
create table secretario (
	cpf char(11),
	login varchar(50),
	senha varchar(50),

	primary key (cpf),
	foreign key (cpf) references empregado (cpf)
);

/*Kauê Rodrigues - 160041-9*/
create table engenheiro (
	cpf char(11),
	crea char(10),
	cod_ramo integer,

	primary key (cpf),
	foreign key (cpf) references empregado (cpf),
	foreign key (cod_ramo) references ramo (codigo)
);

/*Kauê Rodrigues - 160041-9*/
create table domina_sp (
	cpf char(11),
	cod_processador integer,

	primary key (cpf, cod_processador),
	foreign key (cpf) references secretario (cpf),
	foreign key (cod_processador) references processador (codigo)
);

/*Kauê Rodrigues - 160041-9*/
create table participa_ep (
	cpf char(11),
	cod_projeto integer,

	primary key (cpf, cod_projeto),
	foreign key (cpf) references engenheiro (cpf),
	foreign key (cod_projeto) references projeto (codigo)
);
