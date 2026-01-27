import argparse

parser = argparse.ArgumentParser(
    description="Exemplo de app Python com argumentos no terminal"
)

parser.add_argument(
    "--nome",
    type=str,
    help="Seu nome"
)

parser.add_argument(
    "--idade",
    type=int,
    help="Sua idade"
)

parser.add_argument(
    "--list",
    type=str,
    help="listando nomes crud"
)

args = parser.parse_args()

print(f"Nome: {args.nome}")
print(f"Idade: {args.idade}")
print(f"Listando: {args.list}")
