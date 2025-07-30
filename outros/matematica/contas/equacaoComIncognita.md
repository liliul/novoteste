Vamos resolver a questão **etapa por etapa**, de forma organizada e simples.

---

## 📌 **Informações do problema**

| Descrição             | Monofásico | Trifásico |
| --------------------- | ---------- | --------- |
| Taxa fixa mensal      | R\$ 27,00  | R\$ 90,00 |
| kWh inclusos no plano | 60 kWh     | 90 kWh    |
| Custo por kWh extra   | R\$ 1,20   | R\$ 0,75  |

---

A família **usa o sistema monofásico** e **gastou R\$ 87,00 no mês**.

Queremos descobrir **qual o máximo de kWh que ela pode consumir** a mais, **antes que fique mais barato usar o trifásico**.

---

## ✅ **1. Expressar o custo total em função do consumo**

Vamos chamar o consumo total de energia da família de **x (em kWh)**.

No **sistema monofásico**, ela paga:

* R\$ 27,00 fixos
* Mais R\$ 1,20 por cada kWh acima de 60

Ou seja:

$$
\text{Custo monofásico} = 27 + 1{,}20 \cdot (x - 60)
$$

No **sistema trifásico**, ela pagaria:

* R\$ 90,00 fixos
* Mais R\$ 0,75 por kWh acima de 90

$$
\text{Custo trifásico} = 90 + 0{,}75 \cdot (x - 90)
$$

---

## ✅ **2. Igualar os dois custos**

Queremos saber **a partir de que ponto os dois sistemas custam o mesmo**:

$$
27 + 1{,}20(x - 60) = 90 + 0{,}75(x - 90)
$$

Vamos resolver essa equação:

### Passo 1 – Expandir os dois lados:

$$
27 + 1{,}20x - 72 = 90 + 0{,}75x - 67{,}5
$$

$$
(1{,}20x - 45) = (0{,}75x + 22{,}5)
$$

### Passo 2 – Passar os termos x para um lado e os números para o outro:

$$
1{,}20x - 0{,}75x = 22{,}5 + 45
$$

$$
0{,}45x = 67{,}5
$$

$$
x = \frac{67{,}5}{0{,}45} = 150
$$

---

## ✅ **3. Conclusão: o ponto de equilíbrio é em 150 kWh**

Ou seja:

* Se a família consumir **até 150 kWh**, ainda é mais barato o sistema **monofásico**
* Acima de 150 kWh, o sistema **trifásico** passa a ser mais vantajoso

---

## ✅ **4. Qual é o aumento máximo no consumo?**

Sabemos que ela **já consome**:

* Valor total gasto: R\$ 87
* Taxa fixa do monofásico: R\$ 27
* Gasto extra: 87 - 27 = R\$ 60
* Cada kWh extra custa R\$ 1,20 → consumo extra: 60 ÷ 1,20 = 50 kWh
* Consumo total: 60 kWh do plano + 50 = **110 kWh**

Se o limite é **150 kWh**, então o aumento máximo que ela pode ter é:

$$
150 - 110 = \boxed{40\ \text{kWh}}
$$

---

### 🟩 **Resposta final: 40 kWh** ✅
