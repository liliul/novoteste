# novoteste
giti

### Inicando com C com curso cs50.
1. install library cs50
```bash
1. git clone https://github.com/cs50/libcs50.git

2. cd libcs50

3. sudo make install

4. gcc hello.c -o hellocs50 -lcs50

5. ./hellocs50
```
<hr>

### Criando apps com a linguagem C.
```bash
1. cd apps

2. mkdir compiler # na pasta compiler fica o binario do app

3. gcc nomeDoApp.c -o ./compiler/nomeDoApp # sem a extenção .c

4. ./compiler/nomeDoApp # para rodar o app
```
A pasta headersH fica os arquivos .h dos apps criados

<hr>

### Compilar programa em c++ 
```bash
1. c++ nomeDoProgrma.cpp -o ./compiler/soNomeDoPrograma
```
<hr>

### Compilar biblioteca ncurses.h
```bash
1. gcc your_program.c -lncurses -o your_program
```
