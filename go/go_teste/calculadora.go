package main

import "fmt"

func main() {
    var num1, num2 float64
    var operator string

    fmt.Println("Calculadora em Go")
    fmt.Println("-----------------")

    // Solicitação para inserir o primeiro número
    fmt.Print("Digite o primeiro número: ")
    fmt.Scanln(&num1)

    // Solicitação para inserir o operador (+, -, *, /)
    fmt.Print("Digite o operador (+, -, *, /): ")
    fmt.Scanln(&operator)

    // Solicitação para inserir o segundo número
    fmt.Print("Digite o segundo número: ")
    fmt.Scanln(&num2)

    var resultado float64

    // Realiza a operação com base no operador fornecido
    switch operator {
    case "+":
        resultado = num1 + num2
    case "-":
        resultado = num1 - num2
    case "*":
        resultado = num1 * num2
    case "/":
        if num2 != 0 {
            resultado = num1 / num2
        } else {
            fmt.Println("Erro: divisão por zero")
            return
        }
    default:
        fmt.Println("Operador inválido")
        return
    }

    // Exibe o resultado da operação
    fmt.Printf("%.2f %s %.2f = %.2f\n", num1, operator, num2, resultado)
}
