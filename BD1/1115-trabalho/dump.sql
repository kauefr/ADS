CREATE TABLE `departamento` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `departamento` VALUES (1,'RH'),(2,'TI'),(3,'Finanças'),(4,'Operações');
CREATE TABLE `domina_sp` (
  `cpf` char(11) NOT NULL,
  `cod_processador` int(11) NOT NULL,
  PRIMARY KEY (`cpf`,`cod_processador`),
  KEY `cod_processador` (`cod_processador`),
  CONSTRAINT `domina_sp_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `secretario` (`cpf`),
  CONSTRAINT `domina_sp_ibfk_2` FOREIGN KEY (`cod_processador`) REFERENCES `processador` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `domina_sp` VALUES ('11285262885',1),('11285262885',2),('41998530379',1),('41998530379',2),('43441908815',2),('43441908815',3),('94713028911',1),('94713028911',3);
CREATE TABLE `empregado` (
  `cpf` char(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  `salario` int(11) DEFAULT NULL,
  `cod_departamento` int(11) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  UNIQUE KEY `cpf` (`cpf`),
  KEY `cod_departamento` (`cod_departamento`),
  CONSTRAINT `empregado_ibfk_1` FOREIGN KEY (`cod_departamento`) REFERENCES `departamento` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `empregado` VALUES ('11285262885','Marta',1575,4),('12314514245','Jonas',4567,4),('34235234123','Lúcia',3421,2),('35185862770','Marina',7818,3),('41998530379','Mateus',4200,3),('43441908815','Marcos',8177,1),('65890005975','Carlos',1697,1),('74322417364','Maria',1957,4),('77841457235','Carla',6795,3),('78749829395','José',7123,2),('83677260172','João',9532,1),('83948273841','Luiz',1234,4),('94713028911','Adriana',7780,2);
CREATE TABLE `engenheiro` (
  `cpf` char(11) NOT NULL,
  `crea` char(10) DEFAULT NULL,
  `cod_ramo` int(11) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  KEY `cod_ramo` (`cod_ramo`),
  CONSTRAINT `engenheiro_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `empregado` (`cpf`),
  CONSTRAINT `engenheiro_ibfk_2` FOREIGN KEY (`cod_ramo`) REFERENCES `ramo` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `engenheiro` VALUES ('12314514245','3842394234',1),('34235234123','1231239419',2),('35185862770','1234567898',1),('83948273841','4829348273',2);
CREATE TABLE `motorista` (
  `cpf` char(11) NOT NULL,
  `cnh` char(11) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  CONSTRAINT `motorista_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `empregado` (`cpf`)
) TYPE=InnoDB;
INSERT INTO `motorista` VALUES ('65890005975','38594837283'),('77841457235','12341234512');
CREATE TABLE `participa_ep` (
  `cpf` char(11) NOT NULL,
  `cod_projeto` int(11) NOT NULL,
  PRIMARY KEY (`cpf`,`cod_projeto`),
  KEY `cod_projeto` (`cod_projeto`),
  CONSTRAINT `participa_ep_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `engenheiro` (`cpf`),
  CONSTRAINT `participa_ep_ibfk_2` FOREIGN KEY (`cod_projeto`) REFERENCES `projeto` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `participa_ep` VALUES ('34235234123',2),('35185862770',1),('83948273841',2);
CREATE TABLE `processador` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `processador` VALUES (1,'word'),(2,'excel'),(3,'powerpoint');
CREATE TABLE `projeto` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `projeto` VALUES (1,'umbrella'),(2,'capsule');
CREATE TABLE `ramo` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) TYPE=InnoDB;
INSERT INTO `ramo` VALUES (1,'civil'),(2,'mecânico');
CREATE TABLE `secretario` (
  `cpf` char(11) NOT NULL,
  `login` varchar(50) DEFAULT NULL,
  `senha` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  CONSTRAINT `secretario_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `empregado` (`cpf`)
) TYPE=InnoDB;
INSERT INTO `secretario` VALUES ('11285262885','marta','1234'),('41998530379','mateus','4567'),('43441908815','marcos','2345'),('94713028911','adriana','3456');
