Instalando packages

```bash

# pip
sudo apt install python3-pip

# venv
sudo apt install python3-venv

# packages
pip install fastapi uvicorn pydantic

# criar ambiente
python3 -m venv venv

# radando venv
source venv/bin/activate

# radar projeto
uvicorn main:app --reload


```
