#   Alunas: 
# Carolaine dos Santos,
# Maria E.Benevenutti, 
# Emanuele V.Pries.

create database biblioteca;
use biblioteca;

create table pais (
  cod_pais int unsigned not null auto_increment,
  nome varchar(70),
  sigla varchar(2),
  primary key(cod_pais)
);

CREATE TABLE estado (
  cod_est INT UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(70),
  sigla VARCHAR(2),
  cod_pais INT UNSIGNED,
  PRIMARY KEY(cod_est),
  FOREIGN KEY(cod_pais) REFERENCES pais(cod_pais)
);

CREATE TABLE cidade (
  cod_cidade INT UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(90) NOT NULL,
  qtde_pop INT,
  cod_est INT UNSIGNED,
  PRIMARY KEY(cod_cidade),
  FOREIGN KEY(cod_est) REFERENCES estado(cod_est)
);

create table livro (
	cod_livro int unsigned not null auto_increment,
    nome_autor varchar(100) not null,
    isbn varchar(15) not null,        
    titulo varchar(100),
    qntd_estoque int unsigned,
    id_editora int unsigned not null,
	primary key(cod_livro),
    foreign key(id_editora) REFERENCES biblioteca.editora(id_editora)
);

create table compra (
	cod_compra int unsigned not null auto_increment,
    qntd_livro int unsigned,
    dt_venda date not null,
    cod_cliente int unsigned not null,
    cod_livro int unsigned not null,
    primary key(cod_compra),
    foreign key(cod_cliente) references biblioteca.cliente(cod_cliente),
    foreign key(cod_livro) references biblioteca.livro(cod_livro)
);
    
create table cliente (
	cod_cliente int unsigned not null auto_increment,
	nome varchar(50) not null,
	dt_nasc date,
	email varchar(80),
	telefone varchar(12) not null,
	cpf varchar(12) not null,
    cod_cidade INT UNSIGNED not null,
	primary key(cod_cliente),
	foreign key(cod_cidade) references biblioteca.cidade(cod_cidade)
);

create table editora (
	id_editora int unsigned not null auto_increment,
	nome_edit varchar(90),
	gerente varchar(50),
	cnpj varchar(15) not null,
	email varchar(50),
	tel varchar(12),
    cod_cidade INT UNSIGNED not null,
	primary key(id_editora),
	foreign key(cod_cidade) references cidade(cod_cidade)
);

create table autor (
	cod_autor int unsigned not null auto_increment,
    nome varchar(90),
    cpf varchar(11) not null,
    tel varchar(12), 
    email varchar(80),
    dt_nasc date,
    cod_cidade int unsigned not null,
    id_editora int unsigned not null,
    primary key(cod_autor),
    foreign key(cod_cidade) references cidade(cod_cidade),
    foreign key(id_editora) references editora(id_editora)
);
    
create table genero (
	cod_genero int unsigned not null auto_increment,
    nome_genero varchar(90) not null,
    primary key(cod_genero)
);

create table obras (
	cod_obras int unsigned not null auto_increment,
    nome varchar(90),
    dt_publicacao date,
    cod_cidade int unsigned not null,
    id_editora int unsigned not null,
    cod_autor int unsigned not null,
    cod_livro int unsigned not null,
    cod_genero int unsigned not null,
    primary key(cod_obras),
    foreign key(cod_cidade) references cidade(cod_cidade),
    foreign key(id_editora) references editora(id_editora),
    foreign key(cod_autor) references autor(cod_autor),
    foreign key(cod_livro) references livro(cod_livro),
    foreign key(cod_genero) references genero(cod_genero)
);

create table assunto(
	cod_assunto int unsigned not null auto_increment,
    cod_livro int unsigned not null,
    cod_genero int unsigned not null,
    primary key(cod_assunto),
    foreign key(cod_livro) references livro(cod_livro),
    foreign key(cod_genero) references genero(cod_genero)
);
#=================================================================================================#

# Inserindo Dados 

insert into biblioteca.pais(nome, sigla)   
values
('Brasil', 'BR'),
('Canadá', 'CA'),
('França', 'FR'),
('Alemanha', 'DE'),
('Estados Unidos', 'US');

insert into biblioteca.estado(nome, sigla, cod_pais) 
values 
('Santa Catarina', null, 1),
('Ontário', null, 2),
('Île-de-France', null, 3), 
('Berlim', null, 4),
('Nova Iorque', null, 5);

insert into biblioteca.cidade(nome, qtde_pop, cod_est) 
values 
('Florianópolis', 616.323, 1),
('Toronto', NULL, 2),
('Paris', NULL, 3),
('Berlim', NULL, 4),
('Nova Yorque', NULL, 5);

insert into biblioteca.genero(nome_genero) 
values 
('Romance'),
('Fantasia'),
('Ficção Científica'),
('Mistério'),
('Autoajuda');

insert into biblioteca.cliente(nome, dt_nasc, email, telefone, cpf, cod_cidade) 
values 
('João Silva', '1990-05-15', 'joao.silva@email.com', '111-2345678', '123445678900', 1),
('Maria Souza', '1985-09-20', 'maria.souza@email.com', '219-8765432', '598765432100', 1),
('Pedro Santos', '1995-03-10', 'pedro.santos@email.com', '311-1112222', '211122233300', 3),
('Ana Lima', '1980-11-25', 'ana.lima@email.com', '4155556666', '424433322200', 2),
('Luiz Oliveira', '1988-07-03', 'luiz.oliveira@email.com', '517-7778888', '551566677700', 5);

insert into biblioteca.editora(nome_edit, gerente, cnpj, email, tel, cod_cidade) 
values 
('Editora BR', 'Carlos Silva', '123456789000123', 'contato@editoraabr.com', '111-234-5678', 1),
('Editora CA', 'Maria Santos', '987654321000234', 'contato@editoraca.com', '219-876-5432', 2),
('Editora FR', 'Pedro Alves', '111222333000345', 'contato@editorafr.com', '311-111-2222', 3),
('Editora DE', 'Ana Lima', '444333222000456', 'contato@editorade.com', '415-555-6666', 4),
('Editora EUA', 'Luiz Oliveira', '555666777000567', 'contato@editoraeua.com', '517-777-8888', 5);

insert into biblioteca.livro(nome_autor, isbn, titulo, qntd_estoque, id_editora) 
values 
('Rachael Lippincott', 12345678910, 'A Cinco Passos de Você', 50, 1),
('J.R.R.Tolkien', 23456789011, 'O Hobbit', 30, 2),
('Frank Herbert ', 34567890112, 'Duna', 40, 3),
('A.J.Finn', 45678901213, 'A Mulher na Janela', 25, 4),
('Norman Doidge', 56789012341, 'O cérebro que se transforma', 60, 5);

insert into biblioteca.assunto(cod_livro, cod_genero) 
values 
(1, 1), 
(2, 2), 
(3, 1), 
(4, 3), 
(5, 2); 

insert into biblioteca.compra(qntd_livro, dt_venda, cod_cliente, cod_livro) 
values 
(3, '2023-10-18', 1, 1), 
(2, '2023-11-17', 1, 2), 
(4, '2023-05-16', 3, 1), 
(1, '2023-07-15', 2, 4), 
(5, '2023-05-14', 5, 5);

insert into biblioteca.autor(nome, cpf, tel, email, dt_nasc, cod_cidade, id_editora) 
values 
('Rachael Lippincott', '123-4567890', '111234-5678', 'rl@email.com', '1990-05-15', 1, 1),
('J.R.R.Tolkien', '987-6543210', '219876-5432', 'jrrt@email.com', '1985-09-20', 2, 2),
('Frank Herbert', '111-2223330', '311111-2222', 'fh@email.com', '1995-03-10', 3, 3),
('A.J.Finn', '444-3332220', '415555-6666', 'ajf@email.com', '1980-11-25', 4, 4),
('Norman Doidge', '555-6697770', '517777-8888', 'nd@email.com', '1988-07-03', 5, 3);

insert into biblioteca.obras(nome, dt_publicacao, cod_cidade, id_editora, cod_autor, cod_livro, cod_genero) 
values 
('A Cinco Passos de Você', '2019-02-25', 1, 1, 1, 1, 1), 
('O Hobbit', '1937-09-21', 2, 2, 2, 2, 2), 
('Duna', '1965-08-16', 3, 3, 3, 3, 3), 
('A Mulher na Janela', '2018-03-05', 4, 4, 4, 4, 4), 
('O cérebro que se transforma', '2007-03-15', 5, 5, 5, 5, 5); 

