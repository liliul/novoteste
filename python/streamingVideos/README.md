### python
```zsh
# .zshrc asdf python
export PIPENV_VENV_IN_PROJECT=1

# gerenciar versões do python no projeto 
asdf local python 3.12.6

# para instalar o pipenv
pip install pipenv

# instalar o django com o pipenv
pipenv install django

# iniciar o projeto
pipenv shell

# criar o projeto
django-admin startproject videos|nomeDaPasta

# rodar o projeto
python manage.py runserver

# sqlite3
python manage.py migrate

# criar usuario super
pyhton manage.py createsuperuser
1- usuario: admin@user.com
2- email: admin@user.com
3- senha: secret

# criar 
django-admin startapp core

# criar a primeira migrate
python manage.py makemigrations # e depois python manage.py migrate
```

### docker
```zsh
# levantar containers
docker compose up
```

### iniciando o projeto
```zsh
pipenv shell

python manage.py runserver
```

### outros
github: https://github.com/devfullcycle/imersao19/