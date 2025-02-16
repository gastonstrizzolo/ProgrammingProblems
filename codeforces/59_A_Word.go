package main

import (
	"fmt"
	"strings"
)

func main(){
	var s string
	answer := ""
	upper, lower, i := 0, 0, 0
	
	fmt.Scanf("%s", &s)

	for i < len(s){
		if s[i] >= 'A' && s[i] <= 'Z'{
            upper = upper + 1
        } else{
            lower = lower + 1
        }
		i = i + 1
	}
	i = 0;
	if lower < upper {
        answer = strings.ToUpper(s)
    } else {
        answer = strings.ToLower(s)
    }
	fmt.Println(answer);
}