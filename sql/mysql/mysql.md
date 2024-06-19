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

```

Criando database

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
```
Comandos do sql
```bash
show databases;

use nomeDaDatabase;

show tables;

select * from nomeDaTabela;

DROP DATABASE nomeDaDatabase;
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
