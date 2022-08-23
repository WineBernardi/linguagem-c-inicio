CREATE TABLE Cargos (
codigo_cargo int not null auto_increment primary key,
descricao_cargo varchar(50) not null,
salario varchar(40) not null
);

CREATE TABLE Empregados (
codigo_empregado int not null auto_increment primary key,
nome_empregado varchar(50)
);


CREATE TABLE Setores (
codigo_setor int not null auto_increment primary key,
descricao_setor varchar(50)
);