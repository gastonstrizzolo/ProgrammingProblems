package main

import (
	"fmt"
	"strings"
)

func main(){
	s, answer := "", "" 
	fmt.Scanf("%s", &s)
	l := len(s)
	if l >= 1 {
		answer = (strings.ToUpper(string(s[0]))) + s[1:(l)]
	} else {
		answer = s
	}
	fmt.Println(answer)
}