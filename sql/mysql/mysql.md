Configurando o mysql
```bash
create database cadastro
default character set utf8
default collate utf8_general_ci;

# use database cadastro;

create table pessoas (
id int not null auto_increment,
nome varchar(30) not null,
nascimento date,
sexo enum('M', 'F'),
peso decimal(5,2),
altura decimal(3,2),
nacionalidade varchar(20) default 'Brasil',
primary key (id)
) default charset = utf8;

INSERT INTO cadastro.pessoas
(id, nome, nascimento, sexo, peso, altura, nacionalidade)
VALUES(default, 'narutoUzumaki', '1990-06-08', 'M', 50.33, 1.65, 'Japao');

# SELECT * from pessoas;

alter table cadastro.pessoas
add column profissao varchar(10);
ou
add column profissao varchar(10) after nome; # colocar depois do nome
ou
add column profissao varchar(10) int first; # colocar em primeiro
ou
drop column profissao; # para excluir da coluna
ou
modify column profissao varchar(20) not null default ''; # modifica a coluna
ou
change column profissao prof varchar(20) not null default ''; # moda o nome da coluna

# renomear uma Tabela
alter table pessoas rename to clientes;

# add primary key
alter table cursos add primary key(nomeDoIdDaColuna);
```

Criando database e tables
```bash
1. CREATE DATABASE cadastro;

2. CREATE TABLE pessoas (
	nome varchar(30),
    idade tinyint,
    genero char(1),
    peso float,
    altura float,
    nacionalidade varchar(20)
);

# so criar a tabela se ela nao existir
create table if not exists cursos (
nome varchar(30) not null unique,
descricao text,
carga int unsigned,
totaulas int unsigned,
ano year default '2024'
) default charset=utf8;
```

Insert into;
```bash
INSERT INTO cadastro.pessoas
(id, nome, nascimento, sexo, peso, altura, nacionalidade)
VALUES(default, 'Kakashi', '1980-06-08', 'M', 80.33, 1.83, 'Japao'),
(default, 'Sakura haruno', '1990-08-18', 'F', 45.00, 1.66, 'Japao'),
(default, 'Madara Uchiha', '1955-11-05', 'M', 105.53, 1.89, 'Japao'),
(default, 'Kaka', '1986-10-18', 'M', 86.45, 1.85, 'Brasil'),
(default, 'Piccolo', '1975-05-15', 'M', 120.13, 1.93, 'nameykusei'),
(default, 'Itachi Uchiha', '1988-05-05', 'M', 80.33, 1.79, 'Japao'),
(default, 'Bulma', '1989-10-04', 'F', 49.50, 1.68, 'Terra'),
(default, 'Vegeta', '1986-03-11', 'M', 89.10, 1.79, 'Sayajins'),
(default, 'Goku', '1986-04-08', 'M', 90.33, 1.81, 'Terra');


# tabela curso
insert into cursos (idcurso,nome,descricao,carga,totaulas,ano) values
('7', 'elixir','curso de elexir para beckend',200, 90, '2021'),
('8', 'clang','curso de clang para beckend',350, 115, '2022'),
('9', 'c++','curso de c++ para beckend',340, 110, '2022'),
('10', 'reactjs','curso de reactjs para web',110, 51, '2023'),
('11', 'nextjs','curso de nextjs para web',150, 69, '2024'),
('12', 'linux','curso de linux para servidores',450, 201, '2022'),
('13', 'typescript','curso de typescript para web',90, 41, '2023'),
('14', 'Gdscript','curso de godot para games',40, 15, '2020');
```

Comandos do sql
```bash
show databases;

use nomeDaDatabase;

show tables;

select * from nomeDaTabela;

DROP DATABASE nomeDaDatabase;

describe nomeDaTabela;

drop table if exists nomeDaTabela; # so excluir se a Tabela existir

show create table amigos; # para ver sql

status # para ver informações que banco esta sendo usado
```

Pesquisando no banco de dados mysql
```bash
select * from pessoas;

select * from pessoas order by nome; # Pesquisa pela coluna

select nome, altura from pessoas;

select nome, altura from pessoas order by altura desc;
ou
select nome, altura from pessoas order by altura asc;

select * from pessoas where nome = 'narutoUzumaki';

select * from pessoas where peso >= 80;

select * from pessoas where peso <= 80;

select * from pessoas where peso != 80;

select * from pessoas where nacionalidade != 'Brasil';

select * from pessoas where nacionalidade != 'Brasil' or peso > 80;

select ano,nome from cursos where ano between 2020 and 2022; # Pesquisa de 2020 ate 2022

select ano,nome from cursos where ano between 2020 and 2022 order by ano desc, nome asc;

select ano,nome,descricao from cursos where ano in (2018, 2020, 2022, 2025) order by ano;

select ano,nome,totaulas from cursos where carga > 35 and totaulas < 140;

select ano,nome,totaulas from cursos where carga > 35 or totaulas < 140;

select * from cursos where nome like 'c%';

select * from cursos where nome like '%s';

select * from cursos where nome like '%a%';

select * from cursos where nome not like '%a%';

select * from cursos where nome like '%sc%t%';

select * from cursos where nome like 'ja%_t'; # começa com ja e terminal com a letra t

select distinct nacionalidade from pessoas order by nacionalidade; # nao repete o pais

select count(*) from pessoas;

select count(*) from cursos where carga > 80;

select max(carga) from cursos;

select max(totaulas) from cursos where ano = '2022';

select min(totaulas) from cursos where ano = '2022';

select sum(totaulas) from cursos where ano = '2022';

select avg(totaulas) from cursos where ano = '2022';

select totaulas, count(*) from cursos group by totaulas order by totaulas;

select carga, count(nome) from cursos where totaulas = 110 group by carga;

select ano, count(*) from cursos group by ano having count(ano) >= 3 order by count(*) desc;

select carga, count(*) from cursos where ano > 2020 group by carga having carga > (select avg(carga) from cursos);


```

Comandos update;
```bash
update cursos set nome='nodeJS' where idcurso='3'; # atualizando um item

update cursos set nome='nodeJS', descricao='curso de nodejs para backend com javascript.' where idcurso='3'; # atualizando dois item

update cursos set nome='nodeJS', descricao='curso de nodejs para backend com javascript.' where idcurso='3' limit 1; # update limitado a 1

```

Comandos delete;
```bash
delete from cursos where idcurso='6';

delete from cursos where ano='2023' limit 3; # excluir 3 vezes o ano 2023

truncate table cursos; # excluir todos os dados da tabela cursos
```

Como fazer dump do mysql no phpmyadmin
1. clica no icone principal ou icone da casa
2. exportar
3. personalizada
4. escolhe o banco de dados
5. clica em exportar

Como importar arquivo sql no phpmyadmin
1. clica em importar
2. escolhe o arquivo sql
3. clica em importar
