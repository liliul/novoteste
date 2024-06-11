package main

import (
	"database/sql"
	"fmt"
)

type Veiculo interface {
	Andar()
}

type Carro struct {
	Modelo string
	Ano    int
}

func (c Carro) Andar() {
	fmt.Println("O carro", c.Modelo, " está andando")
}

func VemAndarComigo(v Veiculo) {
	v.Andar()
}

func main() {
	// sqlite3
	db, err := sql.Open("sqlite3", "teste.db")
	if err != nil {
		panic(err)
	}
	defer db.Close()

	carro1 := Carro{Modelo: "Skyline", Ano: 1992}
	// carro1.Andar()
	// VemAndarComigo(carro1)
	insertCarro(db, carro1)
}

func insertCarro(db *sql.DB, carro Carro) {
	_, err := db.Exec("INSET INTO carro (modelo, ano) VALUES (?, ?)", carro.Modelo, carro.Ano)
	if err != nil {
		panic(err)
	}
}
