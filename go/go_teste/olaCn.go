package main

import "fmt"

func main() { // T1
	canal := make(chan string)

	go func() { // TR2
		canal <- "Olá canal!" // T2
	}()

	fmt.Println(<-canal) // TR1
}
