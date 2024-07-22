package main

import "fmt"

func main() {
    // Criando um slice vazio de inteiros
    var slice1 []int
    fmt.Println("Slice vazio:", slice1)

    // Criando um slice com make
    slice2 := make([]string, 3) // Slice de strings com comprimento 3
    fmt.Println("Slice com make:", slice2)

    // Criando um slice com valores iniciais
    slice3 := []float64{3.14, 6.28, 9.42}
    fmt.Println("Slice com valores iniciais:", slice3)
}

// package main
//
// import "fmt"
//
// func main() {
//     // Criando um slice inicial vazio
//     slice := []int{}
//
//     // Adicionando elementos ao slice
//     slice = append(slice, 1)
//     slice = append(slice, 2, 3, 4)
//
//     fmt.Println("Slice após adicionar elementos:", slice)
// }

// package main
//
// import "fmt"
//
// func main() {
//     slice := []string{"apple", "banana", "cherry"}
//
//     // Acessando elementos pelo índice
//     fmt.Println("Primeiro elemento:", slice[0])
//     fmt.Println("Segundo elemento:", slice[1])
//     fmt.Println("Terceiro elemento:", slice[2])
//
//     // Iterando sobre os elementos do slice
//     for index, value := range slice {
//         fmt.Printf("Índice: %d, Valor: %s\n", index, value)
//     }
// }

// // package main
// //
// // import "fmt"
// //
// // func main() {
// //     slice := []int{1, 2, 3, 4, 5}
// //
// //     // Removendo o elemento de índice 2 (valor 3)
// //     slice = append(slice[:2], slice[3:]...)
// //
// //     fmt.Println("Slice após remover o elemento de índice 2:", slice)
// // }

// package main
//
// import "fmt"
//
// func main() {
//     slice := []int{1, 2, 3, 4, 5}
//
//     fmt.Println("Comprimento do slice:", len(slice))
//     fmt.Println("Capacidade do slice:", cap(slice))
// }
