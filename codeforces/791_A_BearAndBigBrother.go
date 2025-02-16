package main

import "fmt"

func main() {
	var limak, bob int
	years := 0
	fmt.Scanf("%d %d", &limak, &bob)

	for {
		years = years + 1
		limak = limak * 3
		bob = bob * 2
		if limak > bob {
			break
		}
	}

	fmt.Println(years)
}