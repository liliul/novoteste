package main

import (
	"fmt"
	"time"
)

func contador(qtd int) {
	for i := range qtd {
		fmt.Println(i)
		time.Sleep(time.Second)
	}
}

func main() {
	go contador(10)
	contador(5)
	contador(2)

}
