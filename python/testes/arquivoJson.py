import json

db = []

def salvar_json():
    with open("nomes.json", "w", encoding="utf-8") as arquivo:
        json.dump(db, arquivo, ensure_ascii=False, indent=4)

def carregar_json():
    try:
        with open("nomes.json", "r", encoding="utf-8") as arquivo:
            dados = json.load(arquivo)
            db.extend(dados)
    except FileNotFoundError:
        pass

def main():
    salvar_json()
    carregar_json()

main()