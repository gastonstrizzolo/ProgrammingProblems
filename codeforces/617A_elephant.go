package main

import (
	"fmt"
)

func main(){
	var x, cociente, resultado int
	fmt.Scanf("%d", &x)
	i := 5
	for i > 0 {
		cociente = x / i
        resultado = resultado + cociente
        x = x % i
		i = i - 1
	}
	fmt.Println(resultado)
}