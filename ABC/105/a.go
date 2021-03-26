package main

import "fmt"

func main() {
	var N, K int
	fmt.Scan(&N)
	fmt.Scan(&K)
	if K==1{
		fmt.Println(0)
	}else if N%K==0{
		fmt.Println(0)
	}else{
		fmt.Println(1)
	}
}
