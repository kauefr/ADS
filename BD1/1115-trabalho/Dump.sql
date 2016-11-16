-- MySQL dump 10.16  Distrib 10.1.19-MariaDB, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: localhost
-- ------------------------------------------------------
-- Server version	10.1.19-MariaDB-1~xenial

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `departamento`
--

DROP TABLE IF EXISTS `departamento`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `departamento` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `departamento`
--

LOCK TABLES `departamento` WRITE;
/*!40000 ALTER TABLE `departamento` DISABLE KEYS */;
INSERT INTO `departamento` VALUES (1,'RH'),(2,'TI'),(3,'Finanças'),(4,'Operações');
/*!40000 ALTER TABLE `departamento` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `domina_sp`
--

DROP TABLE IF EXISTS `domina_sp`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `domina_sp` (
  `cpf` char(11) NOT NULL,
  `cod_processador` int(11) NOT NULL,
  PRIMARY KEY (`cpf`,`cod_processador`),
  KEY `cod_processador` (`cod_processador`),
  CONSTRAINT `domina_sp_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `secretario` (`cpf`),
  CONSTRAINT `domina_sp_ibfk_2` FOREIGN KEY (`cod_processador`) REFERENCES `processador` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `domina_sp`
--

LOCK TABLES `domina_sp` WRITE;
/*!40000 ALTER TABLE `domina_sp` DISABLE KEYS */;
INSERT INTO `domina_sp` VALUES ('11285262885',1),('11285262885',2),('41998530379',1),('41998530379',2),('43441908815',2),('43441908815',3),('94713028911',1),('94713028911',3);
/*!40000 ALTER TABLE `domina_sp` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `empregado`
--

DROP TABLE IF EXISTS `empregado`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `empregado` (
  `cpf` char(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  `salario` int(11) DEFAULT NULL,
  `cod_departamento` int(11) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  UNIQUE KEY `cpf` (`cpf`),
  KEY `cod_departamento` (`cod_departamento`),
  CONSTRAINT `empregado_ibfk_1` FOREIGN KEY (`cod_departamento`) REFERENCES `departamento` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `empregado`
--

LOCK TABLES `empregado` WRITE;
/*!40000 ALTER TABLE `empregado` DISABLE KEYS */;
INSERT INTO `empregado` VALUES ('11285262885','Marta',1575,4),('12314514245','Jonas',4567,4),('34235234123','Lúcia',3421,2),('35185862770','Marina',7818,3),('41998530379','Mateus',4200,3),('43441908815','Marcos',8177,1),('65890005975','Carlos',1697,1),('74322417364','Maria',1957,4),('77841457235','Carla',6795,3),('78749829395','José',7123,2),('83677260172','João',9532,1),('83948273841','Luiz',1234,4),('94713028911','Adriana',7780,2);
/*!40000 ALTER TABLE `empregado` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `engenheiro`
--

DROP TABLE IF EXISTS `engenheiro`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `engenheiro` (
  `cpf` char(11) NOT NULL,
  `crea` char(10) DEFAULT NULL,
  `cod_ramo` int(11) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  KEY `cod_ramo` (`cod_ramo`),
  CONSTRAINT `engenheiro_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `empregado` (`cpf`),
  CONSTRAINT `engenheiro_ibfk_2` FOREIGN KEY (`cod_ramo`) REFERENCES `ramo` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `engenheiro`
--

LOCK TABLES `engenheiro` WRITE;
/*!40000 ALTER TABLE `engenheiro` DISABLE KEYS */;
INSERT INTO `engenheiro` VALUES ('12314514245','3842394234',1),('34235234123','1231239419',2),('35185862770','1234567898',1),('83948273841','4829348273',2);
/*!40000 ALTER TABLE `engenheiro` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `motorista`
--

DROP TABLE IF EXISTS `motorista`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `motorista` (
  `cpf` char(11) NOT NULL,
  `cnh` char(11) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  CONSTRAINT `motorista_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `empregado` (`cpf`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `motorista`
--

LOCK TABLES `motorista` WRITE;
/*!40000 ALTER TABLE `motorista` DISABLE KEYS */;
INSERT INTO `motorista` VALUES ('65890005975','38594837283'),('77841457235','12341234512');
/*!40000 ALTER TABLE `motorista` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `participa_ep`
--

DROP TABLE IF EXISTS `participa_ep`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `participa_ep` (
  `cpf` char(11) NOT NULL,
  `cod_projeto` int(11) NOT NULL,
  PRIMARY KEY (`cpf`,`cod_projeto`),
  KEY `cod_projeto` (`cod_projeto`),
  CONSTRAINT `participa_ep_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `engenheiro` (`cpf`),
  CONSTRAINT `participa_ep_ibfk_2` FOREIGN KEY (`cod_projeto`) REFERENCES `projeto` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `participa_ep`
--

LOCK TABLES `participa_ep` WRITE;
/*!40000 ALTER TABLE `participa_ep` DISABLE KEYS */;
INSERT INTO `participa_ep` VALUES ('34235234123',2),('35185862770',1),('83948273841',2);
/*!40000 ALTER TABLE `participa_ep` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `processador`
--

DROP TABLE IF EXISTS `processador`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `processador` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `processador`
--

LOCK TABLES `processador` WRITE;
/*!40000 ALTER TABLE `processador` DISABLE KEYS */;
INSERT INTO `processador` VALUES (1,'word'),(2,'excel'),(3,'powerpoint');
/*!40000 ALTER TABLE `processador` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `projeto`
--

DROP TABLE IF EXISTS `projeto`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `projeto` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `projeto`
--

LOCK TABLES `projeto` WRITE;
/*!40000 ALTER TABLE `projeto` DISABLE KEYS */;
INSERT INTO `projeto` VALUES (1,'umbrella'),(2,'capsule');
/*!40000 ALTER TABLE `projeto` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ramo`
--

DROP TABLE IF EXISTS `ramo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ramo` (
  `codigo` int(11) NOT NULL,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  UNIQUE KEY `codigo` (`codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ramo`
--

LOCK TABLES `ramo` WRITE;
/*!40000 ALTER TABLE `ramo` DISABLE KEYS */;
INSERT INTO `ramo` VALUES (1,'civil'),(2,'mecânico');
/*!40000 ALTER TABLE `ramo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `secretario`
--

DROP TABLE IF EXISTS `secretario`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `secretario` (
  `cpf` char(11) NOT NULL,
  `login` varchar(50) DEFAULT NULL,
  `senha` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`cpf`),
  CONSTRAINT `secretario_ibfk_1` FOREIGN KEY (`cpf`) REFERENCES `empregado` (`cpf`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `secretario`
--

LOCK TABLES `secretario` WRITE;
/*!40000 ALTER TABLE `secretario` DISABLE KEYS */;
INSERT INTO `secretario` VALUES ('11285262885','marta','1234'),('41998530379','mateus','4567'),('43441908815','marcos','2345'),('94713028911','adriana','3456');
/*!40000 ALTER TABLE `secretario` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-11-16 21:55:19
