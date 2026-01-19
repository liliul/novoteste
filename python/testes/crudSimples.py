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
    ''')

def guardando_nome_db(data):
    db.append(data)

def criando_nomes():
    while True:
        input1 = input("digita nome: ")
        if input1 == sair:
            break

        guardando_nome_db(input1)

def listando_nomes():
    if not db:
        print("Nenhum nome cadastrado.")
    else:
        print("Nomes cadastrados:")
        for nome in db:
            print("-", nome)

def deletar_nome(nome):
    nomesDb = db

    if nome in nomesDb:
        nomesDb.remove(nome)
        print('Nome removido com sucesso.')
    else:
        print('Nome para deletar nao encontrado.')
    return nomesDb

def atualizando_nome(nome_antigo, nome_novo):
    nomesDb = db 

    if nome_antigo in nomesDb:
        indice = nomesDb.index(nome_antigo)
        nomesDb[indice] = nome_novo
        print("Nome atualizado com sucesso.")
    else:
        print("Nome para atualizar não encontrado.")

    return nomesDb

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
                deletar = str(input("Digitar nome para deletar: "))
                deletar_nome(deletar)
            case 4:
                nome_antigo = str(input("Nome antigos: "))
                nome_novo = str(input("nome novo: "))

                atualizando_nome(nome_antigo, nome_novo)
            case _:
                print('Escolher um numero nao letra ou outro caratecre')

main()