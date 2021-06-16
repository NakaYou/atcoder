// +build ignore

package main

import "fmt"

func main() {
	var N, M, L, R, maxL, minR, count int
	minR = 100001
	fmt.Scan(&N)
	fmt.Scan(&M)
	for i := 0; i < M; i++ { // card scan
		fmt.Scan(&L)
		fmt.Scan(&R)
		if L > maxL {
			maxL = L
		}
		if R < minR {
			minR = R
		}
	}
	for i := 1; i <= N; i++ { // maxL~minRの間にあるNの数を出力
		if i < maxL {
			continue
		}
		if i > minR {
			continue
		}
		count++
	}
	fmt.Println(count)
}
