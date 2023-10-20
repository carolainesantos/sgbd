# Aluna: Carolaine dos Santos

use faculdade;

insert into faculdade.pais(nome, sigla) 
values('Brasil', 'BR');

insert into faculdade.estado(nome, sigla, cod_pais) 
values 
('Santa Catarina', null, 1),
('Rio Grande do Sul', null, 1),
('Rio de Janeiro', null, 1), 
('Parana', null, 1),
('Ceara', null, 1);

insert into faculdade.cidade(nome, qtde_pop, cod_est) 
values 
('Joinville', 616.323, 1),
('Rio de Janeiro', 6718903, 2),
('Gramado', 44.643, 3),
('Curitiba', 1773733 , 4),
('Fortaleza', 2686612, 5);

insert into faculdade.salario(valor_pago, dt_ulti_pag, tot_salario) 
values 
(5.000, '2023-10-05', 5.000),
(4.5000, '2023-10-04', 4.5000),
(3.000, '2023-10-03', 3.000),
(10.000, '2023-10-02', 10.000),
(5.000, '2023-10-01', 5.000);

insert into faculdade.professor(nome, nro_cpf, dt_nasc, email, tel, cod_cidade, cod_salario) 
values 
('João da Silva', '12345678901', '1975-03-10', 'joao@email.com', '555-123-4567', 1 , 1),
('Maria Santos', '23456789012', '1980-08-15', 'maria@email.com', '555-987-6543', 2, 2),
('Pedro Oliveira', '34567890123', '1978-05-20', 'pedro@email.com', '555-222-3333', 3, 3),
('Sofia Costa', '45678901234', '1982-11-30', 'sofia@email.com', '555-777-8888', 4, 4),
('Carlos Silva', '56789012345', '1973-02-05', 'carlos@email.com', '555-999-1111', 5, 5); 

insert into faculdade.aluno(nro_matricula, nome, dt_nasc, nro_cpf, tel, email, possui_bolsa, cod_cidade) 
values 
('2121', 'Ana Andrade', '2000/02/19', null, null, 'ana@email.com', 1, 1),
('2122', 'Carlos Silva', '2001/05/15', null, '9876543210', 'carlos@email.com', 0, 2),
('2123', 'Mariana Spot', '1999/11/07', '98765432109', '555-123-4567', 'mariana@email.com', 1, 3),
('2124', 'Pedro Oliveira', '2002/08/25', '23456789012', '111-222-3333', 'pedro@email.com', 0, 4), 
('2125', 'Sofia Costa', '2003/03/10', '34567890123', '777-888-9999', 'sofia@email.com', 1, 5);

insert into faculdade.curso(nome, valor_curso) 
values 
('Computação', 8000.00),
('Administração', 7500.00),
('Eng Elétrica', 8500.00),
('Medicina', 15000.00),
('Psicologia', 7000.00);

insert into faculdade.materia(nome, id_prof, id_curso) 
values 
('Introdução à Programação', 2, 1),
('Matemática Básica', 1, 2),
('Gestão de Projetos', 3, 3),
('Biologia Celular', 5, 4),
('Antropologia', 5, 5);

insert into faculdade.mensalidade(valor_pago, valor_boleto, dt_pago, id_aluno) 
values 
(500.00, 500.00, '2023-10-10', 1),
(1.200, 1.200, '2023-10-10', 2),
(1.000, 1.300, '2023-10-08', 3),
(1400.00, 1500.00, '2023-10-05', 4),
(1600.00, 1500.00, '2023-10-05', 5);

insert into faculdade.grau_academ(instituicao, tecnico, graduado, especialista, mestre, doutor, id_prof) 
values 
('Faculdade A', 1, 1, 1, 0, 0, 1),
('Instituto B', 0, 1, 1, 1, 0, 2),
('Faculdade C', 1, 1, 1, 0, 0, 3),
('Faculdade D', 0, 1, 1, 1, 0, 4),
('Instituto E', 0, 1, 1, 1, 1, 5);

insert into faculdade.avaliacoes(peso_prova, peso_trab, nota_prova, nota_trab, dt, id_aluno) 
values 
(50, 50, 8.5, 9.2, '2023-10-01', 1),
(50, 50, 7.8, 8.8, '2023-10-02', 2),
(50, 50, 9.2, 7.6, '2023-10-03', 3),
(50, 50, 8.9, 9.4, '2023-10-04', 4),
(50, 50, 7.5, 8.5, '2023-10-05', 5);

insert into faculdade.curso_prof(id_prof, id_curso) 
values 
(3, 5),
(2, 3),
(5, 4),
(1, 2),
(4, 1);

insert into faculdade.hist_frequencia(qtde_falta, dt_falta, id_aluno) 
values 
(3, '2023-10-15', 1),
(2, '2023-10-16', 1),
(1, '2023-10-17', 3),
(4, '2023-10-18', 2),
(2, '2023-10-19', 5);


select * from faculdade.professor;
