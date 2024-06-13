package main

import (
	"fmt"
	// "strconv"
)

func main() {
	var num1, num2 float64
	var operator string

	fmt.Println("Welcome to the Simple Calculator!")

	fmt.Print("Enter the first number: ")
	fmt.Scanln(&num1)

	fmt.Print("Enter the operator (+, -, *, /): ")
	fmt.Scanln(&operator)

	fmt.Print("Enter the second number: ")
	fmt.Scanln(&num2)

	var result float64

	switch operator {
	case "+":
		result = num1 + num2
	case "-":
		result = num1 - num2
	case "*":
		result = num1 * num2
	case "/":
		if num2 == 0 {
			fmt.Println("Error: Division by zero.")
			return
		}
		result = num1 / num2
	default:
		fmt.Println("Invalid operator.")
		return
	}

	fmt.Printf("%.2f %s %.2f = %.2f\n", num1, operator, num2, result)
}
