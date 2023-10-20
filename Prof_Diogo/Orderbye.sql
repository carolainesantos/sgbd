select nome_vend from sistemavenda.vendedor;
select nome_vend, idade_vend from sistemavenda.vendedor;
select nome_vend, idade_vend from sistemavenda.vendedor 
	order by nome_vend;

select nome_vend, idade_vend from sistemavenda.vendedor 
	order by nome_vend desc;

select nome_vend, idade_vend from sistemavenda.vendedor 
	order by idade_vend, nome_vend desc;

select * from sistemavenda.vendedor 
	order by idade_vend desc limit 3;
    
select * from sistemavenda.vendedor
	order by nome_vend desc limit 3,2;

select * from sistemavenda.vendedor 
	where nome_vend in ("Robson", "Joarez Pá");
    
select * from sistemavenda.vendedor 
	where nome_vend not in ("Robson", "Joarez Pá");
    