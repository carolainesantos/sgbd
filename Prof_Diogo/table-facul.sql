# Aluna: Carolaine dos Santos

CREATE DATABASE Faculdade;
use faculdade;

create table faculdade.pais (
  cod_pais int unsigned not null auto_increment,
  nome varchar(70),
  sigla varchar(2),
  primary key(cod_pais)
);

CREATE TABLE faculdade.estado (
  cod_est INT UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(70),
  sigla VARCHAR(2),
  cod_pais INT UNSIGNED,
  PRIMARY KEY (cod_est),
  FOREIGN KEY (cod_pais) REFERENCES pais(cod_pais)
);

CREATE TABLE faculdade.cidade (
  cod_cidade INT UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(90) NOT NULL,
  qtde_pop INT,
  cod_est INT UNSIGNED,
  PRIMARY KEY (cod_cidade),
  FOREIGN KEY (cod_est) REFERENCES estado(cod_est)
);

create table faculdade.aluno (
  id_aluno int unsigned not null auto_increment,
  nro_matricula int(50),
  nome varchar(100) not null, 
  dt_nasc date,
  nro_cpf varchar(11),
  tel varchar(12),
  email varchar(50), 
  possui_bolsa tinyint,
  cod_cidade INT UNSIGNED,
  primary key(id_aluno),
  foreign key(cod_cidade) references cidade(cod_cidade)
);

CREATE TABLE faculdade.salario (
  cod_salario INT UNSIGNED NOT NULL AUTO_INCREMENT,
  valor_pago DECIMAL(10, 2),
  dt_ulti_pag DATE,
  tot_salario DECIMAL(10, 2),
  PRIMARY KEY (cod_salario)
);

CREATE TABLE faculdade.professor (
  id_prof INT UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(100) NOT NULL,
  nro_cpf VARCHAR(11),
  dt_nasc DATE,
  email VARCHAR(60),
  tel VARCHAR(12),
  cod_cidade INT UNSIGNED,
  cod_salario INT UNSIGNED, 
  PRIMARY KEY (id_prof),
  FOREIGN KEY (cod_cidade) REFERENCES faculdade.cidade(cod_cidade),
  FOREIGN KEY (cod_salario) REFERENCES faculdade.salario(cod_salario)
);

create table faculdade.curso (
  id_curso int unsigned not null auto_increment,
  nome varchar(70) not null,
  valor_curso decimal, 
  primary key(id_curso)
);

CREATE TABLE faculdade.materia (
  id_materia INT UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(90),
  id_prof INT UNSIGNED, 
  id_curso INT UNSIGNED, 
  PRIMARY KEY (id_materia),
  FOREIGN KEY (id_prof) REFERENCES faculdade.professor(id_prof),
  FOREIGN KEY (id_curso) REFERENCES faculdade.curso(id_curso)
);

CREATE TABLE faculdade.mensalidade (
  id_mensal INT UNSIGNED NOT NULL AUTO_INCREMENT,
  valor_pago DECIMAL(10, 2),
  valor_boleto DECIMAL(10, 2),
  dt_pago DATE,
  id_aluno INT UNSIGNED, 
  PRIMARY KEY (id_mensal),
  FOREIGN KEY (id_aluno) REFERENCES faculdade.aluno(id_aluno)
);

CREATE TABLE faculdade.grau_academ (
  id_grau_academ INT UNSIGNED NOT NULL AUTO_INCREMENT,
  instituicao VARCHAR(60),
  tecnico TINYINT,
  graduado TINYINT,
  especialista TINYINT,
  mestre TINYINT,
  doutor TINYINT,
  id_prof INT UNSIGNED, 
  PRIMARY KEY (id_grau_academ),
  FOREIGN KEY (id_prof) REFERENCES faculdade.professor(id_prof)
);

CREATE TABLE faculdade.avaliacoes (
  id_avaliacao INT UNSIGNED NOT NULL AUTO_INCREMENT,
  peso_prova INT,
  peso_trab INT,
  nota_prova INT,
  nota_trab INT,
  dt DATE,
  id_aluno INT UNSIGNED,
  PRIMARY KEY (id_avaliacao),
  FOREIGN KEY (id_aluno) REFERENCES faculdade.aluno(id_aluno)
);

CREATE TABLE faculdade.curso_prof (
  id_prof INT UNSIGNED NOT NULL,
  id_curso INT UNSIGNED NOT NULL,
  PRIMARY KEY (id_prof, id_curso),
  FOREIGN KEY (id_prof) REFERENCES professor(id_prof),
  FOREIGN KEY (id_curso) REFERENCES curso(id_curso)
);

CREATE TABLE faculdade.hist_frequencia (
  cod_hist_freq INT UNSIGNED NOT NULL AUTO_INCREMENT,
  qtde_falta INT,
  dt_falta DATE,
  id_aluno INT UNSIGNED,
  PRIMARY KEY (cod_hist_freq),
  FOREIGN KEY (id_aluno) REFERENCES faculdade.aluno(id_aluno)
);


