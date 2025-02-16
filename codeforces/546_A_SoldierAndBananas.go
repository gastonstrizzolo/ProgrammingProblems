package main

import(
	"fmt"
)

func main(){
	var k, w, n, total int
	fmt.Scanf("%d %d %d", &k, &n, &w)
	kdollars, total := 0, 0
	i := 1
	for i <= w {
		kdollars = kdollars + k * i
		i = i + 1
	}
	if (kdollars > n){
		total = kdollars - n
	}
	fmt.Println(total)
}