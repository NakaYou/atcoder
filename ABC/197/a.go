// +build ignore

package main

import "fmt"

func main() {
	var S, S2 string
	fmt.Scan(&S)
	S2 = S[1:] + S[:1]
	fmt.Println(S2)
}
