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
