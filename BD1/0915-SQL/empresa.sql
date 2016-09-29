-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: 27-Abr-2016 às 14:51
-- Versão do servidor: 10.1.10-MariaDB
-- PHP Version: 5.5.33

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `bd1`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `departamento`
--

CREATE TABLE `departamento` (
  `numero` int(11) NOT NULL,
  `nome` varchar(40) DEFAULT NULL,
  `numeroFuncGer` int(11) DEFAULT NULL,
  `dataIni` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `departamento`
--

INSERT INTO `departamento` (`numero`, `nome`, `numeroFuncGer`, `dataIni`) VALUES
(1, 'Dep Computação', 1, '2016-04-06'),
(2, 'Dep Medicina', 2, '2014-01-19'),
(3, 'Dep Ed. Física', 3, '2016-04-06'),
(4, 'Dep Fisioterapia', 4, '2014-01-19'),
(5, 'Dep Eng Software', 5, '2010-04-06'),
(6, 'Dep IA', 6, '2000-01-19'),
(7, 'Dep Eng Quimica', 10, '1989-04-04'),
(8, 'Dep Letras', 9, '2000-04-19'),
(9, 'Dep RH', 8, '1945-01-01'),
(10, 'Dep Compras', 7, '2011-01-28');

-- --------------------------------------------------------

--
-- Estrutura da tabela `dependente`
--

CREATE TABLE `dependente` (
  `NUMEROFUNC` int(11) NOT NULL,
  `NOME` varchar(50) NOT NULL,
  `DATANIVER` date DEFAULT NULL,
  `PARENTESCO` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `dependente`
--

INSERT INTO `dependente` (`NUMEROFUNC`, `NOME`, `DATANIVER`, `PARENTESCO`) VALUES
(1, 'Filho1 Func 1', '2010-04-06', 'Filho'),
(1, 'Filho2 Func 1', '2006-04-10', 'Filho'),
(2, 'Filho Func 2', '1995-04-04', 'Filho'),
(3, 'Filho Func 3', '1950-04-04', 'Filho');

-- --------------------------------------------------------

--
-- Estrutura da tabela `funcionario`
--

CREATE TABLE `funcionario` (
  `numero` int(11) NOT NULL,
  `nome` varchar(40) DEFAULT NULL,
  `rua` varchar(30) DEFAULT NULL,
  `nro` int(11) DEFAULT NULL,
  `cep` varchar(9) DEFAULT NULL,
  `estado` varchar(4) DEFAULT NULL,
  `salario` float DEFAULT NULL,
  `numerosuper` int(11) DEFAULT NULL,
  `numerodepto` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `funcionario`
--

INSERT INTO `funcionario` (`numero`, `nome`, `rua`, `nro`, `cep`, `estado`, `salario`, `numerosuper`, `numerodepto`) VALUES
(1, 'Palmer J. Ruiz', '4053 Augue St.', 9, '48620', 'King', 6490.88, 10, 1),
(2, 'Xanthus F. Lindsay', 'Ap #694-4959 Est. Rd.', 3, '26347', 'Tail', 7742.49, 5, 2),
(3, 'Kaseem O. Ferguson', '5713 Aliquam Av.', 9, '97246', 'Perp', 7189.84, 2, 3),
(4, 'Wayne L. Middleton', '8813 Metus. St.', 4, '29635', 'Didi', 6650.78, 4, 4),
(5, 'Russell V. Cannon', '3053 Cubilia Street', 4, '49288', 'Swan', 2485.98, 4, 5),
(6, 'Armando Z. Reeves', '838-3658 Arcu. St.', 1, '40027', 'Quea', 5453.97, 9, 6),
(7, 'Arden U. Vasquez', '846-635 Vel Road', 10, '96009', 'Bena', 9848.74, 2, 10),
(8, 'Dylan E. Beasley', '4571 Magna St.', 2, '92518', 'Augu', 1931.48, 1, 9),
(9, 'Cleo K. Rodriguez', 'Ap #586-3639 Mi St.', 1, '48573', 'Le G', 9949.8, 1, 8),
(10, 'Delilah N. Mills', '4951 Duis Rd.', 1, '19894', 'Rost', 6330.71, 9, 7),
(11, 'Xyla L. Moses', 'Ap #465-4381 Nunc Ave', 8, '71414', 'San ', 5732.38, 2, 5),
(12, 'Cole V. Bullock', 'Ap #248-4749 Dignissim Av.', 1, '34449', 'Sain', 1922.28, 4, 4),
(13, 'Isadora X. Schroeder', '927-8816 Ac St.', 10, '61854', 'Ahme', 9153.53, 4, 7),
(14, 'Vanna B. Savage', '923-4050 Vitae, St.', 4, '67128', 'Veld', 9646.74, 6, 2),
(15, 'Thomas Q. Lee', '170 Cras Avenue', 8, '40619', 'Sers', 5699.24, 8, 8),
(16, 'Dahlia J. Haley', 'P.O. Box 771, 4291 Mi Ave', 3, '69643', 'Gees', 9716.71, 1, 2),
(17, 'Kristen U. Stout', 'P.O. Box 210, 8463 At, Av.', 7, '31726', 'Bonn', 3371.19, 10, 7),
(18, 'Hanna R. Cortez', 'P.O. Box 671, 844 Suspendisse ', 10, '50323', 'Lana', 6832.15, 9, 9),
(19, 'Diana A. Frank', 'Ap #946-751 Amet Road', 4, '31657', 'Snel', 3960.42, 2, 2),
(20, 'Angelica S. Ware', 'P.O. Box 274, 6062 Ut St.', 5, '79102', 'Gagl', 5181.95, 4, 2),
(21, 'Erica J. Vance', 'Ap #370-6754 Neque. St.', 9, '17682', 'Bend', 9190.62, 4, 3),
(22, 'Jessica T. Green', '7926 Gravida Ave', 6, '64058', 'Auba', 3338.71, 6, 2),
(23, 'Abel E. Rios', '438-3697 Ut Street', 4, '61289', 'Merr', 7304.54, 8, 7),
(24, 'Brock Y. Valencia', '6644 Feugiat. Street', 6, '50347', 'Alla', 3724.95, 2, 8),
(25, 'Declan W. Dudley', '2569 Suspendisse St.', 8, '89467', 'Stok', 7215.51, 6, 9),
(26, 'Lois A. English', '7967 Leo. Road', 10, '15092', 'Bell', 9381.41, 1, 3),
(27, 'Solomon U. Jordan', 'P.O. Box 807, 8834 Integer Roa', 3, '14416', 'Stir', 8470.45, 8, 5),
(28, 'Kyle U. Webb', '867 Elit Road', 3, '29030', 'Gera', 6287.6, 5, 8),
(29, 'Jolene V. Byrd', 'Ap #844-5435 Mus. St.', 4, '91312', 'Mora', 3931.87, 2, 4),
(30, 'Kitra O. Wilkins', 'Ap #263-2286 Aliquet Av.', 4, '69990', 'Gera', 5177.52, 3, 4),
(31, 'Katell T. Marshall', '499-7134 Molestie. Road', 8, '46732', 'San ', 2183.05, 9, 7),
(32, 'Gisela K. Schroeder', '6986 Est St.', 6, '87109', 'Bama', 5573.08, 6, 2),
(33, 'Indigo K. Lindsey', 'P.O. Box 444, 2849 Ultrices Av', 8, '11028', 'Firo', 9934.45, 2, 8),
(34, 'Cassidy W. Walker', '8905 Sed St.', 10, '87113', 'Rull', 5031.11, 3, 3),
(35, 'Tarik N. Witt', 'P.O. Box 214, 4375 Aliquam Av.', 10, '67515', 'Tamp', 6055.8, 9, 2),
(36, 'Fredericka E. Wong', '5837 Elit Avenue', 1, '55427', 'Mott', 9604.8, 7, 9),
(37, 'Kaye O. Doyle', 'P.O. Box 928, 8183 In Rd.', 3, '90552', 'Ling', 2329.39, 4, 1),
(38, 'Margaret I. Warner', 'Ap #939-2903 Aliquet Av.', 1, '86331', 'Have', 2534.89, 10, 7),
(39, 'Ahmed J. Pickett', 'P.O. Box 339, 6449 Sociosqu Rd', 6, '39260', 'San ', 1982.72, 7, 1),
(40, 'Hyatt D. Becker', '799-5389 Porttitor Road', 6, '66422', 'Nijm', 8319.55, 5, 2),
(41, 'Barbara S. Simpson', '865-3090 Augue, St.', 6, '42843', 'Casp', 2242.57, 4, 9),
(42, 'Griffin Z. Fletcher', 'P.O. Box 487, 2685 Consectetue', 8, '74803', 'Sirs', 5365.38, 3, 8),
(43, 'Nerea B. Lara', '3936 Elit St.', 7, '95047', 'Cape', 2504.08, 3, 10),
(44, 'Neville U. Hatfield', 'Ap #627-9286 Purus, Avenue', 7, '24175', 'Arge', 4929.35, 5, 7),
(45, 'Macey F. Harrington', '312-7900 Ultrices. St.', 10, '99321', 'Nodu', 5188.49, 8, 5),
(46, 'Dennis S. West', '528-5491 Primis St.', 3, '53452', 'Cinc', 6398.6, 3, 1),
(47, 'Emi L. Casey', 'Ap #775-1106 Consectetuer Aven', 6, '21234', 'Monc', 4103.3, 2, 3),
(48, 'Wendy D. Valencia', 'Ap #564-6297 Vel Ave', 8, '17762', 'Luck', 7260.6, 1, 8),
(49, 'Elizabeth J. Kemp', '294-3526 Libero. Avenue', 6, '47402', 'Tiru', 3420.05, 8, 4),
(50, 'Dolan U. Fuentes', 'Ap #299-5074 Aliquam, Av.', 10, '69779', 'La S', 6910.1, 5, 4),
(51, 'Camille B. Murray', '1375 Nam St.', 10, '65916', 'Nure', 4346.84, 9, 6),
(52, 'Kelly Y. Christensen', '3683 Gravida Road', 1, '97861', 'Rosi', 9583.27, 3, 1),
(53, 'Galena J. Donaldson', 'Ap #872-5550 Metus. Rd.', 9, '39203', 'Dave', 4575.09, 7, 3),
(54, 'Boris N. Mcgee', '9267 Nunc St.', 4, '14618', 'Caja', 9497.93, 3, 2),
(55, 'Autumn Z. Charles', '699-4070 Urna Rd.', 5, '73588', 'Kaas', 7086.94, 4, 9),
(56, 'Belle D. Sanders', 'P.O. Box 397, 7529 Adipiscing ', 4, '75862', 'Embl', 4955.36, 2, 1),
(57, 'Pascale R. Payne', 'Ap #367-4793 Urna. St.', 7, '32171', 'Kilm', 2938.93, 6, 6),
(58, 'Natalie R. Barnett', '5992 Metus. St.', 3, '86395', 'Huas', 9359.22, 4, 7),
(59, 'Quin O. Wilkinson', '595-2956 Purus Rd.', 1, '16775', 'Oran', 5754.77, 2, 6),
(60, 'Aurora H. Guthrie', '684-8965 Turpis. Road', 7, '39594', 'Daly', 2445.44, 6, 7),
(61, 'Robert Y. Church', 'P.O. Box 145, 2303 Urna St.', 9, '81755', 'Nieu', 6137.19, 6, 8),
(62, 'Colt H. Mullen', '1265 Et, St.', 8, '54176', 'Vich', 5635, 2, 9),
(63, 'Rowan V. Campos', 'Ap #260-4816 Volutpat Ave', 9, '72247', 'Jack', 4058.26, 10, 10),
(64, 'Ignacia K. Barker', 'P.O. Box 296, 8407 Aliquet, St', 5, '33843', 'Holy', 2663.81, 3, 5),
(65, 'Riley D. Booker', 'Ap #419-5924 Risus. Ave', 4, '94161', 'Smet', 1808.43, 3, 1),
(66, 'Hedda Z. Gonzales', '979-6870 Consectetuer, St.', 5, '10104', 'Köni', 2585.01, 8, 9),
(67, 'Halee U. Bird', '487-7938 Vivamus St.', 7, '99297', 'Luzz', 5970.48, 2, 5),
(68, 'Hadassah N. Randolph', 'P.O. Box 720, 2250 Integer Ave', 9, '50112', 'Mont', 9155.94, 3, 4),
(69, 'Tatyana Y. Pena', '525-2348 Sagittis. St.', 2, '43211', 'Eise', 2805.54, 8, 6),
(70, 'Jolie Q. Hoffman', 'Ap #555-9471 Litora Rd.', 4, '71277', 'Paza', 8543.4, 3, 9),
(71, 'Maxine H. Rivers', '664 Duis Rd.', 8, '94748', 'Olin', 9839.97, 8, 5),
(72, 'Sylvia N. Collins', '335-7871 Natoque Street', 4, '76425', 'Boig', 3657.48, 9, 10),
(73, 'Unity M. Bowers', 'P.O. Box 268, 9516 Pede Avenue', 2, '81221', 'Maid', 7811.08, 4, 2),
(74, 'Ray F. Mcknight', '9246 Senectus Road', 9, '66052', 'Weiß', 3637.73, 9, 10),
(75, 'Edward Z. Leblanc', '4040 Consectetuer, Street', 1, '93001', 'Notr', 6580.43, 5, 3),
(76, 'Nero O. Douglas', '178-770 Volutpat. Rd.', 2, '64358', 'Laur', 6825.2, 5, 6),
(77, 'Callum L. Tillman', '3959 Nulla Road', 10, '20604', 'Piro', 5417.61, 10, 2),
(78, 'Nadine K. Kennedy', 'P.O. Box 397, 6096 In Street', 6, '49206', 'Coih', 4073.25, 5, 8),
(79, 'Felix N. Raymond', '821 Diam. Street', 1, '26127', 'PiŽt', 5879.35, 6, 6),
(80, 'Dominic O. Walton', '859 Semper Rd.', 9, '32591', 'Birm', 4011.16, 3, 3),
(81, 'Elmo X. Castaneda', 'Ap #860-1172 Lobortis St.', 8, '70542', 'Loui', 8903.17, 6, 8),
(82, 'Ivana A. Hays', 'P.O. Box 455, 4919 Nunc St.', 9, '81604', 'Newb', 8446.46, 9, 10),
(83, 'Stacy X. Bass', '701-6929 Cras St.', 8, '54569', 'Denn', 1985.29, 9, 5),
(84, 'Brenda F. Boyer', 'P.O. Box 225, 6143 Lacinia. Ro', 1, '25355', 'Shre', 5628.64, 7, 6),
(85, 'Hayden L. Zamora', '6758 Luctus. Rd.', 1, '32487', 'Perk', 9104.46, 6, 5),
(86, 'Christen J. Good', 'P.O. Box 552, 9750 Arcu. Ave', 7, '38939', 'Viln', 2393.6, 8, 6),
(87, 'Chloe E. Mullins', '9826 Dis Av.', 9, '27181', 'Boec', 5180.24, 1, 3),
(88, 'Paul H. Burns', '572-5630 Pellentesque, St.', 4, '35741', 'Jume', 5671.12, 10, 7),
(89, 'Patricia X. West', '912-3993 Facilisis Street', 3, '95324', 'Aber', 7873.48, 7, 8),
(90, 'Trevor O. Becker', '6472 Et, Ave', 8, '11621', 'Gent', 9934.71, 5, 5),
(91, 'Joel Z. Wallace', 'P.O. Box 928, 7743 Dictum St.', 1, '35622', 'Mont', 2599.67, 5, 4),
(92, 'Fuller V. Trevino', '4070 Arcu St.', 1, '49681', 'Tarz', 9446.76, 8, 3),
(93, 'Emerson G. Vasquez', '9582 Sed Rd.', 8, '53333', 'Rove', 4475.82, 6, 2),
(94, 'Sonia D. Cash', 'P.O. Box 406, 2157 Sagittis. A', 1, '47771', 'Vand', 6727.89, 6, 1),
(95, 'Dorian A. Molina', '6568 Vel Rd.', 10, '65544', 'San ', 4529.38, 1, 9),
(96, 'Sebastian F. Walton', 'P.O. Box 141, 9848 Massa. Rd.', 1, '51152', 'Smit', 5693.84, 5, 1),
(97, 'Yasir M. Barrett', '9985 Mus. Road', 1, '43353', 'Grav', 9206.21, 3, 9),
(98, 'Evelyn M. Franks', 'P.O. Box 828, 3109 At, Av.', 8, '79147', 'New ', 7905.13, 9, 10),
(99, 'Kenneth C. Solomon', '980-8939 Tempor Rd.', 8, '23417', 'Bal‰', 6668.18, 5, 4),
(100, 'Mona X. Olsen', '361-3859 Lorem. Av.', 3, '46085', 'St. ', 3743.67, 9, 10);

-- --------------------------------------------------------

--
-- Estrutura da tabela `localdep`
--

CREATE TABLE `localdep` (
  `NUMERODEPTO` int(11) NOT NULL,
  `LOCALIZACAO` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `localdep`
--

INSERT INTO `localdep` (`NUMERODEPTO`, `LOCALIZACAO`) VALUES
(1, 'Sala 42'),
(2, 'Atrás do AT6'),
(3, 'Academia'),
(3, 'Campo Futebol'),
(3, 'Piscina'),
(4, 'Prédio Azul'),
(5, 'Nuvem'),
(6, 'Google'),
(7, 'Breaking Bad'),
(8, 'Biblioteca'),
(9, 'Prédio Adm'),
(10, 'Wal Mart');

-- --------------------------------------------------------

--
-- Estrutura da tabela `participafp`
--

CREATE TABLE `participafp` (
  `NUMEROFUNC` int(11) NOT NULL,
  `NUMEROPROJ` int(11) NOT NULL,
  `HORAS` time DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `participafp`
--

INSERT INTO `participafp` (`NUMEROFUNC`, `NUMEROPROJ`, `HORAS`) VALUES
(22, 1, '01:11:11'),
(33, 5, '40:00:00'),
(44, 1, '03:11:19'),
(44, 5, '16:07:01'),
(99, 3, '04:17:18');

-- --------------------------------------------------------

--
-- Estrutura da tabela `projeto`
--

CREATE TABLE `projeto` (
  `NUMERO` int(11) NOT NULL,
  `NOME` varchar(50) DEFAULT NULL,
  `NUMERODEPTO` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Extraindo dados da tabela `projeto`
--

INSERT INTO `projeto` (`NUMERO`, `NOME`, `NUMERODEPTO`) VALUES
(1, 'Projeto 10 em BD1', 1),
(2, 'Projeto Fitness', 3),
(3, 'Progamacao OO', 5),
(4, 'Zika Zero', 2),
(5, 'Documentacao Software', 5);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `departamento`
--
ALTER TABLE `departamento`
  ADD PRIMARY KEY (`numero`),
  ADD KEY `numeroFuncGer` (`numeroFuncGer`);

--
-- Indexes for table `dependente`
--
ALTER TABLE `dependente`
  ADD PRIMARY KEY (`NUMEROFUNC`,`NOME`);

--
-- Indexes for table `funcionario`
--
ALTER TABLE `funcionario`
  ADD PRIMARY KEY (`numero`),
  ADD KEY `numerosuper` (`numerosuper`),
  ADD KEY `numerodepto` (`numerodepto`);

--
-- Indexes for table `localdep`
--
ALTER TABLE `localdep`
  ADD PRIMARY KEY (`NUMERODEPTO`,`LOCALIZACAO`);

--
-- Indexes for table `participafp`
--
ALTER TABLE `participafp`
  ADD PRIMARY KEY (`NUMEROFUNC`,`NUMEROPROJ`),
  ADD KEY `NUMEROPROJ` (`NUMEROPROJ`);

--
-- Indexes for table `projeto`
--
ALTER TABLE `projeto`
  ADD PRIMARY KEY (`NUMERO`),
  ADD KEY `NUMERODEPTO` (`NUMERODEPTO`);

--
-- Constraints for dumped tables
--

--
-- Limitadores para a tabela `departamento`
--
ALTER TABLE `departamento`
  ADD CONSTRAINT `departamento_ibfk_1` FOREIGN KEY (`numeroFuncGer`) REFERENCES `funcionario` (`numero`);

--
-- Limitadores para a tabela `dependente`
--
ALTER TABLE `dependente`
  ADD CONSTRAINT `dependente_ibfk_1` FOREIGN KEY (`NUMEROFUNC`) REFERENCES `funcionario` (`numero`);

--
-- Limitadores para a tabela `funcionario`
--
ALTER TABLE `funcionario`
  ADD CONSTRAINT `funcionario_ibfk_1` FOREIGN KEY (`numerosuper`) REFERENCES `funcionario` (`numero`),
  ADD CONSTRAINT `funcionario_ibfk_2` FOREIGN KEY (`numerodepto`) REFERENCES `departamento` (`numero`);

--
-- Limitadores para a tabela `localdep`
--
ALTER TABLE `localdep`
  ADD CONSTRAINT `localdep_ibfk_1` FOREIGN KEY (`NUMERODEPTO`) REFERENCES `departamento` (`numero`);

--
-- Limitadores para a tabela `participafp`
--
ALTER TABLE `participafp`
  ADD CONSTRAINT `participafp_ibfk_1` FOREIGN KEY (`NUMEROFUNC`) REFERENCES `funcionario` (`numero`),
  ADD CONSTRAINT `participafp_ibfk_2` FOREIGN KEY (`NUMEROPROJ`) REFERENCES `projeto` (`NUMERO`);

--
-- Limitadores para a tabela `projeto`
--
ALTER TABLE `projeto`
  ADD CONSTRAINT `projeto_ibfk_1` FOREIGN KEY (`NUMERODEPTO`) REFERENCES `departamento` (`numero`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
