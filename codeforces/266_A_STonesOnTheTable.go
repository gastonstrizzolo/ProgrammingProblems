package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	// Leer entrada desde la consola
	reader := bufio.NewReader(os.Stdin)

	// Leer el valor de n (entero)
	nStr, _ := reader.ReadString('\n')
	nStr = strings.TrimSpace(nStr)
	n, _ := strconv.Atoi(nStr)

	// Leer el valor de s (string de tamaño n)
	s, _ := reader.ReadString('\n')
	s = strings.TrimSpace(s)

	var total int = 0
	var current, next string

	i := 0
	for i < n-1 {
		current = string(s[i])
		next = string(s[i+1])
		if current == next{
			total = total + 1
		}
		i = i + 1
	}
	fmt.Println(total)

}