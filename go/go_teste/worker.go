package main

import (
	"fmt"
	"time"
)

func worker(workerID int, data chan int) {
	for x := range data {
		fmt.Printf("Worker %d recebeu %d\n", workerID, x)
		time.Sleep(time.Second)
	}
}

func main() {
	canal := make(chan int)
	qtdWorkers := 10000

	for i := range qtdWorkers {
		go worker(i, canal)
	}

	for i := range 10000 {
		canal <- i
	}
}
