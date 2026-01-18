def listando_numeros_primos(inicio, fim):
    primos = []
    for num in range(inicio, fim +  1):
        if num < 2:
            continue
        se_primos = True
        for i in range(2, num):
            if num % i == 0:
                se_primos = False
                break
        if se_primos:
            primos.append(num)
    return primos

result = listando_numeros_primos(50, 100)
print(result)