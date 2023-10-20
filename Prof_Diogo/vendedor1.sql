SELECT * FROM sistemavenda.vendedor;

insert into sistemavenda.vendedor(nome_vend) values("Maria");
insert into sistemavenda.vendedor(nome_vend) values("Elisangela");
insert into sistemavenda.vendedor(nome_vend,idade_vend) values("Walter",79);
insert into sistemavenda.vendedor values(null,"Claudia",44);
insert into sistemavenda.vendedor values(null,"Diogo",39);

select * from vendedor;

insert into sistemavenda.vendedor values (31, "Ana", 23);

INSERT INTO sistemavenda.vendedor(nome_vend) VALUES ("Robson");
INSERT INTO sistemavenda.vendedor(nome_vend,idade_vend) 
   VALUES ("Vergolini Ferreira",18);
INSERT INTO sistemavenda.vendedor 
   VALUES (NULL,50,"Ronaldo dos Santos");
INSERT INTO sistemavenda.vendedor 
   VALUES (NULL,"Ronaldo dos Santos",50);    
INSERT INTO sistemavenda.vendedor 
   VALUES (NULL,NULL,35); 
INSERT INTO sistemavenda.vendedor 
   VALUES (NULL,"Romário Mathias",NULL);
INSERT INTO sistemavenda.vendedor 
   VALUES (30,"Cleberson Cleverson","51");
INSERT INTO sistemavenda.vendedor 
   VALUES (NULL,"Deverson Emerson Moreira da Silva Costa de 
   Orleans Bragança de Moraes Silva e 
   Pereira dos Santos Brasil",10);
INSERT INTO sistemavenda.vendedor 
   VALUES (30,"Joarez Pá",54);
INSERT INTO sistemavenda.vendedor 
   VALUES (NULL,"Joarez Pá",54987987985785877687657645645869707654678976578965);
   
   update sistemavenda.vendedor set idade_vend=30
	where nome_vend="Robson";
    
update sistemavenda.vendedor set idade_vend=0
	where idade_vend is null; 
    
delete from sistemavenda.vendedor where nro_vend=31;

update sistemavenda.vendedor set idade_vend=45
	where nome_vend="Joarez Pá";
    
