package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a)
	fmt.Scan(&b)
	if a <= 5 {
		b = 0
	} else if a <= 12 {
		b /= 2
	}
	fmt.Println(b)
}
