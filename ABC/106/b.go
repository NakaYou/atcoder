// +build ignore

package main

import "fmt"

func main() {
	var N int
	res := 0
	fmt.Scan(&N)
	for i := 1; i <= N; i += 2 {
		cnt := 0
		for j := 1; j <= N; j++ {
			if i%j == 0 {
				cnt++
			}
		}
		if cnt == 8 {
			res++
		}
	}
	fmt.Println(res)
}
