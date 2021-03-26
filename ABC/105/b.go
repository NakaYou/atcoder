package main

import "fmt"

func main() {
	var N int
	Yes := false
	fmt.Scan(&N)
	for a := 0; a <= N/4; a++ {
		for b := 0; b <= N/7; b++ {
			if 4*a+7*b == N {
				Yes = true
			}
		}
	}
	if Yes {
		fmt.Println("Yes")
	}else{
		fmt.Println("No")
	}
}
