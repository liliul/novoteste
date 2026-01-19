def salvar_txt():
    with open("nomes.txt", "w", encoding="utf-8") as arquivo:
        for nome in db:
            arquivo.write(nome + "\n")

def carregar_txt():
    try:
        with open("nomes.txt", "r", encoding="utf-8") as arquivo:
            for linha in arquivo:
                db.append(linha.strip())
    except FileNotFoundError:
        pass 
