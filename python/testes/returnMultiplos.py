def SomandoPoderes(poder1, poder2, poder3):
    somandoPoderes = poder1 + poder2 + poder3
    print(f'A soma dos poderes são: {somandoPoderes}')
    return somandoPoderes, poder1, poder2, poder3

fogo = 100
gelo = 110
agua = 130

totalPoderes, p1, p2, p3 = SomandoPoderes(fogo, agua, gelo)

print('------ Poderes Doggs --------')
print(f'Poderes para da sua escolha: ')
print(f'1.FOGO = {p1}')
print(f'2.GELO = {p2}')
print(f'3.AGUA = {p3}')
print(f'Somando todos os poderes que escolheu: ')
print(f'somatotal = {totalPoderes}')
