create database sistemavenda;
use sistemavenda;
create table vendedor (
	nro_vend int unsigned not null auto_increment,
    nome_vend varchar(50) not null,
    idade_vend tinyint unsigned null,
    primary key(nro_vend)
);
drop table cliente;
create table cliente (
	nro_cliente int unsigned not null auto_increment,
    nome_cliente varchar(50) not null,
    endereco varchar(80) null,
    complemento varchar(80) null,
    primary key(nro_cliente)
);
create table venda (
	nro_venda int unsigned not null auto_increment,
    vendedor_nro_vend int unsigned not null,
    cliente_nro_cliente int unsigned not null,
    data_venda datetime not null default current_timestamp,
    primary key(nro_venda),
    foreign key(vendedor_nro_vend) references vendedor(nro_vend),
    foreign key(cliente_nro_cliente) references cliente(nro_cliente)
);