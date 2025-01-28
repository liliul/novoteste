criar uma nova conta de usuário chamada frank com uma configuração padrão,
executaríamos o seguinte:
### useradd frank


Após criar o novo usuário, definimos uma senha usando passwd:
### passwd frank


Lembre-se de que sempre podemos usar o utilitário grep para filtrar os bancos de
dados de senhas e grupos, exibindo apenas a entrada referente a um usuário ou
grupo específico. Para o exemplo acima, usaríamos
TIP
cat /etc/passwd | grep frank
ou
grep frank /etc/passwd
para ver informações básicas sobre a conta frank recém-criada.
As opções mais importantes que se aplicam ao comando useradd são:
-c
Cria uma nova conta de usuário com comentários personalizados (por exemplo, nome
completo)
-d
Cria uma nova conta de usuário com um diretório inicial personalizado.
-e
Cria uma nova conta de usuário com uma data específica na qual ela será desativada.
-f
Cria uma nova conta de usuário definindo o número de dias que o usuário tem para atualizar a
senha após a expiração.
-g
Cria uma nova conta de usuário com um GID específico.
-G
Cria uma nova conta de usuário adicionando-a a diversos grupos secundários.
-m
Cria uma nova conta de usuário com seu diretório inicial.
-M
Cria uma nova conta de usuário sem seu diretório inicial.
-s
Cria uma nova conta de usuário com um shell de login específico.
-u
Cria uma nova conta de usuário com um UID específico.



Depois que a nova conta de usuário é criada, usamos os comandos id e groups para descobrir seu
UID, GID e os grupos aos quais pertence.
### id frank

### groups frank

### userdel
Exclui usuario

### userdel -r frank
A opção -r também remove o diretório inicial do
usuário e todo o seu conteúdo, juntamente com o spool de correio do usuário.



# Adicionando e excluindo grupos


criar um novo grupo chamado developer, executaríamos o seguinte comando como root:
# groupadd -g 1090 developer
A opção -g deste comando cria um grupo com um GID específico.
Se quiser remover o grupo developer, você pode executar este comando:
# groupdel developer



## O comando passwd
Este comando é usado principalmente para alterar a senha de um usuário. Qualquer usuário pode
alterar sua senha, mas apenas o root pode alterar a senha de qualquer usuário.
Dependendo da opção de passwd usada, podemos controlar aspectos específicos do
envelhecimento da senha:
-d
Exclui a senha de uma conta de usuário (definindo assim uma senha vazia, transformando-a
em uma conta sem senha).
-e
Força a conta de usuário a alterar a senha.
-l
Bloqueia a conta de usuário (a senha criptografada é prefixada com um ponto de exclamação).
-u
Desbloqueia a conta de usuário (o ponto de exclamação é removido).
-S
Exibe informações sobre o status da senha de uma conta específica.