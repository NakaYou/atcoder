// +build ignore

package main

import "fmt"

func main() {
	var r, D, x int
	fmt.Scan(&r)
	fmt.Scan(&D)
	fmt.Scan(&x)
	for i := 0; i < 10; i++ {
		x = r*x - D
		fmt.Println(x)
	}
}
