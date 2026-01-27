import json
import argparse
import uuid

sair = 'sair'
db = []

def title_crud():
    print('----- Crud com python -----')
    print('__ menu __')
    print(''' 
        escolha: sair
        escolha: 0 para sair
        escolha: 1 criar nome
        escolha: 2 listar nomes
        escolha: 3 deletar nome
        escolha: 4 atualizar nome
        escolha: 5 listando via json
    ''')

# def gerar_id():
#     if not db:
#         return 1
#     return db[-1]["id"] + 1

def gerar_id():
    id_unico = uuid.uuid4()
    return str(id_unico)

def salvar_json():
    with open("db/nomes.json", "w", encoding="utf-8") as arquivo:
        json.dump(db, arquivo, ensure_ascii=False, indent=4)


def carregar_json():
    try:
        with open("db/nomes.json", "r", encoding="utf-8") as arquivo:
            dados = json.load(arquivo)
            db.clear()
            db.extend(dados)
    except FileNotFoundError:
        pass


def listando_nomes_json():
    carregar_json()


def guardando_nome_db(data):
    db.append(data)


def criando_nomes():
    while True:
        input1 = input("digita nome: ")
        if input1 == sair:
            salvar_json()
            break

        criar_nome = {
            "id": gerar_id(),
            "nome": input1
        }

        guardando_nome_db(criar_nome)
        print('Nome criado com sucesso...')


def listando_nomes():
    if not db:
        print("Nenhum nome cadastrado.")
    else:
        print("Nomes cadastrados:")
        for nome in db:
            print(f"ID: {nome['id']} | Nome: {nome['nome']}")


def deletar_nome(id):
    for item in db:
        if item["id"] == id:
            db.remove(item)
            salvar_json()
            print("Nome removido com sucesso.")
            return
    print("ID não encontrado.")


def atualizando_nome(id, nome_novo):
    for item in db:
        if item["id"] == id:
            item["nome"] = nome_novo
            salvar_json()
            print("Nome atualizado com sucesso.")
            return
    print("ID não encontrado.")

def init_app():
    listando_nomes_json()

def main():
    while True:
        title_crud()     
        try:
            menuEscolha = int(input("Escolha o número: "))
        except ValueError:
            print("Digite apenas números.")
            continue
        
        if menuEscolha == 0:
            break

        match menuEscolha:
            case 1:
                criando_nomes()
            case 2:
                listando_nomes()
            case 3:
                deletar = str(input("Digitar id para deletar: "))
                deletar_nome(deletar)
            case 4:
                id_nome = str(input("ID do nome: "))
                nome_novo = str(input("nome novo: "))

                atualizando_nome(id_nome, nome_novo)
            case 5:
                listando_nomes_json()
            case _:
                print('Escolher um numero nao letra ou outro caratecre')

parser = argparse.ArgumentParser()
parser.add_argument("--list", action="store_true", help="Listar Nomes")
args = parser.parse_args()

if __name__ == "__main__":
    init_app()

    if args.list:
        listando_nomes()
    else:
        main()