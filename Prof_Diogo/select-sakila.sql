
select primeiro_nome from sakila.ator where primeiro_nome like "An%";

select distinct primeiro_nome from sakila.ator where primeiro_nome like "An%";

select count(primeiro_nome) from sakila.ator 
		where primeiro_nome like "An%";
        
        
select count(distinct primeiro_nome) from sakila.ator 
		where primeiro_nome like "An%";
        
select distinct primeiro_nome, ultimo_nome from sakila.ator 
		where primeiro_nome like "An%";
        

select count(*) from sakila.ator;
select count(ator_id) from sakila.ator where ultimo_nome like 'W%'; # forma mais correta 

SELECT SUM(valor) from sakila.pagamento;
SELECT SUM(valor) from sakila.pagamento where cliente_id=1;
SELECT SUM(valor) from sakila.pagamento where funcionario_id=1;
SELECT SUM(valor) from sakila.pagamento where funcionario_id=2;


SELECT avg(valor) from sakila.pagamento;
SELECT sum(valor) / count(valor) from sakila.pagamento;
SELECT max(valor) from sakila.pagamento;
SELECT min(valor) from sakila.pagamento;

# truncate nao mostra oq estiver depois da virgula 

select round(sum(valor),1) from sakila.pagamento;
select ceiling(sum(valor)) from sakila.pagamento; # arredonda pra cima, pra mais 
select floor(sum(valor)) from sakila.pagamento; # arredonda pra baixo, pra menos 

select round(max(preco_da_locacao),1) from sakila.filme 
		where titulo like 'A%';

select concat(primeiro_nome, ultimo_nome) from sakila.cliente limit 10;

select concat(primeiro_nome," ", ultimo_nome) 
		from sakila.cliente limit 10;
        
select cliente_id AS "ID",concat(primeiro_nome," ", ultimo_nome) AS "Nome Completo"
			from sakila.cliente limit 10;

select cliente_id AS "ID",LOWER(concat(primeiro_nome," ", ultimo_nome)) AS "Nome Completo"
			from sakila.cliente limit 10;
            
select concat("R$ ",valor) AS "Valor Pagamento",
			date_format(data_de_pagamento,"%d/%m/%Y %H:%im%ss") # ou, "%d/%m/%Y %H:%i:%s"
            AS "Data de Pagamento"
            from sakila.pagamento limit 10;

select ultimo_nome from sakila.ator group by ultimo_nome;

select ultimo_nome, count(*) from sakila.ator 
	group by ultimo_nome; 
            
select ultimo_nome, count(*) from sakila.ator 
	group by ultimo_nome having count(*) > 3; # filtar os agrupamentos
            
select ultimo_nome, count(*) from sakila.ator 
	group by ultimo_nome order by count(*) desc;

select cliente_id, sum(valor) from sakila.pagamento 
	group by cliente_id
	order by sum(valor) desc limit 5;

select cliente_id, count(aluguel_id) AS "Número de Locações" from sakila.aluguel
	group by cliente_id
	order by count(aluguel_id) desc limit 5;
    
    
    # criar e inserir um banco de dados na prova = fazer = update / delete / drop / inserts  
    